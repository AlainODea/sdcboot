/*
  FreeDOS special UNDELETE tool (and mirror, kind of)
  Copyright (C) 2001, 2002  Eric Auer <eric@CoLi.Uni-SB.DE>

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
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, 
  USA. Or check http://www.gnu.org/licenses/gpl.txt on the internet.
*/


#ifndef DIRFIND_H
#define DIRFIND_H

#include "dostypes.h"		/* Byte Word Dword */
#include "drives.h"		/* struct DPB */

/* looks in the dir at cluster (0 for root) for the dir */
/* named name and returns a new value for cluster... */

int dirfind1 (char *name, Word * cluster, struct DPB *dpb);

/* finds a dir, walks along the tree */

int dirfind (char *name, Word * cluster, struct DPB *dpb);

#endif
