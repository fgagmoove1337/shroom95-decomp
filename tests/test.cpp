#include <catch2/catch_test_macros.hpp>

#include "Packet/Packet.hpp"

TEST_CASE("Packet Coding", "[packet]") {
    COutPacket packet(11);
    packet.Encode1(0x7F);
    packet.Encode2(0x7FFF);
    packet.Encode4(0x7FFFFFFF);
    packet.EncodeBuffer("Hello, World!", 13);
    packet.EncodeStr(ZXString("Hello, World!"));
    packet.EncodeStr(ZXString(""));

    CInPacket inPkt;
    inPkt.CopyFrom(packet);
    REQUIRE(inPkt.GetOffset() == 0);
    REQUIRE(inPkt.Decode2() == 11);
    REQUIRE(inPkt.Decode1() == 0x7F);
    REQUIRE(inPkt.Decode2() == 0x7FFF);
    REQUIRE(inPkt.Decode4() == 0x7FFFFFFF);
    char buffer[14]{0};
    inPkt.DecodeBuffer(buffer, 13);
    std::basic_string_view<char> str(buffer, 13);
    REQUIRE(str == "Hello, World!");
    REQUIRE(inPkt.DecodeStr() == "Hello, World!");
    REQUIRE(inPkt.DecodeStr() == "");
    REQUIRE(inPkt.GetOffset() == packet.GetOffset());
}

TEST_CASE("Packet Appending", "[packet]") {
    
}