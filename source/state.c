/*
    This file is part of blargSnes.

    blargSnes is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    blargSnes is distributed in the hope that it will be useful, but WITHOUT ANY 
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along 
    with blargSnes. If not, see http://www.gnu.org/licenses/.
*/

#include <stdlib.h>
#include <3ds/types.h>
#include <3ds/svc.h>
#include "state.h"
#include "cpu.h"
#include "snes.h"
#include "mem.h"

typedef struct {
	CPU_Regs_t * pCPU_Regs;
	u8 * pSNES_SysRAM;
	SNES_StatusData * pSNES_StatusData;
	u8 * pSNES_AutoJoypad;
	u8 * pSNES_JoyBit;
	u32 * pSNES_JoyBuffer;
	u8 * pSNES_Joy16;
	u16 *pSNES_VMatch;
    u16 *pSNES_HMatch;
	u16 *pSNES_HCheck;
	u8 **pSPC_IOPorts;
	//extern u32* Mem_PtrTable; // no idea yet

	// where is the PC? in pCPU_regs?



	// ROM stuff not needed hopefully
	/*
	extern u32 ROM_BaseOffset;
	extern u8* ROM_Buffer;
	extern u32 ROM_HeaderOffset;
	extern u8* ROM_Bank0;
	extern u8* ROM_Bank0End;
	extern u8 ROM_Region;
	extern bool SNES_HiROM;
	extern bool SNES_FastROM;
	*/
} state_t;

void initialize_state();
void write_state(char * filename);
void load_state(char * filename);

// later -- rewind, which would require an array of state_ts


