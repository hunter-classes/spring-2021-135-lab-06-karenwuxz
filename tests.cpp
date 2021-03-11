#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("caesar's cipher"){
    CHECK(caesarCipher("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
    CHECK(caesarCipher("SpongeBob squarepants", 55) == "VsrqjhEre vtxduhsdqwv");
    CHECK(caesarCipher("The triangle is a weird instrument to solo in", 13) == "Gur gevnatyr vf n jrveq vafgehzrag gb fbyb va");
}

TEST_CASE("vigenere's cipher"){
    CHECK(vigenereCipher("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(vigenereCipher("The table is prepared for you", "Godspeed") == "Zvh lpfph og sjtteukr igg csx");
    CHECK(vigenereCipher("You can teach me how to speak your language Make me your disciple", "bible") == "Zwv neo bflgi uf ssx bp dtfil jsvz mlrhcbri Nilp qf gpfv eqtnmqtf");
}

TEST_CASE("decrypting ciphers"){
    CHECK(decryptCaesar("Reu kyviv nviv rcnrpj tyfztvj kf drbv", 17) == "And there were always choices to make");
    CHECK(decryptCaesar("Gurer vf bayl bar guvat gung V qernq: abg gb or jbegul bs zl fhssrevatf", 13) == "There is only one thing that I dread: not to be worthy of my sufferings");
    CHECK(decryptCaesar("cvlmz bpqa qvntcmvkm bpm xmzawvit mow nqvittg acnnmzml i twaa wn ditcma", 346) == "under this influence the personal ego finally suffered a loss of values");

    CHECK(decryptVigenere("Ivzr ksh fajz M'y thm fc hmzh by mzg xteg B ioirm fr", "Movement") == "When you move I'm put to mind of all that I wanna be");
    CHECK(decryptVigenere("Jc xbwjv mwb yyhr di xcui zcnx E'zc mnonv dcdo pc yon", "work") == "No grave can hold my body down I'll crawl home to her");
    CHECK(decryptVigenere("Gvtce'f ac ewaa, gvtce'f ac glcr gc qp rha", "noPlan") == "There's no plan, there's no race to be run");
}