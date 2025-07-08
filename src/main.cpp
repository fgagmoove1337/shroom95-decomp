#include <cstdio>
#include <iostream>

#include "ClientConfig.hpp"

#include "imports.h"
#include "WvsApp/WvsApp.hpp"
#include "StringDecoder/StringDecoder.hpp"
#include "spdlog/spdlog.h"

// Required to ensure MonsterBookManStr is defined
#include <Mob/Mob.hpp>
#include <ScriptMan/ScriptMan.hpp>
#include <SequencedKeyMan/SequencedKeyMan.hpp>

#include "MonsterBookMan/MonsterBookMan.hpp"

int main(int, char**){
    spdlog::info("Hello, from gms95-regen!");

    ZArray<long> a;
    get_random_unique_array(a, 0, 10, 3u);

    ZImports::LoadImports();
    auto filePool = new FileStringPool();
    filePool->LoadFromFile(STRING_POOL_PATH);
    spdlog::info("First string pool: {}", filePool->GetStringAt(0));

    CWvsApp app("");
    app.SetUp();

    CScriptMan::CreateInstance();
    CSequencedKeyMan::CreateInstance();

    int term = 0;
    app.Run(&term);

    app.CleanUp();

    spdlog::info("Goodbye, from gms95-regen!");
}
