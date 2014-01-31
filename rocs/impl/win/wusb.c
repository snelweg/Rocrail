/*
 Rocrail - Model Railroad Software

 Copyright (C) 2002-2014 Rob Versluis, Rocrail.net

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
#include "rocs/impl/usb_impl.h"

#include "rocs/public/mem.h"


void* rocs_usb_openUSB(int vendor, int product, int configNr, int interfaceNr) {
  return NULL;
}

Boolean rocs_usb_closeUSB(void* husb, int interfaceNr) {
  return False;
}

int rocs_usb_writeUSB(void* husb, byte* out, int len, int timeout) {
  return 0;
}

int rocs_usb_readUSB(void* husb, byte* in, int len, int timeout) {
  return 0;
}
