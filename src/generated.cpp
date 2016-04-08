/**
 * Copyright (c) 2011-2015 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin-explorer.
 *
 * libbitcoin-explorer is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <bitcoin/explorer/generated.hpp>

#include <functional>
#include <memory>
#include <string>
#include <vector>
#include <bitcoin/explorer/command.hpp>

/********* GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY **********/

using namespace po;
using namespace std;
using namespace boost::filesystem;
    
namespace libbitcoin {
namespace explorer {
using namespace commands;

void broadcast(const function<void(shared_ptr<command>)> func)
{
    func(make_shared<fetch_height>());
    func(make_shared<fetch_history>());
}

shared_ptr<command> find(const string& symbol)
{
    if (symbol == fetch_height::symbol())
        return make_shared<fetch_height>();
    if (symbol == fetch_history::symbol())
        return make_shared<fetch_history>();

    return nullptr;
}

std::string formerly(const string& former)
{
    if (former == fetch_height::formerly())
        return fetch_height::symbol();

    return "";
}

} // namespace explorer
} // namespace libbitcoin
