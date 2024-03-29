// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2016-2017, The Karbo developers
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

#pragma once

#include "BlockchainExplorerData.h"
#include "BlockchainExplorerData2.h"

#include "Serialization/ISerializer.h"

namespace CryptoNote {

void serialize(transaction_output_details& output, ISerializer& serializer);
void serialize(TransactionOutputReferenceDetails& outputReference, ISerializer& serializer);

void serialize(BaseInputDetails& inputBase, ISerializer& serializer);
void serialize(KeyInputDetails& inputToKey, ISerializer& serializer);
void serialize(MultisignatureInputDetails& inputMultisig, ISerializer& serializer);
void serialize(transaction_input_details& input, ISerializer& serializer);

void serialize(TransactionExtraDetails& extra, ISerializer& serializer);
void serialize(TransactionExtraDetails2& extra, ISerializer& serializer);
//void serialize(TransactionDetails& transaction, ISerializer& serializer);
void serialize(TransactionDetails2& transaction, ISerializer& serializer);

//void serialize(BlockDetails& block, ISerializer& serializer);
void serialize(BlockDetails2& block, ISerializer& serializer);

} //namespace CryptoNote
