// ----------------------------------------------------------------------------
// log_csv_control.h
//
// Copyright (C) 2015  Robert Stiles, KK5VD
//
// This file is a part of Frame Messenger.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ----------------------------------------------------------------------------


#ifndef __log_csv_control__
#define __log_csv_control__

extern void open_csv_log_configure(void);
extern void close_csv_log_configure(void);
extern void write_csv_output_to_file(void);
extern void write_csv_output_tx_panel(void);

#endif /* defined(__log_csv_control__) */
