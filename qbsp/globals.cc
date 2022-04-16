/*
    Copyright (C) 1996-1997  Id Software, Inc.
    Copyright (C) 1997       Greg Lewis

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

    See file, 'COPYING', for details.
*/
// globals.c

#include <qbsp/qbsp.hh>
#include <qbsp/map.hh>

/* ------------------------------------------------------------------------ */

mapdata_t map;

// Useful shortcuts
mapentity_t *mapdata_t::world_entity()
{
    return &entities.at(0);
}

void mapdata_t::reset() {
    *this = mapdata_t {};
}
