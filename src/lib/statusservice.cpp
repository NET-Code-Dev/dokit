/*
    Copyright 2022 Paul Colby

    This file is part of QtPokit.

    QtPokit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtPokit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtPokit.  If not, see <http://www.gnu.org/licenses/>.
*/

/*!
 * \file
 * Defines the StatusService and StatusServicePrivate classes.
 */

#include <qtpokit/statusservice.h>
#include <qtpokit/uuids.h>

#include "statusservice_p.h"
#include "logging_p.h"

#include <QDebug>
#include <QLowEnergyService>

/// UUID of the "Pokit Status" service.
const QBluetoothUuid StatusService::
    serviceUuid(QLatin1String("57d3a771-267c-4394-8872-78223e92aec5"));

/// UUID of the "Pokit Status" service's "Device Characteristics" charactersic.
const QBluetoothUuid StatusService::CharacteristicUuids::
    deviceCharacteristics(QLatin1String("6974f5e5-0e54-45c3-97dd-29e4b5fb0849"));

/// UUID of the "Pokit Status" service's "Status" charactersic.
const QBluetoothUuid StatusService::CharacteristicUuids::
    status(QLatin1String("3dba36e1-6120-4706-8dfd-ed9c16e569b6"));

/// UUID of the "Pokit Status" service's "Device Name" charactersic.
const QBluetoothUuid StatusService::CharacteristicUuids::
    name(QLatin1String("7f0375de-077e-4555-8f78-800494509cc3"));

/// UUID of the "Pokit Status" service's "Flash LED" charactersic.
const QBluetoothUuid StatusService::CharacteristicUuids::
    flashLed(QLatin1String("ec9bb1f3-05a9-4277-8dd0-60a7896f0d6e"));

/*!
 * \class StatusService
 *
 * Virtual base class for Pokit services.
 */

/*!
 * Constructs a new Pokit service with \a parent.
 */
StatusService::StatusService(QLowEnergyController * const controller, QObject * parent)
    : AbstractPokitService(new StatusServicePrivate(controller, this), parent)
{

}

/*!
 * \cond internal
 * Constructs a new Pokit service with \a parent, and private implementation \a d.
 */
StatusService::StatusService(
    StatusServicePrivate * const d, QObject * const parent)
    : AbstractPokitService(d, parent)
{

}
/// \endcond

/*!
 * Destroys this StatusService object.
 */
StatusService::~StatusService()
{
    delete d_ptr;
}

bool StatusService::readCharacteristics()
{
    const bool r1 = readDeviceCharacteristics();
    const bool r2 = readStatusCharacteristic();
    const bool r3 = readNameCharacteristic();
    return (r1 && r2 && r3);
}

bool StatusService::readDeviceCharacteristics()
{
    Q_D(StatusService);
    return d->readCharacteristic(CharacteristicUuids::deviceCharacteristics);
}

bool StatusService::readStatusCharacteristic()
{
    Q_D(StatusService);
    return d->readCharacteristic(CharacteristicUuids::status);
}

bool StatusService::readNameCharacteristic()
{
    Q_D(StatusService);
    return d->readCharacteristic(CharacteristicUuids::flashLed);
}

/*!
 * \cond internal
 * \class StatusServicePrivate
 *
 * The StatusServicePrivate provides the private implementation for StatusService.
 */

/*!
 * \internal
 * Constructs a new StatusServicePrivate object with public implementation \a q.
 */
StatusServicePrivate::StatusServicePrivate(
    QLowEnergyController * controller, StatusService * const q)
    : AbstractPokitServicePrivate(controller, q)
{

}

/// \endcond
