/*----------------------------------------------------------------------------*/
/*  utf.h                                                                     */
/*----------------------------------------------------------------------------*/
/*  copyright         : (C) 2002 by Dao Hai Lam                               */
/*                      VISC Software & Security Consultant Company           */
/*                      Hall 3, Quang Trung Software City                     */
/*                      Tan Chanh Hiep Ward, District 12,                     */
/*                      Ho Chi Minh city, VIETNAM                             */
/*  website           : http://www.visc-network.com                           */
/*  email             : lam@visc-network.com                                  */
/*  last modify       : Thu, 18 Apr 2002 22:00:33 +0700                       */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   This program is free software; you can redistribute it and/or modify     */
/*   it under the terms of the GNU General Public License as published by     */
/*   the Free Software Foundation; either version 2 of the License, or        */
/*   (at your option) any later version.                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#ifndef __VK_UTF_H
#define __VK_UTF_H

#define	utf_A		0x0041
#define	utf_A1		0x00C1
#define	utf_A2		0x00C0
#define	utf_A3		0x1EA2
#define	utf_A4		0x00C3
#define	utf_A5		0x1EA0
#define	utf_a		0x0061
#define	utf_a1		0x00E1
#define	utf_a2		0x00E0
#define	utf_a3		0x1EA3
#define	utf_a4		0x00E3
#define	utf_a5		0x1EA1
#define	utf_A6		0x00C2
#define	utf_A61		0x1EA4
#define	utf_A62		0x1EA6
#define	utf_A63		0x1EA8
#define	utf_A64		0x1EAA
#define	utf_A65		0x1EAC
#define	utf_a6		0x00E2
#define	utf_a61		0x1EA5
#define	utf_a62		0x1EA7
#define	utf_a63		0x1EA9
#define	utf_a64		0x1EAB
#define	utf_a65		0x1EAD
#define	utf_A8		0x0102
#define	utf_A81		0x1EAE
#define	utf_A82		0x1EB0
#define	utf_A83		0x1EB2
#define	utf_A84		0x1EB4
#define	utf_A85		0x1EB6
#define	utf_a8		0x0103
#define	utf_a81		0x1EAF
#define	utf_a82		0x1EB1
#define	utf_a83		0x1EB3
#define	utf_a84		0x1EB5
#define	utf_a85		0x1EB7
#define	utf_E		0x0045
#define	utf_E1		0x00C9
#define	utf_E2		0x00C8
#define	utf_E3		0x1EBA
#define	utf_E4		0x1EBC
#define	utf_E5		0x1EB8
#define	utf_e		0x0065
#define	utf_e1		0x00E9
#define	utf_e2		0x00E8
#define	utf_e3		0x1EBB
#define	utf_e4		0x1EBD
#define	utf_e5		0x1EB9
#define	utf_E6		0x00CA
#define	utf_E61		0x1EBE
#define	utf_E62		0x1EC0
#define	utf_E63		0x1EC2
#define	utf_E64		0x1EC4
#define	utf_E65		0x1EC6
#define	utf_e6		0x00EA
#define	utf_e61		0x1EBF
#define	utf_e62		0x1EC1
#define	utf_e63		0x1EC3
#define	utf_e64		0x1EC5
#define	utf_e65		0x1EC7
#define	utf_O		0x004F
#define	utf_O1		0x00D3
#define	utf_O2		0x00D2
#define	utf_O3		0x1ECE
#define	utf_O4		0x00D5
#define	utf_O5		0x1ECC
#define	utf_o		0x006F
#define	utf_o1		0x00F3
#define	utf_o2		0x00F2
#define	utf_o3		0x1ECF
#define	utf_o4		0x00F5
#define	utf_o5		0x1ECD
#define	utf_O6		0x00D4
#define	utf_O61		0x1ED0
#define	utf_O62		0x1ED2
#define	utf_O63		0x1ED4
#define	utf_O64		0x1ED6
#define	utf_O65		0x1ED8
#define	utf_o6		0x00F4
#define	utf_o61		0x1ED1
#define	utf_o62		0x1ED3
#define	utf_o63		0x1ED5
#define	utf_o64		0x1ED7
#define	utf_o65		0x1ED9
#define	utf_O7		0x01A0
#define	utf_O71		0x1EDA
#define	utf_O72		0x1EDC
#define	utf_O73		0x1EDE
#define	utf_O74		0x1EE0
#define	utf_O75		0x1EE2
#define	utf_o7		0x01A1
#define	utf_o71		0x1EDB
#define	utf_o72		0x1EDD
#define	utf_o73		0x1EDF
#define	utf_o74		0x1EE1
#define	utf_o75		0x1EE3
#define	utf_U		0x0055
#define	utf_U1		0x00DA
#define	utf_U2		0x00D9
#define	utf_U3		0x1EE6
#define	utf_U4		0x0168
#define	utf_U5		0x1EE4
#define	utf_u		0x0075
#define	utf_u1		0x00FA
#define	utf_u2		0x00F9
#define	utf_u3		0x1EE7
#define	utf_u4		0x0169
#define	utf_u5		0x1EE5
#define	utf_U7		0x01AF
#define	utf_U71		0x1EE8
#define	utf_U72		0x1EEA
#define	utf_U73		0x1EEC
#define	utf_U74		0x1EEE
#define	utf_U75		0x1EF0
#define	utf_u7		0x01B0
#define	utf_u71		0x1EE9
#define	utf_u72		0x1EEB
#define	utf_u73		0x1EED
#define	utf_u74		0x1EEF
#define	utf_u75		0x1EF1
#define	utf_Y		0x0059
#define	utf_Y1		0x00DD
#define	utf_Y2		0x1EF2
#define	utf_Y3		0x1EF6
#define	utf_Y4		0x1EF8
#define	utf_Y5		0x1EF4
#define	utf_y		0x0079
#define	utf_y1		0x00FD
#define	utf_y2		0x1EF3
#define	utf_y3		0x1EF7
#define	utf_y4		0x1EF9
#define	utf_y5		0x1EF5
#define	utf_I		0x0049
#define	utf_I1		0x00CD
#define	utf_I2		0x00CC
#define	utf_I3		0x1EC8
#define	utf_I4		0x0128
#define	utf_I5		0x1ECA
#define	utf_i		0x0069
#define	utf_i1		0x00ED
#define	utf_i2		0x00EC
#define	utf_i3		0x1EC9
#define	utf_i4		0x0129
#define	utf_i5		0x1ECB
#define	utf_D		0x0044
#define	utf_D9		0x0110
#define	utf_d		0x0064
#define	utf_d9		0x0111
#define	utf_vnd		0x20AB
/*----------------------------------------------------------------------------*/
#define	utf_W		0x0057
#define	utf_w		0x0077
#define	utf_S		0x0053
#define	utf_s		0x0073
#define	utf_F		0x0046
#define	utf_f		0x0066
#define	utf_R		0x0052
#define	utf_r		0x0072
#define	utf_X		0x0058
#define	utf_x		0x0078
#define	utf_J		0x004A
#define	utf_j		0x006A
/*----------------------------------------------------------------------------*/
typedef struct {
	ushort c;
	ushort r1;
	ushort r2;
} vietcode_t;
/*----------------------------------------------------------------------------*/
typedef struct {
	long level;
	ushort modifier;
	vietcode_t *code;
} modifier_t;
/*----------------------------------------------------------------------------*/
#include "telex-standard.h"
/*----------------------------------------------------------------------------*/
vietcode_t code_z[] =
{
	{ utf_A1,	utf_A },				//	A' => A
	{ utf_A2,	utf_A },				//	A` => A
	{ utf_A3,	utf_A },				//	A? => A
	{ utf_A4,	utf_A },				//	A~ => A
	{ utf_A5,	utf_A },				//	A. => A
    
	{ utf_A61,	utf_A6 },				//	A^' => A^
	{ utf_A62,	utf_A6 },				//	A^` => A^
	{ utf_A63,	utf_A6 },				//	A^? => A^
	{ utf_A64,	utf_A6 },				//	A^~ => A^
	{ utf_A65,	utf_A6 },				//	A^. => A^
    
	{ utf_A81,	utf_A8 },				//	A(' => A(
	{ utf_A82,	utf_A8 },				//	A(` => A(
	{ utf_A83,	utf_A8 },				//	A(? => A(
	{ utf_A84,	utf_A8 },				//	A(~ => A(
	{ utf_A85,	utf_A8 },				//	A(. => A(
    
	{ utf_E1,	utf_E },				//	E' => E
	{ utf_E2,	utf_E },				//	E` => E
	{ utf_E3,	utf_E },				//	E? => E
	{ utf_E4,	utf_E },				//	E~ => E
	{ utf_E5,	utf_E },				//	E. => E
    
	{ utf_E61,	utf_E6 },				//	E^' => E^
	{ utf_E62,	utf_E6 },				//	E^` => E^
	{ utf_E63,	utf_E6 },				//	E^? => E^
	{ utf_E64,	utf_E6 },				//	E^~ => E^
	{ utf_E65,	utf_E6 },				//	E^. => E^
    
	{ utf_O1,	utf_O },				//	O' => O
	{ utf_O2,	utf_O },				//	O` => O
	{ utf_O3,	utf_O },				//	O? => O
	{ utf_O4,	utf_O },				//	O~ => O
	{ utf_O5,	utf_O },				//	O. => O
    
	{ utf_O61,	utf_O6 },				//	O^' => O^
	{ utf_O62,	utf_O6 },				//	O^` => O^
	{ utf_O63,	utf_O6 },				//	O^? => O^
	{ utf_O64,	utf_O6 },				//	O^~ => O^
	{ utf_O65,	utf_O6 },				//	O^. => O^
    
	{ utf_O71,	utf_O7 },				//	O+' => O+
	{ utf_O72,	utf_O7 },				//	O+` => O+
	{ utf_O73,	utf_O7 },				//	O+? => O+
	{ utf_O74,	utf_O7 },				//	O+~ => O+
	{ utf_O75,	utf_O7 },				//	O+. => O+
    
	{ utf_U1,	utf_U },				//	U' => U
	{ utf_U2,	utf_U },				//	U` => U
	{ utf_U3,	utf_U },				//	U? => U
	{ utf_U4,	utf_U },				//	U~ => U
	{ utf_U5,	utf_U },				//	U. => U
    
	{ utf_U71,	utf_U7 },				//	U+' => U+
	{ utf_U72,	utf_U7 },				//	U+` => U+
	{ utf_U73,	utf_U7 },				//	U+? => U+
	{ utf_U74,	utf_U7 },				//	U+~ => U+
	{ utf_U75,	utf_U7 },				//	U+. => U+
    
	{ utf_I1,	utf_I },				//	I' => I
	{ utf_I2,	utf_I },				//	I` => I
	{ utf_I3,	utf_I },				//	I? => I
	{ utf_I4,	utf_I },				//	I~ => I
	{ utf_I5,	utf_I },				//	I. => I
    
	{ utf_Y1,	utf_Y },				//	Y' => Y
	{ utf_Y2,	utf_Y },				//	Y` => Y
	{ utf_Y3,	utf_Y },				//	Y? => Y
	{ utf_Y4,	utf_Y },				//	Y~ => Y
	{ utf_Y5,	utf_Y },				//	Y. => Y
    
	{ utf_a1,	utf_a },				//	A' => A
	{ utf_a2,	utf_a },				//	A` => A
	{ utf_a3,	utf_a },				//	A? => A
	{ utf_a4,	utf_a },				//	A~ => A
	{ utf_a5,	utf_a },				//	A. => A
    
	{ utf_a61,	utf_a6 },				//	A^' => A^
	{ utf_a62,	utf_a6 },				//	A^` => A^
	{ utf_a63,	utf_a6 },				//	A^? => A^
	{ utf_a64,	utf_a6 },				//	A^~ => A^
	{ utf_a65,	utf_a6 },				//	A^. => A^
    
	{ utf_a81,	utf_a8 },				//	A(' => A(
	{ utf_a82,	utf_a8 },				//	A(` => A(
	{ utf_a83,	utf_a8 },				//	A(? => A(
	{ utf_a84,	utf_a8 },				//	A(~ => A(
	{ utf_a85,	utf_a8 },				//	A(. => A(
    
	{ utf_e1,	utf_e },				//	E' => E
	{ utf_e2,	utf_e },				//	E` => E
	{ utf_e3,	utf_e },				//	E? => E
	{ utf_e4,	utf_e },				//	E~ => E
	{ utf_e5,	utf_e },				//	E. => E
    
	{ utf_e61,	utf_e6 },				//	E^' => E^
	{ utf_e62,	utf_e6 },				//	E^` => E^
	{ utf_e63,	utf_e6 },				//	E^? => E^
	{ utf_e64,	utf_e6 },				//	E^~ => E^
	{ utf_e65,	utf_e6 },				//	E^. => E^
    
	{ utf_o1,	utf_o },				//	O' => O
	{ utf_o2,	utf_o },				//	O` => O
	{ utf_o3,	utf_o },				//	O? => O
	{ utf_o4,	utf_o },				//	O~ => O
	{ utf_o5,	utf_o },				//	O. => O
    
	{ utf_o61,	utf_o6 },				//	O^' => O^
	{ utf_o62,	utf_o6 },				//	O^` => O^
	{ utf_o63,	utf_o6 },				//	O^? => O^
	{ utf_o64,	utf_o6 },				//	O^~ => O^
	{ utf_o65,	utf_o6 },				//	O^. => O^
    
	{ utf_o71,	utf_o7 },				//	O+' => O+
	{ utf_o72,	utf_o7 },				//	O+` => O+
	{ utf_o73,	utf_o7 },				//	O+? => O+
	{ utf_o74,	utf_o7 },				//	O+~ => O+
	{ utf_o75,	utf_o7 },				//	O+. => O+
    
	{ utf_u1,	utf_u },				//	U' => U
	{ utf_u2,	utf_u },				//	U` => U
	{ utf_u3,	utf_u },				//	U? => U
	{ utf_u4,	utf_u },				//	U~ => U
	{ utf_u5,	utf_u },				//	U. => U
    
	{ utf_u71,	utf_u7 },				//	U+' => U+
	{ utf_u72,	utf_u7 },				//	U+` => U+
	{ utf_u73,	utf_u7 },				//	U+? => U+
	{ utf_u74,	utf_u7 },				//	U+~ => U+
	{ utf_u75,	utf_u7 },				//	U+. => U+
    
	{ utf_i1,	utf_i },				//	I' => I
	{ utf_i2,	utf_i },				//	I` => I
	{ utf_i3,	utf_i },				//	I? => I
	{ utf_i4,	utf_i },				//	I~ => I
	{ utf_i5,	utf_i },				//	I. => I
    
	{ utf_y1,	utf_y },				//	Y' => Y
	{ utf_y2,	utf_y },				//	Y` => Y
	{ utf_y3,	utf_y },				//	Y? => Y
	{ utf_y4,	utf_y },				//	Y~ => Y
	{ utf_y5,	utf_y },				//	Y. => Y
	{ 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_sign[] =
{
	{ utf_d9,	utf_vnd },				// dd => VND sign
	{ utf_vnd,	utf_d9 },				// VND sign => dd
	{ 0 }
};
/*----------------------------------------------------------------------------*/
modifier_t telex[] =
{
#ifdef VK_USE_EXTSTROKE
#ifdef VK_USE_PROSTROKE
	{0, '[', (vietcode_t *)utf_u7},
	{0, ']', (vietcode_t *)utf_o7},
	{0, '{', (vietcode_t *)utf_U7},
	{0, '}', (vietcode_t *)utf_O7},
	{0, 'w', (vietcode_t *)utf_u7},
	{0, 'W', (vietcode_t *)utf_U7},
#else
	{0, ']', (vietcode_t *)utf_u7},
	{0, '[', (vietcode_t *)utf_o7},
	{0, '}', (vietcode_t *)utf_U7},
	{0, '{', (vietcode_t *)utf_O7},
	{0, 'w', (vietcode_t *)utf_u7},
	{0, 'W', (vietcode_t *)utf_U7},
#endif
#endif
	{1, 'A', code_A},
	{1, 'a', code_a},
	{1, 'E', code_E},
	{1, 'e', code_e},
	{1, 'O', code_O},
	{1, 'o', code_o},
	{1, 'W', code_W},
	{1, 'w', code_w},
	{1, 'D', code_D},
	{1, 'd', code_d},
	{1, '_', code_sign},
	{2, 'S', code_S},
	{2, 's', code_s},
	{2, 'F', code_F},
	{2, 'f', code_f},
	{2, 'R', code_R},
	{2, 'r', code_r},
	{2, 'X', code_X},
	{2, 'x', code_x},
	{2, 'J', code_J},
	{2, 'j', code_j},
	{2, 'Z', code_z},
	{2, 'z', code_z},
	{0, 0, 0}
};
/*----------------------------------------------------------------------------*/
#include "vni-standard.h"
/*----------------------------------------------------------------------------*/
vietcode_t code_87[] =
{
    
    { utf_O,	utf_O7 },				//	O => O+
    { utf_O1,	utf_O71 },				//	O' => O+'
    { utf_O2,	utf_O72 },				//	O` => O+`
    { utf_O3,	utf_O73 },				//	O? => O+?
    { utf_O4,	utf_O74 },				//	O~ => O+~
    { utf_O5,	utf_O75 },				//	O. => O+.
    { utf_O6,	utf_O7 },				//	O^ => O+
    { utf_O61,	utf_O71 },				//	O^' => O+'
    { utf_O62,	utf_O72 },				//	O^` => O+`
    { utf_O63,	utf_O73 },				//	O^? => O+?
    { utf_O64,	utf_O74 },				//	O^~ => O+~
    { utf_O65,	utf_O75 },				//	O^. => O+.
    { utf_O7,	utf_O, '8' },			//	O+ => O7
    { utf_O71,	utf_O1, '8' },			//	O+' => O'7
    { utf_O72,	utf_O2, '8' },			//	O+` => O`7
    { utf_O73,	utf_O3, '8' },			//	O+? => O?7
    { utf_O74,	utf_O4, '8' },			//	O+~ => O~7
    { utf_O75,	utf_O5, '8' },			//	O+. => O.7
    
    { utf_o,	utf_o7 },				//	o => o+
    { utf_o1,	utf_o71 },				//	o' => o+'
    { utf_o2,	utf_o72 },				//	o` => o+`
    { utf_o3,	utf_o73 },				//	o? => o+?
    { utf_o4,	utf_o74 },				//	o~ => o+~
    { utf_o5,	utf_o75 },				//	o. => o+.
    { utf_o6,	utf_o7 },				//	o^ => o+
    { utf_o61,	utf_o71 },				//	o^' => o+'
    { utf_o62,	utf_o72 },				//	o^` => o+`
    { utf_o63,	utf_o73 },				//	o^? => o+?
    { utf_o64,	utf_o74 },				//	o^~ => o+~
    { utf_o65,	utf_o75 },				//	o^. => o+.
    { utf_o7,	utf_o, '8' },			//	o+ => o7
    { utf_o71,	utf_o1, '8' },			//	o+' => o'7
    { utf_o72,	utf_o2, '8' },			//	o+` => o`7
    { utf_o73,	utf_o3, '8' },			//	o+? => o?7
    { utf_o74,	utf_o4, '8' },			//	o+~ => o~7
    { utf_o75,	utf_o5, '8' },			//	o+. => o.7
    
    { utf_U,	utf_U7 },				//	U => U+
    { utf_U1,	utf_U71 },				//	U' => U+'
    { utf_U2,	utf_U72 },				//	U` => U+`
    { utf_U3,	utf_U73 },				//	U? => U+?
    { utf_U4,	utf_U74 },				//	U~ => U+~
    { utf_U5,	utf_U75 },				//	U. => U+.
    { utf_U7,	utf_U, '8' },			//	U+ => U7
    { utf_U71,	utf_U1, '8' },			//	U+' => U'7
    { utf_U72,	utf_U2, '8' },			//	U+` => U`7
    { utf_U73,	utf_U3, '8' },			//	U+? => U?7
    { utf_U74,	utf_U4, '8' },			//	U+~ => U~7
    { utf_U75,	utf_U5, '8' },			//	U+. => U.7
    
    { utf_u,	utf_u7 },				//	u => u+
    { utf_u1,	utf_u71 },				//	u' => u+'
    { utf_u2,	utf_u72 },				//	u` => u+`
    { utf_u3,	utf_u73 },				//	u? => u+?
    { utf_u4,	utf_u74 },				//	u~ => u+~
    { utf_u5,	utf_u75 },				//	u. => u+.
    { utf_u7,	utf_u, '8' },			//	u+ => u7
    { utf_u71,	utf_u1, '8' },			//	u+' => u'7
    { utf_u72,	utf_u2, '8' },			//	u+` => u`7
    { utf_u73,	utf_u3, '8' },			//	u+? => u?7
    { utf_u74,	utf_u4, '8' },			//	u+~ => u~7
    { utf_u75,	utf_u5, '8' },			//	u+. => u.7
    
    
    { utf_A,	utf_A8 },				//	A => A(
    { utf_A1,	utf_A81 },				//	A' => A('
    { utf_A2,	utf_A82 },				//	A` => A(`
    { utf_A3,	utf_A83 },				//	A? => A(?
    { utf_A4,	utf_A84 },				//	A~ => A(~
    { utf_A5,	utf_A85 },				//	A. => A(.
    { utf_A6,	utf_A8 },				//	A^ => A(
    { utf_A61,	utf_A81 },				//	A^' => A('
    { utf_A62,	utf_A82 },				//	A^` => A(`
    { utf_A63,	utf_A83 },				//	A^? => A(?
    { utf_A64,	utf_A84 },				//	A^~ => A(~
    { utf_A65,	utf_A85 },				//	A^. => A(.
    { utf_A8,	utf_A, '8' },			//	A( => A8
    { utf_A81,	utf_A1, '8' },			//	A(' => A'8
    { utf_A82,	utf_A2, '8' },			//	A(` => A`8
    { utf_A83,	utf_A3, '8' },			//	A(? => A?8
    { utf_A84,	utf_A4, '8' },			//	A(~ => A~8
    { utf_A85,	utf_A5, '8' },			//	A(. => A.8
    
    { utf_a,	utf_a8 },				//	a => a(
    { utf_a1,	utf_a81 },				//	a' => a('
    { utf_a2,	utf_a82 },				//	a` => a(`
    { utf_a3,	utf_a83 },				//	a? => a(?
    { utf_a4,	utf_a84 },				//	a~ => a(~
    { utf_a5,	utf_a85 },				//	a. => a(.
    { utf_a6,	utf_a8 },				//	a^ => a(
    { utf_a61,	utf_a81 },				//	a^' => a('
    { utf_a62,	utf_a82 },				//	a^` => a(`
    { utf_a63,	utf_a83 },				//	a^? => a(?
    { utf_a64,	utf_a84 },				//	a^~ => a(~
    { utf_a65,	utf_a85 },				//	a^. => a(.
    { utf_a8,	utf_a, '8' },			//	a( => a8
    { utf_a81,	utf_a1, '8' },			//	a(' => a'8
    { utf_a82,	utf_a2, '8' },			//	a(` => a`8
    { utf_a83,	utf_a3, '8' },			//	a(? => a?8
    { utf_a84,	utf_a4, '8' },			//	a(~ => a~8
    { utf_a85,	utf_a5, '8' },			//	a(. => a.8
    
    { 0 }
};

modifier_t vnid[] =
{
    {1, '0', code_6},
    {1, '[', code_7},
    {1, '8', code_8},
    {1, '9', code_9},
    {1, '_', code_sign},
    {2, '1', code_1},
    {2, '2', code_2},
    {2, '3', code_3},
    {2, '4', code_4},
    {2, '5', code_5},
    {2, ']', code_z},
    {0, 0, 0}
};
/*----------------------------------------------------------------------------*/
modifier_t viqr[] =
{
	{1, '^', code_6},
	{1, '+', code_7},
	{1, '*', code_7},
	{1, '(', code_8},
	{1, 'D', code_D},
	{1, 'd', code_d},
	{1, '_', code_sign},
	{2, '\'', code_1},
	{2, '`', code_2},
	{2, '?', code_3},
	{2, '~', code_4},
	{2, '.', code_5},
	{2, '=', code_z},
	{0, 0, 0}
};
/*----------------------------------------------------------------------------*/
modifier_t vni[] =
{
    {1, '6', code_6},
    {1, '7', code_7},
    {1, '8', code_8},
    {1, '9', code_9},
    {1, '_', code_sign},
    {2, '1', code_1},
    {2, '2', code_2},
    {2, '3', code_3},
    {2, '4', code_4},
    {2, '5', code_5},
    {2, '0', code_z},
    {0, 0, 0}
};
/*----------------------------------------------------------------------------*/
modifier_t *modes[] = { vnid, telex, vni, viqr };
/*----------------------------------------------------------------------------*/
ushort UTF16[] = {
	utf_A,  utf_A1,  utf_A2,  utf_A3,  utf_A4,  utf_A5,
	utf_A6, utf_A61, utf_A62, utf_A63, utf_A64, utf_A65,
	utf_A8, utf_A81, utf_A82, utf_A83, utf_A84, utf_A85,
	utf_E,  utf_E1,  utf_E2,  utf_E3,  utf_E4,  utf_E5,
	utf_E6, utf_E61, utf_E62, utf_E63, utf_E64, utf_E65,
	utf_O,  utf_O1,  utf_O2,  utf_O3,  utf_O4,  utf_O5,
	utf_O6, utf_O61, utf_O62, utf_O63, utf_O64, utf_O65,
	utf_O7, utf_O71, utf_O72, utf_O73, utf_O74, utf_O75,
	utf_U,  utf_U1,  utf_U2,  utf_U3,  utf_U4,  utf_U5,
	utf_U7, utf_U71, utf_U72, utf_U73, utf_U74, utf_U75,
	utf_I,  utf_I1,  utf_I2,  utf_I3,  utf_I4,  utf_I5,
	utf_Y,  utf_Y1,  utf_Y2,  utf_Y3,  utf_Y4,  utf_Y5,
	utf_D9,
	utf_a,  utf_a1,  utf_a2,  utf_a3,  utf_a4,  utf_a5,
	utf_a6, utf_a61, utf_a62, utf_a63, utf_a64, utf_a65,
	utf_a8, utf_a81, utf_a82, utf_a83, utf_a84, utf_a85,
	utf_e,  utf_e1,  utf_e2,  utf_e3,  utf_e4,  utf_e5,
	utf_e6, utf_e61, utf_e62, utf_e63, utf_e64, utf_e65,
	utf_o,  utf_o1,  utf_o2,  utf_o3,  utf_o4,  utf_o5,
	utf_o6, utf_o61, utf_o62, utf_o63, utf_o64, utf_o65,
	utf_o7, utf_o71, utf_o72, utf_o73, utf_o74, utf_o75,
	utf_u,  utf_u1,  utf_u2,  utf_u3,  utf_u4,  utf_u5,
	utf_u7, utf_u71, utf_u72, utf_u73, utf_u74, utf_u75,
	utf_i,  utf_i1,  utf_i2,  utf_i3,  utf_i4,  utf_i5,
	utf_y,  utf_y1,  utf_y2,  utf_y3,  utf_y4,  utf_y5,
	utf_d9,
	utf_vnd,
	0
};
/*----------------------------------------------------------------------------*/

char *UTF8[] = {
    "A","Á","À","Ả","Ã","Ạ",
    "Â","Ấ","Ầ","Ẩ","Ẫ","Ậ",
    "Ă","Ắ","Ằ","Ẳ","Ẵ","Ặ",
    "E","É","È","Ẻ","Ẽ","Ẹ",
    "Ê","Ế","Ề","Ể","Ễ","Ệ",
    "O","Ó","Ò","Ỏ","Õ","Ọ",
    "Ô","Ố","Ồ","Ổ","Ỗ","Ộ",
    "Ơ","Ớ","Ờ","Ở","Ỡ","Ợ",
    "U","Ú","Ù","Ủ","Ũ","Ụ",
    "Ư","Ứ","Ừ","Ử","Ữ","Ự",
    "I","Í","Ì","Ỉ","Ĩ","Ị",
    "Y","Ý","Ỳ","Ỷ","Ỹ","Ỵ",
    "Đ",
    "a","á","à","ả","ã","ạ",
    "â","ấ","ầ","ẩ","ẫ","ậ",
    "ă","ắ","ằ","ẳ","ẵ","ặ",
    "e","é","è","ẻ","ẽ","ẹ",
    "ê","ế","ề","ể","ễ","ệ",
    "o","ó","ò","ỏ","õ","ọ",
    "ô","ố","ồ","ổ","ỗ","ộ",
    "ơ","ớ","ờ","ở","ỡ","ợ",
    "u","ú","ù","ủ","ũ","ụ",
    "ư","ứ","ừ","ử","ữ","ự",
    "i","í","ì","ỉ","ĩ","ị",
    "y","ý","ỳ","ỷ","ỹ","ỵ",
    "đ",
    "₫"
};

char modifiedChars[] = "aeiouyd";
char vnidModifierKeys[] =  "123450[89";
char telexModifierKeys[] = "sfrxjaeowd";
char vniModifierKeys[] =  "123456789";

ushort vnidModifiersMap[] = {
    191, 63, 31, 127, 95, 31, 256
};

ushort telexModifiersMap[] = {
    319, 95, 31, 415, 287, 31, 512
};

ushort vniModifiersMap[] = {
    191, 63, 31, 127, 95,  31, 256
};

char* modifierKeys[] = {
    vnidModifierKeys, telexModifierKeys, vniModifierKeys
};

ushort *modifiersMap[] = {
    vnidModifiersMap, telexModifiersMap, vniModifiersMap
};

#endif
