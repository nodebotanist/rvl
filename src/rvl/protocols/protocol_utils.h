/*
Copyright (c) Bryan Hughes <bryan@nebri.us>

This file is part of Raver Lights Messaging.

Raver Lights Messaging is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Raver Lights Messaging is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Raver Lights Messaging.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef RVL_PROTOCOLS_PROTOCOL_UTILS_H_
#define RVL_PROTOCOLS_PROTOCOL_UTILS_H_

#include <stdint.h>
#include "./rvl/platform.h"
#include "./rvl/config.h"

namespace ProtocolUtils {

uint8_t getMulticastAddress();
bool isPacketForMe(uint8_t source, uint8_t destination);

}  // namespace ProtocolUtils

#endif  // RVL_PROTOCOLS_PROTOCOL_UTILS_H_