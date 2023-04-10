/*             Tabboz Simulator NG            */
/*                                            */
/* Copyright 2022-2023 Walter Agazzi          */
/* Original Copyright 1997-2000 Andrea Bonomi */

/*
    This file is part of Tabboz Simulator NG.

    Tabboz Simulator NG is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Tabboz Simulator NG is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Tabboz Simulator NG.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TABBOZ_DEBUG_H
#define TABBOZ_DEBUG_H

extern  FILE  *debugfile;         // file di log
extern  char  log_buf[];          // buffer per messaggi log

void   openlog(void);             // Apre file di log
void   closelog(void);            // Chiude file di log
void   writelog(char const *s);   // Aggiunge stringa a file di log

#endif