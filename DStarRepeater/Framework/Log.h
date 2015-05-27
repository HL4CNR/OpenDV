/*
 *   Copyright (C) 2015 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(LOG_H)
#define	LOG_H

#include <string>

#define	LogDebug(fmt, ...)	Log(1U, fmt, ##__VA_ARGS__)
#define	LogMessage(fmt, ...)	Log(2U, fmt, ##__VA_ARGS__)
#define	LogInfo(fmt, ...)	Log(3U, fmt, ##__VA_ARGS__)
#define	LogWarning(fmt, ...)	Log(4U, fmt, ##__VA_ARGS__)
#define	LogError(fmt, ...)	Log(5U, fmt, ##__VA_ARGS__)
#define	LogFatal(fmt, ...)	Log(6U, fmt, ##__VA_ARGS__)

extern void Log(unsigned int level, const char* fmt, ...);

extern bool LogInitialise(const std::string& path, const std::string& root);
extern void LogFinalise();

extern void LogSetLevel(unsigned int level);

#endif