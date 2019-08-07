// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers, The Interama developers
// Copyright (c) 2017-2019, The Interama developers
//
// This file is part of Interama.
//
// Interama is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Interama is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Interama.  If not, see <http://www.gnu.org/licenses/>.

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "../CryptoNoteConfig.h"

#pragma once

namespace CryptoNote
{
	namespace
	{
		boost::uuids::uuid name;
		boost::uuids::name_generator gen(name);
		boost::uuids::uuid u = gen(GENESIS_COINBASE_TX_HEX);
	}
	const static boost::uuids::uuid BYTECOIN_NETWORK = { { 0x10, 0x49, 0x16, 0x37, 0x5f, 0x28, 0x2f, 0x2e, 0x74, 0x33, 0x51, 0x1f, 0x21, 0x17, 0x13, 0x7e } };
}
