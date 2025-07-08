// UserLocal.cpp
#include "UserLocal.hpp"

#include <VecCtrlUser/VecCtrlUser.hpp>

#include "UtilDlg/UtilDlg.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZRef_CStage{};


static ZRef<ITEMSKILLLEVELDATA> _FAKE_ZRef_ITEMSKILLLEVELDATA{};
static ZRef<CItemInfo::ItemSkill> _FAKE_ZRef_CItemInfo_ItemSkill{};
static ZRef<AdditionPsd> _FAKE_ZRef_AdditionPsd{};
static ZRef<CUIContextMenu> _FAKE_ZRef_CUIContextMenu{};
static ZRef<CField> _FAKE_ZRef_CField{};
static ZRef<CUIRandomMesoBag> _FAKE_ZRef_CUIRandomMesoBag{};

static ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> _FAKE_ZList_ZRef_CActionMan_MOBACTIONFRAMEENTRY{};

HRESULT __fastcall __QueryVecCtrlNpc(_x_com_ptr<IWzVector2D>* self, void* edx, CVecCtrlUser* p)
{
    //return self->__QueryInterface<IWzVector2D*>((IWzVector2D*)p);
    self->Attach(p, true);
    return 0;
}

#include "UserLocal_regen.ipp"

ZArray<long> CUserLocal::ms_anTutors{};

CAntiRepeat::CAntiRepeat()
{
}

CAntiRepeat::~CAntiRepeat()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAntiRepeat::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAntiRepeat::CAntiRepeat(long arg0)
{
    m_nCountLimit = arg0;
}

void CAntiRepeat::_ctor_1(long arg0)
{
    new(this) CAntiRepeat(arg0);
}

int32_t CAntiRepeat::TryRepeat(long nX, long nY)
{
    return __sub_005032B0(this, nullptr, nX, nY);
}

CDualKeyChecker::~CDualKeyChecker()
{
}

void CDualKeyChecker::_dtor_0()
{
    this->~CDualKeyChecker();
    //return __sub_00506CD0(this, nullptr);
}

CDualKeyChecker::CDualKeyChecker(const CDualKeyChecker& arg0)
{
    _ctor_1(arg0);
}

void CDualKeyChecker::_ctor_1(const CDualKeyChecker& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDualKeyChecker::CDualKeyChecker()
{
}

void CDualKeyChecker::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDualKeyChecker::State CDualKeyChecker::Check(CDualKeyChecker::KeyMsg& msg)
{
    return __sub_00519290(this, nullptr, msg);
}

void CDualKeyChecker::Update()
{
    if (m_lScanCode && timeGetTime() > m_tInputTime + 50)
    {
        m_tInputTime = 0;
        m_lScanCode = 0;
    }
}

int32_t CDualKeyChecker::GetQueuedMsg(CDualKeyChecker::KeyMsg& arg0)
{
    if (auto head = m_lMsg.GetHeadPosition())
    {
        arg0 = *head;
        m_lMsg.RemoveHead();
        return 1;
    }

    return 0;
}

void CDualKeyChecker::PushAndPopMsg(CDualKeyChecker::KeyMsg& msg)
{
    __sub_005119F0(this, nullptr, msg);
}

CDualKeyChecker& CDualKeyChecker::operator=(const CDualKeyChecker& arg0)
{
    return _op_assign_7(this, arg0);
}

CDualKeyChecker& CDualKeyChecker::_op_assign_7(CDualKeyChecker* pThis, const CDualKeyChecker& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ActionRandMan::~ActionRandMan()
{
    UNIMPLEMENTED; // _dtor_0();
}

void ActionRandMan::_dtor_0()
{
    return __sub_00504A00(this, nullptr);
}

ActionRandMan::ActionRandMan(CRand32& RndMan): RndManRef(RndMan)
{
    _ctor_0(RndMan);
}

void ActionRandMan::_ctor_0(CRand32& RndMan)
{
    return __sub_00503330(this, nullptr, RndMan);
}

uint32_t ActionRandMan::GetRandom()
{
    return __sub_00504A40(this, nullptr);
}

void ActionRandMan::PreventRollback()
{
    __sub_00503350(this, nullptr);
}

CUserLocal::~CUserLocal()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUserLocal::_dtor_0()
{
    return __sub_00506CE0(this, nullptr);
}

CUserLocal::CUserLocal(const CUserLocal& arg0)
{
    _ctor_1(arg0);
}

void CUserLocal::_ctor_1(const CUserLocal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CUserLocal(unsigned long uSN): m_antiRepeat(100), m_antiRepeat_Buff(20), CUser(uSN)
{
    //_ctor_0( uSN);
    ms_pInstance = this;

    m_tPetConsumeNoPotionMsgTime = -1;
    CUserLocal::GetUpFromPortableChair(true);
    this->_ZtlSecurePut_m_nLastJumpInputX(0);
    m_nIdx_ToolTipByMouse = -1;
    m_pPassiveSkillData = new PassiveSkillData();
    m_pAttrShoe = new CAttrShoe(0);

    auto t = timeGetTime();
    m_tLastWarnUsingDisabledWeapon = t;
    m_tLastCantUseSkill = t;

    auto ut = get_update_time();
    m_tLastJump = ut;
    m_tLastStormArrow = ut;
    m_tLastRapidFire = ut;
    m_tLastFlameThrower = ut;
    m_tLastTitan = ut;
    m_tLastTankSiegeMode = ut;
    m_tLastPoisonDamage = ut;
    m_tLastArealDamage = ut;
    m_tLastHideMorphedCheck = ut;
    m_tLastStopMotionDamage = ut;
    m_tLastUseAura = ut;

    m_tMineMoveStart = ut;
    m_tSwallowDigestTime = ut;
    m_tSwallowLastMobWriggle = ut;
    m_tCyclone = ut;
    m_tMovingShootAttackTime = ut;

    auto cd = 0x80000000;
    auto maxCdSkills = {
        4121008,
        0x4DF8F1,
        15100004,
        0x4F5C6A,
        0x41EEEA,
        0x4E23ED,
        0x4F5C6E,
        0x4F8379 + 3,
        0x4F837D,
        14111006,
        21001001,
        30001068,
        4001003,
        4341003,
        32101001,
        1121001,
        1321001,
        0x4E23EC + 3,
        15111004,
        32111011,
        35001001,
        35101009
    };
    for (auto id : maxCdSkills)
    {
        m_mCoolEndTime.Insert(id, cd);
    }

    auto jobCode = GetJobCode();
    if (is_aran_job(jobCode))
    {
        m_mCoolEndTime.Insert(0, cd);
    }


    _ZtlSecurePut_m_usActivePetSkill(0);


    UpdateMonsterBookInfo();
    UpdatePassiveSkillData(true);
}

void CUserLocal::_ctor_0(unsigned long uSN)
{
    //return __sub_0051A9A0(this, nullptr, uSN);
    new(this) CUserLocal(uSN);
}

void CUserLocal::Init()
{
    __sub_00519360(this, nullptr);
}

unsigned char CUserLocal::GetCharacterLevel()
{
    return __sub_005072A0(this, nullptr);
}

SecondaryStat& CUserLocal::GetSecondaryStat()
{
    //return __sub_00507290(this, nullptr);
    return CWvsContext::GetInstance()->GetSecondaryStat();
}

long CUserLocal::GetJobCode()
{
    return __sub_00508EB0(this, nullptr);
}

int32_t CUserLocal::IsLocalUser()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsPreview()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsRemoteUser()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsAdminHide()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsMovingMode()
{
    return __sub_00160050(this, nullptr);
}

unsigned char CUserLocal::GetLevel()
{
    return __sub_005072A0(this, nullptr);
}

unsigned long CUserLocal::GetFieldID()
{
    return __sub_005042D0(this, nullptr);
}

int32_t CUserLocal::IsSit()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsPreparingSkill()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsRepeatSkill()
{
    return __sub_00160050(this, nullptr);
}

long CUserLocal::GetRepeatSkillPoint()
{
    return __sub_00348E50(this, nullptr);
}

int32_t CUserLocal::IsImmovable()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsStun()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsSealed()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsWeakened()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsAttract()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsStopPortion()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsStopMotion()
{
    return __sub_00160050(this, nullptr);
}

void CUserLocal::SetAttractMove(long& nPos_X, long& nPos_Y)
{
    __sub_0050DEB0(this, nullptr, nPos_X, nPos_Y);
}

int32_t CUserLocal::IsKnockBackStun()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsSkillAvailable()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::HasOnDashSkill()
{
    return __sub_00160050(this, nullptr);
}

long CUserLocal::GetOnDashSkill()
{
    return __sub_00503450(this, nullptr);
}

void CUserLocal::SetMoveAction(long nMA, int32_t bReload)
{
    //__sub_00503CE0(this, nullptr, nMA, bReload);
    CUser::SetMoveAction(nMA, bReload);

    auto ma = m_nMoveAction;
    if (m_pvc)
    {
        GetVecCtrlUser()->SetMoveAction(ma);
    }
    //TODO(game missing
}

void CUserLocal::ResetOneTimeAction()
{
    __sub_005071F0(this, nullptr);
}

void CUserLocal::SetImpact(long nAttr, long nImpact, int32_t bLeft)
{
    __sub_00505E10(this, nullptr, nAttr, nImpact, bLeft);
}

void CUserLocal::SetDamaged(long nDamage, long vx, long vy, unsigned long dwObstacleData, CMob* pMob, long nAttackIdx,
                            long nDir, long nPowerGuard, int32_t bCheckHitRemain, int32_t bSendPacket)
{
    __sub_005343C0(this, nullptr, nDamage, vx, vy, dwObstacleData, pMob, nAttackIdx, nDir, nPowerGuard, bCheckHitRemain,
                   bSendPacket);
}

void CUserLocal::ShowCounterDamage(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

long CUserLocal::GetProperBulletPosition(const SKILLENTRY* pSkill, long nSLV, long* pnItemID, long* pnCashItemPos,
                                         long* pnCashItemID)
{
    return __sub_00507310(this, nullptr, pSkill, nSLV, pnItemID, pnCashItemPos, pnCashItemID);
}

long CUserLocal::GetSpiritJavelinItemID(const SKILLENTRY* nItemID, long nSlotCount)
{
    return __sub_00507850(this, nullptr, nItemID, nSlotCount);
}

void CUserLocal::Jump(int32_t bEnforced)
{
    __sub_0050A1D0(this, nullptr, bEnforced);
}

void CUserLocal::FallDown()
{
    __sub_00505D90(this, nullptr);
}

void CUserLocal::ApplyAllSkillLevelUP(long nItemOptionID, long nLevel, long& nSLV)
{
    __sub_005090F0(this, nullptr, nItemOptionID, nLevel, nSLV);
}

void CUserLocal::ApplyEmotionOption(long nItemOptionID, long nLevel)
{
    __sub_005091A0(this, nullptr, nItemOptionID, nLevel);
}

void CUserLocal::ApplyWeaponOption(long nItemOptionID, long nLevel, long& nCriticalProb, long& nCriticalDamage,
                                   long& nTotalDAMr, long& nBossDAMr, long& nIgnoreTargetDEF)
{
    __sub_005092D0(this, nullptr, nItemOptionID, nLevel, nCriticalProb, nCriticalDamage, nTotalDAMr, nBossDAMr,
                   nIgnoreTargetDEF);
}

void CUserLocal::ApplyDefenseOption(long& nDamage)
{
    __sub_0050E950(this, nullptr, nDamage);
}

void CUserLocal::ApplyIgnoreDAMOption(long nItemOptionID, long nLevel, long& nIgnoreDAMProb, long& nIgnoreDAM,
                                      long& nIgnoreDAMrProb, long& nIgnoreDAMr)
{
    __sub_005093B0(this, nullptr, nItemOptionID, nLevel, nIgnoreDAMProb, nIgnoreDAM, nIgnoreDAMrProb, nIgnoreDAMr);
}

void CUserLocal::ApplyInvicibleOption(long nItemOptionID, long nLevel, long& nInvincible_inc, long& nInvincible_prob,
                                      long& nInvincible)
{
    __sub_00509490(this, nullptr, nItemOptionID, nLevel, nInvincible_inc, nInvincible_prob, nInvincible);
}

void CUserLocal::ApplyAccessoryOption(long& dRecoveryHP, long& dRecoveryMP, int32_t bSit)
{
    __sub_0050EDD0(this, nullptr, dRecoveryHP, dRecoveryMP, bSit);
}

void CUserLocal::ApplyRecoveryOption(long nItemOptionID, long nLevel, long& dRecoveryHP, long& dRecoveryMP,
                                     int32_t bSit)
{
    __sub_00509560(this, nullptr, nItemOptionID, nLevel, dRecoveryHP, dRecoveryMP, bSit);
}

void CUserLocal::VerticalJump()
{
    __sub_0050F510(this, nullptr);
}

void CUserLocal::Update()
{
    /* auto ctx = CWvsContext::GetInstance();
     //TODO TSecType<unsigned char>::GetData(&TSingleton<CWvsContext>::ms_pInstance->m_nSubGradeCode) & 0x80
     if (ctx->IsUserGM() && m_bMovingMode)
     {
         CUser::Update();
         return;
     }

     m_DualKeyChecker.Update();
     CDualKeyChecker::KeyMsg msg;
     if (m_DualKeyChecker.GetQueuedMsg(msg))
     {
         OnKey(msg.wParam, msg.lParam);
     }


     auto updateTime = get_update_time();
     if (m_bCurActionIsFlyingSkill)
     {
         if (m_nOneTimeAction != 272)
         {
             m_bCurActionIsFlyingSkill = false;
             auto vec = dynamic_cast<CVecCtrlUser*>(m_pvc.op_arrow());
             vec->SetJumpNext();
         }
     }
     else
     {
         m_bCurActionIsFlyingSkill = true;
     }

     auto fieldId = get_field()->GetFieldID();
     auto& sp = StringPool::GetInstance();

     if (fieldId == 103000100 || fieldId == 600010001)
     {
     }

 */
    __sub_00537330(this, nullptr);
}

void CUserLocal::ClearToolTip()
{
    __sub_00507220(this, nullptr);
}

int32_t CUserLocal::PreprocessOnKey(uint32_t& wParam, uint32_t& lParam)
{
    return __sub_005199A0(this, nullptr, wParam, lParam);
}

void CUserLocal::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_005369F0(this, nullptr, wParam, lParam);
}

void CUserLocal::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_005372C0(this, nullptr, msg, wParam, rx, ry);
    m_uiToolTip.ClearToolTip();
    switch (msg)
    {
    case 201:
        HandleLButtonDown();
        break;
    case 202:
        HandleLButtonClk();
        break;
    case 203:
        HandleLButtonDblClk();
        break;
    case 205:
        HandleRButtonClk();
        break;
    default:
        break;
    }
}

int32_t CUserLocal::OnMouseMove(long rx, long ry)
{
    return __sub_0051B240(this, nullptr, rx, ry);
}

void CUserLocal::OnFeatureChanged()
{
    __sub_0051D640(this, nullptr);
}

void CUserLocal::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_005340C0(this, nullptr, nType, iPacket);
}

void CUserLocal::OnTeleport(CInPacket& iPacket)
{
    __sub_00513FF0(this, nullptr, iPacket);
}

void CUserLocal::OnSitResult(CInPacket& iPacket)
{
    __sub_00505E70(this, nullptr, iPacket);
}

void CUserLocal::OnMesoGive_Succeeded(CInPacket& iPacket)
{
    __sub_0050F950(this, nullptr, iPacket);
}

void CUserLocal::OnMesoGive_Failed(CInPacket& iPacket)
{
    __sub_0050D530(this, nullptr, iPacket);
}

void CUserLocal::OnRandomMesobag_Succeeded(CInPacket& iPacket)
{
    __sub_0050FA30(this, nullptr, iPacket);
}

void CUserLocal::OnRandomMesobag_Failed(CInPacket& iPacket)
{
    __sub_0050D560(this, nullptr, iPacket);
}

void CUserLocal::OnFieldFadeInOut(CInPacket& iPacket)
{
    __sub_00505790(this, nullptr, iPacket);
}

void CUserLocal::OnFieldFadeOutForce(CInPacket& iPacket)
{
    __sub_005057F0(this, nullptr, iPacket);
}

void CUserLocal::OnQuestResult(CInPacket& arg0)
{
    __sub_00514080(this, nullptr, arg0);
}

long CUserLocal::OnPetActivated(CInPacket& iPacket)
{
    return __sub_0050FB90(this, nullptr, iPacket);
}

long CUserLocal::PetInterActWithItem(long nItemID)
{
    return __sub_00503DF0(this, nullptr, nItemID);
}

long CUserLocal::PetInterActWithUserAction(long nUserAction, long nPetIndex)
{
    //TODO(game) load pets
    return 1;
    //return __sub_00503EC0(this, nullptr, nUserAction, nPetIndex);
    if (nPetIndex >= 0)
    {
        if (nPetIndex < 3)
        {
            if (m_apPet[nPetIndex])
            {
                m_apPet[nPetIndex]->DoActionByUserAction(nUserAction);
                return 1;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        for (auto i = 0; i < 3; ++i)
        {
            auto& pet = this->m_apPet[i];
            if (!pet)
                break;
            pet->DoActionByUserAction(nUserAction);
        }
        return 1;
    }
}

void CUserLocal::OnPetEvol(CInPacket& iPacket)
{
    __sub_00503F30(this, nullptr, iPacket);
}

void CUserLocal::OnSummonedCreated(ZRef<CSummoned> pSummoned)
{
    __sub_0050D590(this, nullptr, CreateNakedParam(pSummoned));
}

void CUserLocal::OnSetDead(int32_t bDyingNow)
{
    __sub_00503FC0(this, nullptr, bDyingNow);
}

void CUserLocal::OnRevive()
{
    __sub_00504010(this, nullptr);
}

void CUserLocal::RequestUpgradeTombEffect()
{
    __sub_00508320(this, nullptr);
}

void CUserLocal::OnNotifyHPDecByField(CInPacket& iPacket)
{
    __sub_0050FED0(this, nullptr, iPacket);
}

void CUserLocal::OnUserPetSkillChanged(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::OnBalloonMsg(CInPacket& iPacket)
{
    __sub_0051D780(this, nullptr, iPacket);
}

void CUserLocal::OnPlayEventSound(CInPacket& iPacket)
{
    __sub_00516D60(this, nullptr, iPacket);
}

void CUserLocal::OnPlayMinigameSound(CInPacket& iPacket)
{
    __sub_00516E10(this, nullptr, iPacket);
}

void CUserLocal::OnMakerResult(CInPacket& iPacket)
{
    __sub_005102F0(this, nullptr, iPacket);
}

void CUserLocal::OnOpenClassCompetitionPage(CInPacket& iPacket)
{
    __sub_00505580(this, nullptr, iPacket);
}

void CUserLocal::OnOpenUI(CInPacket& iPacket)
{
    __sub_005055F0(this, nullptr, iPacket);
}

void CUserLocal::OnOpenUIWithOption(CInPacket& iPacket)
{
    __sub_00532300(this, nullptr, iPacket);
}

void CUserLocal::OnSetDirectionMode(CInPacket& iPacket)
{
    __sub_005054F0(this, nullptr, iPacket);
}

void CUserLocal::OnSetStandAloneMode(CInPacket& iPacket)
{
    __sub_00505550(this, nullptr, iPacket);
}

void CUserLocal::OnHireTutor(CInPacket& iPacket)
{
    __sub_0050E560(this, nullptr, iPacket);
}

void CUserLocal::OnTutorMsg(CInPacket& iPacket)
{
    __sub_00516F60(this, nullptr, iPacket);
}

void CUserLocal::OnDamageMeter(CInPacket& iPacket)
{
    __sub_00505620(this, nullptr, iPacket);
}

void CUserLocal::OnTimeBombAttack(CInPacket& iPacket)
{
    __sub_005323F0(this, nullptr, iPacket);
}

void CUserLocal::SetCarryItemEffectForLocal(CharacterData& cd)
{
    //TODO(game) __sub_005083D0(this, nullptr, cd);
}

void CUserLocal::SetActiveEffectItemForLocal(CharacterData& cd, long nActiveEffectItemID)
{
    __sub_005084C0(this, nullptr, cd, nActiveEffectItemID);
}

void CUserLocal::SetActiveEffectItemForFirstLocalUserLoading(CharacterData& cd)
{
    __sub_005083D0(this, nullptr, cd);
}

void CUserLocal::SetPairCharacterID()
{
    //TODO(game) __sub_00508680(this, nullptr);
}

void CUserLocal::SetFriendPairCharacterID()
{
    //TODO(game) __sub_00508810(this, nullptr);
}

void CUserLocal::SetMarriagePairCharacterID()
{
    //TODO(game) __sub_005089B0(this, nullptr);
}

void CUserLocal::SetNewYearCardPairCharacterID()
{
    //TODO(game) __sub_00508AF0(this, nullptr);
}

void CUserLocal::OnJoystickButton(uint32_t wButton, unsigned long dwData)
{
    __sub_00536550(this, nullptr, wButton, dwData);
}

long CUserLocal::FindHitSummonedInRect(const tagRECT& rc, CSummoned** apSummoned, long nMaxCount)
{
    return __sub_00506100(this, nullptr, rc, apSummoned, nMaxCount);
}

void CUserLocal::SetSecondaryStatChangedPoint(unsigned char bSN)
{
    __sub_00504030(this, nullptr, bSN);
}

void CUserLocal::RedrawGuildNameTag()
{
    __sub_005152F0(this, nullptr);
}

int32_t CUserLocal::IsWeaponDisabled()
{
    return __sub_0050D700(this, nullptr);
}

int32_t CUserLocal::IsKeyDownSkillUsing()
{
    return m_bKeyDown;
}

int32_t CUserLocal::IsDashing()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsDashing2()
{
    return __sub_00160050(this, nullptr);
}

void CUserLocal::GetUpFromPortableChair(int32_t bOnInit)
{
    __sub_00506050(this, nullptr, bOnInit);
}

void CUserLocal::OnTemporaryStatChanged(MY_UINT128 uFlag, long tDelay, int32_t bInit)
{
    //__sub_00505320(this, nullptr, CreateNakedParam(uFlag), tDelay, bInit);
    auto ctx = CWvsContext::GetInstance();
    auto& secondaryStat = GetSecondaryStat();

    if (uFlag.checkFlag(CTS_ENERGY_CHARGED))
    {
        auto& tempStat = secondaryStat.aTemporaryStat[0];
        ZFatalSectionGuard lock(tempStat->GetLock());

        if (auto value = tempStat->GetValue())
        {
            ctx->UI_Open(0x13, 0xFFFFFFFF);
            auto maxValue = tempStat->GetMaxValue();
            CUIEnergyBar::GetInstance()->SetEnergy(value, maxValue);
        }
    }

    if (uFlag.checkFlag(CTS_RIDE_VEHICLE))
    {
        this->m_nVehicleValid = this->m_nVehicleValid - 1 < 0 ? 0 : this->m_nVehicleValid - 1;
    }

    CUser::OnTemporaryStatChanged(uFlag, tDelay, bInit);
}

void CUserLocal::OnResignQuestReturn(CInPacket& iPacket)
{
    __sub_00505720(this, nullptr, iPacket);
}

void CUserLocal::OnPassMateName(CInPacket& iPacket)
{
    __sub_00518260(this, nullptr, iPacket);
}

void __cdecl CUserLocal::SetMonsterBookCover(long nCardID)
{
    __sub_00508DD0(nCardID);
}

long __cdecl CUserLocal::GetMonsterBookCover()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl CUserLocal::SetMonsterCardCount(long nCardID, long nCardCount)
{
    __sub_00516EC0(nCardID, nCardCount);
}

long __cdecl CUserLocal::GetMonsterCardCount(long nCardID)
{
    return __sub_0050E3A0(nCardID);
}

int32_t __cdecl CUserLocal::IsMonsterCardFull(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl CUserLocal::UpdateMonsterBookInfo()
{
    __sub_00508E20();
}

ZRef<MonsterBookInfo> __cdecl CUserLocal::GetMonsterBookInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUserLocal::GetMonsterCardCheckListSize(long nGrade)
{
    return __sub_00504210(this, nullptr, nGrade);
}

void CUserLocal::SetMonsterCardCheckList(long nCardID, int32_t bRemove)
{
    __sub_0050E440(this, nullptr, nCardID, bRemove);
}

void CUserLocal::FollowCharacterFailedMsg(long nError, unsigned long dwDriverID)
{
    __sub_00510C70(this, nullptr, nError, dwDriverID);
}

void CUserLocal::OnFollowCharacterFailed(CInPacket& iPacket)
{
    __sub_00510E80(this, nullptr, iPacket);
}

void CUserLocal::SetPassiveTransferField(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::IsPassiveTransferField()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::OnVengeanceSkillApply(CInPacket& iPacket)
{
    __sub_00509B10(this, nullptr, iPacket);
}

void CUserLocal::OnExJablinApply(CInPacket& iPacket)
{
    __sub_005034E0(this, nullptr, iPacket);
}

void CUserLocal::OnGoToCommoditySN(CInPacket& iPacket)
{
    __sub_00505760(this, nullptr, iPacket);
}

void CUserLocal::OnAskAPSPEvent(CInPacket& iPacket)
{
    __sub_0050F0E0(this, nullptr, iPacket);
}

void CUserLocal::OnDeliveryQuest(CInPacket& iPacket)
{
    __sub_0050EF60(this, nullptr, iPacket);
}

const ZRef<CAttrShoe> CUserLocal::GetShoeAttr()
{
    //return __sub_0050A840(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    if (ctx->IsManagerJob())
    {
        return m_pAttrShoe;
    }

    auto field = get_field();
    if (field->GetOption() & 2 == 0)
    {
        return m_pAttrShoe;
    }


    auto vec = GetVecCtrlUser();
    auto isFlying = vec->IsUserFlying();
    ZRef attrField(new CAttrShoe(isFlying), true);
    return attrField;
}

long CUserLocal::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    //return __sub_00508030(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
    if (nInputX || nInputY)
    {

        /*auto portalList = CPortalList::GetInstance();

        //TODO
        auto pos = GetPos();
        auto hidden = portalList->FindPortal_Hidden(pos.x, pos.y, 100);
        portalList->SetHiddenPortal(hidden);*/
        //TODO
    }


    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    if ((this->m_tAlertRemain & 0xFFFFFFFE) != 0x12){


    }



    //TODO(game)

    return CUser::OnResolveMoveAction(nInputX, nInputY, nCurMoveAction, pvc);
    //TODO
}

void CUserLocal::SetShoeAttr()
{
    __sub_0050A990(this, nullptr);
}

int32_t CUserLocal::UseFuncKeyMapped(uint32_t lParam)
{
    return __sub_00532E20(this, nullptr, lParam);
}

int32_t CUserLocal::UseFuncKeyMappedUpKey(uint32_t lParam)
{
    return __sub_00507F00(this, nullptr, lParam);
}

void CUserLocal::CheckPortal_Collision()
{
    __sub_00519A10(this, nullptr);
}

void CUserLocal::CheckReactor_Collision()
{
    __sub_00503D20(this, nullptr);
}

void CUserLocal::OnCollisionCustomImpact(double vx, double vy)
{
    __sub_0050B750(this, nullptr, vx, vy);
}

void CUserLocal::HandleUpKeyDown()
{
    __sub_00519E50(this, nullptr);
}

void CUserLocal::HandleCtrlKeyDown()
{
    __sub_005326B0(this, nullptr);
}

void CUserLocal::HandleXKeyDown()
{
    __sub_0050F6D0(this, nullptr);
}

void CUserLocal::HandleLButtonDown()
{
    __sub_00503D80(this, nullptr);
}

void CUserLocal::HandleLButtonClk()
{
    __sub_00533920(this, nullptr);
}

void CUserLocal::HandleLButtonDblClk()
{
    __sub_00533B90(this, nullptr);
}

void CUserLocal::HandleRButtonClk()
{
    __sub_00511A60(this, nullptr);
}

long CUserLocal::TryDoingNormalAttack(const ZArray<tagRECT>& arcArea, long& tDelay, int32_t bHitReactor)
{
    return __sub_005123C0(this, nullptr, arcArea, tDelay, bHitReactor);
}

int32_t CUserLocal::TryDoingMeleeAttack(const SKILLENTRY* pSkill, long nSLV, long* pnShootRange0,
                                        long nSerialAttackSkillID, unsigned long dwLastAttackMobID, long tKeyDown,
                                        CGrenade* pGrenade, long nReservedSkillID, int32_t bTimeBombAttack,
                                        long nTimeBombX, long nTimeBombY, long nShootSkillID)
{
    return __sub_0051E780(this, nullptr, pSkill, nSLV, pnShootRange0, nSerialAttackSkillID, dwLastAttackMobID, tKeyDown,
                          pGrenade, nReservedSkillID, bTimeBombAttack, nTimeBombX, nTimeBombY, nShootSkillID);
}

int32_t CUserLocal::TryDoingShootAttack(const SKILLENTRY* pSkill, long nSLV, long nShootRange0, int32_t bMortalBlow,
                                        long tKeyDown, uint32_t nRandForMortalBlowAction)
{
    return __sub_00525A00(this, nullptr, pSkill, nSLV, nShootRange0, bMortalBlow, tKeyDown, nRandForMortalBlowAction);
}

int32_t CUserLocal::TryDoingMagicAttack(const SKILLENTRY* pSkill, long nSLV, long nReduceCount, long tKeyDown)
{
    return __sub_0052A240(this, nullptr, pSkill, nSLV, nReduceCount, tKeyDown);
}

int32_t CUserLocal::TryDoingBodyAttack(const SKILLENTRY* pSkill, long nSLV, CMob* pMob, tagPOINT ptHit)
{
    return __sub_00530710(this, nullptr, pSkill, nSLV, pMob, CreateNakedParam(ptHit));
}

int32_t CUserLocal::TryDoingWings(const SKILLENTRY* pSkill, long nSLV)
{
    return __sub_0050D3E0(this, nullptr, pSkill, nSLV);
}

int32_t CUserLocal::TryDoingMonsterMagnet(const SKILLENTRY* pSkill, long nSLV, long nShootRange0)
{
    return __sub_00512F90(this, nullptr, pSkill, nSLV, nShootRange0);
}

int32_t CUserLocal::TryRegisterTeleport(const SKILLENTRY* pSkill, long nSLV, const char* sPortalName,
                                        const char* sTargetPortalName, int32_t bForced)
{
    return __sub_00513690(this, nullptr, pSkill, nSLV, sPortalName, sTargetPortalName, bForced);
}

void CUserLocal::TryRegisterFinalAttack(const CharacterData& cd, const ZArray<ZArray<long>>& a1, long nSkillID,
                                        long tDelay)
{
    __sub_00504E00(this, nullptr, cd, a1, nSkillID, tDelay);
}

void CUserLocal::TryRegisterSerialAttack(long nSkillID, long tDelay, unsigned long dwMobID)
{
    __sub_00503480(this, nullptr, nSkillID, tDelay, dwMobID);
}

void CUserLocal::TryRegisterSparkAttack(ATTACKINFO& a, long tReserve)
{
    __sub_0050D370(this, nullptr, a, tReserve);
}

int32_t CUserLocal::TryDoingSmoothingMovingShootAttackPrepare(const SKILLENTRY* pSkill, long nSLV, long nShootRange0)
{
    return __sub_00512F90(this, nullptr, pSkill, nSLV, nShootRange0);
}

void CUserLocal::TryDoingSmoothingMovingShootAttack()
{
    __sub_0052DE70(this, nullptr);
}

void CUserLocal::TryLeaveDirectionMode(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::SetDirectionMode(int32_t bSet)
{
    __sub_00504240(this, nullptr, bSet);
}

int32_t CUserLocal::DoActiveSkill(long nSkillID, uint32_t nScanCode, long* pnConsumeCheck)
{
    return __sub_005445B0(this, nullptr, nSkillID, nScanCode, pnConsumeCheck);
}

long CUserLocal::DoActiveSkill_StatChange_ByPet(long arg0, ZXString<char> arg1, int32_t arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::MoveToPortal(const char* sPortalName)
{
    __sub_0012A1F0(this, nullptr, sPortalName);
}

void CUserLocal::SitOnPortableChair(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

long CUserLocal::GetPortableChairSittingTime()
{
    return __sub_00348E50(this, nullptr);
}

void CUserLocal::ResetPortableChairSittingtime()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUserLocal::GetPortableChairID()
{
    return __sub_00348E50(this, nullptr);
}

int32_t CUserLocal::SetPortableChairStatSetSent()
{
    return __sub_00504FC0(this, nullptr);
}

void CUserLocal::SetPortableChairStatSetSent_(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::GetPortableChairStatSetSent()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint16_t CUserLocal::GetPetSkill()
{
    return __sub_0059E6F0(this, nullptr);
}

void CUserLocal::UpdatePetSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryConsumePetHP(long nDamage, int32_t bForce, unsigned char bBuffSkill)
{
    __sub_0050D8A0(this, nullptr, nDamage, bForce, bBuffSkill);
}

void CUserLocal::TryConsumePetMP(long nDamage, int32_t bForce, unsigned char bBuffSkill)
{
    __sub_0050DBC0(this, nullptr, nDamage, bForce, bBuffSkill);
}

void CUserLocal::SetConsumePetMP(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::OnKeyDownSkillEnd()
{
    __sub_005301B0(this, nullptr);
}

int32_t CUserLocal::SendSkillUseRequest(const SKILLENTRY* pSkill, long nSLV, unsigned long dwAffectedMemberBitmap,
                                        long nMobCount, unsigned long* adwMobID, long nSpiritJavelinItemID,
                                        long nPelletPOS)
{
    return __sub_0053E930(this, nullptr, pSkill, nSLV, dwAffectedMemberBitmap, nMobCount, adwMobID,
                          nSpiritJavelinItemID, nPelletPOS);
}

void CUserLocal::SendSkillCancelRequest(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::SendSkillEffectRequest(long nAttr, long nImpact, int32_t bLeft)
{
    __sub_00505E10(this, nullptr, nAttr, nImpact, bLeft);
}

void CUserLocal::ViewAutoQuestAlert()
{
    __sub_00516600(this, nullptr);
}

void CUserLocal::EraseAutoQuestAlert()
{
    __sub_00505060(this, nullptr);
}

void CUserLocal::ShowAutoStartQuestList()
{
    __sub_0050FEF0(this, nullptr);
}

void CUserLocal::GetDCRect(tagRECT& rc)
{
    __sub_005050A0(this, nullptr, rc);
}

ZXString<char> CUserLocal::GetMateNameByQuestID(uint16_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::CanUseBareHand()
{
    return __sub_00504060(this, nullptr);
}

int32_t CUserLocal::IsVehicleValid()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::CheckRidingVehicle(int32_t bJaguarCheckPass)
{
    return __sub_0050E100(this, nullptr, bJaguarCheckPass);
}

int32_t CUserLocal::CheckRidingVehicleExceptMechanic()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsActiveSkillReplacedByMeleeAttack()
{
    return __sub_00160050(this, nullptr);
}

long CUserLocal::GetSkillLevel(long nSkillID)
{
    return __sub_00508F60(this, nullptr, nSkillID);
}

void CUserLocal::TalkToNpc(ZRef<CNpc> pNpc)
{
    __sub_005321F0(this, nullptr, CreateNakedParam(pNpc));
}

int32_t CUserLocal::IsDoingRocketBooster()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ApplyMechanicMode(long nOldMechanicMode, long nNewMechanicMode)
{
    __sub_005034F0(this, nullptr, nOldMechanicMode, nNewMechanicMode);
}

void CUserLocal::SendRepeatEffectRemoveRequest()
{
    __sub_00509D70(this, nullptr);
}

int32_t CUserLocal::DoActiveSkill_MeleeAttack(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_ShootAttack(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_VehicleShootAttack(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_MagicAttack(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_WeaponBooster(const SKILLENTRY* pSkill, long nSLV, long nWT1, long nWT2, long nWT3,
                                                long nWT4)
{
    return __sub_0053F960(this, nullptr, pSkill, nSLV, nWT1, nWT2, nWT3, nWT4);
}

int32_t CUserLocal::DoActiveSkill_Teleport(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Heal(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_TownPortal(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_OpenGate(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Prepare(const SKILLENTRY* pSkill, long nSLV, uint32_t nScanCode)
{
    return __sub_00541710(this, nullptr, pSkill, nSLV, nScanCode);
}

int32_t CUserLocal::DoActiveSkill_Summon(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_StatChange(const SKILLENTRY* pSkill, long nSLV, unsigned long dwTargetFlag)
{
    return __sub_00543C20(this, nullptr, pSkill, nSLV, dwTargetFlag);
}

int32_t CUserLocal::DoActiveSkill_MesoExplosion(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_BoundJump(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_RocketBooster(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_StatChangeAdmin(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_SmokeShell(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_RecoveryAura(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_CombatStep(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Flying(long nSkillID)
{
    return __sub_0053CEC0(this, nullptr, nSkillID);
}

int32_t CUserLocal::DoActiveSkill_NotPrepare_Bomb(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_DamageMeter(long nSkillID)
{
    return __sub_0053D0D0(this, nullptr, nSkillID);
}

int32_t CUserLocal::DoActiveSkill_RepeatSkill(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Aura(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoEnchantSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoMakerSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoAntiMacroSkill(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_HookAndHit(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_MobCapture(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_SummonMonster(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ClearRocketBooster()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ClearRepeatSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CUserLocal::FindParty(const SKILLENTRY* pSkill, long nSLV, long* pnCount)
{
    return __sub_0053A620(this, nullptr, pSkill, nSLV, pnCount);
}

void CUserLocal::TryDoingFinalAttack()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingSerialAttack()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingSparkAttack()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingPreparedSkill()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingRepeatSkill(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::TryDoingSiege(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::TryDoingRocketBooster()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingRocketBoosterEnd()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingTeleport()
{
    __sub_00532C00(this, nullptr);
}

void CUserLocal::TryDoingRush()
{
    __sub_0050B8C0(this, nullptr);
}

void CUserLocal::TryDoingFlyingRush()
{
    __sub_0050BC10(this, nullptr);
}

void CUserLocal::TryDoingFallDown()
{
    __sub_00505D90(this, nullptr);
}

void CUserLocal::TryDoingItemSkill(CMob* pMob, long tAttackTime, long nMobCount, long nDamagePerMob, long nSkillID,
                                   long nAction)
{
    __sub_00507A70(this, nullptr, pMob, tAttackTime, nMobCount, nDamagePerMob, nSkillID, nAction);
}

void CUserLocal::TryDoingMine()
{
    //TODO(game) __sub_00507D70(this, nullptr);
}

void CUserLocal::TryDoingSitdownHealing()
{
    __sub_00503D60(this, nullptr);
}

void CUserLocal::ValidateItemSkill()
{
    __sub_0051B540(this, nullptr);
}

void CUserLocal::ValidateSkillBonus()
{
    __sub_0050C4D0(this, nullptr);
}

void CUserLocal::CheckEquippedSetItem()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryAutoRequestFollowCharacter()
{
    __sub_00504BF0(this, nullptr);
}

void CUserLocal::TryPassiveTransferField()
{
    __sub_0051A2E0(this, nullptr);
}

void CUserLocal::CheckPassenser()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::IsTeleportSkillAvailable(const SKILLENTRY* pSkill, long nSLV, tagPOINT& ptAfterTeleport)
{
    return __sub_0053A350(this, nullptr, pSkill, nSLV, ptAfterTeleport);
}

int32_t CUserLocal::IsEquippedCorrectWeaponForSkill(const SKILLENTRY* pSkill)
{
    return __sub_0053A0A0(this, nullptr, pSkill);
}

void CUserLocal::OnSkillCooltimeSet(CInPacket& iPacket)
{
    __sub_00508B90(this, nullptr, iPacket);
}

void CUserLocal::CreateKeyDownBar(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::DrawKeyDownBar()
{
    __sub_005153B0(this, nullptr);
}

long CUserLocal::GetAchillesReduce(long nDamage)
{
    return __sub_00508C40(this, nullptr, nDamage);
}

void CUserLocal::SendBanMapByMobRequest(unsigned long dwMobTemplateID)
{
    __sub_00508D50(this, nullptr, dwMobTemplateID);
}

void CUserLocal::CheckBoobyTrapPickUpRequest(uint32_t lParam)
{
    __sub_00506190(this, nullptr, lParam);
}

void CUserLocal::ThrowGrenade(long nSkillID, long nSLV, long tKeyDown)
{
    __sub_0050DF50(this, nullptr, nSkillID, nSLV, tKeyDown);
}

void CUserLocal::BeRushValid()
{
    __sub_00505D00(this, nullptr);
}

void CUserLocal::AddRushElem(CUserLocal::RUSH::RUSHELEM::RUSHSTYLE nState, long nVx, long tDuring, double dAx)
{
    __sub_0050F6A0(this, nullptr, nState, nVx, tDuring, dAx);
}

_ZTL_SEC_GETSETI(long, CUserLocal, m_nLastJumpInputX)
_ZTL_SEC_GETSETI(int32_t, CUserLocal, m_bSit)
_ZTL_SEC_GETSETI(long, CUserLocal, m_nPortableChairID)
_ZTL_SEC_GETSETI(long, CUserLocal, m_nSittingTime)
_ZTL_SEC_GETSETI(uint16_t, CUserLocal, m_usActivePetSkill)

void CUserLocal::ShowBallonMsg(ZXString<char>& str, long nWidth, long tTimeOut, long x, long y,
                               _x_com_ptr<IWzVector2D> pOrigin)
{
    __sub_0051D580(this, nullptr, str, nWidth, tTimeOut, x, y, CreateNakedParam(pOrigin));
}

int32_t CUserLocal::ProcessDualKey()
{
    return __sub_0050A6F0(this, nullptr);
}

long CUserLocal::CalcBuffDefenseAttr(char nElemAttr, long nDamage)
{
    return __sub_00504120(this, nullptr, nElemAttr, nDamage);
}

void CUserLocal::RemoveTutor(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::RequestIncCombo()
{
    __sub_00509070(this, nullptr);
}

void CUserLocal::OnIncComboResponse(CInPacket& iPacket)
{
    __sub_0051A970(this, nullptr, iPacket);
}

long CUserLocal::GetCombo()
{
    return __sub_00348E50(this, nullptr);
}

void CUserLocal::SetCombo(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::ClearCombo()
{
    __sub_00505660(this, nullptr);
}

void CUserLocal::DrawCombo()
{
    __sub_00517040(this, nullptr);
}

void CUserLocal::HoldCombo(int32_t bHold)
{
    __sub_005180E0(this, nullptr, bHold);
}

int32_t CUserLocal::IsHoldingCombo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::OnRadioSchedule(CInPacket& iPacket)
{
    __sub_00518120(this, nullptr, iPacket);
}

void CUserLocal::OnOpenSkillGuide(CInPacket& iPacket)
{
    __sub_0050E6A0(this, nullptr, iPacket);
}

void CUserLocal::OnNoticeMsg(CInPacket& iPacket)
{
    __sub_005181D0(this, nullptr, iPacket);
}

void CUserLocal::OnChatMsg(CInPacket& iPacket)
{
    __sub_00518300(this, nullptr, iPacket);
}

void CUserLocal::OnBuffzoneEffect(CInPacket& iPacket)
{
    __sub_005183A0(this, nullptr, iPacket);
}

long CUserLocal::GetConsumeItemUsingLastTime()
{
    return __sub_00348E50(this, nullptr);
}

void CUserLocal::SetConsumeItemUsingLastTime(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::UpdateClientTimer(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::SetClientTimer(long nSkillID, long tTime)
{
    __sub_0050E8B0(this, nullptr, nSkillID, tTime);
}

void CUserLocal::SetSwallowed()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::FindSwallowMob(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryDoingSwallowMobWriggle()
{
    // TODO: No module found for method
    //UNIMPLEMENTED;
    //TODO(game)
}

void CUserLocal::ResetMobWriggle()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::TryDoingSwallowAbsorb(const SKILLENTRY* pSkill, long nSLV, long nShootRange0)
{
    return __sub_00512F90(this, nullptr, pSkill, nSLV, nShootRange0);
}

void CUserLocal::TryDoingSwallowBuff()
{
    // TODO: No module found for method
    //TODO(game) UNIMPLEMENTED;
}

void CUserLocal::ResetSwallow()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryDoingCyclone()
{
    __sub_00532D60(this, nullptr);
}

long CUserLocal::GetTeslaCoilCount()
{
    return __sub_00348E50(this, nullptr);
}

void CUserLocal::GetTeslaCoilSummonedID(ZArray<unsigned long>& ldwTeslaCoilSummonedID)
{
    __sub_00510B90(this, nullptr, ldwTeslaCoilSummonedID);
}

void CUserLocal::ChangeTeslaCoilEndTime(long nSeatID)
{
    __sub_005D3870(this, nullptr, nSeatID);
}

void CUserLocal::ChangeTeslaTriangle()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ClearPassiveSkillData()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::SetPassiveSkillData(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_005185A0(this, nullptr, pSkill, nSLV);
}

void CUserLocal::RevisePassiveSkillData()
{
    __sub_005042E0(this, nullptr);
}

void CUserLocal::UpdatePassiveSkillData(int32_t bDontSend)
{
    __sub_00518C20(this, nullptr, bDontSend);
}

void CUserLocal::SetChatPassiveSkillDataInfo()
{
    __sub_00510ED0(this, nullptr);
}

const ZRef<PassiveSkillData> CUserLocal::GetPassiveSkillData()
{
    //return __sub_001008C0(this, nullptr);
    return m_pPassiveSkillData;
}

void CUserLocal::SetPassiveSkillDataForced(ZXString<char> sFlag, long nVal)
{
    __sub_00509730(this, nullptr, CreateNakedParam(sFlag), nVal);
}

int32_t CUserLocal::CheckApplyExJablin(const SKILLENTRY* pSkill, long nAction)
{
    return __sub_00509BF0(this, nullptr, pSkill, nAction);
}

void CUserLocal::SetPetsAngry()
{
    __sub_005042A0(this, nullptr);
}

void CUserLocal::ResetNLCPQ()
{
    // TODO: No module found for method
    //TODO(game)
}

int32_t CUserLocal::HasGL5thEventTeam()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsGL5thEventCakeTeam()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsGL5thEventPieTeam()
{
    return __sub_00160050(this, nullptr);
}

void CUserLocal::OnQuestGuideResult(CInPacket& iPacket)
{
    __sub_0050F1E0(this, nullptr, iPacket);
}

CUserLocal& CUserLocal::operator=(CUserLocal& arg0)
{
    return _op_assign_314(this, arg0);
}

CUserLocal& CUserLocal::_op_assign_314(CUserLocal* pThis, CUserLocal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::TELEPORT::TELEPORT()
{
}

void CUserLocal::TELEPORT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::RUSH::~RUSH()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUserLocal::RUSH::_dtor_0()
{
    return __sub_00506C70(this, nullptr);
}

CUserLocal::RUSH::RUSH(const CUserLocal::RUSH& arg0)
{
    _ctor_1(arg0);
}

void CUserLocal::RUSH::_ctor_1(const CUserLocal::RUSH& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::RUSH::RUSH()
{
}

void CUserLocal::RUSH::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::RUSH& CUserLocal::RUSH::operator=(const CUserLocal::RUSH& arg0)
{
    return _op_assign_3(this, arg0);
}

CUserLocal::RUSH& CUserLocal::RUSH::_op_assign_3(CUserLocal::RUSH* pThis, const CUserLocal::RUSH& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CBalloonMsg::~CBalloonMsg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUserLocal::CBalloonMsg::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CBalloonMsg::CBalloonMsg(const CUserLocal::CBalloonMsg& arg0)
{
    _ctor_1(arg0);
}

void CUserLocal::CBalloonMsg::_ctor_1(const CUserLocal::CBalloonMsg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CBalloonMsg::CBalloonMsg()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUserLocal::CBalloonMsg::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::CBalloonMsg::Init(ZXString<char>& str, long nWidth, long tTimeOut, long x, long y,
                                   _x_com_ptr<IWzVector2D> pOrigin)
{
    __sub_0051BBB0(this, nullptr, str, nWidth, tTimeOut, x, y, CreateNakedParam(pOrigin));
}

CUserLocal::CBalloonMsg& CUserLocal::CBalloonMsg::operator=(const CUserLocal::CBalloonMsg& arg0)
{
    return _op_assign_4(this, arg0);
}

CUserLocal::CBalloonMsg& CUserLocal::CBalloonMsg::_op_assign_4(CUserLocal::CBalloonMsg* pThis,
                                                               const CUserLocal::CBalloonMsg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

tagPOINT __cdecl GetShootAttackPt0(long nSkillID, long nJob, const tagPOINT& ptUser, long nVehicleID,
                                   long nBodyRelMoveY)
{
    return __sub_005039A0(nSkillID, nJob, ptUser, nVehicleID, nBodyRelMoveY);
}

long __cdecl GetShootRange0(long nSkillID, long nShootRange0, int32_t bMortalBlow)
{
    return __sub_00503230(nSkillID, nShootRange0, bMortalBlow);
}

const SKILLENTRY* __cdecl get_soul_arrow(long nJob)
{
    return __sub_00503910(nJob);
}

void __cdecl sort_mob_by_distance(int32_t arg0, CMob** arg1, long arg2)
{
    return __sub_00504B20(arg0, arg1, arg2);
}

long __cdecl get_stance_skill_id(const long nJob)
{
    return __sub_005031D0(nJob);
}

void __cdecl zswap_CMob__(CMob*& a, CMob*& b)
{
    return __sub_00504480(a, b);
}

char __cdecl _ZtlSecureFuse_char_(const char* at, uint32_t uCS)
{
    return __sub_005035C0(at, uCS);
}

void __cdecl sort_attackInfo_by_distance(int32_t arg0, ATTACKINFO* arg1, long arg2)
{
    return __sub_00504A50(arg0, arg1, arg2);
}
