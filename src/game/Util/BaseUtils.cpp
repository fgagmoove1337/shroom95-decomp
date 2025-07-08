#include "BaseUtils.hpp"

#include <ActionFrame/ActionFrame.hpp>

#include "WvsContext/WvsContext.hpp"

#include "asm_helper.h"
#include "SkillUtils.hpp"
#include "JobUtils.hpp"
#include "WvsApp/WvsApp.hpp"
#include "MonsterBookMan/MonsterBookMan.hpp"

const wchar_t*__cdecl _Int2StrW(int32_t n, wchar_t* s)
{
    return _itow(n, s, 10);
}

const char*__cdecl _Int2Str(int32_t n, char* s)
{
    return _itoa(n, s, 10);
}

_x_com_ptr<IUnknown> __cdecl get_unknown(Ztl_variant_t& v)
{
    const auto unk = v.GetUnknown(false, false);
    if (!unk)
    {
        return _x_com_ptr<IUnknown>();
        //_com_raise_error(E_POINTER);
    }


    _x_com_ptr<IWzUOL> uol;
    const auto hr = unk->QueryInterface(__uuidof(IWzUOL), reinterpret_cast<void**>(&uol));
    if (hr < 0 && hr != E_NOINTERFACE)
    {
        _com_issue_error(hr);
    }

    if (hr == E_NOINTERFACE)
    {
        return _x_com_ptr(unk);
    }

    const auto path = uol->GetfilePath();
    const auto obj = get_rm()->GetObjectA(path, vtMissing, vtMissing).GetUnknown();
    return _x_com_ptr(obj);

    /*
        _x_com_ptr<IWzUOL> uol(unk);
        auto path = uol->GetfilePath();

        Ztl_variant_t param;
        Ztl_variant_t aux;
        auto obj = _D_G_RM->GetObjectA(path, param, aux);
        return _x_com_ptr<IUnknown>(obj.GetUnknown(false, false));*/
}

const uint32_t g_anWeaponType[18] =
{
    0x00000000, 0x0000001e, 0x0000001f, 0x00000020,
    0x00000021, 0x00000025, 0x00000026, 0x00000028,
    0x00000029, 0x0000002a, 0x0000002b, 0x0000002c,
    0x0000002d, 0x0000002e, 0x0000002f, 0x00000030,
    0x00000031, 0x00000027
};

static std::array<IWzFont*, 0x61> spFontBasic{};

/*NAKED */
int get_magic_attack_element_attribute(wchar_t const* s, int32_t* nElemAttr)
{
    //_RASM_PLACEHOLDER(0x658fa0)
    UNIMPLEMENTED;
}

void GetModuleFolderName(char* sDir)
{
    GetModuleFileNameA(nullptr, sDir, 0x104);
    // TODO strip file

    UNIMPLEMENTED;
}

long _anon_calc_evar(long arg1, long arg2, long arg3, long arg4, long arg5)
{
    // TODO 0x724d50
    return 0;
}

ZXString<char> format_comma_integer(int32_t i)
{
    // TODO 0x965b20
    return ZXString("");
}

int32_t get_mobspecies_code_from_name(Ztl_bstr_t sName)
{
    //_RASM_PLACEHOLDER(0x4baa20)
    // UNIMPLEMENTED;
    return 0;
}

int is_fieldtype_upgradetomb_usable(long nFieldType, long nFieldID)
{
    switch (nFieldType)
    {
    case 1:
    case 3:
    case 4:
    case 5:
    case 7:
    case 10:
    case 0xb:
    case 0xf:
        break;
    default:
        if ((nFieldID / 100000000 != 9) && (nFieldID / 1000 != 0x30d9a))
        {
            return nFieldID / 1000000 != 0x186;
        }
    }
    return 0;
}

void make_SingleColor_alpha_blur_1(_x_com_ptr<IWzCanvas> pCanvas, uint16_t color, uint16_t radius)
{
    // TODO 0x95bc60
}

int GetPersonalShopTax(int32_t nMoney)
{
    // TODO 0x697920
    UNIMPLEMENTED;
}

bool isAllConditionsSatisfied(uint16_t questId)
{
    // TODO 0x0082c310
    return false;
}

void make_SingleColor_alpha_blur_0(_x_com_ptr<IWzRawCanvas> pRawCanvas, uint16_t color, uint16_t radius)
{
    // TODO 0x95b790
}

int calculate_parbolic_motion_duration(int32_t y1, int32_t y2, int32_t bDropExplosiveNoOwn)
{
    return 0; // TODO 0x50f690
}

int _anon_FindGrade_(int grade)
{
    static std::array<int, 4> grades{
        0x5a,
        0xa0,
        0xe6,
        0x153
    };

    for (int i = 0; i < grades.size(); ++i)
    {
        if (grade < grades[i])
        {
            return i;
        }
    }
    return grades.size();
}

NAKED void DecSpeed(double* v, double f, double m, double vMax, double tSec)
{
    // TODO
    _RASM_PLACEHOLDER(0x9908c0);
}

int DecMPVal(int nJob)
{
    long lVar1{};
    auto ctx = CWvsContext::GetInstance();

    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 8;
    case 1:
        return 4;
    case 2:
        lVar1 = ctx->GetBasicStat()._ZtlSecureGet_nINT();
        return (lVar1 * 3) / 0x28 + 0x1e;
    case 3:
    case 4:
        return 0xc;
    case 5:
        return 0x10;
    default:
        return 0;
    }
}

int DecHPVal(int nJob)
{
    int iVar1;

    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 0xc;
    case 1:
        return 0x36;
    case 2:
        break;
    case 3:
    case 4:
        return 0x14;
    case 5:
        return 0x2a;
    default:
        return 0;
    }
    if (nJob / 100 != 0x20)
    {
        iVar1 = is_evan_job(nJob);
        return (-(iVar1 != 0) & 6) + 10;
    }
    return 0x18;
}

int IncHPVal(int nJob)
{
    int iVar1;

    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 8;
    case 1:
        return 0x14;
    case 2:
        if (nJob / 100 != 0x20)
        {
            iVar1 = is_evan_job(nJob);
            return (-(iVar1 != 0) & 6) + 6;
        }
        return 0x14;
    case 3:
    case 4:
        return 0x10;
    case 5:
        return 0x12;
    default:
        return 0;
    }
}

int IncMPVal(int nJob)
{
    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 6;
    case 1:
        return 2;
    case 2:
        return 0x12;
    case 3:
    case 4:
        return 10;
    case 5:
        return 0xe;
    default:
        return 0;
    }
}

void get_damage_adjusted_by_elemAttr_0(double damage, const SKILLENTRY* pSkill, const int32_t* aDamagedElemAttr,
                                       const int32_t nSLV, double dAdjustByBuff, double dBoost)
{
    // TODO 0x723270
}

int get_damage_adjusted_by_elemAttr_1(double damage, int32_t nAttr, double dAdjust, double dBoost)
{
    // TODO 0x7231e0
    return 0;
}

int get_next_level_exp(int level)
{
    static NEXTLEVEL nextlevel;
    if (level > 200)
    {
        return -1;
    }
    level = level < 1 ? 1 : level;

    return nextlevel.GetNextLevelExp(level);
}

int32_t get_random_magic_attack_action(int32_t nAttackActionType, int32_t nWT, const SKILLENTRY* pSkill, int32_t nSLV,
                                       uint32_t nRandNumber)
{
    // TODO 0x70b840
    UNIMPLEMENTED;
}

long __cdecl get_weapon_typeindex_from_weapon_type(long param_1)
{
    int iVar1;

    iVar1 = 1;
    do
    {
        if (g_anWeaponType[iVar1] == param_1)
        {
            return iVar1;
        }
        iVar1 = iVar1 + 1;
    }
    while (iVar1 < 0x12);
    return 0;
}

void clear_basic_font()
{
    for (auto& font : spFontBasic)
    {
        if (font)
        {
            font->Release();
            font = nullptr;
        }
    }
}

void ResetLSP()
{
    UNIMPLEMENTED;
}

void MSLoop_Remove()
{
    // UNIMPLEMENTED;
    return; // TODO
}

ZXString<char> get_labeled_string_1(_x_com_ptr<IWzProperty> pProp, char* str, Ztl_bstr_t key)
{
    Ztl_bstr_t bstr(str);
    auto item = pProp->Getitem(bstr).GetUnknown(false, false);
    _x_com_ptr<IWzProperty> subProp(item);
    if (!subProp)
    {
        // TODO verify
        return ZXString<char>();
    }

    auto label = subProp->Getitem(key);
    if (label.vt == VT_BSTR)
    {
        ZXString<char> result;
        result.AssignWideStr(static_cast<const wchar_t*>(label.bstrVal));
        return result;
    }
    else
    {
        return ZXString<char>();
    }

    // 0095dbf0 TODO
    // UNIMPLEMENTED;
}

ZXString<char> get_labeled_string_0(_x_com_ptr<IWzProperty> pProp, long id, Ztl_bstr_t sKey)
{
    wchar_t buf[16];
    _itow_s(id, buf, 10);
    Ztl_bstr_t bstr(buf);

    auto item = pProp->Getitem(Ztl_bstr_t(buf)).GetUnknown(false, false);
    _x_com_ptr<IWzProperty> subProp(item);

    auto label = subProp->Getitem(sKey);
    if (label.vt == VT_BSTR)
    {
        ZXString<char> result;
        result.AssignWideStr(static_cast<const wchar_t*>(label.bstrVal));
        return result;
    }
    else
    {
        return ZXString<char>();
    }
    // 0x95d9d0 TODO
    UNIMPLEMENTED;
}

bool is_treat_singly_1(GW_ItemSlotBase& item)
{
    UNIMPLEMENTED;
}

ZXString<char> GetChannelName(int channel)
{
    ZXString<char> result;
    switch (channel)
    {
    case -1:
        result = "CashShop";
        break;
    case -2:
        result = "Offline";
        break;
    default:
        result.Format("Channel %d", channel);
        break;
    }

    return result;
}

int32_t get_attack_speed_degree(int32_t nDegree, int32_t nSkillID, int32_t nWeaponBooster, int32_t nPartyBooster,
                                int32_t nAuraBooster, int32_t nFrozen)
{
    // TODO 006ee880
    //  TODO verify
    switch (nSkillID)
    {
    case 4311003:
    case 4321001:
    case 4331000:
    case 4331002:
    case 4341002:
    case 4341003:
        nPartyBooster = 0;
        nAuraBooster = 0;
        nFrozen = 0;
        break;
    case 4001334:
        nDegree = nDegree - 2;
        break;
    default:
        break;
    }

    nDegree = (nDegree + (nWeaponBooster + nPartyBooster) + nAuraBooster);
    // TODO
    if (nFrozen && nDegree < 10)
    {
        auto nFrozenDegree = 10 - nDegree;
        auto frozenRatio = ((double)nFrozen / 100.);
        nDegree = nDegree + (int)(frozenRatio * nFrozenDegree);
    }

    // return std::clamp(nDegree, 2, 10);
    return nDegree; // TODO
}

int get_shield_mastery(CharacterData* cd)
{
    // 00709e80
    UNIMPLEMENTED;
}

bool IsAbleTamingMobOneTimeAction(int32_t nAction, int32_t nVehicleID)
{
    // 0x4b7e70
    return false; // TODO
}

bool IsAbleTamingMobAction(int32_t nAction, int32_t nVehicleID)
{
    if (nVehicleID == 1932016)
    {
        switch (nAction)
        {
        case 0x38:
        case 0xd2:
        case 0xd9:
        case 0xdd:
        case 0xdf:
        case 0xe3:
        case 0xea:
        case 0xed:
            return true;
        default:
            break;
        }
    }

    switch (nAction)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
        return true;
    default:
        return false;
    }
}

bool is_shoot_morph_action(int action)
{
    if ((action != 0x12) && (action != 0x13))
    {
        return false;
    }
    return true;
}

bool is_alert_back_action(int action)
{
    return action == 0x40 || action == 0x41;
}

bool is_pronestab_action(int action)
{
    return action == 0x29 || action == 0x39;
}

bool is_shoot_action(int action)
{
    if (((((action < 0x1f) || (0x24 < action)) && (action != 0x4b)) &&
            (((action != 0x74 && (action != 0x6f)) &&
                ((action != 100 && ((action != 0x6d && (action != 0x6e)))))))) &&
        ((action != 0x7a &&
            (((((action != 0x73 && (action != 0x7b)) && (action != 0x8e)) &&
                    ((action != 0x10c && (action != 0x10d)))) &&
                ((action != 200 && (action != 0xcb))))))))
    {
        return false;
    }
    return true;
}

bool is_stand_action(int action)
{
    if ((((((action < 2) || (3 < action)) && (action != 0x30)) &&
                ((action != 0x31 && (action != 0x32)))) &&
            ((action != 0x33 && ((action != 0x34 && (action != 0x35)))))) &&
        ((action != 0x36 && (action != 0x7d))))
    {
        return false;
    }
    return true;
}

int get_action_from_act_dir(int l)
{
    return l / 2;
}

bool is_magic_attack_action(int action)
{
    return (action - 37) < 3;
}

bool is_sticker_bodypart(int bodyPart)
{
    if (((((((bodyPart != 1) && (bodyPart != 5)) && (bodyPart != 6)) &&
                    ((bodyPart != 7 && (bodyPart != 8)))) &&
                ((bodyPart != 0xb && ((bodyPart != 3 && (bodyPart != 2)))))) &&
            (bodyPart != 0xc)) &&
        ((((bodyPart != 0xd && (bodyPart != 0xf)) && (bodyPart != 0x10)) &&
            (((bodyPart != 9 && (bodyPart != 4)) &&
                ((bodyPart != 10 && ((bodyPart != 0x12 && (bodyPart != 0x13))))))))))
    {
        return false;
    }
    return true;
}

double get_damage_adjusted_by_assist_charged_elemAttr(double damage, long const* aDamagedElemAttr,
                                                      SecondaryStat const* ss, CharacterData const* cd)
{
    auto assistCharge = ss->_ZtlSecureGet_nAssistCharge_();
    if (!assistCharge)
    {
        return 0.;
    }

    auto rCharge = ss->_ZtlSecureGet_rAssistCharge_();
    auto elem = get_element_by_charged_skillid(rCharge);
    if (elem == 0)
    {
        return 0.;
    }

    const SKILLENTRY* se{};
    auto lvl = CSkillInfo::GetInstance()->GetSkillLevel(
        *cd,
        *ss,
        rCharge,
        &se);
    if (!lvl)
    {
        return 0.;
    }

    auto lvlData = se->GetLevelData(lvl);
    auto z = lvlData._ZtlSecureGet_nZ();
    auto nDmg = lvlData._ZtlSecureGet_nDamage();

    double dZ = (double)z / 100.;
    double a = (((double)nDmg / 100.0 - 1.0)) * damage * 0.5;
    // TODO use dZ
    UNIMPLEMENTED;
    return get_damage_adjusted_by_elemAttr(
        a, se, aDamagedElemAttr, lvl, 0.0, 0.0);
}

bool is_correct_magic_attack(int32_t nAttackActionType, int32_t nWT, int32_t nAction, const SKILLENTRY* pSkill,
                             int32_t nSLV)
{
    // 0x70ba60
    UNIMPLEMENTED;
}

bool is_correct_siege_attack(int32_t nAction, int skillId)
{
    if (skillId < 0x217e775)
    {
        if (skillId == 0x217e774)
        {
            if (nAction == 0xe0)
            {
                return true;
            }
        }
        else if (skillId == 0x217c05c)
        {
            if (nAction == 0xd8)
            {
                return true;
            }
        }
        else if ((skillId == 0x217e76d) && (nAction == 0xdc))
        {
            return true;
        }
    }
    else if ((skillId == 0x217e775) && (nAction == 0xe2))
    {
        return true;
    }
    return false;
}

bool is_town_field_id(int fieldId)
{
    if ((((((((fieldId != 100000000) && (fieldId != 101000000)) && (fieldId != 102000000)) &&
                        (((fieldId != 103000000 && (fieldId != 104000000)) &&
                            ((fieldId != 0x642c9ac && ((fieldId != 120000000 && (fieldId != 200000000)))))))) &&
                    (fieldId != 211000000)) &&
                (((fieldId != 220000000 && (fieldId != 221000000)) && (fieldId != 222000000)))) &&
            (((fieldId != 230000000 && (fieldId != 240000000)) &&
                ((fieldId != 250000000 && ((fieldId != 251000000 && (fieldId != 260000000)))))))) &&
        (((fieldId != 261000000 &&
                (((((fieldId != 500000000 && (fieldId != 600000000)) && (fieldId != 680000000)) &&
                        ((fieldId != 701000000 && (fieldId != 0x29c86a08)))) &&
                    ((fieldId != 702000000 && ((fieldId != 0x29d93220 && (fieldId != 740000000)))))))) &&
            ((fieldId != 741000000 &&
                (((fieldId != 742000000 && (fieldId != 800000000)) && (fieldId != 801000000))))))))
    {
        return false;
    }
    return true;
}

ZXString<char> get_bodyaprt_name(int bodyPart)
{
    UNIMPLEMENTED;
}

int GetParcelTax(int money)
{
    UNIMPLEMENTED;
}

bool is_final_action(int action)
{
    if ((((action != 8) && (action != 0xc)) && (action != 0xf)) &&
        (((action != 0x12 && (action != 0x15)) && ((action != 0x24 && (action != 0x27))))))
    {
        return false;
    }
    return true;
}
