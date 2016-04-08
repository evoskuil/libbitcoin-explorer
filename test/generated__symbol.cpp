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
#include <boost/test/unit_test.hpp>

#include <bitcoin/explorer.hpp>

/********* GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY **********/

using namespace bc::explorer;
using namespace bc::explorer::commands;

BOOST_AUTO_TEST_SUITE(generated)
BOOST_AUTO_TEST_SUITE(generated__symbol)

BOOST_AUTO_TEST_CASE(generated__symbol__fetch_height__returns_expected_value)
{
    BOOST_REQUIRE_EQUAL(fetch_height::symbol(), "fetch-height");
}

BOOST_AUTO_TEST_CASE(generated__symbol__fetch_history__returns_expected_value)
{
    BOOST_REQUIRE_EQUAL(fetch_history::symbol(), "fetch-history");
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE_END()
