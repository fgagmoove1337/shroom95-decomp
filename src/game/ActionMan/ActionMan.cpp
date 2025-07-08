// ActionMan.cpp
#include "ActionMan.hpp"

Ztl_bstr_t _D_S_SZMAPIMG(L"zmap.img");
Ztl_bstr_t _D_S_SSMAPIMG(L"smap.img");

static _x_com_ptr<IWzUOL> FAKE__x_com_ptr_IWzUOL{};

static ZArray<CActionFrame> FAKE_ZArray_CActionFrame{};
static ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_SUMMONEDACTIONFRAMEENTRY{};
static ZRef<CActionMan::FACELOOKENTRY> FAKE_ZRef_CActionMan_FACELOOKENTRY{};
static ZRef<CActionMan::DRAGONACTIONENTRY> FAKE_ZRef_CActionMan_DRAGONACTIONENTRY{};
static ZRef<CActionMan::MELEEATTACKAFTERIMAGE> FAKE_ZRef_CActionMan_MELEEATTACKAFTERIMAGE{};
static ZRef<CActionMan::SUMMONEDACTIONENTRY> FAKE_ZRef_CActionMan_SUMMONEDACTIONENTRY{};
static ZRef<CActionMan::NPCIMGENTRY> FAKE_ZRef_CActionMan_NPCIMGENTRY{};
static ZRef<CActionMan::PETIMGENTRY> FAKE_ZRef_CActionMan_PETIMGENTRY{};
static ZRef<CActionMan::EMPLOYEEIMGENTRY> FAKE_ZRef_CActionMan_EMPLOYEEIMGENTRY{};
static ZRef<CActionMan::MOBIMGENTRY> FAKE_ZRef_CActionMan_MOBIMGENTRY{};
static ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>> FAKE_ZArray_ZRef_CActionMan_CHARACTERACTIONFRAMEENTRY{};
static ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>> FAKE_ZArray_ZRef_CActionMan_TAMINGMOBACTIONFRAMEENTRY{};

static ZRef<CActionMan::NPCACTIONENTRY> FAKE_ZRef_CActionMan_NPCACTIONENTRY{};
static ZRef<CActionMan::NPCACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_NPCACTIONFRAMEENTRY{};

static ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long> FAKE_ZMap_long_ZRef_CActionMan_DRAGONACTIONENTRY_long{};

static ZRef<CActionMan::PETACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_PETACTIONFRAMEENTRY{};
static ZRef<CActionMan::PETACTIONENTRY> FAKE_ZRef_CActionMan_PETACTIONENTRY{};
static ZRef<CActionMan::CHARACTERIMGENTRY> FAKE_ZRef_CActionMan_CHARACTERIMGENTRY{};
static ZRef<CActionMan::MORPHIMGENTRY> FAKE_ZRef_CActionMan_MORPHIMGENTRY{};
static ZRef<CActionMan::MORPHACTIONENTRY> FAKE_ZRef_CActionMan_MORPHACTIONENTRY{};
static ZRef<CActionMan::MORPHACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_MORPHACTIONFRAMEENTRY{};
static ZRef<CActionMan::SHADOWPARTNERACTIONENTRY> FAKE_ZRef_CActionMan_SHADOWPARTNERACTIONENTRY{};
static ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_SHADOWPARTNERACTIONFRAMEENTRY{};
static ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_EMPLOYEEACTIONFRAMEENTRY{};
static ZRef<CActionMan::EMPLOYEEACTIONENTRY> FAKE_ZRef_CActionMan_EMPLOYEEACTIONENTRY{};
static ZRef<CActionMan::MOBACTIONENTRY> FAKE_ZRef_CActionMan_MOBACTIONENTRY{};
static ZRef<CActionMan::MOBACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_MOBACTIONFRAMEENTRY{};
// TODO ipp
#include "ActionMan_regen.ipp"

ACTIONDATA ActionData::m_saCharacterActions[273]{
    ACTIONDATA(0, 0, Ztl_bstr_t(L"walk1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"walk2")),
    ACTIONDATA(1, 0, Ztl_bstr_t(L"stand1")),
    ACTIONDATA(1, 0, Ztl_bstr_t(L"stand2")),
    ACTIONDATA(1, 0, Ztl_bstr_t(L"alert")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO3")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingOF")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingT1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingT2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingT3")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingTF")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingP1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingP2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingPF")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"stabO1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"stabO2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"stabOF")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"stabT1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"stabT2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"stabTF")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swingD1")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swingD2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"stabD1")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tripleBlow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"quadBlow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"deathBlow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finishBlow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finishAttack_link")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finishAttack_link2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"shoot1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"shoot2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO2")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO3")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"shootF")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"swingO3")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"stabO1")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"heal")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"proneStab")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"prone")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"fly")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"jump")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ladder")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"rope")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"dead")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"sit")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sit2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sit3")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sit4")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sit5")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sit6")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sit7")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"tired")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_prone")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"proneStab_jaguar")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"alert2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"alert3")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"alert4")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"alert5")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"alert6")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"alert7")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"ladder2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rope2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"shoot6")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magic1")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magic2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magic3")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magic5")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magic6")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"burster1")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"burster2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"savage")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"avenger")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"assaulter")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"prone2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"assassination")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"assassinationS")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tornadoDash")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tornadoDashStop")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tornadoRush")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rush")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rush2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"brandish1")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"brandish2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"braveslash")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sanctuary")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"meteor")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"paralyze")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"blizzard")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"genesis")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"ninjastorm")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"blast")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"holyshield")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"showdown")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"resurrection")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"chainlightning")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"smokeshell")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"handgun")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"somersault")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"straight")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"eburster")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"backspin")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"eorb")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"screw")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"doubleupper")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"dragonstrike")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"doublefire")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"triplefire")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fake")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"airstrike")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"edrain")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"octopus")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"backstep")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"shot")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"recovery")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fireburner")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"coolingeffect")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fist")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"timeleap")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rapidfire")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"homing")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ghostwalk")),
    ACTIONDATA(1, 0, Ztl_bstr_t(L"ghoststand")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ghostjump")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ghostproneStab")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ghostfly")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ghostladder")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ghostrope")),
    ACTIONDATA(0, 0, Ztl_bstr_t(L"ghostsit")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"cannon")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"torpedo")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"darksight")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"bamboo")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"pyramid")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"wave")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"blade")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"souldriver")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"firestrike")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flamegear")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"stormbreak")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"vampire")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"float")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swingT2PoleArm")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swingP1PoleArm")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swingP2PoleArm")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"doubleSwing")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tripleSwing")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fullSwingDouble")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fullSwingTriple")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"overSwingDouble")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"overSwingTriple")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rollingSpin")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"comboSmash")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"comboFenrir")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"comboTempest")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finalCharge")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"combatStep")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finalBlow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finalToss")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magicmissile")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"lightingBolt")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"dragonBreathe")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"breathe_prepare")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"dragonIceBreathe")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"icebreathe_prepare")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"blaze")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fireCircle")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"illusion")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magicFlare")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"elementalReset")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magicRegistance")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"recoveryAura")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magicBooster")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"magicShield")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flameWheel")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"killingWing")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"OnixBlessing")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"Earthquake")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"soulStone")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"dragonThrust")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"ghostLettering")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"darkFog")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"slow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"mapleHero")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"Awakening")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flyingAssaulter")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tripleStab")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fatalBlow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"slashStorm1")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"slashStorm2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"bloodyStorm")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flashBang")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"upperStab")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"suddenRaid")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"chainPull")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"chainAttack")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"owlDead")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"monsterBombPrepare")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"monsterBombThrow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finalCut")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"finalCutPrepare")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"cyclone_pre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"cyclone")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"cyclone_after")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"doubleJump")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"knockback")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rbooster_pre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rbooster")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rbooster_after")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"crossRoad")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"nemesis")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"wildbeast")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"siege_pre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"siege")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"siege_stand")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"siege_after")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_pre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_stand")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_after")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_walk")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_laser")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_siegepre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_siegeattack")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_siegestand")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_siegeafter")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"sonicBoom")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"revive")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"darkSpear")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"darkChain")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flamethrower_pre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flamethrower")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flamethrower_after")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flamethrower_pre2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flamethrower2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flamethrower_after2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"mbooster")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"msummon")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"msummon2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"gatlingshot")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"gatlingshot2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"drillrush")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"earthslug")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"rpunch")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"clawCut")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swallow")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swallow_loop")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swallow_attack")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"swallow_pre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"flashRain")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"mine")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"capture")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"ride")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"getoff")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"ride2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"getoff2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"mRush")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_msummon")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_msummon2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_mRush")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_rbooster_pre")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"tank_rbooster_after")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"shockwave")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"demolition")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"snatch")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"windspear")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"windshot")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fly2")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fly2Move")),
    ACTIONDATA(0, 1, Ztl_bstr_t(L"fly2Skill"))
};
Ztl_bstr_t ActionData::m_saMorphActions[49]{};
Ztl_bstr_t ActionData::m_saEmotionName[24]{};
Ztl_bstr_t ActionData::m_sNpcAction[2]{};
Ztl_bstr_t ActionData::m_sPetAction[34]{};
Ztl_bstr_t ActionData::m_saEmployeeAction[1]{};

/*void InitCharacterActionData() {
	auto& strPool = StringPool::GetInstance();
	auto& act  = ActionData::m_saCharacterActions;

	act[0] = ACTIONDATA(0, 0, strPool.GetBSTR(0x403));
	act[1] = ACTIONDATA(0, 0, strPool.GetBSTR(0x404));
	act[2] = ACTIONDATA(1, 0, strPool.GetBSTR(0x42d));
	act[3] = ACTIONDATA(1, 0, strPool.GetBSTR(0x42e));
	act[4] = ACTIONDATA(1, 0, strPool.GetBSTR(0x405));
	act[5] = ACTIONDATA(0, 0, strPool.GetBSTR(0x407));
}*/

ActionKey::ActionKey(long arg0, long arg1, long arg2)
{
    nSkillID = arg0;
    nSLV = arg1;
    nAction = arg2;
}

void ActionKey::_ctor_0(long arg0, long arg1, long arg2)
{
    new(this) ActionKey(arg0, arg1, arg2);
}

int32_t ActionKey::operator==(const ActionKey& rhs) const
{
    return nSkillID == rhs.nSkillID && nSLV == rhs.nSLV && nAction == rhs.nAction;
}

int32_t ActionKey::_op_eq_1(ActionKey* pThis, const ActionKey& rhs)
{
    return pThis->operator==(rhs);
    // return __sub_00006280(pThis, nullptr, rhs);
}

CActionMan::~CActionMan()
{
    if (CActionFrame::s_pZMapper)
    {
        CActionFrame::s_pZMapper = 0;
    }

    if (CActionFrame::s_pSMapper)
    {
        CActionFrame::s_pSMapper = 0;
    }
}

void CActionMan::_dtor_0()
{
    this->~CActionMan();
    // return __sub_00013290(this, nullptr);
}

CActionMan::CActionMan(const CActionMan& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::_ctor_1(const CActionMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CActionMan()
{
    ms_pInstance = this;
    m_tLastSweepCache = timeGetTime();


    // UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::_ctor_0()
{
    //return __sub_00012ED0(this, nullptr);
    new(this) CActionMan();
}

void CActionMan::Init()
{
    auto& sp = StringPool::GetInstance();
    ActionData::m_sNpcAction[0] = sp.GetBSTR(0x1AC2);
    ActionData::m_sNpcAction[1] = sp.GetBSTR(0x42B);

    ActionData::m_saEmployeeAction[0] = sp.GetBSTR(0x42B);

    const std::array emotionKeys = {
        0x3ee, 0x1ab7, 0x3ef, 0x3f0, 0x1aa7, 0x3f1, 0x3f2,
        0x3f3, 0x3f4, 0x3f5, 0x3f6, 0x3f7, 0x3f8, 0x3f9,
        0x3fa, 0x1AA1, 0x3fb, 0x3fc, 0x3fd, 0x3fe, 0x3ff,
        0x1AB8, 0x400, 0x401
    };

    for (auto i = 0; i < emotionKeys.size(); ++i )
    {
        ActionData::m_saEmotionName[i] = sp.GetBSTR(emotionKeys[i]);
    }


    /*CActionFrame::LoadMappers();
    auto entry = GetCharacterImgEntry(2000);*/
    __sub_0001BEB0(this, nullptr);
}

void CActionMan::LoadCharacterAction(long nAction, long nGender, long nSkin, long* aAvatarHairEquip,
                                     ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>& apFE, long nWeaponStickerID, long nVehicleID,
                                     int32_t bTamingMobTired, long nGhostIndex)
{
    __sub_00027D00(this, nullptr, nAction, nGender, nSkin, aAvatarHairEquip, apFE, nWeaponStickerID, nVehicleID, bTamingMobTired, nGhostIndex);
    /*AHECODES code;
    code.nAction = nAction;
    auto& hairEq = code.aHair;
    if (nAction == 47)
    {
        hairEq[0] = aAvatarHairEquip[0];
        hairEq[1] = aAvatarHairEquip[1];
        hairEq[3] = aAvatarHairEquip[3];
        hairEq[4] = aAvatarHairEquip[4];
    }
    else
    {
        std::copy_n(aAvatarHairEquip, 60, hairEq.begin());
        hairEq[14] = 0;
        hairEq[2] = 0;
        for (auto& ring: _D_G_ANRINGBODYPART)
        {
            hairEq[ring] = 0;
        }
        hairEq[15] = 0;
        hairEq[16] = 0;

        auto slot5 = hairEq[5];
        auto slot6 = hairEq[6];
        if ( slot5 / 10000 == 105 && slot6 )
        {
            auto itemInfo = CItemInfo::GetInstance();
            if (itemInfo->IsCashItem(slot5) || !itemInfo->IsCashItem(slot6))
            {
                hairEq[6] = 0;
                slot6 = 0;
            }
        }

        if (!slot5)
        {
            slot5 = nGender != 0 ? 1041046 : 1040036;
            hairEq[5] = slot5;
        }

        if (!slot6 && slot5 / 10000 != 105)
            hairEq[6] = nGender != 0 ? 1061039 : 1060026;;
    }

    if ( hairEq[1] == 1002186 )
        hairEq[1] = 0;
    if ( hairEq[4] == 1032024 )
        hairEq[4] = 0;
    if ( hairEq[3] == 1022079 )
        hairEq[3] = 0;
    if ( hairEq[7] == 1072153 )
        hairEq[7] = 0;
    if ( hairEq[8] == 1082102 )
        hairEq[8] = 0;
    if ( hairEq[9] == 1102039 )
        hairEq[9] = 0;
    if ( hairEq[10] == 1092067 )
        hairEq[10] = 0;


    auto wep = nWeaponStickerID;
    if ( nWeaponStickerID == 1702099 || nWeaponStickerID == 1702190 )
    {
        hairEq[11] = 0;
        wep = 0;
    }

    if ( nVehicleID / 10000 == 190
    || nVehicleID / 10000 == 193
    || nVehicleID == 1902040
    || nVehicleID == 1902041
    || nVehicleID == 1902042
    || nVehicleID / 1000 == 1983 )
    {
        hairEq[10] = 0;
        hairEq[11] = 0;
        if ( nAction != 257 && nAction != 258 && nAction != 64 && nAction != 65 )
        {
            if ( nAction == 45 || (code.nAction = 48, nAction == 46) )
                code.nAction = 46;
        }
    }

    if ( nAction == 100 )
    {
        hairEq[10] = 0;
        hairEq[11] = 0;
    }

    if ( nGhostIndex )
    {
        for ( auto i = 0; i <= 59; ++i )
        {
            if ( static_cast<unsigned int>(i) >= 2 && i != 3 && i != 4 )
                hairEq[i] = 0;
        }
    }

    if (wep && (nAction == 80 || nAction == 81))
        wep = 0;

    ZArray<CActionFrame> aCharFrame;
    load_character_action(code.nAction, nSkin, hairEq.data(), aCharFrame, wep, nGhostIndex);
    MergeCharacterSprite(code, aCharFrame, apFE);*/
}

int32_t CActionMan::load_character_action(long nAction, const long nSkin, const long* aAvatarHairEquip,
                                          ZArray<CActionFrame>& aFrame, const long nWeaponStickerID,
                                          const long nGhostIndex) const
{
    auto bCapEquip = aAvatarHairEquip[0] != 0;
    load_item_action(
        nAction,
        nSkin,
        nSkin + 2000,
        aFrame,
        0,
        nGhostIndex,
        bCapEquip);

    action_mapping_for_ghost(nAction);

    load_item_action(
        nAction == 47 ? 44 : nAction,
        nSkin,
        nSkin + 12000,
        aFrame,
        0,
        nGhostIndex,
        bCapEquip);

    auto wepStickerId = nWeaponStickerID / 100000 == 17 ? nWeaponStickerID : 0;
    for (auto i = 0; i < 60; i++)
    {
        if (i == 11)
        {
            if (nAction == 88 ||
                nAction == 96 ||
                nAction == 112 ||
                nAction == 138 ||
                nAction == 87 ||
                nAction == 27 ||
                nAction == 28)
            {
                continue;
            }
        }

        if (i == 18 || i == 19 || i == 20)
        {
            continue;
        }

        auto id = aAvatarHairEquip[i];
        if (id)
        {
            load_item_action(
                nAction == 47 ? 44 : nAction,
                nSkin,
                id,
                aFrame,
                id == 11 ? nWeaponStickerID : 0,
                nGhostIndex,
                bCapEquip);
        }
    }

    if (!bCapEquip)
    {
        return 1;
    }

    static Ztl_bstr_t bsCapHairVSlot = StringPool::GetInstance().GetBSTR(0x4A1);
    for (auto i = 0; i < aFrame.GetCount(); i++) {
    // TODO: &ghostIndex == aFrame.m_sExclVSlot ???
        aFrame[i].SetExclusiveVSlot(bsCapHairVSlot);
        //if(aFrame[i].m_sExclVSlot)
        //TODO assign vslot somehow
    }
    return 1;



    return __sub_00026CE0((CActionMan*)this, nullptr, nAction, nSkin, (long*)aAvatarHairEquip, aFrame, nWeaponStickerID, nGhostIndex);
}

void CActionMan::LoadTamingMobAction(long b, long aFrame, long* arg2, int32_t arg3,
                                     ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>& arg4)
{
    __sub_00027A10(this, nullptr, b, aFrame, arg2, arg3, arg4);
}

long CActionMan::LoadFaceLook(long arg0, long arg1, long arg2, long arg3, ZList<_x_com_ptr<IWzCanvas>>& arg4)
{
    return __sub_0001CAB0(this, nullptr, arg0, arg1, arg2, arg3, arg4);
}

ZRef<CActionMan::CHARACTERIMGENTRY> CActionMan::GetInfoImgEntry(long nUOLKey)
{
    ZRef<CActionMan::CHARACTERIMGENTRY> ret;
    return *__sub_00017FD0(this, nullptr, &ret, nUOLKey);
}

ZRef<CActionMan::CHARACTERIMGENTRY> CActionMan::GetCharacterImgEntry(long nUOLKey)
{
    ZRef<CActionMan::CHARACTERIMGENTRY> ret;
    return *__sub_00017FD0(this, nullptr, &ret, nUOLKey);
}

void CActionMan::LoadMorphAction(unsigned long dwTemplateID, long nAction,
                                 ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>& apFE)
{
    __sub_000193C0(this, nullptr, dwTemplateID, nAction, apFE);
}

ZRef<CActionMan::MORPHIMGENTRY> CActionMan::GetMorphImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::MORPHIMGENTRY> ret;
    return *__sub_00018B30(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadMobAction(unsigned long arg0, long arg1, ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>& arg2)
{
    __sub_0001F530(this, nullptr, arg0, arg1, arg2);
}

ZRef<CActionMan::MOBIMGENTRY> CActionMan::GetMobImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::MOBIMGENTRY> ret;
    return *__sub_00019F20(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadNpcAction(CNpcTemplate* pTemplate, long nAction,
                               ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>& lpFrame, long nClientActionIdx)
{
    auto& sp = StringPool::GetInstance();
    auto actIx = nClientActionIdx;
    if (nClientActionIdx == -2)
        actIx = pTemplate->CalcClientActionSetIdx(false);

    auto t = timeGetTime();
    auto id = pTemplate->dwTemplateID;
    auto key = static_cast<int64_t>(id) << 8 | nAction;
    ZRef<NPCACTIONENTRY> entry;
    if (m_mNpcAction.GetAt(key, &entry))
    {
        lpFrame.RemoveAll();
        lpFrame.AddTail(entry->lpFrame);
        return;
    }
    auto npcEntry = GetNpcImgEntry(id);


    auto& actProp = actIx >= 0 ? pTemplate->m_lClientActionSet.FindIndex((size_t)actIx)->pProp : npcEntry->pImg;
    if (actProp)
    {
        nAction = 1; //TODO
        auto actionKey = nAction >= 2
                             ? pTemplate->aAct[nAction].bsAction
                             : ActionData::m_sNpcAction[nAction];

        auto prop = actProp->GetItemT<IWzProperty>(actionKey);

        IUnknown* enm;
        //TODO(game) might need to free
        Z_CHECK_HR(prop->Get__NewEnum(&enm));
        _x_com_ptr<IEnumVARIANT> enumVar((IEnumVARIANT*)enm);


        ZRef<NPCACTIONENTRY> actionEntry(ZAllocHelper(1));

        while (true)
        {
            Ztl_variant_t name;
            ULONG fetched = 0;
            if (enumVar->Next(1, &name, &fetched))
            {
                break;
            }

            auto sName = DetachBSTR(name);
            auto item = prop->Getitem(sName);
            auto unkItem = get_unknown(item);
            _x_com_ptr<IWzCanvas> pCanvas(unkItem.op_arrow()); //TODO correct?


            auto canvasProp = pCanvas->Getproperty();
            auto delayStr = canvasProp->Getitem(StringPool::GetInstance().GetBSTR(0x1aa9));
            auto delay = get_int32(delayStr, 180);

            if (delay)
            {
                auto& frame = actionEntry->lpFrame.AddTail();
                frame = new CActionMan::NPCACTIONFRAMEENTRY();
                frame->nDelay = delay;
                frame->pCanvas = pCanvas;
            }
        }


        actionEntry->tLastAccessed = timeGetTime();
        actionEntry->dwTemplateID = id;
        actionEntry->nAction = nAction;

        m_mNpcAction.Insert(key, actionEntry);

        lpFrame.AddTail(actionEntry->lpFrame);
    }

    //__sub_00020AE0(this, nullptr, pTemplate, nAction, lpFrame, nClientActionIdx);
}

ZRef<CActionMan::NPCIMGENTRY> CActionMan::GetNpcImgEntry(unsigned long dwTemplateID)
{
    /*auto& sp = StringPool::GetInstance();
    auto fmt = sp.GetStringW(0x3CF);
    auto npcKey = ZXString<unsigned short>::FromFmt(fmt.c_str(), dwTemplateID);


    ZRef<NPCIMGENTRY> npc;
    if (m_mNpcImgEntry.GetAt(dwTemplateID, &npc))
    {
        return npc;
    }



    npc = new NPCIMGENTRY();
    auto npcProp = get_rm()->GetObjectT<IWzProperty>(reinterpret_cast<const wchar_t*>(npcKey.c_str()));
    auto prop = npcProp->GetItemT<IWzProperty>(sp.GetBSTR(981));
    //auto entryProp = prop->GetItemT<>()


    return {};*/
    ZRef<CActionMan::NPCIMGENTRY> ret;
    return *__sub_0001A840(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadPetAction(CPetTemplate* arg0, long arg1, long arg2,
                               ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>& arg3)
{
    __sub_000213F0(this, nullptr, arg0, arg1, arg2, arg3);
}

ZRef<CActionMan::PETIMGENTRY> CActionMan::GetPetImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::PETIMGENTRY> ret;
    return *__sub_0001B0D0(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadEmployeeAction(CEmployeeTemplate* pTemplate, long nAction,
                                    ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>& lpFrame)
{
    __sub_00022940(this, nullptr, pTemplate, nAction, lpFrame);
}

ZRef<CActionMan::EMPLOYEEIMGENTRY> CActionMan::GetEmployeeImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::EMPLOYEEIMGENTRY> ret;
    return *__sub_0001B490(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadSummonedAction(long nSkillID, long nSLV, long nAction,
                                    ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>& lpFrame)
{
    __sub_00023100(this, nullptr, nSkillID, nSLV, nAction, lpFrame);
}

_x_com_ptr<IWzProperty> CActionMan::GetSummonedProp(long nSkillID, long nSLV)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_0001B830(this, nullptr, &ret, nSkillID, nSLV);
}

void CActionMan::LoadShadowPartnerAction(long arg0, long arg1,
                                         ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>& arg2)
{
    __sub_00023CF0(this, nullptr, arg0, arg1, arg2);
}

_x_com_ptr<IWzProperty> CActionMan::GetShadowPartnerProp(long nSkillID)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_0001BA60(this, nullptr, &ret, nSkillID);
}

void CActionMan::LoadDragonAction(long nJob, long nAction, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>& lpFrame)
{
    __sub_000247C0(this, nullptr, nJob, nAction, lpFrame);
}

void CActionMan::CreateAfterimageLayer(Ztl_bstr_t sAfterimageUOL, long nAction, _x_com_ptr<IWzGr2DLayer> pLayer)
{
    __sub_00028A20(this, nullptr, CreateNakedParam(sAfterimageUOL), nAction, CreateNakedParam(pLayer));
}

void CActionMan::GetMeleeAttackRange(Ztl_bstr_t sAfterimageUOL, long nAction, tagRECT& rc)
{
    __sub_00028D00(this, nullptr, CreateNakedParam(sAfterimageUOL), nAction, rc);
}

void CActionMan::SweepCache()
{
    __sub_00015F60(this, nullptr);
}

void CActionMan::MergeCharacterSprite(const AHECODES& b, ZArray<CActionFrame>& aFrame,
                                      ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>& apFE)
{
    __sub_000172F0(this, nullptr, b, aFrame, apFE);
}

void CActionMan::MergeTamingMobSprite(ZArray<CActionFrame>& aFrame,
                                      ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>& apFE)
{
    __sub_00017510(this, nullptr, aFrame, apFE);
}

CActionMan::MELEEATTACKAFTERIMAGE* CActionMan::GetWeaponAfterImage(Ztl_bstr_t arg0)
{
    return __sub_00028080(this, nullptr, CreateNakedParam(arg0));
}

CActionMan& CActionMan::operator=(const CActionMan& arg0)
{
    return _op_assign_31(this, arg0);
}

CActionMan& CActionMan::_op_assign_31(CActionMan* pThis, const CActionMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERIMGENTRY::~CHARACTERIMGENTRY()
{
    //_dtor_0();
}

void CActionMan::CHARACTERIMGENTRY::_dtor_0()
{
    this->~CHARACTERIMGENTRY();
    // return __sub_00017230(this, nullptr);
}

CActionMan::CHARACTERIMGENTRY::CHARACTERIMGENTRY(const CActionMan::CHARACTERIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::CHARACTERIMGENTRY::_ctor_1(const CActionMan::CHARACTERIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERIMGENTRY::CHARACTERIMGENTRY()
{
}

void CActionMan::CHARACTERIMGENTRY::_ctor_0()
{
    new(this) CHARACTERIMGENTRY();
}

CActionMan::CHARACTERIMGENTRY& CActionMan::CHARACTERIMGENTRY::operator=(const CActionMan::CHARACTERIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::CHARACTERIMGENTRY& CActionMan::CHARACTERIMGENTRY::_op_assign_3(
    CActionMan::CHARACTERIMGENTRY* pThis, const CActionMan::CHARACTERIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERACTIONFRAMEENTRY::~CHARACTERACTIONFRAMEENTRY()
{
}

void CActionMan::CHARACTERACTIONFRAMEENTRY::_dtor_0()
{
    this->~CHARACTERACTIONFRAMEENTRY();
}

CActionMan::CHARACTERACTIONFRAMEENTRY::CHARACTERACTIONFRAMEENTRY(const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::CHARACTERACTIONFRAMEENTRY::_ctor_1(const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERACTIONFRAMEENTRY::CHARACTERACTIONFRAMEENTRY()
{
}

void CActionMan::CHARACTERACTIONFRAMEENTRY::_ctor_0()
{
    new(this) CHARACTERACTIONFRAMEENTRY();
}

CActionMan::CHARACTERACTIONFRAMEENTRY& CActionMan::CHARACTERACTIONFRAMEENTRY::operator=(
    const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::CHARACTERACTIONFRAMEENTRY& CActionMan::CHARACTERACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::CHARACTERACTIONFRAMEENTRY* pThis, const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY::~TAMINGMOBACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::TAMINGMOBACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY::TAMINGMOBACTIONFRAMEENTRY(const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::TAMINGMOBACTIONFRAMEENTRY::_ctor_1(const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY::TAMINGMOBACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::TAMINGMOBACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY& CActionMan::TAMINGMOBACTIONFRAMEENTRY::operator=(
    const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY& CActionMan::TAMINGMOBACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::TAMINGMOBACTIONFRAMEENTRY* pThis, const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MELEEATTACKAFTERIMAGE::~MELEEATTACKAFTERIMAGE()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MELEEATTACKAFTERIMAGE::_dtor_0()
{
    return __sub_000256C0(this, nullptr);
}

CActionMan::MELEEATTACKAFTERIMAGE::MELEEATTACKAFTERIMAGE(const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MELEEATTACKAFTERIMAGE::_ctor_1(const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MELEEATTACKAFTERIMAGE::MELEEATTACKAFTERIMAGE()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MELEEATTACKAFTERIMAGE::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MELEEATTACKAFTERIMAGE& CActionMan::MELEEATTACKAFTERIMAGE::operator=(
    const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MELEEATTACKAFTERIMAGE& CActionMan::MELEEATTACKAFTERIMAGE::_op_assign_3(
    CActionMan::MELEEATTACKAFTERIMAGE* pThis, const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::FACELOOKENTRY::~FACELOOKENTRY()
{

}

void CActionMan::FACELOOKENTRY::_dtor_0()
{
    //return __sub_000135E0(this, nullptr);
}

CActionMan::FACELOOKENTRY::FACELOOKENTRY(const CActionMan::FACELOOKENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::FACELOOKENTRY::_ctor_1(const CActionMan::FACELOOKENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::FACELOOKENTRY::FACELOOKENTRY()
{

}

void CActionMan::FACELOOKENTRY::_ctor_0()
{
    //return __sub_000135B0(this, nullptr);
    new(this) FACELOOKENTRY();
}

CActionMan::FACELOOKENTRY& CActionMan::FACELOOKENTRY::operator=(const CActionMan::FACELOOKENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::FACELOOKENTRY& CActionMan::FACELOOKENTRY::_op_assign_3(CActionMan::FACELOOKENTRY* pThis,
                                                                   const CActionMan::FACELOOKENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY::~MORPHIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MORPHIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY::MORPHIMGENTRY(const CActionMan::MORPHIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MORPHIMGENTRY::_ctor_1(const CActionMan::MORPHIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY::MORPHIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MORPHIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY& CActionMan::MORPHIMGENTRY::operator=(const CActionMan::MORPHIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MORPHIMGENTRY& CActionMan::MORPHIMGENTRY::_op_assign_3(CActionMan::MORPHIMGENTRY* pThis,
                                                                   const CActionMan::MORPHIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY::~MORPHACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MORPHACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY::MORPHACTIONFRAMEENTRY(const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MORPHACTIONFRAMEENTRY::_ctor_1(const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY::MORPHACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MORPHACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY& CActionMan::MORPHACTIONFRAMEENTRY::operator=(
    const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MORPHACTIONFRAMEENTRY& CActionMan::MORPHACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::MORPHACTIONFRAMEENTRY* pThis, const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONENTRY::~MORPHACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MORPHACTIONENTRY::_dtor_0()
{
    return __sub_000172A0(this, nullptr);
}

CActionMan::MORPHACTIONENTRY::MORPHACTIONENTRY(const CActionMan::MORPHACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MORPHACTIONENTRY::_ctor_1(const CActionMan::MORPHACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONENTRY::MORPHACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MORPHACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONENTRY& CActionMan::MORPHACTIONENTRY::operator=(const CActionMan::MORPHACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MORPHACTIONENTRY& CActionMan::MORPHACTIONENTRY::_op_assign_3(
    CActionMan::MORPHACTIONENTRY* pThis, const CActionMan::MORPHACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY::~MOBIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MOBIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY::MOBIMGENTRY(const CActionMan::MOBIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MOBIMGENTRY::_ctor_1(const CActionMan::MOBIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY::MOBIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MOBIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY& CActionMan::MOBIMGENTRY::operator=(const CActionMan::MOBIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MOBIMGENTRY& CActionMan::MOBIMGENTRY::_op_assign_3(CActionMan::MOBIMGENTRY* pThis,
                                                               const CActionMan::MOBIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONFRAMEENTRY::~MOBACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MOBACTIONFRAMEENTRY::_dtor_0()
{
    return __sub_000136A0(this, nullptr);
}

CActionMan::MOBACTIONFRAMEENTRY::MOBACTIONFRAMEENTRY(const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MOBACTIONFRAMEENTRY::_ctor_1(const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONFRAMEENTRY::MOBACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MOBACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONFRAMEENTRY& CActionMan::MOBACTIONFRAMEENTRY::operator=(const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MOBACTIONFRAMEENTRY& CActionMan::MOBACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::MOBACTIONFRAMEENTRY* pThis, const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONENTRY::~MOBACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MOBACTIONENTRY::_dtor_0()
{
    return __sub_00013640(this, nullptr);
}

CActionMan::MOBACTIONENTRY::MOBACTIONENTRY(const CActionMan::MOBACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MOBACTIONENTRY::_ctor_1(const CActionMan::MOBACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONENTRY::MOBACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MOBACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONENTRY& CActionMan::MOBACTIONENTRY::operator=(const CActionMan::MOBACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MOBACTIONENTRY& CActionMan::MOBACTIONENTRY::_op_assign_3(CActionMan::MOBACTIONENTRY* pThis,
                                                                     const CActionMan::MOBACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCIMGENTRY::~NPCIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::NPCIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCIMGENTRY::NPCIMGENTRY(const CActionMan::NPCIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::NPCIMGENTRY::_ctor_1(const CActionMan::NPCIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCIMGENTRY::NPCIMGENTRY()
{
}

void CActionMan::NPCIMGENTRY::_ctor_0()
{
    new(this) NPCIMGENTRY();
}

CActionMan::NPCIMGENTRY& CActionMan::NPCIMGENTRY::operator=(const CActionMan::NPCIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::NPCIMGENTRY& CActionMan::NPCIMGENTRY::_op_assign_3(CActionMan::NPCIMGENTRY* pThis,
                                                               const CActionMan::NPCIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONFRAMEENTRY::~NPCACTIONFRAMEENTRY()
{
}

void CActionMan::NPCACTIONFRAMEENTRY::_dtor_0()
{
    this->~NPCACTIONFRAMEENTRY();
}

CActionMan::NPCACTIONFRAMEENTRY::NPCACTIONFRAMEENTRY(const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::NPCACTIONFRAMEENTRY::_ctor_1(const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONFRAMEENTRY::NPCACTIONFRAMEENTRY()
{
}

void CActionMan::NPCACTIONFRAMEENTRY::_ctor_0()
{
    new(this) NPCACTIONFRAMEENTRY();
}

CActionMan::NPCACTIONFRAMEENTRY& CActionMan::NPCACTIONFRAMEENTRY::operator=(const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::NPCACTIONFRAMEENTRY& CActionMan::NPCACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::NPCACTIONFRAMEENTRY* pThis, const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONENTRY::~NPCACTIONENTRY()
{
}

void CActionMan::NPCACTIONENTRY::_dtor_0()
{
    this->~NPCACTIONENTRY();
}

CActionMan::NPCACTIONENTRY::NPCACTIONENTRY(const CActionMan::NPCACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::NPCACTIONENTRY::_ctor_1(const CActionMan::NPCACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONENTRY::NPCACTIONENTRY()
{
}

void CActionMan::NPCACTIONENTRY::_ctor_0()
{
    new(this) NPCACTIONENTRY();
}

CActionMan::NPCACTIONENTRY& CActionMan::NPCACTIONENTRY::operator=(const CActionMan::NPCACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::NPCACTIONENTRY& CActionMan::NPCACTIONENTRY::_op_assign_3(CActionMan::NPCACTIONENTRY* pThis,
                                                                     const CActionMan::NPCACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY::~PETIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::PETIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY::PETIMGENTRY(const CActionMan::PETIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::PETIMGENTRY::_ctor_1(const CActionMan::PETIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY::PETIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::PETIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY& CActionMan::PETIMGENTRY::operator=(const CActionMan::PETIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::PETIMGENTRY& CActionMan::PETIMGENTRY::_op_assign_3(CActionMan::PETIMGENTRY* pThis,
                                                               const CActionMan::PETIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY::~PETACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::PETACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY::PETACTIONFRAMEENTRY(const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::PETACTIONFRAMEENTRY::_ctor_1(const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY::PETACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::PETACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY& CActionMan::PETACTIONFRAMEENTRY::operator=(const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::PETACTIONFRAMEENTRY& CActionMan::PETACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::PETACTIONFRAMEENTRY* pThis, const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONENTRY::~PETACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::PETACTIONENTRY::_dtor_0()
{
    return __sub_00013770(this, nullptr);
}

CActionMan::PETACTIONENTRY::PETACTIONENTRY(const CActionMan::PETACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::PETACTIONENTRY::_ctor_1(const CActionMan::PETACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONENTRY::PETACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::PETACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONENTRY& CActionMan::PETACTIONENTRY::operator=(const CActionMan::PETACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::PETACTIONENTRY& CActionMan::PETACTIONENTRY::_op_assign_3(CActionMan::PETACTIONENTRY* pThis,
                                                                     const CActionMan::PETACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY::~EMPLOYEEIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::EMPLOYEEIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY::EMPLOYEEIMGENTRY(const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::EMPLOYEEIMGENTRY::_ctor_1(const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY::EMPLOYEEIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::EMPLOYEEIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY& CActionMan::EMPLOYEEIMGENTRY::operator=(const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::EMPLOYEEIMGENTRY& CActionMan::EMPLOYEEIMGENTRY::_op_assign_3(
    CActionMan::EMPLOYEEIMGENTRY* pThis, const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY::~EMPLOYEEACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::EMPLOYEEACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY::EMPLOYEEACTIONFRAMEENTRY(const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::EMPLOYEEACTIONFRAMEENTRY::_ctor_1(const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY::EMPLOYEEACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::EMPLOYEEACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY& CActionMan::EMPLOYEEACTIONFRAMEENTRY::operator=(
    const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY& CActionMan::EMPLOYEEACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::EMPLOYEEACTIONFRAMEENTRY* pThis, const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONENTRY::~EMPLOYEEACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::EMPLOYEEACTIONENTRY::_dtor_0()
{
    return __sub_000137D0(this, nullptr);
}

CActionMan::EMPLOYEEACTIONENTRY::EMPLOYEEACTIONENTRY(const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::EMPLOYEEACTIONENTRY::_ctor_1(const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONENTRY::EMPLOYEEACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::EMPLOYEEACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONENTRY& CActionMan::EMPLOYEEACTIONENTRY::operator=(const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::EMPLOYEEACTIONENTRY& CActionMan::EMPLOYEEACTIONENTRY::_op_assign_3(
    CActionMan::EMPLOYEEACTIONENTRY* pThis, const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY::~SUMMONEDACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::SUMMONEDACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY::SUMMONEDACTIONFRAMEENTRY(const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SUMMONEDACTIONFRAMEENTRY::_ctor_1(const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY::SUMMONEDACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::SUMMONEDACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY& CActionMan::SUMMONEDACTIONFRAMEENTRY::operator=(
    const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SUMMONEDACTIONFRAMEENTRY& CActionMan::SUMMONEDACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::SUMMONEDACTIONFRAMEENTRY* pThis, const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONENTRY::~SUMMONEDACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::SUMMONEDACTIONENTRY::_dtor_0()
{
    return __sub_00013830(this, nullptr);
}

CActionMan::SUMMONEDACTIONENTRY::SUMMONEDACTIONENTRY(const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SUMMONEDACTIONENTRY::_ctor_1(const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONENTRY::SUMMONEDACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::SUMMONEDACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONENTRY& CActionMan::SUMMONEDACTIONENTRY::operator=(const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SUMMONEDACTIONENTRY& CActionMan::SUMMONEDACTIONENTRY::_op_assign_3(
    CActionMan::SUMMONEDACTIONENTRY* pThis, const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::~SHADOWPARTNERACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::SHADOWPARTNERACTIONFRAMEENTRY(
    const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_ctor_1(const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::SHADOWPARTNERACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::operator=(
    const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::SHADOWPARTNERACTIONFRAMEENTRY* pThis, const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONENTRY::~SHADOWPARTNERACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::SHADOWPARTNERACTIONENTRY::_dtor_0()
{
    return __sub_00013890(this, nullptr);
}

CActionMan::SHADOWPARTNERACTIONENTRY::SHADOWPARTNERACTIONENTRY(const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SHADOWPARTNERACTIONENTRY::_ctor_1(const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONENTRY::SHADOWPARTNERACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::SHADOWPARTNERACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONENTRY& CActionMan::SHADOWPARTNERACTIONENTRY::operator=(
    const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SHADOWPARTNERACTIONENTRY& CActionMan::SHADOWPARTNERACTIONENTRY::_op_assign_3(
    CActionMan::SHADOWPARTNERACTIONENTRY* pThis, const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::DRAGONACTIONENTRY::~DRAGONACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::DRAGONACTIONENTRY::_dtor_0()
{
    return __sub_000138F0(this, nullptr);
}

CActionMan::DRAGONACTIONENTRY::DRAGONACTIONENTRY(const CActionMan::DRAGONACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::DRAGONACTIONENTRY::_ctor_1(const CActionMan::DRAGONACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::DRAGONACTIONENTRY::DRAGONACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::DRAGONACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::DRAGONACTIONENTRY& CActionMan::DRAGONACTIONENTRY::operator=(const CActionMan::DRAGONACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::DRAGONACTIONENTRY& CActionMan::DRAGONACTIONENTRY::_op_assign_3(
    CActionMan::DRAGONACTIONENTRY* pThis, const CActionMan::DRAGONACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

/*_x_com_ptr<IUnknown> __cdecl get_unknown(Ztl_variant_t &v)
{
	return __sub_000176E0(v);
}*/
/*long __cdecl get_int32(Ztl_variant_t &v, long nDefault)
{
	return __sub_00006830(v, nDefault);
}*/
tagRECT&__cdecl operator___146404(tagRECT& rcDst, const SECRECT& rcSrc)
{
    return __sub_00007820(rcDst, rcSrc);
}

char*__cdecl ZStrUtil___Conv(const wchar_t* w, char* m, int32_t nChars)
{
    return __sub_00006250(w, m, nChars);
}

int32_t __cdecl operator___146393(const none& b1, const none& b2)
{
    return __sub_00006300(b1, b2);
}

uint32_t __fastcall _ZtlSecureTear_long_(long arg0, long* arg1)
{
    return __sub_0000B5C0(arg0, arg1);
}

void __cdecl load_tamingmob_action(long arg0, long arg1, long arg2, ZArray<CActionFrame>& arg3)
{
    return __sub_00026F80(arg0, arg1, arg2, arg3);
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzProperty___GUID_986515d9_0a0b_4929_8b4f_718682177b92___(
    const wchar_t* sUOL, _x_com_ptr<IWzProperty>& pObj, IUnknown* pUnkOuter)
{
    return __sub_0000B040(sUOL, pObj, pUnkOuter);
}

void __cdecl operatordelete_146388(void* __formal, void* ___formal)
{
    return __sub_00006200(__formal, __formal);
}

void __cdecl load_item_action(long arg0, long arg1, long arg2, ZArray<CActionFrame>& arg3, long arg4, long arg5,
                              int32_t arg6)
{
    return __sub_00025770(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

int32_t __cdecl ZStrUtil___ConvReqSize(const wchar_t* w, char* __formal, int32_t nChars)
{
    return __sub_00006230(w, __formal, nChars);
}

long __cdecl _ZtlSecureFuse_long_(const long* at, uint32_t uCS)
{
    return __sub_00007520(at, uCS);
}

void __cdecl action_mapping_for_ghost(long& nAction)
{
    switch (nAction)
    {
    case 124:
        nAction = 0;
        break;
    case 125:
        nAction = 2;
        break;
    case 126:
        nAction = 44;
        break;
    case 127:
        nAction = 41;
        break;
    case 128:
        nAction = 43;
        break;
    case 129:
        nAction = 45;
        break;
    case 130:
        nAction = 46;
        break;
    case 131:
        nAction = 48;
        break;
    default:
        break;
    }
    // return __sub_00006500(nAction);
}
