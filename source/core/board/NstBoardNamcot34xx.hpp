////////////////////////////////////////////////////////////////////////////////////////
//
// Nestopia - NES/Famicom emulator written in C++
//
// Copyright (C) 2003-2008 Martin Freij
//
// This file is part of Nestopia.
//
// Nestopia is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// Nestopia is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Nestopia; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
////////////////////////////////////////////////////////////////////////////////////////

#ifndef NST_BOARD_NAMCOT_N34XX_H
#define NST_BOARD_NAMCOT_N34XX_H

#ifdef NST_PRAGMA_ONCE
#pragma once
#endif

namespace Nes
{
	namespace Core
	{
		namespace Boards
		{
			namespace Namcot
			{
				class N34x3 : public Board
				{
				public:

					explicit N34x3(const Context& c)
					: Board(c) {}

				protected:

					void SubReset(bool);

					virtual void NST_FASTCALL UpdateChr(uint,uint) const;

					NES_DECL_POKE( 8000 );

				private:

					void SubSave(State::Saver&) const;
					void SubLoad(State::Loader&,dword);

					NES_DECL_POKE( 8001 );

					uint ctrl;
				};

				class N3446 : public N34x3
				{
				public:

					explicit N3446(const Context& c)
					: N34x3(c) {}

				private:

					void NST_FASTCALL UpdateChr(uint,uint) const;
				};

				class N3425 : public N34x3
				{
				public:

					explicit N3425(const Context& c)
					: N34x3(c) {}

				private:

					void NST_FASTCALL UpdateChr(uint,uint) const;
				};

				class N34xx : public N34x3
				{
				public:

					explicit N34xx(const Context& c)
					: N34x3(c) {}

				private:

					void SubReset(bool);

					NES_DECL_POKE( 8000 );
				};
			}
		}
	}
}

#endif
