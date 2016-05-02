#include <czmq.h>
#include <czmq++/czmqpp.hpp>
#include <bitcoin/bitcoin.hpp>

int main()
{
    czmqpp::context context;
    czmqpp::socket socket(context, ZMQ_DEALER);
    assert(socket.self() != nullptr);

    // This was missing from libbitcoin-client.
    // Note that a specific client *certificate* is not required for this.
    czmqpp::certificate certificate;
    assert(certificate.valid());
    certificate.apply(socket);

    static const auto public_key = "rq:rM>}U?@Lns47E1%kR.o@n%FcmmsL/@{H8]yf7";
    socket.set_curve_serverkey(public_key);
    ////zmq_setsockopt(socket.self(), ZMQ_CURVE_SERVERKEY, public_key, strlen(public_key));

    auto connected = socket.connect("tcp://localhost:9091");
    assert(connected == 0);

    czmqpp::message message;

    // "blockchain.fetch_last_height"
    message.append(
    {
        0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x63, 0x68, 0x61, 0x69,
        0x6e, 0x2e, 0x66, 0x65, 0x74, 0x63, 0x68, 0x5f, 0x6c,
        0x61, 0x73, 0x74, 0x5f, 0x68, 0x65, 0x69, 0x67, 0x68,
        0x74
    });

    // int(1)
    message.append({ 0x01, 0x00, 0x00, 0x00 });

    // data{}
    message.append({});

    auto sent = message.send(socket);
    assert(sent);

    czmqpp::poller poller(socket);
    poller.wait(1000);
}
