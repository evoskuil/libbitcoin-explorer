###############################################################################
#  Copyright (c) 2014-2023 libbitcoin-explorer developers (see COPYING).
#
#         GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY
#
###############################################################################

# Automake settings.
#==============================================================================
# Look for macros in the m4 subdirectory.
#------------------------------------------------------------------------------
ACLOCAL_AMFLAGS = -I m4


# Distribute, make and install products.
#==============================================================================
# files => ${pkgconfigdir}
#------------------------------------------------------------------------------
pkgconfig_DATA = \
    libbitcoin-explorer.pc

# files => ${docdir}
#------------------------------------------------------------------------------
doc_DATA = \
    AUTHORS \
    COPYING \
    ChangeLog \
    INSTALL \
    NEWS \
    README

# src/libbitcoin-explorer.la => ${libdir}
#------------------------------------------------------------------------------
lib_LTLIBRARIES = src/libbitcoin-explorer.la
src_libbitcoin_explorer_la_CPPFLAGS = -I${srcdir}/include -DSYSCONFDIR=\"${sysconfdir}\" ${bitcoin_client_BUILD_CPPFLAGS} ${bitcoin_network_BUILD_CPPFLAGS}
src_libbitcoin_explorer_la_LIBADD = ${bitcoin_client_LIBS} ${bitcoin_network_LIBS} ${dl_LIBS}
src_libbitcoin_explorer_la_SOURCES = \
    src/callback_state.cpp \
    src/dispatch.cpp \
    src/display.cpp \
    src/generated.cpp \
    src/parser.cpp \
    src/prop_tree.cpp \
    src/utility.cpp \
    src/commands/address-decode.cpp \
    src/commands/address-embed.cpp \
    src/commands/address-encode.cpp \
    src/commands/address-to-key.cpp \
    src/commands/base16-decode.cpp \
    src/commands/base16-encode.cpp \
    src/commands/base32-decode.cpp \
    src/commands/base32-encode.cpp \
    src/commands/base58-decode.cpp \
    src/commands/base58-encode.cpp \
    src/commands/base58check-decode.cpp \
    src/commands/base58check-encode.cpp \
    src/commands/base64-decode.cpp \
    src/commands/base64-encode.cpp \
    src/commands/bech32-decode.cpp \
    src/commands/bech32-encode.cpp \
    src/commands/bitcoin160.cpp \
    src/commands/bitcoin256.cpp \
    src/commands/broadcast-tx.cpp \
    src/commands/btc-to-satoshi.cpp \
    src/commands/cert-new.cpp \
    src/commands/cert-public.cpp \
    src/commands/checked-decode.cpp \
    src/commands/checked-encode.cpp \
    src/commands/ec-add-secrets.cpp \
    src/commands/ec-add.cpp \
    src/commands/ec-decompress.cpp \
    src/commands/ec-multiply-secrets.cpp \
    src/commands/ec-multiply.cpp \
    src/commands/ec-new.cpp \
    src/commands/ec-to-address.cpp \
    src/commands/ec-to-ek.cpp \
    src/commands/ec-to-public.cpp \
    src/commands/ec-to-wif.cpp \
    src/commands/ec-to-witness.cpp \
    src/commands/ek-address.cpp \
    src/commands/ek-new.cpp \
    src/commands/ek-public-to-address.cpp \
    src/commands/ek-public-to-ec.cpp \
    src/commands/ek-public.cpp \
    src/commands/ek-to-address.cpp \
    src/commands/ek-to-ec.cpp \
    src/commands/electrum-decode.cpp \
    src/commands/electrum-new.cpp \
    src/commands/electrum-to-seed.cpp \
    src/commands/fetch-balance.cpp \
    src/commands/fetch-block-hashes.cpp \
    src/commands/fetch-block-height.cpp \
    src/commands/fetch-block.cpp \
    src/commands/fetch-filter-checkpoint.cpp \
    src/commands/fetch-filter-headers.cpp \
    src/commands/fetch-filter.cpp \
    src/commands/fetch-header.cpp \
    src/commands/fetch-height.cpp \
    src/commands/fetch-history.cpp \
    src/commands/fetch-public-key.cpp \
    src/commands/fetch-tx-index.cpp \
    src/commands/fetch-tx.cpp \
    src/commands/fetch-utxo.cpp \
    src/commands/get-filter-checkpoint.cpp \
    src/commands/get-filter-headers.cpp \
    src/commands/get-filters.cpp \
    src/commands/hd-new.cpp \
    src/commands/hd-private.cpp \
    src/commands/hd-public.cpp \
    src/commands/hd-to-address.cpp \
    src/commands/hd-to-ec.cpp \
    src/commands/hd-to-public.cpp \
    src/commands/hd-to-wif.cpp \
    src/commands/help.cpp \
    src/commands/input-set.cpp \
    src/commands/input-sign.cpp \
    src/commands/input-validate.cpp \
    src/commands/match-neutrino-address.cpp \
    src/commands/match-neutrino-script.cpp \
    src/commands/message-sign.cpp \
    src/commands/message-validate.cpp \
    src/commands/mnemonic-decode.cpp \
    src/commands/mnemonic-encode.cpp \
    src/commands/mnemonic-to-seed.cpp \
    src/commands/put-tx.cpp \
    src/commands/qrcode.cpp \
    src/commands/ripemd160.cpp \
    src/commands/satoshi-to-btc.cpp \
    src/commands/script-decode.cpp \
    src/commands/script-encode.cpp \
    src/commands/script-to-address.cpp \
    src/commands/script-to-key.cpp \
    src/commands/script-to-witness.cpp \
    src/commands/seed.cpp \
    src/commands/send-tx.cpp \
    src/commands/settings.cpp \
    src/commands/sha160.cpp \
    src/commands/sha256.cpp \
    src/commands/sha512.cpp \
    src/commands/stealth-decode.cpp \
    src/commands/stealth-encode.cpp \
    src/commands/stealth-public.cpp \
    src/commands/stealth-secret.cpp \
    src/commands/stealth-shared.cpp \
    src/commands/subscribe-block.cpp \
    src/commands/subscribe-tx.cpp \
    src/commands/token-new.cpp \
    src/commands/tx-decode.cpp \
    src/commands/tx-encode.cpp \
    src/commands/tx-sign.cpp \
    src/commands/uri-decode.cpp \
    src/commands/uri-encode.cpp \
    src/commands/validate-tx.cpp \
    src/commands/version.cpp \
    src/commands/watch-key.cpp \
    src/commands/watch-tx.cpp \
    src/commands/wif-to-ec.cpp \
    src/commands/wif-to-public.cpp \
    src/commands/witness-to-key.cpp \
    src/commands/wrap-decode.cpp \
    src/commands/wrap-encode.cpp \
    src/config/address.cpp \
    src/config/algorithm.cpp \
    src/config/btc.cpp \
    src/config/byte.cpp \
    src/config/bytes.cpp \
    src/config/electrum.cpp \
    src/config/encoding.cpp \
    src/config/endorsement.cpp \
    src/config/hd_key.cpp \
    src/config/language.cpp \
    src/config/sighash.cpp \
    src/config/signature.cpp \
    src/config/witness.cpp

# console/bx => ${bindir}
#------------------------------------------------------------------------------
if WITH_CONSOLE

bin_PROGRAMS = console/bx
console_bx_CPPFLAGS = -I${srcdir}/include -DSYSCONFDIR=\"${sysconfdir}\" ${bitcoin_client_BUILD_CPPFLAGS} ${bitcoin_network_BUILD_CPPFLAGS}
console_bx_LDADD = src/libbitcoin-explorer.la ${bitcoin_client_LIBS} ${bitcoin_network_LIBS} ${dl_LIBS}
console_bx_SOURCES = \
    console/main.cpp

endif WITH_CONSOLE

# local: test/libbitcoin-explorer-test
#------------------------------------------------------------------------------
if WITH_TESTS

TESTS = libbitcoin-explorer-test_runner.sh

check_PROGRAMS = test/libbitcoin-explorer-test
test_libbitcoin_explorer_test_CPPFLAGS = -I${srcdir}/include -DSYSCONFDIR=\"${sysconfdir}\" ${bitcoin_client_BUILD_CPPFLAGS} ${bitcoin_network_BUILD_CPPFLAGS}
test_libbitcoin_explorer_test_LDADD = src/libbitcoin-explorer.la ${boost_unit_test_framework_LIBS} ${bitcoin_client_LIBS} ${bitcoin_network_LIBS} ${dl_LIBS}
test_libbitcoin_explorer_test_SOURCES = \
    test/generated__broadcast.cpp \
    test/generated__find.cpp \
    test/generated__formerly.cpp \
    test/generated__symbol.cpp \
    test/main.cpp \
    test/commands/address-decode.cpp \
    test/commands/address-embed.cpp \
    test/commands/address-encode.cpp \
    test/commands/address-to-key.cpp \
    test/commands/base16-decode.cpp \
    test/commands/base16-encode.cpp \
    test/commands/base32-decode.cpp \
    test/commands/base32-encode.cpp \
    test/commands/base58-decode.cpp \
    test/commands/base58-encode.cpp \
    test/commands/base58check-decode.cpp \
    test/commands/base58check-encode.cpp \
    test/commands/base64-decode.cpp \
    test/commands/base64-encode.cpp \
    test/commands/bech32-decode.cpp \
    test/commands/bech32-encode.cpp \
    test/commands/bitcoin160.cpp \
    test/commands/bitcoin256.cpp \
    test/commands/broadcast-tx.cpp \
    test/commands/btc-to-satoshi.cpp \
    test/commands/cert-new.cpp \
    test/commands/cert-public.cpp \
    test/commands/checked-decode.cpp \
    test/commands/checked-encode.cpp \
    test/commands/command.hpp \
    test/commands/ec-add-secrets.cpp \
    test/commands/ec-add.cpp \
    test/commands/ec-decompress.cpp \
    test/commands/ec-multiply-secrets.cpp \
    test/commands/ec-multiply.cpp \
    test/commands/ec-new.cpp \
    test/commands/ec-to-address.cpp \
    test/commands/ec-to-ek.cpp \
    test/commands/ec-to-public.cpp \
    test/commands/ec-to-wif.cpp \
    test/commands/ec-to-witness.cpp \
    test/commands/ek-address.cpp \
    test/commands/ek-new.cpp \
    test/commands/ek-public-to-address.cpp \
    test/commands/ek-public-to-ec.cpp \
    test/commands/ek-public.cpp \
    test/commands/ek-to-address.cpp \
    test/commands/ek-to-ec.cpp \
    test/commands/electrum-decode.cpp \
    test/commands/electrum-new.cpp \
    test/commands/electrum-to-seed.cpp \
    test/commands/fetch-balance.cpp \
    test/commands/fetch-block.cpp \
    test/commands/fetch-header.cpp \
    test/commands/fetch-height.cpp \
    test/commands/fetch-history.cpp \
    test/commands/fetch-public-key.cpp \
    test/commands/fetch-tx-index.cpp \
    test/commands/fetch-tx.cpp \
    test/commands/fetch-utxo.cpp \
    test/commands/get-filter-checkpoint.cpp \
    test/commands/get-filter-headers.cpp \
    test/commands/get-filters.cpp \
    test/commands/hd-new.cpp \
    test/commands/hd-private.cpp \
    test/commands/hd-public.cpp \
    test/commands/hd-to-address.cpp \
    test/commands/hd-to-ec.cpp \
    test/commands/hd-to-public.cpp \
    test/commands/hd-to-wif.cpp \
    test/commands/help.cpp \
    test/commands/input-set.cpp \
    test/commands/input-sign.cpp \
    test/commands/input-validate.cpp \
    test/commands/match-neutrino-address.cpp \
    test/commands/match-neutrino-script.cpp \
    test/commands/message-sign.cpp \
    test/commands/message-validate.cpp \
    test/commands/mnemonic-decode.cpp \
    test/commands/mnemonic-encode.cpp \
    test/commands/mnemonic-to-seed.cpp \
    test/commands/put-tx.cpp \
    test/commands/qrcode.cpp \
    test/commands/ripemd160.cpp \
    test/commands/satoshi-to-btc.cpp \
    test/commands/script-decode.cpp \
    test/commands/script-encode.cpp \
    test/commands/script-to-address.cpp \
    test/commands/script-to-key.cpp \
    test/commands/script-to-witness.cpp \
    test/commands/seed.cpp \
    test/commands/send-tx.cpp \
    test/commands/settings.cpp \
    test/commands/sha160.cpp \
    test/commands/sha256.cpp \
    test/commands/sha512.cpp \
    test/commands/stealth-decode.cpp \
    test/commands/stealth-encode.cpp \
    test/commands/stealth-public.cpp \
    test/commands/stealth-secret.cpp \
    test/commands/stealth-shared.cpp \
    test/commands/subscribe-block.cpp \
    test/commands/subscribe-tx.cpp \
    test/commands/token-new.cpp \
    test/commands/tx-decode.cpp \
    test/commands/tx-encode.cpp \
    test/commands/tx-sign.cpp \
    test/commands/uri-decode.cpp \
    test/commands/uri-encode.cpp \
    test/commands/validate-tx.cpp \
    test/commands/watch-key.cpp \
    test/commands/watch-tx.cpp \
    test/commands/wif-to-ec.cpp \
    test/commands/wif-to-public.cpp \
    test/commands/witness-to-key.cpp \
    test/commands/wrap-decode.cpp \
    test/commands/wrap-encode.cpp \
    test/config/address.cpp

endif WITH_TESTS

# files => ${includedir}/bitcoin
#------------------------------------------------------------------------------
include_bitcoindir = ${includedir}/bitcoin
include_bitcoin_HEADERS = \
    include/bitcoin/explorer.hpp

include_bitcoin_explorerdir = ${includedir}/bitcoin/explorer
include_bitcoin_explorer_HEADERS = \
    include/bitcoin/explorer/callback_state.hpp \
    include/bitcoin/explorer/command.hpp \
    include/bitcoin/explorer/define.hpp \
    include/bitcoin/explorer/dispatch.hpp \
    include/bitcoin/explorer/display.hpp \
    include/bitcoin/explorer/generated.hpp \
    include/bitcoin/explorer/parser.hpp \
    include/bitcoin/explorer/prop_tree.hpp \
    include/bitcoin/explorer/utility.hpp \
    include/bitcoin/explorer/version.hpp

include_bitcoin_explorer_commandsdir = ${includedir}/bitcoin/explorer/commands
include_bitcoin_explorer_commands_HEADERS = \
    include/bitcoin/explorer/commands/address-decode.hpp \
    include/bitcoin/explorer/commands/address-embed.hpp \
    include/bitcoin/explorer/commands/address-encode.hpp \
    include/bitcoin/explorer/commands/address-to-key.hpp \
    include/bitcoin/explorer/commands/base16-decode.hpp \
    include/bitcoin/explorer/commands/base16-encode.hpp \
    include/bitcoin/explorer/commands/base32-decode.hpp \
    include/bitcoin/explorer/commands/base32-encode.hpp \
    include/bitcoin/explorer/commands/base58-decode.hpp \
    include/bitcoin/explorer/commands/base58-encode.hpp \
    include/bitcoin/explorer/commands/base58check-decode.hpp \
    include/bitcoin/explorer/commands/base58check-encode.hpp \
    include/bitcoin/explorer/commands/base64-decode.hpp \
    include/bitcoin/explorer/commands/base64-encode.hpp \
    include/bitcoin/explorer/commands/bech32-decode.hpp \
    include/bitcoin/explorer/commands/bech32-encode.hpp \
    include/bitcoin/explorer/commands/bitcoin160.hpp \
    include/bitcoin/explorer/commands/bitcoin256.hpp \
    include/bitcoin/explorer/commands/broadcast-tx.hpp \
    include/bitcoin/explorer/commands/btc-to-satoshi.hpp \
    include/bitcoin/explorer/commands/cert-new.hpp \
    include/bitcoin/explorer/commands/cert-public.hpp \
    include/bitcoin/explorer/commands/checked-decode.hpp \
    include/bitcoin/explorer/commands/checked-encode.hpp \
    include/bitcoin/explorer/commands/ec-add-secrets.hpp \
    include/bitcoin/explorer/commands/ec-add.hpp \
    include/bitcoin/explorer/commands/ec-decompress.hpp \
    include/bitcoin/explorer/commands/ec-multiply-secrets.hpp \
    include/bitcoin/explorer/commands/ec-multiply.hpp \
    include/bitcoin/explorer/commands/ec-new.hpp \
    include/bitcoin/explorer/commands/ec-to-address.hpp \
    include/bitcoin/explorer/commands/ec-to-ek.hpp \
    include/bitcoin/explorer/commands/ec-to-public.hpp \
    include/bitcoin/explorer/commands/ec-to-wif.hpp \
    include/bitcoin/explorer/commands/ec-to-witness.hpp \
    include/bitcoin/explorer/commands/ek-address.hpp \
    include/bitcoin/explorer/commands/ek-new.hpp \
    include/bitcoin/explorer/commands/ek-public-to-address.hpp \
    include/bitcoin/explorer/commands/ek-public-to-ec.hpp \
    include/bitcoin/explorer/commands/ek-public.hpp \
    include/bitcoin/explorer/commands/ek-to-address.hpp \
    include/bitcoin/explorer/commands/ek-to-ec.hpp \
    include/bitcoin/explorer/commands/electrum-decode.hpp \
    include/bitcoin/explorer/commands/electrum-new.hpp \
    include/bitcoin/explorer/commands/electrum-to-seed.hpp \
    include/bitcoin/explorer/commands/fetch-balance.hpp \
    include/bitcoin/explorer/commands/fetch-block-hashes.hpp \
    include/bitcoin/explorer/commands/fetch-block-height.hpp \
    include/bitcoin/explorer/commands/fetch-block.hpp \
    include/bitcoin/explorer/commands/fetch-filter-checkpoint.hpp \
    include/bitcoin/explorer/commands/fetch-filter-headers.hpp \
    include/bitcoin/explorer/commands/fetch-filter.hpp \
    include/bitcoin/explorer/commands/fetch-header.hpp \
    include/bitcoin/explorer/commands/fetch-height.hpp \
    include/bitcoin/explorer/commands/fetch-history.hpp \
    include/bitcoin/explorer/commands/fetch-public-key.hpp \
    include/bitcoin/explorer/commands/fetch-tx-index.hpp \
    include/bitcoin/explorer/commands/fetch-tx.hpp \
    include/bitcoin/explorer/commands/fetch-utxo.hpp \
    include/bitcoin/explorer/commands/get-filter-checkpoint.hpp \
    include/bitcoin/explorer/commands/get-filter-headers.hpp \
    include/bitcoin/explorer/commands/get-filters.hpp \
    include/bitcoin/explorer/commands/hd-new.hpp \
    include/bitcoin/explorer/commands/hd-private.hpp \
    include/bitcoin/explorer/commands/hd-public.hpp \
    include/bitcoin/explorer/commands/hd-to-address.hpp \
    include/bitcoin/explorer/commands/hd-to-ec.hpp \
    include/bitcoin/explorer/commands/hd-to-public.hpp \
    include/bitcoin/explorer/commands/hd-to-wif.hpp \
    include/bitcoin/explorer/commands/help.hpp \
    include/bitcoin/explorer/commands/input-set.hpp \
    include/bitcoin/explorer/commands/input-sign.hpp \
    include/bitcoin/explorer/commands/input-validate.hpp \
    include/bitcoin/explorer/commands/match-neutrino-address.hpp \
    include/bitcoin/explorer/commands/match-neutrino-script.hpp \
    include/bitcoin/explorer/commands/message-sign.hpp \
    include/bitcoin/explorer/commands/message-validate.hpp \
    include/bitcoin/explorer/commands/mnemonic-decode.hpp \
    include/bitcoin/explorer/commands/mnemonic-encode.hpp \
    include/bitcoin/explorer/commands/mnemonic-to-seed.hpp \
    include/bitcoin/explorer/commands/put-tx.hpp \
    include/bitcoin/explorer/commands/qrcode.hpp \
    include/bitcoin/explorer/commands/ripemd160.hpp \
    include/bitcoin/explorer/commands/satoshi-to-btc.hpp \
    include/bitcoin/explorer/commands/script-decode.hpp \
    include/bitcoin/explorer/commands/script-encode.hpp \
    include/bitcoin/explorer/commands/script-to-address.hpp \
    include/bitcoin/explorer/commands/script-to-key.hpp \
    include/bitcoin/explorer/commands/script-to-witness.hpp \
    include/bitcoin/explorer/commands/seed.hpp \
    include/bitcoin/explorer/commands/send-tx.hpp \
    include/bitcoin/explorer/commands/settings.hpp \
    include/bitcoin/explorer/commands/sha160.hpp \
    include/bitcoin/explorer/commands/sha256.hpp \
    include/bitcoin/explorer/commands/sha512.hpp \
    include/bitcoin/explorer/commands/stealth-decode.hpp \
    include/bitcoin/explorer/commands/stealth-encode.hpp \
    include/bitcoin/explorer/commands/stealth-public.hpp \
    include/bitcoin/explorer/commands/stealth-secret.hpp \
    include/bitcoin/explorer/commands/stealth-shared.hpp \
    include/bitcoin/explorer/commands/subscribe-block.hpp \
    include/bitcoin/explorer/commands/subscribe-tx.hpp \
    include/bitcoin/explorer/commands/token-new.hpp \
    include/bitcoin/explorer/commands/tx-decode.hpp \
    include/bitcoin/explorer/commands/tx-encode.hpp \
    include/bitcoin/explorer/commands/tx-sign.hpp \
    include/bitcoin/explorer/commands/uri-decode.hpp \
    include/bitcoin/explorer/commands/uri-encode.hpp \
    include/bitcoin/explorer/commands/validate-tx.hpp \
    include/bitcoin/explorer/commands/version.hpp \
    include/bitcoin/explorer/commands/watch-key.hpp \
    include/bitcoin/explorer/commands/watch-tx.hpp \
    include/bitcoin/explorer/commands/wif-to-ec.hpp \
    include/bitcoin/explorer/commands/wif-to-public.hpp \
    include/bitcoin/explorer/commands/witness-to-key.hpp \
    include/bitcoin/explorer/commands/wrap-decode.hpp \
    include/bitcoin/explorer/commands/wrap-encode.hpp

include_bitcoin_explorer_configdir = ${includedir}/bitcoin/explorer/config
include_bitcoin_explorer_config_HEADERS = \
    include/bitcoin/explorer/config/address.hpp \
    include/bitcoin/explorer/config/algorithm.hpp \
    include/bitcoin/explorer/config/btc.hpp \
    include/bitcoin/explorer/config/byte.hpp \
    include/bitcoin/explorer/config/bytes.hpp \
    include/bitcoin/explorer/config/electrum.hpp \
    include/bitcoin/explorer/config/encoding.hpp \
    include/bitcoin/explorer/config/endorsement.hpp \
    include/bitcoin/explorer/config/hd_key.hpp \
    include/bitcoin/explorer/config/language.hpp \
    include/bitcoin/explorer/config/sighash.hpp \
    include/bitcoin/explorer/config/signature.hpp \
    include/bitcoin/explorer/config/witness.hpp \
    include/bitcoin/explorer/config/wrapper.hpp

include_bitcoin_explorer_impldir = ${includedir}/bitcoin/explorer/impl
include_bitcoin_explorer_impl_HEADERS = \
    include/bitcoin/explorer/impl/prop_tree.ipp \
    include/bitcoin/explorer/impl/utility.ipp

# files => ${bash_completiondir}
#------------------------------------------------------------------------------
if BASH_COMPLETIONDIR

dist_bash_completion_DATA = \
    data/bx

endif BASH_COMPLETIONDIR

# files => ${sysconfdir}/libbitcoin
#------------------------------------------------------------------------------
if WITH_CONSOLE

sysconf_libbitcoindir = ${sysconfdir}/libbitcoin
sysconf_libbitcoin_DATA = \
    data/bx.cfg

endif WITH_CONSOLE


# Custom make targets.
#==============================================================================
# make target: console
#------------------------------------------------------------------------------
target_console = \
    console/bx

console: ${target_console}

