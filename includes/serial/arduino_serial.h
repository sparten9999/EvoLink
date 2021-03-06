/*
 * arduino_serial.h -- Arduino Serial for EvoLink, part of the
 * cross-platform EVO-All interface library.
 * Copyright (C) 2014 Pat Deegan. All Rights Reserved.
 *
 * http://flyingcarsandstuff.com/projects/EvoLink
 *
 * Please let me know if you use EvoLink in your projects, and
 * provide a URL if you'd like me to link to it from the EvoLink
 * home.
 *
 * Released under the GPL v3, dual licensing available.
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * ************************* OVERVIEW *************************
 *
 * SerialSetup type implementation to use on Arduino.
 *
 */

#ifndef EVOLINK_ARDUINO_SERIAL_H_
#define EVOLINK_ARDUINO_SERIAL_H_

#include "../dependencies.h"

#ifdef PLATFORM_ARDUINO

namespace EvoLink {

class SerialSetup {
public:
	SerialSetup(HardwareSerial * serial_conn, uint32_t baud=BAUDRATE_DEFAULT, bool call_begin=true, uint8_t config_byte=SERIAL_8N1) :
		baud_rate(baud), usart(serial_conn), config(config_byte), do_begin(call_begin),
		debug_usart(NULL)
	{

	}

	uint32_t			baud_rate;
	HardwareSerial * 	usart;
	uint8_t				config;
	bool 				do_begin;
	HardwareSerial * 	debug_usart;

};


} /* namespace EvoLink */

#endif /* PLATFORM_ARDUINO */

#endif /* EVOLINK_ARDUINO_SERIAL_H_ */
