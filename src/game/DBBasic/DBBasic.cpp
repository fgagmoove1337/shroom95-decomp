// DBBasic.cpp
#include "DBBasic.hpp"

static ZArray<_LARGE_INTEGER> FAKE_ZArray_LARGE_INTEGER;
static ZArray<CashItemEntry> FAKE_ZArray_CashItemEntry;
static ZRefCountedDummy<GW_MiniGameRecord> FAKE_ZRefCountedDummy_GW_MiniGameRecord;
static ZRef<GW_ItemSlotBase> FAKE_ZRef_GW_ItemSlotBase;

static ZRefCounted_AllocHelper<ZRefCountedDummy<GW_MiniGameRecord>> FAKE_ZRefCounted_AllocHelper_GW_MiniGameRecord;

#include "DBBasic_regen.ipp"

CharacterData::~CharacterData()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CharacterData::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CharacterData::CharacterData(const CharacterData& arg0)
{
    _ctor_1(arg0);
}

void CharacterData::_ctor_1(const CharacterData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CharacterData::CharacterData()
{
}

void CharacterData::_ctor_0()
{
    //return __sub_00087540(this, nullptr);
    new(this) CharacterData();
}

int32_t CharacterData::HasWhiteScroll()
{
    //return __sub_000FF0F0(this, nullptr);
    return GetItemCount(2, 2340000) != 0;
}

ZRef<GW_WildHunterInfo> CharacterData::GetWildHunterInfo()
{
    //return __sub_000F9C70(this, nullptr);
    if (!pWildHunterInfo)
    {
        pWildHunterInfo = new GW_WildHunterInfo();
    }
    return pWildHunterInfo;
}

__POSITION* CharacterData::GetQuestHeadPosition()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const uint16_t& CharacterData::GetQuestNext(__POSITION*& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CharacterData::IsQuestInProgress(uint16_t usQuestID)
{
    //return __sub_000FCC10(this, nullptr, usQuestID);
    return mQuestRecord.GetPos(usQuestID) != nullptr;
}

const ZXString<char>* CharacterData::GetQuest(uint16_t usQRKey, ZXString<char>& sQRValue)
{
    //return __sub_000F1270(this, nullptr, usQRKey, sQRValue);
    return mQuestRecord.GetAt(usQRKey, &sQRValue);
}

const uint16_t& CharacterData::GetQuest_(__POSITION* arg0)
{
    //TODO correct?
    return m_mVisitorQuestLog.GetAtByPos(arg0);
}

ZXString<char> CharacterData::GetQuestEx(uint16_t usQuestID, ZXString<char>& sKey)
{
    //ZXString<char> ret;
    //return *__sub_000FC7E0(this, nullptr, &ret, usQuestID, sKey);
    CSimpleStrMap map;
    ZXString<char> result;
    if (mQuestRecordEx.GetAt(usQuestID, &map))
    {
        return map.GetValue(sKey);
    }

    return result;
}

ZXString<char> CharacterData::GetQuestExRawStr(uint16_t usQuestRecordKey)
{
    UNIMPLEMENTED;
}

ZXString<char>* CharacterData::SetQuest(uint16_t usQRKey, const ZXString<char>& sQRValue)
{
    //return __sub_000FB380(this, nullptr, usQRKey, sQRValue);
    return mQuestRecord.InsertPtrValue(usQRKey, &sQRValue);
}

int32_t CharacterData::RemoveQuest(uint16_t usQRKey)
{
    //return __sub_000F2020(this, nullptr, usQRKey);
    return mQuestRecord.RemoveKey(usQRKey);
}

void CharacterData::RemoveAllQuest()
{
    //__sub_000F4550(this, nullptr);
    mQuestRecord.RemoveAll();
}

int32_t CharacterData::SetQuestEx(const uint16_t arg0, ZXString<char>& arg1, ZXString<char>& arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CharacterData::InitQuestExFromRawStr(const uint16_t usQuestID, ZXString<char>& rawStr)
{
    //return __sub_000FCCB0(this, nullptr, usQuestID, rawStr);
    auto map = mQuestRecordEx.InsertPtrValue(usQuestID, nullptr);
    return map->InitFromRawString(rawStr.c_str());
}

unsigned long CharacterData::GetQuestMobID(uint16_t arg0)
{
    //TODO(quest) verify
    auto val = _GetQuestValue(arg0);
    return val.dwMobID;
}

ZXString<char> CharacterData::GetQuestBonusEXP(uint16_t usQuestRecordKey)
{
    auto val = _GetQuestValue(usQuestRecordKey);
    auto key = val.bAbs ? 0x7BE : 0x7BD;
    auto s = StringPool::GetInstance().GetString(key);
    return ZXString<char>::FromFmt(s.c_str(), val.dwBonusEXP);

    //ZXString<char> ret;
    //return *__sub_000FC370(this, nullptr, &ret, usQuestRecordKey);
}

_FILETIME CharacterData::GetQuestExpireTime(uint16_t usQuestRecordKey)
{
    return __sub_000FB3A0(this, nullptr, usQuestRecordKey);
}

_FILETIME CharacterData::GetQuestExpireTimeFromStringDate(uint16_t usQuestRecordKey)
{
    return __sub_000FB3A0(this, nullptr, usQuestRecordKey);
}

PlayTimeRecord CharacterData::GetQuestPlayTimeRecord(uint16_t usQuestID)
{
    PlayTimeRecord ret;
    return *__sub_000FC8C0(this, nullptr, &ret, usQuestID);
}

int32_t CharacterData::IsSuccessPlayTimeQuest(uint16_t usQuestID)
{
    //return __sub_000FCC10(this, nullptr, usQuestID);
    auto questMan = CQuestMan::GetInstance();
    if (!questMan->IsDailyPlayQuest(usQuestID))
    {
        return false;
    }

    auto limit = (double)(questMan->GetQuestTimeLimit2(usQuestID) / 24 / 60 / 60) * 0.9;
    auto playtime = GetQuestPlayTimeRecord(usQuestID);
    return playtime.usDoneCount >= limit;
}

CharacterData::SELECTEDMOB CharacterData::_GetQuestValue(uint16_t usQuestRecordKey)
{
    //CharacterData::SELECTEDMOB ret;
    //return *__sub_000FC2D0(this, nullptr, &ret, usQuestRecordKey);
    ZXString<char> val;
    mQuestRecord.GetAt(usQuestRecordKey, &val);
    SELECTEDMOB mob{};
    mob.Decode(val);
    return mob;
}

ZRef<GW_ItemSlotBase> CharacterData::GetItem_(long arg0, long arg1, _LARGE_INTEGER arg2, long& arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZRef<GW_ItemSlotBase> CharacterData::GetItem(long nTI, long nPos)
{
    /*ZRef<GW_ItemSlotBase> ret;
    return *__sub_0002B990(this, nullptr, &ret, nTI, nPos);*/

    if (nTI < 1 || nTI > 5)
    {
        return {};
    }

    if (nTI != 1)
    {
        auto& slot = aaItemSlot[nTI];
        if (nPos < 1 || nPos >= slot.GetCount())
        {
            return {};
        }
        return slot[nPos];
    }

    auto isZero = nPos == 0;
    if (nPos < 0)
    {
        int neg = -nPos;
        if (neg - 1000 <= 3)
        {
            return {}; //TODO
        }

        if (neg - 1100 <= 4)
        {
            return {}; //TODO
        }
    }

    if (isZero || nPos < -59 && nPos >= -100 || nPos > GetItemSlotCount(1) || nPos < -159)
    {
        return {};
    }

    if (nPos >= -100)
    {
        if (nPos >= 0)
        {
            return aaItemSlot[1][nPos];
        }
        else
        {
            return aEquipped[-nPos];
        }
    }

    //TODO

    return {};
}

int32_t CharacterData::SetItem(long nTI, long nPos, ZRef<GW_ItemSlotBase> pItem)
{
    return __sub_000946C0(this, nullptr, nTI, nPos, CreateNakedParam(pItem));
}

GW_ItemSlotPet* CharacterData::GetActiveItemSlotPet(long nIndex)
{
    //return __sub_0007F780(this, nullptr, nIndex);
    auto pos = FindCashItemSlotPosition(5, characterStat.aliPetLockerSN[nIndex]);
    return pos > 0 ? (GW_ItemSlotPet*)aaItemSlot[5][pos].op_arrow() : nullptr;
}

uint64_t CharacterData::Decode(CInPacket& iPacket, int32_t bBackwardUpdate)
{
    return __sub_000FCCE0(this, nullptr, iPacket, bBackwardUpdate);
}

void CharacterData::Encode(COutPacket& arg0, uint64_t arg1, int32_t arg2, TRADEINFO* arg3, int32_t arg4)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CharacterData::GetItemCount(long nTI, long nItemID)
{
    //return __sub_00422F70(this, nullptr, nTI, nItemID);
    auto slotCount = aaItemSlot[nTI].GetCount();
    auto count = 0;
    for (auto i = 1; i <= slotCount; ++i)
    {
        auto item = GetItem(nTI, i);
        if (item && item->nItemID == nItemID)
        {
            ++count;
        }
    }
    return count;
}

long CharacterData::GetItemSlotCount(long nTI)
{
    return __sub_0002A480(this, nullptr, nTI);
}

long CharacterData::GetEmptySlotCount(long nTI)
{
    //return __sub_00100170(this, nullptr, nTI);
    auto slotCount = aaItemSlot[nTI].GetCount();
    auto count = 0;
    for (auto i = 1; i <= slotCount; ++i)
    {
        if (!aaItemSlot[nTI][i])
        {
            ++count;
        }
    }
    return count;
}

long CharacterData::FindEmptySlotPosition(long nTI)
{
    //return __sub_0002A480(this, nullptr, nTI);
    auto slotCount = aaItemSlot[nTI].GetCount();
    auto count = 0;
    for (auto i = 1; i <= slotCount; ++i)
    {
        if (!aaItemSlot[nTI][i])
        {
            return i;
        }
    }
    return 0;
}

long CharacterData::FindGeneralItemSlotPosition(long arg0, long arg1, _FILETIME arg2, _LARGE_INTEGER arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CharacterData::FindCashItemSlotPosition(long nTI, long nItemID)
{
    return __sub_00422F70(this, nullptr, nTI, nItemID);
}

long CharacterData::FindCashItemSlotPosition(long nTI, _LARGE_INTEGER liSN)
{
    return __sub_0007E2C0(this, nullptr, nTI, liSN);
}

int32_t CharacterData::IsEquipSlotExpired(long nPos, const _FILETIME& ftNow)
{
    return __sub_0007CE20(this, nullptr, nPos, ftNow);
}

int32_t CharacterData::IsEquiped(long nItemID)
{
    return __sub_00101040(this, nullptr, nItemID);
}

long CharacterData::GetIncLevel()
{
    return __sub_000F7010(this, nullptr);
}

int32_t CharacterData::IsEquipedDualDagger()
{
    return __sub_000FF0F0(this, nullptr);
}

void CharacterData::InitAdditionalItemEffect()
{
    __sub_000F4DB0(this, nullptr);
}

void CharacterData::ClearVisitorLog()
{
    m_mVisitorQuestLog.RemoveAll();
}

CharacterData& CharacterData::operator=(const CharacterData& arg0)
{
    return _op_assign_43(this, arg0);
}

CharacterData& CharacterData::_op_assign_43(CharacterData* pThis, const CharacterData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CharacterData::SELECTEDMOB::SELECTEDMOB(const ZXString<char>& arg0)
{
    Decode(arg0);
}

void CharacterData::SELECTEDMOB::_ctor_0(const ZXString<char>& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CharacterData::SELECTEDMOB::SELECTEDMOB(unsigned long dwMobID, int32_t bAbs, long dwBonusEXP)
{
    //_ctor_1( arg0, arg1, arg2);
    this->dwMobID = dwMobID;
    this->bAbs = bAbs;
    this->dwBonusEXP = dwBonusEXP;
}

void CharacterData::SELECTEDMOB::_ctor_1(unsigned long arg0, int32_t arg1, long arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CharacterData::SELECTEDMOB::SELECTEDMOB()
{
}

void CharacterData::SELECTEDMOB::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CharacterData::SELECTEDMOB::Init()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CharacterData::SELECTEDMOB::Encode()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool CharacterData::SELECTEDMOB::Decode(const ZXString<char>& sQRValue)
{
    //return __sub_000FB4B0(this, nullptr, sQRValue);
    size_t after = 0;
    for (auto i = 0; i < 3; ++i)
    {
        auto ix = sQRValue.Find('/', after);
        if (ix == SIZE_MAX)
        {
            return false;
        }

        auto sub = sQRValue.Substring(after, ix);
        auto num = atoi(sub.c_str());
        after = ix + 1;

        switch (i)
        {
        case 0:
            dwMobID = num;
            break;
        case 1:
            bAbs = num;
            break;
        case 2:
            dwBonusEXP = num;
            break;
        }
    }

    return true;
}

void PARTYMEMBER::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void PARTYMEMBER::Decode(CInPacket& iPacket)
{
    __sub_000F2AE0(this, nullptr, iPacket);
}

long PARTYMEMBER::FindIndex(ZXString<char> sName)
{
    return __sub_000F7720(this, nullptr, CreateNakedParam(sName));
}

long PARTYMEMBER::FindIndex_(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> PARTYMEMBER::GetName(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long PARTYMEMBER::GetCharacterID(ZXString<char> sName)
{
    return __sub_000F8960(this, nullptr, CreateNakedParam(sName));
}

ZXString<char> PARTYMEMBER::GetBossName()
{
    return __sub_000F7830(this, nullptr);
}

long PARTYMEMBER::GetMemberCount()
{
    return __sub_000F1C00(this, nullptr);
}

int32_t PARTYMEMBER::IsFull()
{
    return __sub_000F1C30(this, nullptr);
}

int32_t PARTYMEMBER::IsBossOnline()
{
    return __sub_000F1C30(this, nullptr);
}

void SINGLEMACRO::Encode(COutPacket& oPacket)
{
    __sub_000F9710(this, nullptr, oPacket);
}

void SINGLEMACRO::Decode(CInPacket& iPacket)
{
    __sub_000F97F0(this, nullptr, iPacket);
}

void GUILDMEMBER::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GUILDMEMBER::Decode(CInPacket& iPacket)
{
    __sub_000F2B40(this, nullptr, iPacket);
}

void GUILDMEMBER::Set(const char* arg0, long arg1, long arg2, long arg3, int32_t arg4, long arg5)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void PARTYDATA::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void PARTYDATA::Decode(CInPacket& iPacket)
{
    __sub_000F2B00(this, nullptr, iPacket);
}

unsigned long PARTYDATA::TOWNPORTAL::GetTownID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long PARTYDATA::TOWNPORTAL::GetFieldID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long PARTYDATA::TOWNPORTAL::GetSkillID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

tagPOINT PARTYDATA::TOWNPORTAL::GetFieldPortalPos()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void PARTYDATA::TOWNPORTAL::Set(unsigned long dwTownID, unsigned long dwFieldID, long nSkillId, tagPOINT ptFieldPortal)
{
    __sub_005CC690(this, nullptr, dwTownID, dwFieldID, nSkillId, CreateNakedParam(ptFieldPortal));
}

CSimpleStrMap::~CSimpleStrMap()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CSimpleStrMap::_dtor_0()
{
    return __sub_000F58A0(this, nullptr);
}

CSimpleStrMap::CSimpleStrMap(const CSimpleStrMap& arg0)
{
    _ctor_1(arg0);
}

void CSimpleStrMap::_ctor_1(const CSimpleStrMap& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSimpleStrMap::CSimpleStrMap()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CSimpleStrMap::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CSimpleStrMap::GetValue(ZXString<char>& key)
{
    ZXString<char> value;
    m_mValues.GetAt(key, &value);
    return value;
    // return __sub_000F9900(this, nullptr, key);
}

int32_t CSimpleStrMap::SetValue(ZXString<char>& arg0, ZXString<char>& arg1)
{
    //TODO return type
    m_mValues.SetAt(arg0, arg1);
    return 0;
}

int32_t CSimpleStrMap::InitFromRawString(const char* strRaw)
{
    return __sub_000FC580(this, nullptr, strRaw);
}

ZXString<char> CSimpleStrMap::GetRawString()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSimpleStrMap& CSimpleStrMap::operator=(const CSimpleStrMap& arg0)
{
    return _op_assign_7(this, arg0);
}

CSimpleStrMap& CSimpleStrMap::_op_assign_7(CSimpleStrMap* pThis, const CSimpleStrMap& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MACROSYSDATA::~MACROSYSDATA()
{
}

void MACROSYSDATA::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MACROSYSDATA::MACROSYSDATA(const MACROSYSDATA& arg0)
{
    _ctor_1(arg0);
}

void MACROSYSDATA::_ctor_1(const MACROSYSDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MACROSYSDATA::MACROSYSDATA()
{
    //TODO UNIMPLEMENTED; //_ctor_0();
}

void MACROSYSDATA::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MACROSYSDATA::Reset()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MACROSYSDATA::Encode(COutPacket& oPacket)
{
    __sub_000F9860(this, nullptr, oPacket);
}

void MACROSYSDATA::Decode(CInPacket& iPacket)
{
    __sub_000F98B0(this, nullptr, iPacket);
}

MACROSYSDATA& MACROSYSDATA::operator=(const MACROSYSDATA& arg0)
{
    return _op_assign_6(this, arg0);
}

MACROSYSDATA& MACROSYSDATA::_op_assign_6(MACROSYSDATA* pThis, const MACROSYSDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CashItemEntry::~CashItemEntry()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CashItemEntry::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CashItemEntry::CashItemEntry(const CashItemEntry& arg0)
{
    _ctor_1(arg0);
}

void CashItemEntry::_ctor_1(const CashItemEntry& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CashItemEntry::CashItemEntry()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CashItemEntry::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CashItemEntry::Set(ZRef<GW_ItemSlotBase> pItem, long nPOS)
{
    __sub_000F5810(this, nullptr, CreateNakedParam(pItem), nPOS);
}

CashItemEntry& CashItemEntry::operator=(const CashItemEntry& arg0)
{
    return _op_assign_4(this, arg0);
}

CashItemEntry& CashItemEntry::_op_assign_4(CashItemEntry* pThis, const CashItemEntry& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PARCEL::~PARCEL()
{
    UNIMPLEMENTED; // _dtor_0();
}

void PARCEL::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PARCEL::PARCEL(const PARCEL& arg0)
{
    _ctor_1(arg0);
}

void PARCEL::_ctor_1(const PARCEL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PARCEL::PARCEL()
{
    UNIMPLEMENTED; //_ctor_0();
}

void PARCEL::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void PARCEL::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void PARCEL::Decode(CInPacket& iPacket)
{
    __sub_000F88A0(this, nullptr, iPacket);
}

PARCEL& PARCEL::operator=(const PARCEL& arg0)
{
    return _op_assign_5(this, arg0);
}

PARCEL& PARCEL::_op_assign_5(PARCEL* pThis, const PARCEL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EQUIPPED_SETITEM::~EQUIPPED_SETITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void EQUIPPED_SETITEM::_dtor_0()
{
    return __sub_0032CC70(this, nullptr);
}

EQUIPPED_SETITEM::EQUIPPED_SETITEM(const EQUIPPED_SETITEM& arg0)
{
    _ctor_1(arg0);
}

void EQUIPPED_SETITEM::_ctor_1(const EQUIPPED_SETITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EQUIPPED_SETITEM::EQUIPPED_SETITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void EQUIPPED_SETITEM::_ctor_0()
{
    return __sub_0032CC80(this, nullptr);
}

EQUIPPED_SETITEM& EQUIPPED_SETITEM::operator=(const EQUIPPED_SETITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

EQUIPPED_SETITEM& EQUIPPED_SETITEM::_op_assign_3(EQUIPPED_SETITEM* pThis, const EQUIPPED_SETITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint32_t __fastcall _ZtlSecureTear_unsignedlong_(unsigned long arg0, unsigned long* arg1)
{
    return __sub_000F3F90(arg0, arg1);
}

ZRef<GW_ItemSlotBase> __cdecl get_equiped_from_item(long nItemID, const CharacterData& cd)
{
    return __sub_000F7090(nItemID, cd);
}

int64_t __cdecl SubTime(const _FILETIME& ftLhs, const _FILETIME& ftRhs)
{
    return __sub_000F1CA0(ftLhs, ftRhs);
}

uint32_t __fastcall _ZtlSecureTear_unsignedshort_(uint16_t arg0, uint16_t* arg1)
{
    return __sub_000F3FC0(arg0, arg1);
}

unsigned long __cdecl _ZtlSecureFuse_unsignedlong_(const unsigned long* at, uint32_t uCS)
{
    return __sub_000F1ED0(at, uCS);
}

uint32_t __fastcall _ZtlSecureTear_unsignedchar_(unsigned char arg0, unsigned char* arg1)
{
    return __sub_000F3ED0(arg0, arg1);
}

int32_t __cdecl _anon_IsExist_(ZArray<_LARGE_INTEGER>& aliSN, _LARGE_INTEGER& liFindSN)
{
    return __sub_000F2B80(aliSN, liFindSN);
}

uint32_t __fastcall _ZtlSecureTear_short_(short arg0, short* arg1)
{
    return __sub_000F3F30(arg0, arg1);
}

uint16_t __cdecl _ZtlSecureFuse_unsignedshort_(const uint16_t* at, uint32_t uCS)
{
    return __sub_000F1F10(at, uCS);
}

CInPacket& __op_shift_right_0(CInPacket& iPacket, PARTYMEMBER& val)
{
    val.Decode(iPacket);
    return iPacket;
}
