/*
 * Copyright (c) 2018-2020 UChain core developers (check UC-AUTHORS) - UChain.
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if
 * not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */
#ifndef UC_ASH_DEFS_HPP
#define UC_ASH_DEFS_HPP

/**
 * @addtogroup Util
 * @{
 */

/**
 * Macro for exporting classes and functions that compose the public API.
 */
#ifdef _WIN32
#define UC_API
#else
#define UC_API __attribute__((visibility("default")))
#endif

#define LOG_HTTP "http"

/** @} */

#endif // UC_ASH_DEFS_HPP
