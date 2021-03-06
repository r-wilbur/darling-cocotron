/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _CGEVENT_H_
#define _CGEVENT_H_

#include <CoreGraphics/CGEventTypes.h>
#import <CoreGraphics/CGGeometry.h>
#import <CoreGraphics/CGError.h>

typedef uint32_t CGButtonCount;

extern void CGEventPost(CGEventTapLocation tapLocation, CGEventRef event);
CGError CGPostMouseEvent(CGPoint mouseCursorPosition, boolean_t updateMouseCursorPosition, CGButtonCount buttonCount, boolean_t mouseButtonDown, ...);

#endif
