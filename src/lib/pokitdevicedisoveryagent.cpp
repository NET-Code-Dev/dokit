/*
    Copyright 2022 Paul Colby

    This file is part of Poqit.

    Poqit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Poqit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Poqit.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pokitdevicedisoveryagent.h"

#include <QBluetoothUuid>
#include <QDebug>

PokitDeviceDiscoveryAgent::PokitDeviceDiscoveryAgent(
    const QBluetoothAddress &deviceAdapter, QObject *parent)
    : QBluetoothDeviceDiscoveryAgent(deviceAdapter, parent)
{
    connect(this, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered,
            this, &PokitDeviceDiscoveryAgent::onDeviceDiscovered);

    connect(this, &QBluetoothDeviceDiscoveryAgent::deviceUpdated,
            this, &PokitDeviceDiscoveryAgent::onDeviceUpdated);
}

PokitDeviceDiscoveryAgent::PokitDeviceDiscoveryAgent(QObject * parent)
    : QBluetoothDeviceDiscoveryAgent(parent)
{
    connect(this, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered,
            this, &PokitDeviceDiscoveryAgent::onDeviceDiscovered);

    connect(this, &QBluetoothDeviceDiscoveryAgent::deviceUpdated,
            this, &PokitDeviceDiscoveryAgent::onDeviceUpdated);
}

bool PokitDeviceDiscoveryAgent::isPokitDevice(const QBluetoothDeviceInfo &info)
{
    /// \todo Lift this UUID to a set of constants somewhere else.
    return info.serviceUuids().contains(QBluetoothUuid(QStringLiteral("57d3a771-267c-4394-8872-78223e92aec5")));
}

void PokitDeviceDiscoveryAgent::start(QBluetoothDeviceDiscoveryAgent::DiscoveryMethods methods)
{
    Q_ASSERT(methods == QBluetoothDeviceDiscoveryAgent::LowEnergyMethod);
    QBluetoothDeviceDiscoveryAgent::start(QBluetoothDeviceDiscoveryAgent::LowEnergyMethod);
}

void PokitDeviceDiscoveryAgent::start()
{
    QBluetoothDeviceDiscoveryAgent::start(QBluetoothDeviceDiscoveryAgent::LowEnergyMethod);
}

void PokitDeviceDiscoveryAgent::onDeviceDiscovered(const QBluetoothDeviceInfo &info)
{
    if (!isPokitDevice(info)) return;

    qDebug() << "discovered" << info.address() << info.name() << info.rssi()
             << info.majorDeviceClass() << info.serviceClasses()
             << info.serviceUuids() << info.manufacturerData() << info.manufacturerIds();

    emit pokitDeviceDiscovered(info);
}

void PokitDeviceDiscoveryAgent::onDeviceUpdated(const QBluetoothDeviceInfo &info,
                                                QBluetoothDeviceInfo::Fields updatedFields)
{
    if (!isPokitDevice(info)) return;

    qDebug() << "updated" << info.address() << info.name() << info.rssi()
             << info.majorDeviceClass() << info.serviceClasses()
             << info.serviceUuids() << info.manufacturerData() << info.manufacturerIds();

    emit pokitDeviceUpdated(info, updatedFields);
}
