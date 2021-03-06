/*
	Copyright 2016-2017 sub1to

	This file is part of subVersion 2 GTA:O Hack.

    subVersion 2 GTA:O Hack is free software: you can redistribute
	it and/or modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.

    subVersion 2 GTA:O Hack is distributed in the hope that it
	will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
	the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with subVersion 2 GTA:O Hack.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#ifndef STDAFX_H
#define STDAFX_H

#include <iostream>
#include <windows.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <regex>
#include <ctime>
#include <stdlib.h>
#include <map>
#include <unordered_map>

#include <Dwmapi.h>
#pragma comment(lib,"Dwmapi.lib")

#pragma comment(lib,"d3d9/d3dx9.lib")
#pragma comment(lib,"d3d9/d3d9.lib")
#include "d3d9/d3d9.h"
#include "d3d9/d3dx9.h"

#pragma comment(lib, "minhook/lib/libMinHook.x64.md.140_xp.lib")
#include "minhook/include/MinHook.h"

#include "vector.h"
#include "hashes.h"
#include "types.h"
#include "enums.h"

#include "feature.h"
#include "log.h"
#include "resource.h"
#include "reclass.h"
#include "menu.h"
#include "render.h"
#include "hack.h"
#include "script.h"
#include "pattern.h"

#include "natives.h"
#include "crossMap.h"
#include "nativeInvoker.h"
#include "nativeCaller.h"
#include "hooking.h"

struct CColor
{
	BYTE	r,g,b,a;
};

DWORD	strToVk(std::string str);

void	killProcess();
void	killProcess(std::string);

#endif