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
#ifndef BX_GENERATED_HPP
#define BX_GENERATED_HPP

#include <functional>
#include <memory>
#include <string>
#include <bitcoin/explorer/command.hpp>
#include <bitcoin/explorer/commands/fetch-height.hpp>
#include <bitcoin/explorer/commands/fetch-history.hpp>
#include <bitcoin/explorer/define.hpp>

/********* GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY **********/

namespace libbitcoin {
namespace explorer {

/**
 * Various shared localizable strings.
 */
#define BX_COMMANDS_HEADER \
    "Info: The bx commandXs are:"
#define BX_COMMANDS_HOME_PAGE \
    "Bitcoin Explorer home page:"
#define BX_COMMAND_USAGE \
    "Usage: bx COMMAND [--help]"
#define BX_CONFIG_DESCRIPTION \
    "The path to the configuration settings file."
#define BX_CONNECTION_FAILURE \
    "Could not connect to server: %1%"
#define BX_DEPRECATED_COMMAND \
    "The '%1%' commandX has been replaced by '%2%'."
#define BX_HELP_DESCRIPTION \
    "Get a description and instructions for this commandX."
#define BX_INVALID_COMMAND \
    "'%1%' is not a bx commandX. Enter 'bx help' for a list of commandXs."
#define BX_INVALID_PARAMETER \
    "Error: %1%"
#define BX_PRINTER_ARGUMENT_TABLE_HEADER \
    "Arguments (positional):"
#define BX_PRINTER_DESCRIPTION_FORMAT \
    "Info: %1%"
#define BX_PRINTER_OPTION_TABLE_HEADER \
    "Options (named):"
#define BX_PRINTER_USAGE_FORMAT \
    "Usage: %1% %2% %3%"
#define BX_PRINTER_VALUE_TEXT \
    "VALUE"
#define BX_VERSION_MESSAGE \
    "Version: %1% [%2%]"

/**
 * Invoke a specified function on all commands.
 * @param[in]  func  The function to invoke on all commands.
 */
BCX_API void broadcast(
    const std::function<void(std::shared_ptr<command>)> func);

/**
 * Find the command identified by the specified symbolic command name.
 * @param[in]  symbol  The symbolic command name.
 * @return             An instance of the command or nullptr if not found.
 */
BCX_API std::shared_ptr<command> find(const std::string& symbol);

/**
 * Find the new name of the formerly-named command.
 * @param[in]  former  The former symbolic command name.
 * @return             The current name of the formerly-named command.
 */
BCX_API std::string formerly(const std::string& former);

} // namespace explorer
} // namespace libbitcoin

#endif
