// User.cpp
#include "User.hpp"

#include "spdlog/spdlog.h"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRefCounted_AllocHelper<CGrenade> FAKE_ZRefCounted_AllocHelper_CGrenade{};
static ZRef<CGrenade> FAKE_ZRef_CGrenade{};
static ZRef<CPet> FAKE_ZRef_CPet{};

#include "User_regen.ipp"

USERLAYER::~USERLAYER()
{
    UNIMPLEMENTED; // _dtor_0();
}

void USERLAYER::_dtor_0()
{
    return __sub_004DF4B0(this, nullptr);
}

USERLAYER::USERLAYER(const USERLAYER& arg0)
{
    _ctor_1(arg0);
}

void USERLAYER::_ctor_1(const USERLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

USERLAYER::USERLAYER()
{
}

void USERLAYER::_ctor_0()
{
    new(this) USERLAYER();
}

USERLAYER& USERLAYER::operator=(const USERLAYER& arg0)
{
    return _op_assign_3(this, arg0);
}

USERLAYER& USERLAYER::_op_assign_3(USERLAYER* pThis, const USERLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::~CUser()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUser::_dtor_0()
{
    return __sub_004EB030(this, nullptr);
}

CUser::CUser(const CUser& arg0)
{
    _ctor_1(arg0);
}

void CUser::_ctor_1(const CUser& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::CUser(unsigned long dwCharacterId)
{
    m_nTeamForMCarnival = 255;
    m_dwPhaseAlpha = 0;
    m_nLastMAType = 1;
    m_tRideVehicleLeft = -1;
    m_tOakCaskLeft = -1;
    m_bRepeatEffectRemove = true;
    this->m_dwCharacterId = dwCharacterId;

    m_apPet.Alloc(3);

    this->_ZtlSecurePut_m_nNameTagType(0);
    this->_ZtlSecurePut_m_nEmotion(0);
    this->_ZtlSecurePut_m_nChatBalloonType(0);
}

void CUser::_ctor_0(unsigned long dwCharacterId)
{
    //return __sub_004F4600(this, nullptr, dwCharacterId);
    new(this) CUser(dwCharacterId);
}

void CUser::Init(const AvatarLook& al, int32_t bShowAdminEffect)
{
    __sub_00500610(this, nullptr, al, bShowAdminEffect);
}

unsigned long CUser::GetCharacterId()
{
    return __sub_0010ABC0(this, nullptr);
}

const char* CUser::GetCharacterName()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned char CUser::GetCharacterLevel()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const SecondaryStat& CUser::GetSecondaryStat()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsLocalUser()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsPreview()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsRemoteUser()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsAdminHide()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsMovingMode()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsEvanJob()
{
    //return __sub_000BC000(this, nullptr);
    return is_evan_job(GetJobCode());
}

int32_t CUser::IsDarkSight()
{
    return __sub_000FFFB0(this, nullptr);
}

int32_t CUser::IsWindWalk()
{
    return __sub_000FFFE0(this, nullptr);
}

int32_t CUser::IsSneak()
{
    return __sub_00100010(this, nullptr);
}

int32_t CUser::IsDojangInvincible()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsCyclone()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsDoingBoomerangStep(long nReason)
{
    return __sub_00503370(this, nullptr, nReason);
}

int32_t CUser::IsDoingDojangBamboo(long nReason)
{
    return __sub_00503370(this, nullptr, nReason);
}

int32_t CUser::IsDoingHashing()
{
    return __sub_004DF340(this, nullptr);
}

_x_com_ptr<IWzVector2D> CUser::GetVecCtrl()
{
    //return __sub_000BBED0(this, nullptr);
    return m_pvc;
}

/* TODO _x_com_ptr<IWzVector2D> CUser::GetVecCtrl() {
	return __sub_004DF390(this, nullptr);
}*/
int32_t CUser::IsStand()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsOnFoothold()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsOnLadderOrRope()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsSwimOrFly()
{
    auto vec = this->GetVecCtrlUser();
    if (vec->IsSwimming())
        return true;

    return vec->IsUserFlying();
}

CStaticFoothold* CUser::GetFoothold()
{
    return __sub_0053A280(this, nullptr);
}

void CUser::OnAvatarModified()
{
    //__sub_004F6F00(this, nullptr);
    for (auto& pet : m_apPet)
    {
        if (!pet)
            break;
        pet->OnAvatarModified();
    }

    SetAbilityEquip();
    SetSetItemEffect();
    UpdateKeywordEffects();
    m_ItemEffect.UpdateEffects(m_avatarLook.anHairEquip.data());
}

void CUser::SetMoveAction(long nMA, int32_t bReload)
{
    //__sub_004DF540(this, nullptr, nMA, bReload);

    auto jaguarId = m_nRidingVehicleID;

    bool ridingJaguar = is_wildhunter_jaguar_vehicle_0(jaguarId);
    if (!ridingJaguar && !bReload && nMA == m_nMoveAction)
    {
        return;
    }

    if (!bReload && !ridingJaguar)
    {
        long dir = 0;
        auto raw = MoveAction2RawAction(nMA, &dir);
        auto charAct = ConvertCharacterAction(raw);
        long dirChar = 0;
        auto curCharAct = GetCurCharacterAction(&dirChar);
        if (curCharAct == charAct && dirChar == dir && raw == m_nTamingMobAction)
        {
            return;
        }
    }


    CAvatar::SetMoveAction(nMA, bReload);
    auto oneTimeAction = 0;
    if (m_dwMorphTemplateID)
    {
        oneTimeAction = 2;
    }
    else
    {
        oneTimeAction = GetCurCharacterAction(nullptr);
    }

    m_ItemEffect.ChangeAction(oneTimeAction);

    //TODO(game) rest
}

long CUser::GetAttackActionSpeed(long nSkillID)
{
    return __sub_004DF740(this, nullptr, nSkillID);
}

const long CUser::GetAuraBooster()
{
    return __sub_004DE900(this, nullptr);
}

int32_t CUser::SetAttackAction(long nAttackAction, long nAttackSpeed, const SKILLENTRY* pSkill, long nSLV)
{
    return __sub_004E70B0(this, nullptr, nAttackAction, nAttackSpeed, pSkill, nSLV);
}

const CChatBalloon& CUser::GetChatBalloon()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::GetMiniRoomType()
{
    return m_nMiniRoomType;
}

unsigned long CUser::GetMiniRoomSN()
{
    return __sub_0010ABC0(this, nullptr);
}

ZXString<char> CUser::GetMiniRoomTitle()
{
    return __sub_005119C0(this, nullptr);
}

int32_t CUser::IsPrivate()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::GetMiniRoomBalloonRect(tagRECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPet* CUser::GetActivePet(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPet* CUser::GetBossPet()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetActivePet(long nIdx, CPet* pPet)
{
    __sub_004E40E0(this, nullptr, nIdx, pPet);
}

ZRef<GW_ItemSlotPet> CUser::GetActivePetItemSlot(long nIndex)
{
    auto p = m_apPet[nIndex];
    //TODO op bool
    return !p ? ZRef<GW_ItemSlotPet>() : ZRef<GW_ItemSlotPet>(p->GetItemSlot(), true);

    //return __sub_004E3030(this, nullptr, nIndex);
}

long CUser::GetPetWearID(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::GetActiveEffectItemID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::MakeIncDecHPEffect(long nDelta, int32_t bGuard)
{
    __sub_004DE750(this, nullptr, nDelta, bGuard);
}

void CUser::OnTemporaryStatChanged(MY_UINT128 uFlag, long tDelay, int32_t bInit)
{
    //TODO(game) __sub_00500CB0(this, nullptr, CreateNakedParam(uFlag), tDelay, bInit);
    spdlog::info("On temp stat changed");
}

void CUser::UpdateAffectedSkillList(long tDelay, int32_t bEnterField)
{
    //TODO(game) __sub_004FFAF0(this, nullptr, tDelay, bEnterField);
}

void CUser::SetConsumeItemEffect(long arg0)
{
    __sub_004EEB60(this, nullptr, arg0);
}

void CUser::SetConsumeItemEffect(CInPacket& iPacket)
{
    __sub_004F54D0(this, nullptr, iPacket);
}

void CUser::SetActiveEffectItem(long arg0)
{
    __sub_004F5500(this, nullptr, arg0);
}

void CUser::ShowUpgradeTombEffect(long nItemID, long nPosX, long nPosY)
{
    __sub_004E5DC0(this, nullptr, nItemID, nPosX, nPosY);
}

void CUser::SetActivePortableChair(long nItemID)
{
    __sub_004EFF80(this, nullptr, nItemID);
}

void CUser::SetMapSpecificEffect()
{
    __sub_004F0460(this, nullptr);
}

tagPOINT CUser::GetRevivePos()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::OnChat(CInPacket& iPacket, int32_t bIsFromOutsideOfMap)
{
    __sub_004E86C0(this, nullptr, iPacket, bIsFromOutsideOfMap);
}

void CUser::OnChatFromOutside(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::OnADBoard(CInPacket& iPacket)
{
    __sub_004ED310(this, nullptr, iPacket);
}

void CUser::OnEmotion(CInPacket& iPacket)
{
    __sub_004E0150(this, nullptr, iPacket);
}

void CUser::OnEffect(CInPacket& arg0)
{
    __sub_004F9A70(this, nullptr, arg0);
}

void CUser::ShowItemUpgradeEffect(CInPacket& iPacket)
{
    __sub_004E7B00(this, nullptr, iPacket);
}

void CUser::ShowItemHyperUpgradeEffect(CInPacket& iPacket)
{
    __sub_004E7660(this, nullptr, iPacket);
}

void CUser::ShowItemOptionUpgradeEffect(CInPacket& iPacket)
{
    __sub_004E72C0(this, nullptr, iPacket);
}

void CUser::ShowItemReleaseEffect(CInPacket& iPacket)
{
    __sub_004E54D0(this, nullptr, iPacket);
}

void CUser::ShowItemUnreleaseEffect(CInPacket& iPacket)
{
    __sub_004E5670(this, nullptr, iPacket);
}

void CUser::OnMiniRoomBalloon(CInPacket& iPacket)
{
    __sub_004E8D30(this, nullptr, iPacket);
}

void CUser::OnPetPacket(long nType, CInPacket& iPacket)
{
    __sub_004E02A0(this, nullptr, nType, iPacket);
}

void CUser::OnShowPQReward(CInPacket& iPacket)
{
    __sub_004E6850(this, nullptr, iPacket);
}

void CUser::OnRandomEmotion(CInPacket& iPacket)
{
    __sub_004E34B0(this, nullptr, iPacket);
}

long CUser::OnPetActivated(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::PetInterActWithUserAction(long nUserAction, long nPetIndex)
{
    return __sub_000BC040(this, nullptr, nUserAction, nPetIndex);
}

void CUser::OnPetEvol(CInPacket& iPacket)
{
    __sub_004E5CE0(this, nullptr, iPacket);
}

void CUser::AddSummonedList(ZRef<CSummoned> pSummoned)
{
    __sub_004F4AB0(this, nullptr, CreateNakedParam(pSummoned));
}

int32_t CUser::OnSummonedRemoved(unsigned long dwSummonedID, CInPacket& iPacket)
{
    return __sub_004E3790(this, nullptr, dwSummonedID, iPacket);
}

void CUser::OnSummonedMove(CInPacket& iPacket)
{
    __sub_004E3860(this, nullptr, iPacket);
}

void CUser::OnSummonedAttack(CInPacket& iPacket)
{
    __sub_004E38F0(this, nullptr, iPacket);
}

void CUser::OnSummonedSkill(CInPacket& iPacket)
{
    __sub_004E3980(this, nullptr, iPacket);
}

void CUser::OnSummonedHit(CInPacket& iPacket)
{
    __sub_004E3A10(this, nullptr, iPacket);
}

ZRef<CSummoned> CUser::GetSummoned(long nSkillID)
{
    ZRef<CSummoned> ret;
    return *__sub_004E3550(this, nullptr, &ret, nSkillID);
}

ZRef<CSummoned> CUser::GetSummonedByID(long dwSummonedID)
{
    ZRef<CSummoned> ret;
    return *__sub_004E3670(this, nullptr, &ret, dwSummonedID);
}

void CUser::OnDragonPacket(long nType, CInPacket& iPacket)
{
    __sub_004E5C00(this, nullptr, nType, iPacket);
}

void CUser::OnHitByUser(CInPacket& iPacket)
{
    __sub_004E11B0(this, nullptr, iPacket);
}

void CUser::OnSetPhase(CInPacket& iPacket)
{
    __sub_004E11F0(this, nullptr, iPacket);
}

void CUser::OnTeslaTriangle(CInPacket& iPacket)
{
    __sub_004F3770(this, nullptr, iPacket);
}

void CUser::OnFollowCharacter(CInPacket& iPacket)
{
    __sub_004E3220(this, nullptr, iPacket);
}

void CUser::OnPassiveMove(CInPacket& iPacket)
{
    __sub_004DEA10(this, nullptr, iPacket);
}

void CUser::OnFollowCharacterFailed(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::FixedPosTo(unsigned long dwCharID, long nDX, long nDY)
{
    return __sub_004E0190(this, nullptr, dwCharID, nDX, nDY);
}

void CUser::SetDriverID(unsigned long nTargetID)
{
    __sub_00503360(this, nullptr, nTargetID);
}

unsigned long CUser::GetDriverID()
{
    return __sub_0010ABC0(this, nullptr);
}

int32_t CUser::IsFollow()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetPassenserID(unsigned long nTargetID)
{
    __sub_00503360(this, nullptr, nTargetID);
}

int32_t CUser::GetPassenserID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::ShowRecoverUpgradeCountEffect(CInPacket& iPacket)
{
    __sub_004E0380(this, nullptr, iPacket);
}

void CUser::Update()
{
    __sub_004FB8D0(this, nullptr);
}

void CUser::OnSetDead(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::OnRevive()
{
    __sub_004DFE40(this, nullptr);
}

int32_t CUser::SetCoupleItemEffect(long nType, CUser* pPairUser, long nItemID)
{
    return __sub_004F05D0(this, nullptr, nType, pPairUser, nItemID);
}

int32_t CUser::IsCoupleItem(const _LARGE_INTEGER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const _LARGE_INTEGER& CUser::GetCoupleItemSN()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetWeddingRingEffect(long nType, CUser* pPairUser, long nRingID)
{
    __sub_004F18E0(this, nullptr, nType, pPairUser, nRingID);
}

int32_t CUser::IsMarriageCharacter(const unsigned long& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const unsigned long& CUser::GetMarriageCharacterID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::SetFriendShipItemEffect(long nType, CUser* pPairUser, long nItemID)
{
    return __sub_004F0D10(this, nullptr, nType, pPairUser, nItemID);
}

int32_t CUser::IsFriendShipItem(const _LARGE_INTEGER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const _LARGE_INTEGER& CUser::GetFriendShipItemSN()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::SetNewYearCardEffect(long nType, CUser* pPairUser, unsigned long dwSN, long nItemID)
{
    return __sub_004F1450(this, nullptr, nType, pPairUser, dwSN, nItemID);
}

long CUser::GetLocalUserLevel()
{
    return __sub_005D3800(this, nullptr);
}

int32_t CUser::SetCoupleChairEffect(long nType, CUser* pPairUser, long nItemID)
{
    return __sub_004F1FE0(this, nullptr, nType, pPairUser, nItemID);
}

long CUser::GetHitPeriodRemain()
{
    return __sub_005D3800(this, nullptr);
}

void CUser::SetMorphed(unsigned long dwMorphTemplateID, int32_t bOnCreate)
{
    __sub_004F5F90(this, nullptr, dwMorphTemplateID, bOnCreate);
}

void CUser::SetGhostState(long nGhostIndex, int32_t bOnCreate)
{
    __sub_004F5E70(this, nullptr, nGhostIndex, bOnCreate);
}

int32_t CUser::IsTamingMobTired()
{
    return __sub_004DE210(this, nullptr);
}

void CUser::SetTeamForMCarnival(long arg0)
{
    m_nTeamForMCarnival = arg0;
}

ZXString<char> CUser::GetTeamNameForMCarnival()
{
    //return __sub_004E6A60(this, nullptr);
    auto& sp = StringPool::GetInstance();
    auto team = m_nTeamForMCarnival;
    if (team && team != 1)
    {
        return {};
    }
    auto code = team ? 0x1018 : 0x1017;
    auto fmt = sp.GetString(code);
    auto teamCode = team ? 2 : 1;
    return ZXString<char>::FromFmt(fmt.c_str(), teamCode);
}

long CUser::GetTeamForMCarnival()
{
    return __sub_005D3800(this, nullptr);
}

long CUser::GetTeamForPartyRaid()
{
    //return __sub_005D3800(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    auto team = ctx->GetTeamForPartyRaid();
    auto partyMemberId = ctx->IsPartyMemberID(m_dwCharacterId);
    if (team == PARTY_RAID_TEAM_RED)
        return partyMemberId == 0;
    if (team == PARTY_RAID_TEAM_BLUE)
        return partyMemberId != 0;
    return 255;
}

ZXString<char> CUser::GetTeamNameForPartyRaid()
{
    //return __sub_004E6B40(this, nullptr);
    auto& sp = StringPool::GetInstance();
    auto team = GetTeamForPartyRaid();
    if (team && team != 1)
    {
        return {};
    }

    auto code = team ? 0x1570 : 0x156F;
    auto fmt = sp.GetString(code);
    auto teamCode = team ? 2 : 1;
    return ZXString<char>::FromFmt(fmt.c_str(), teamCode);
}

long CUser::GetPhase()
{
    //return __sub_005D3800(this, nullptr);
    return m_nPhase;
}

void CUser::SetPhase(long arg0)
{
    m_nPhase = arg0;
}

unsigned long CUser::GetPhaseAlpha()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsSamePhaseWithLocalUser()
{
    return __sub_004DEC40(this, nullptr);
}

void CUser::GetUpFromPortableChair(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::ShowGauge(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::DrawGauge(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::DrawGauge()
{
    __sub_004E5FF0(this, nullptr);
}

void CUser::ShowHPTag(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::DrawHPTag(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::GetPartyHP()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::DrawNameTags()
{
    __sub_004EA990(this, nullptr);
}

unsigned long CUser::GetTargetID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetTargetID(unsigned long nTargetID)
{
    __sub_00503360(this, nullptr, nTargetID);
}

long CUser::GetType()
{
    return __sub_000BC060(this, nullptr);
}

long CUser::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    return __sub_004E5800(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}

void CUser::OnLayerZChanged(const CVecCtrl* pvc)
{
    __sub_004E0110(this, nullptr, pvc);
}

const ZRef<CAttrShoe> CUser::GetShoeAttr()
{
    return __sub_004EB5C0(this, nullptr);
}

const tagPOINT CUser::GetPos()
{
    //return __sub_000BDDD0(this, nullptr);
    return m_ptPos.op_tagpoint();
}

const tagPOINT CUser::GetPosPrev()
{
    //return __sub_000BDE00(this, nullptr);
    return m_ptPos.op_tagpoint();
}

long CUser::GetZMass()
{
    return __sub_000BC120(this, nullptr);
}

long CUser::GetLastJumpInputX()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetLastJumpInputX(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long __fastcall CUser::_ZtlSecureGet_m_nChatBalloonType() const
{
    return __ZtlSecureFuse((long*)this->_ZtlSecureTear_m_nChatBalloonType.data(),
                           this->_ZtlSecureTear_m_nChatBalloonType_CS);
}

long __fastcall CUser::_ZtlSecurePut_m_nChatBalloonType(long arg0)
{
    _ZtlSecureTear_m_nChatBalloonType_CS = __ZtlSecureTear(arg0, this->_ZtlSecureTear_m_nChatBalloonType.data());
    return arg0; //TODO should return last
}

long __fastcall CUser::_ZtlSecureGet_m_nNameTagType() const
{
    return __ZtlSecureFuse((long*)this->_ZtlSecureTear_m_nNameTagType.data(), this->_ZtlSecureTear_m_nNameTagType_CS);
}

long __fastcall CUser::_ZtlSecurePut_m_nNameTagType(long arg0)
{
    _ZtlSecureTear_m_nNameTagType_CS = __ZtlSecureTear(arg0, this->_ZtlSecureTear_m_nNameTagType.data());
    return arg0; //TODO should return last
}

ZRef<CDragon> CUser::GetDragon()
{
    return __sub_005F2860(this, nullptr);
}

void CUser::RegisterSerialBullet(long nSkillID, ATTACKINFO& a, const tagPOINT& pt0, const CMob* pPrevMob,
                                 unsigned long tCur, unsigned long& tPrevDelay, const Ztl_bstr_t& sBulletEffectUOL)
{
    __sub_004EA300(this, nullptr, nSkillID, a, pt0, pPrevMob, tCur, tPrevDelay, sBulletEffectUOL);
}

CUser::ADDITIONALLAYER* CUser::GetAdditionalLayer(long nType)
{
    return __sub_004DE110(this, nullptr, nType);
}

CUser::ADDITIONALLAYER* CUser::RemoveAdditionalLayer(long nType)
{
    return __sub_004E06F0(this, nullptr, nType);
}

CUser::ADDITIONALLAYER* CUser::RetrieveNewYearCardAdditionalLayer(unsigned long dwSN)
{
    return __sub_004E6920(this, nullptr, dwSN);
}

void CUser::UpdateAdditionalLayer()
{
    __sub_004E08B0(this, nullptr);
}

int32_t CUser::LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, USERLAYER& l, long* pnRepeatStartIndex)
{
    return __sub_004E96D0(this, nullptr, CreateNakedParam(bsUOL), bLeft, l, pnRepeatStartIndex);
}

void CUser::ShiftAffectedSkillAnimation(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::PrepareActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown)
{
    auto psdSpeed = 0;
    if (IsLocalUser())
    {
        if (auto psd = CUserLocal::GetInstance()->GetPassiveSkillData(); psd)
        {
            psdSpeed = psd->nPsdSpeed;
        }
    }


    auto& ss = GetSecondaryStat();
    auto speed = ss.GetSpeed(psdSpeed);
    if (auto slow = ss._ZtlSecureGet_nSlow_())
        speed = slow;
    if (auto frozen = ss._ZtlSecureGet_nFrozen_())
        speed += (static_cast<double>(speed * frozen) / 100.0);

    if (m_bDelayedLoad)
    {
        CAvatar::PrepareActionLayer(nActionSpeed, speed, bKeyDown);
        PrepareShadowPartnerActionLayer();
        PrepareMirrorActionLayer();
        auto height = GetHeight();
        m_chatBalloon.AdjustCoordY(height);
        UpdateAdditionalLayer();
    }
}

void CUser::PrepareShadowPartnerActionLayer()
{
    __sub_004E1730(this, nullptr);
}

void CUser::PrepareMirrorActionLayer()
{
    __sub_004DF7E0(this, nullptr);
}

void CUser::ShowAffectedSkillAni(long tCur)
{
    __sub_004EB860(this, nullptr, tCur);
}

void CUser::ShowSkillEffect(const SKILLENTRY* arg0, long arg1, long arg2, int32_t arg3, long arg4, tagPOINT* arg5)
{
    __sub_004F6F60(this, nullptr, arg0, arg1, arg2, arg3, arg4, arg5);
}

void CUser::ShowSkillAffected(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial, long nSelect)
{
    __sub_004EC8E0(this, nullptr, pSkill, nSLV, bSpecial, nSelect);
}

void CUser::ShowSkillSpecialEffect(const SKILLENTRY* pSkill, long nDelayRate, CGrenade* pGrenade, long nSLV,
                                   long nTimeBombX, long nTimeBombY)
{
    __sub_004ECA90(this, nullptr, pSkill, nDelayRate, pGrenade, nSLV, nTimeBombX, nTimeBombY);
}

void CUser::ShowSkillPrepare(const SKILLENTRY* pSkill, long nActionSpeed, int32_t bKeyDown, int32_t bEnd)
{
    __sub_004E8160(this, nullptr, pSkill, nActionSpeed, bKeyDown, bEnd);
}

void CUser::ShowMorphEffect(int32_t bOnLadderOrRope, int32_t bSound)
{
    __sub_004E6750(this, nullptr, bOnLadderOrRope, bSound);
}

void CUser::ShowRideVehicleEffect(long nVehicleID)
{
    __sub_004ECE00(this, nullptr, nVehicleID);
}

void CUser::ShowOakCaskEffect()
{
    __sub_004DFFE0(this, nullptr);
}

void CUser::SetLayerZ()
{
    __sub_004DFC10(this, nullptr);
}

void CUser::RegisterNextBlink()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetAbilityEquip()
{
    //__sub_004EB5E0(this, nullptr);
    auto oldNameTagTy = _ZtlSecureGet_m_nNameTagType();
    this->_ZtlSecurePut_m_nNameTagType(0);
    this->_ZtlSecurePut_m_nChatBalloonType(0);

    auto itemInfo = CItemInfo::GetInstance();
    auto& sp = StringPool::GetInstance();

    for (auto& ring : _D_G_ANRINGBODYPART)
    {
        auto eq = m_avatarLook.anHairEquip[ring];
        if (!eq)
        {
            continue;
        }


        auto itemProp = itemInfo->GetItemInfo(eq);
        if (!itemProp)
        {
            continue;
        }


        auto v = itemProp->Getitem(sp.GetBSTR(0x99D));
        auto ty = get_int32(v, 0);

        if (ty)
            _ZtlSecurePut_m_nChatBalloonType(ty);

        v = itemProp->Getitem(sp.GetBSTR(0x99D));
        ty = get_int32(v, 0);

        if (ty)
            _ZtlSecurePut_m_nNameTagType(ty);
    }

    auto nameTagTy = _ZtlSecureGet_m_nNameTagType();
    if (nameTagTy != oldNameTagTy || m_nMedalItemID != m_avatarLook.anHairEquip[49])
        DrawNameTags();
}

void CUser::SetSetItemEffect()
{
    if (m_bDelayedLoad)
        return;


    /*long anPet[3]{};
    for (auto i = 0; i < 3; ++i)
    {
        auto pet = m_apPet[i];
        if (pet)
            anPet[i] = pet->GetTemplateID();
    }

    auto itemInfo = CItemInfo::GetInstance();
    auto effectId = itemInfo->GetSetItemEffect(m_avatarLook.anHairEquip.data(), m_avatarLook.nWeaponStickerID,
                                               (long*)&anPet);

    ZXString<unsigned short> wsLinkedEffect;
    bool itemSetEffect = false;
    auto ctx = CWvsContext::GetInstance();
    if (!effectId)
    {
        if (IsLocalUser())
        {
            auto isLocal = IsLocalUser();
            ZRef<CItemInfo::SETITEMINFO> pSet;
            if (itemInfo->GetSetItemInfo().GetAt(m_nCompletedSetItemID, &pSet))
            {
                wsLinkedEffect = pSet->sCompleteEffectLink;
                effectId = pSet->nSetItemID;
                itemSetEffect = true;
            }
        }
        else
        {
            EQUIPPED_SETITEM es{};
            auto cd = ctx->GetCharacterData();
        }
    }*/

    //TODO(game)

    //__sub_004F4BD0(this, nullptr);
}

void CUser::SetSetItemBackground(int32_t bTeleport, int32_t bSetPetBackgroundEffect)
{
    //TODO(game) __sub_004ED540(this, nullptr, bTeleport, bSetPetBackgroundEffect);
}

void CUser::SetCarryItemEffect(long nCount)
{
    __sub_004EDB90(this, nullptr, nCount);
}

void CUser::ShowEffectItem(long nItemID)
{
    __sub_004EFB20(this, nullptr, nItemID);
}

void CUser::ShowFollowEffectItem(long arg0)
{
    __sub_004E8F90(this, nullptr, arg0);
}

void CUser::ShowEffectRocketBooster(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_004EF660(this, nullptr, pSkill, nSLV);
}

void CUser::ShowEffectRocketBoosterAttack(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_004EF920(this, nullptr, pSkill, nSLV);
}

void CUser::ShowEffectSiegeStart(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial)
{
    __sub_004E0580(this, nullptr, pSkill, nSLV, bSpecial);
}

void CUser::ShowEffectSiegeAttack(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_004EF7F0(this, nullptr, pSkill, nSLV);
}

void CUser::ShowEffectSiegeEnd(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial)
{
    __sub_004E0600(this, nullptr, pSkill, nSLV, bSpecial);
}

void CUser::ShowEffectFlameThrowerEnd(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_004E0680(this, nullptr, pSkill, nSLV);
}

void CUser::SetAdminEffect()
{
    __sub_004EAD40(this, nullptr);
}

void CUser::SetIsAdminEffectAvaliable()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::RegisterAfterimage(long tStart, int32_t bLeft, long nAction, Ztl_bstr_t sAfterimageUOL, long nWeaponItemID,
                               long nSubWeaponItemID, long nChargeSkillID)
{
    __sub_00502D90(this, nullptr, tStart, bLeft, nAction, CreateNakedParam(sAfterimageUOL), nWeaponItemID,
                   nSubWeaponItemID, nChargeSkillID);
}

void CUser::ThrowGrenade(long pGrenade, long nAngle, long nImpactX, tagPOINT nImpactY)
{
    __sub_004F2840(this, nullptr, pGrenade, nAngle, nImpactX, CreateNakedParam(nImpactY));
}

long __cdecl CUser::GetShootDelay(const SKILLENTRY* pSkill, long nDefault)
{
    return __sub_004DE240(pSkill, nDefault);
}

long __cdecl CUser::GetBulletDelay(long nBulletItemID, long nSkillID, long nDefault)
{
    return __sub_004DE2D0(nBulletItemID, nSkillID, nDefault);
}

Ztl_bstr_t __cdecl CUser::GetAfterimageUOL(const SKILLENTRY* pSkill, long nSLV, Ztl_bstr_t sName, long nMastery,
                                           long nCharLevel)
{
    return __sub_004ED0C0(pSkill, nSLV, CreateNakedParam(sName), nMastery, nCharLevel);
}

void CUser::PetAutoSpeaking(long nEvent)
{
    __sub_004DEB10(this, nullptr, nEvent);
}

long CUser::GetDamageDelay(long nSkillID, long nDamageIdx, long nDamagePerMob)
{
    return __sub_004E0FF0(this, nullptr, nSkillID, nDamageIdx, nDamagePerMob);
}

long CUser::GetJobCode()
{
    return __sub_004EB550(this, nullptr);
}

void CUser::ShowKeyowrdEffect(const char* szChat)
{
    __sub_004DEA90(this, nullptr, szChat);
}

void CUser::UpdateKeywordEffects()
{
    __sub_004EA590(this, nullptr);
}

void CUser::LoadDojangBerserkEffect()
{
    __sub_004F6170(this, nullptr);
}

void CUser::RemoveDojangBerserkEffect()
{
    __sub_004E1130(this, nullptr);
}

void CUser::LoadDojangInvincibleEffect()
{
    __sub_004F6250(this, nullptr);
}

void CUser::RemoveDojangInvincibleEffect()
{
    __sub_004E1150(this, nullptr);
}

void CUser::LoadSuddenDeathEffect()
{
    __sub_004F3A10(this, nullptr);
}

void CUser::RemoveSuddenDeathEffect()
{
    __sub_004E12C0(this, nullptr);
}

void CUser::LoadFinalCutEffect()
{
    __sub_004F3A90(this, nullptr);
}

void CUser::RemoveFinalCutEffect()
{
    __sub_004E12E0(this, nullptr);
}

void CUser::LoadBlessingArmor()
{
    __sub_004F3B10(this, nullptr);
}

void CUser::RemoveBlessingArmor()
{
    __sub_004E1300(this, nullptr);
}

void CUser::LoadSwallowingEffect()
{
    __sub_004F3B90(this, nullptr);
}

void CUser::RemoveSwallowingEffect()
{
    __sub_004E1320(this, nullptr);
}

void CUser::UpdateMoreWildEffect(long tCur)
{
    __sub_004FB4C0(this, nullptr, tCur);
}

void CUser::LoadMoreWildEffect(long tDelay, int32_t bForced)
{
    __sub_004F6310(this, nullptr, tDelay, bForced);
}

void CUser::RemoveMoreWildEffect()
{
    __sub_004FB880(this, nullptr);
}

void CUser::LoadMoreWildFinishEffect()
{
    __sub_004F6910(this, nullptr);
}

void CUser::RemoveMoreWildFinishEffect()
{
    __sub_004E1340(this, nullptr);
}

void CUser::LoadDarkForceEffect()
{
    __sub_004F3E10(this, nullptr);
}

void CUser::UpdateAr01Effect()
{
    __sub_004F4060(this, nullptr);
}

long CUser::GetTeamForBattlefield()
{
    return __sub_005D3800(this, nullptr);
}

void CUser::SetTeamForBattlefield(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_x_com_ptr<IWzGr2DLayer> CUser::LoadSkillRepeatEffect(long nSkillID, _x_com_ptr<IWzGr2DLayer> pOverlay)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_004F2BB0(this, nullptr, &ret, nSkillID, CreateNakedParam(pOverlay));
}

long CUser::GetDashingSkill()
{
    return __sub_004DE380(this, nullptr);
}

void CUser::_LoadItemRepeatEffect(long nItemEffectID)
{
    __sub_004F31A0(this, nullptr, nItemEffectID);
}

void CUser::_RemoveItemRepeatEffect()
{
    __sub_004E1170(this, nullptr);
}

void CUser::LoadMagicShield()
{
    __sub_004F33E0(this, nullptr);
}

void CUser::RemoveMagicShield()
{
    __sub_004E1190(this, nullptr);
}

void CUser::UpdateFlyingWingEffect()
{
    __sub_004F3620(this, nullptr);
}

_x_com_ptr<IWzGr2DLayer> CUser::GetMirrorSrcLayer(long nIdx)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_004DF410(this, nullptr, &ret, nIdx);
}

void CUser::TryDoingCycloneAfter()
{
    __sub_004F4380(this, nullptr);
}

tagPOINT CUser::GetRidingMechanicBulletPos(tagPOINT pt, long nSkillID, long nBulletSequence)
{
    tagPOINT ret;
    return *__sub_004DEB50(this, nullptr, &ret, CreateNakedParam(pt), nSkillID, nBulletSequence);
}

int32_t CUser::IsFanShapeShoot(long nReason)
{
    return __sub_00503370(this, nullptr, nReason);
}

int32_t CUser::IsAbleToHitByUser(long nReason)
{
    return __sub_00503370(this, nullptr, nReason);
}

void CUser::SetRepeatEffectRemove(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

int32_t CUser::SetRepeatEffect(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsRepeatEffect()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser& CUser::operator=(CUser& arg0)
{
    return _op_assign_230(this, arg0);
}

CUser& CUser::_op_assign_230(CUser* pThis, CUser& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::ADDITIONALLAYER::~ADDITIONALLAYER()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUser::ADDITIONALLAYER::_dtor_0()
{
    return __sub_004DF510(this, nullptr);
}

CUser::ADDITIONALLAYER::ADDITIONALLAYER(const CUser::ADDITIONALLAYER& arg0)
{
    _ctor_1(arg0);
}

void CUser::ADDITIONALLAYER::_ctor_1(const CUser::ADDITIONALLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::ADDITIONALLAYER::ADDITIONALLAYER()
{
    nData = -1;
    nDataForRepeat = -1;
    l.bFixed = true;
    l2.bFixed = true;
}

void CUser::ADDITIONALLAYER::_ctor_0()
{
    return __sub_004E1630(this, nullptr);
}

void CUser::ADDITIONALLAYER::Reset()
{
    __sub_004DF3C0(this, nullptr);
}

CUser::ADDITIONALLAYER& CUser::ADDITIONALLAYER::operator=(const CUser::ADDITIONALLAYER& arg0)
{
    return _op_assign_4(this, arg0);
}

CUser::ADDITIONALLAYER& CUser::ADDITIONALLAYER::_op_assign_4(CUser::ADDITIONALLAYER* pThis,
                                                             const CUser::ADDITIONALLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY::~AFFECTEDSKILLENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUser::AFFECTEDSKILLENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY(const CUser::AFFECTEDSKILLENTRY& arg0)
{
    _ctor_1(arg0);
}

void CUser::AFFECTEDSKILLENTRY::_ctor_1(const CUser::AFFECTEDSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUser::AFFECTEDSKILLENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY& CUser::AFFECTEDSKILLENTRY::operator=(const CUser::AFFECTEDSKILLENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CUser::AFFECTEDSKILLENTRY& CUser::AFFECTEDSKILLENTRY::_op_assign_3(CUser::AFFECTEDSKILLENTRY* pThis,
                                                                   const CUser::AFFECTEDSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFTERIMAGEINFO::~AFTERIMAGEINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUser::AFTERIMAGEINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFTERIMAGEINFO::AFTERIMAGEINFO(const CUser::AFTERIMAGEINFO& arg0)
{
    _ctor_1(arg0);
}

void CUser::AFTERIMAGEINFO::_ctor_1(const CUser::AFTERIMAGEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFTERIMAGEINFO::AFTERIMAGEINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUser::AFTERIMAGEINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFTERIMAGEINFO& CUser::AFTERIMAGEINFO::operator=(const CUser::AFTERIMAGEINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CUser::AFTERIMAGEINFO& CUser::AFTERIMAGEINFO::_op_assign_3(CUser::AFTERIMAGEINFO* pThis,
                                                           const CUser::AFTERIMAGEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CGrenade::~CGrenade()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CGrenade::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CGrenade::CGrenade(const CGrenade& arg0)
{
    _ctor_1(arg0);
}

void CGrenade::_ctor_1(const CGrenade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CGrenade::CGrenade()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CGrenade::_ctor_0()
{
    return __sub_004E2DB0(this, nullptr);
}

void CGrenade::Init(long nSkillID, long nSLV, CUser* pOwner, int32_t bFlip, tagPOINT pt, long vx, long vy,
                    int32_t bGravityFree, long tThrowDelayTime, long tLimitTime, long nBallAngle)
{
    __sub_00169960(this, nullptr, nSkillID, nSLV, pOwner, bFlip, CreateNakedParam(pt), vx, vy, bGravityFree,
                   tThrowDelayTime, tLimitTime, nBallAngle);
}

int32_t CGrenade::Update(unsigned long dwMobID)
{
    return __sub_001690D0(this, nullptr, dwMobID);
}

void CGrenade::PrepareAnimationLayer(int32_t bFlip, long nBallAngle)
{
    __sub_001694F0(this, nullptr, bFlip, nBallAngle);
}

_x_com_ptr<IWzVector2D> CGrenade::GetVecCtrl()
{
    return __sub_004DF4C0(this, nullptr);
}

CVecCtrlUser* CUser::GetVecCtrlUser()
{
    return dynamic_cast<CVecCtrlUser*>(m_pvc.op_arrow());
}

void CGrenade::SetDragValue(long nX, long nY)
{
    __sub_00168DE0(this, nullptr, nX, nY);
}

long CGrenade::GetType()
{
    return __sub_004E2E60(this, nullptr);
}

long CGrenade::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    return __sub_00168D20(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}

void CGrenade::OnLayerZChanged(const CVecCtrl* pvc)
{
    __sub_00168D50(this, nullptr, pvc);
}

const ZRef<CAttrShoe> CGrenade::GetShoeAttr()
{
    return __sub_004E2FA0(this, nullptr);
}

const tagPOINT CGrenade::GetPos()
{
    return __sub_004E2E70(this, nullptr);
}

const tagPOINT CGrenade::GetPosPrev()
{
    return __sub_004E2E90(this, nullptr);
}

long CGrenade::GetZMass()
{
    return __sub_004E2EC0(this, nullptr);
}

long CGrenade::GetSkillID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CGrenade::BombAndAttackMob()
{
    __sub_00168E80(this, nullptr);
}

void CGrenade::JustBomb()
{
    __sub_00168DB0(this, nullptr);
}

int32_t CGrenade::SendTimeBombInfo(unsigned long dwMobID)
{
    return __sub_00168F20(this, nullptr, dwMobID);
}

CGrenade& CGrenade::operator=(const CGrenade& arg0)
{
    return _op_assign_19(this, arg0);
}

CGrenade& CGrenade::_op_assign_19(CGrenade* pThis, const CGrenade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
