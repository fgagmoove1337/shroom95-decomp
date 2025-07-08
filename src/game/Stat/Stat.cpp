// Stat.cpp
#include "Stat.hpp"
#include "Stat/TwoState.hpp"
#include "ItemInfo/ItemInfo.hpp"

static ZRef<CItemInfo::SETITEMINFO> FAKE_ZRefCItemInfo_SETITEMINFO{};
static ZRef<GW_ItemSlotPet> FAKE_ZRefGW_ItemSlotPet{};
static ZRef<SecondaryStat::VIEWELEM> FAKE_ZRefSecondaryStat_VIEWELEM{};

static ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long> FAKE_ZMap_long_ZRef_SecondaryStat_VIEWELEM_long{};

static TwoStateTemporaryStat<long, greater_equal<long, 10000>, Expire<BaseOnLastUpdatedTime, DynamicTermSet>, Decrease<
                                 long, 200, 10000>, Nothing<long>> FAKE_TWOSTATE_STAT1;
static TwoStateTemporaryStat<long, not_equal<long, 0>, Expire<BaseOnLastUpdatedTime, DynamicTermSet>, Nothing<long>,
                             Nothing<long>> FAKE_TWOSTATE_STAT2;

#include "Stat_regen.ipp"

PassiveSkillData::~PassiveSkillData()
{
    UNIMPLEMENTED; // _dtor_0();
}

void PassiveSkillData::_dtor_0()
{
    UNIMPLEMENTED; // return __sub_00505D30(this, nullptr);
}

PassiveSkillData::PassiveSkillData(const PassiveSkillData& arg0)
{
    UNIMPLEMENTED; //_ctor_1( arg0);
}

void PassiveSkillData::_ctor_1(const PassiveSkillData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PassiveSkillData::PassiveSkillData()
{
}

void PassiveSkillData::_ctor_0()
{
    UNIMPLEMENTED; // return __sub_00506BF0(this, nullptr);
}

void PassiveSkillData::ClearData()
{
    this->nMHPr = 0;
    this->nMMPr = 0;
    this->nCr = 0;
    this->nCDMin = 0;
    this->nACCr = 0;
    this->nEVAr = 0;
    this->nAr = 0;
    this->nEr = 0;
    this->nPDDr = 0;
    this->nMDDr = 0;
    this->nPDr = 0;
    this->nMDr = 0;
    this->nDIPr = 0;
    this->nPDamr = 0;
    this->nMDamr = 0;
    this->nPADr = 0;
    this->nMADr = 0;
    this->nEXPr = 0;
    this->nIMPr = 0;
    this->nASRr = 0;
    this->nTERr = 0;
    this->nMESOr = 0;
    this->nPADx = 0;
    this->nMADx = 0;
    this->nIMDr = 0;
    this->nPsdJump = 0;
    this->nPsdSpeed = 0;
    this->nOCr = 0;
    this->nDCr = 0;
    mAdditionPsd.RemoveAll();
}

PassiveSkillData& PassiveSkillData::operator=(const PassiveSkillData& arg0)
{
    return _op_assign_4(this, arg0);
}

PassiveSkillData& PassiveSkillData::_op_assign_4(PassiveSkillData* pThis, const PassiveSkillData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int CalcDamage::ms_aanStandardPDD[6][201]{};

SecondaryStatRateOption::SecondaryStatRateOption()
{
    UNIMPLEMENTED; //_ctor_0();
}

void SecondaryStatRateOption::_ctor_0()
{
    return __sub_00320840(this, nullptr);
}

SecondaryStat::~SecondaryStat()
{
    UNIMPLEMENTED; // _dtor_0();
}

void SecondaryStat::_dtor_0()
{
    return __sub_00327790(this, nullptr);
}

SecondaryStat::SecondaryStat(const SecondaryStat& arg0)
{
    _ctor_1(arg0);
}

void SecondaryStat::_ctor_1(const SecondaryStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SecondaryStat::SecondaryStat()
{
    //TODO proper temp stats
    aTemporaryStat[0] = new TwoStateTemporaryStat<
        long, greater_equal<long, 10000>, Expire<BaseOnLastUpdatedTime, DynamicTermSet>, Decrease<long, 200, 10000>,
        Nothing<long>>();

    for (const auto i : {1, 2, 6})
    {
        aTemporaryStat[i] = new TwoStateTemporaryStat<long,not_equal<long,0>,Expire<BaseOnLastUpdatedTime,DynamicTermSet>,Nothing<long>,Nothing<long>>();
    }

    aTemporaryStat[3] = new TwoStateTemporaryStat<long,not_equal<long,0>,NoExpire,Nothing<long>,Nothing<long>>();

    aTemporaryStat[4] = new TemporaryStat_PartyBooster();

    aTemporaryStat[5] = new TemporaryStat_GuidedBullet();

    Clear();
}

void SecondaryStat::_ctor_0()
{
    //return __sub_0032F190(this, nullptr);
    new(this) SecondaryStat();
}

_ZTL_SEC_GETSETI(long, SecondaryStat, nPAD)

_ZTL_SEC_GETSETI(long, SecondaryStat, nPAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rPAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tPAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemPADR)

_ZTL_SEC_GETSETI(long, SecondaryStat, nPDD)

_ZTL_SEC_GETSETI(long, SecondaryStat, nPDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rPDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tPDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemPDDR)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMAD)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemMADR)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMDD)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemMDDR)

_ZTL_SEC_GETSETI(long, SecondaryStat, nACC)

_ZTL_SEC_GETSETI(long, SecondaryStat, nACC_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rACC_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tACC_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemACCR)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEVA)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEVA_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEVA_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEVA_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemEVAR)

_ZTL_SEC_GETSETI(long, SecondaryStat, nCraft)

_ZTL_SEC_GETSETI(long, SecondaryStat, nCraft_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rCraft_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tCraft_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSpeed)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSpeed_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSpeed_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSpeed_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nJump)

_ZTL_SEC_GETSETI(long, SecondaryStat, nJump_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rJump_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tJump_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMagicGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMagicGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMagicGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDarkSight_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDarkSight_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDarkSight_)

_ZTL_SEC_GETSETI(long, SecondaryStat, mDarkSight_)

_ZTL_SEC_GETSETI(long, SecondaryStat, pDarkSight_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBooster_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBooster_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBooster_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nPowerGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rPowerGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tPowerGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMechanic_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMechanic_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMechanic_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMaxHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMaxHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMaxHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMaxMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMaxMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMaxMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nInvincible_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rInvincible_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tInvincible_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSoulArrow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSoulArrow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSoulArrow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nStun_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rStun_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tStun_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nPoison_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rPoison_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tPoison_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSeal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSeal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSeal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDarkness_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDarkness_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDarkness_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nComboCounter_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rComboCounter_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tComboCounter_)

_ZTL_SEC_GETSETI(long, SecondaryStat, mComboCounter_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nWeaponCharge_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rWeaponCharge_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tWeaponCharge_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDragonBlood_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDragonBlood_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDragonBlood_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nHolySymbol_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rHolySymbol_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tHolySymbol_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMesoUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMesoUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMesoUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nShadowPartner_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rShadowPartner_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tShadowPartner_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nPickPocket_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rPickPocket_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tPickPocket_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMesoGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMesoGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMesoGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nThaw_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rThaw_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tThaw_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nWeakness_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rWeakness_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tWeakness_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nCurse_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rCurse_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tCurse_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSlow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSlow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSlow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMorph_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMorph_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMorph_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nGhost_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rGhost_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tGhost_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nRegen_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rRegen_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tRegen_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBasicStatUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBasicStatUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBasicStatUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nStance_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rStance_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tStance_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSharpEyes_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSharpEyes_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSharpEyes_)

_ZTL_SEC_GETSETI(long, SecondaryStat, mSharpEyes_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nManaReflection_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rManaReflection_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tManaReflection_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nAttract_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rAttract_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tAttract_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSpiritJavelin_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSpiritJavelin_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSpiritJavelin_)

_ZTL_SEC_GETSETI(long, SecondaryStat, mSpiritJavelin_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nInfinity_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rInfinity_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tInfinity_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tUpdateInfinity_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nHolyshield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rHolyshield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tHolyshield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nHamString_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rHamString_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tHamString_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBlind_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBlind_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBlind_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nConcentration_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rConcentration_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tConcentration_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBanMap_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBanMap_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBanMap_)

_ZTL_SEC_GETSETI(long, SecondaryStat, mBanMap_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMaxLevelBuff_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMaxLevelBuff_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMaxLevelBuff_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tUpdateAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSuperBody_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSuperBody_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSuperBody_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDarkAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDarkAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDarkAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, cDarkAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBlueAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBlueAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBlueAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, cBlueAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nYellowAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rYellowAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tYellowAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, cYellowAura_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBarrier_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBarrier_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBarrier_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDojangShield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDojangShield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDojangShield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nReverseInput_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rReverseInput_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tReverseInput_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDojangBerserk_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDojangBerserk_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDojangBerserk_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDojangInvincible_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDojangInvincible_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDojangInvincible_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMesoUpByItem)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMesoUpByItem_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMesoUpByItem_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMesoUpByItem_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemUpByItem)

_ZTL_SEC_GETSETI(long, SecondaryStat, nItemUpByItem_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rItemUpByItem_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tItemUpByItem_)

_ZTL_SEC_GETSETI(long, SecondaryStat, xItemUpByItem_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nRespectPImmune)

_ZTL_SEC_GETSETI(long, SecondaryStat, nRespectPImmune_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rRespectPImmune_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tRespectPImmune_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nRespectMImmune)

_ZTL_SEC_GETSETI(long, SecondaryStat, nRespectMImmune_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rRespectMImmune_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tRespectMImmune_)

_ZTL_SEC_GETSETI(char, SecondaryStat, nDefenseAtt)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDefenseAtt_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDefenseAtt_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDefenseAtt_)

_ZTL_SEC_GETSETI(char, SecondaryStat, nDefenseState)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDefenseState_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDefenseState_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDefenseState_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nIncEffectHPPotion)

_ZTL_SEC_GETSETI(long, SecondaryStat, nIncEffectHPPotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rIncEffectHPPotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tIncEffectHPPotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nIncEffectMPPotion)

_ZTL_SEC_GETSETI(long, SecondaryStat, nIncEffectMPPotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rIncEffectMPPotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tIncEffectMPPotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSpark_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSpark_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSpark_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSoulMasterFinal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSoulMasterFinal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSoulMasterFinal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nWindBreakerFinal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rWindBreakerFinal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tWindBreakerFinal_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nElementalReset_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rElementalReset_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tElementalReset_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nWindWalk_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rWindWalk_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tWindWalk_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEventRate_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEventRate_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEventRate_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nComboAbilityBuff_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rComboAbilityBuff_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tComboAbilityBuff_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nComboDrain_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rComboDrain_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tComboDrain_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nComboBarrier_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rComboBarrier_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tComboBarrier_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBodyPressure_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBodyPressure_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBodyPressure_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSmartKnockback_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSmartKnockback_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSmartKnockback_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nRepeatEffect_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rRepeatEffect_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tRepeatEffect_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nExpBuffRate_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rExpBuffRate_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tExpBuffRate_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nStopPortion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rStopPortion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tStopPortion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nStopMotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rStopMotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tStopMotion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nFear_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rFear_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tFear_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEvanSlow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEvanSlow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEvanSlow_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMagicShield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMagicShield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMagicShield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, mMagicShield_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMagicResistance_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMagicResistance_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMagicResistance_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSoulStone_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSoulStone_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSoulStone_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nFlying_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rFlying_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tFlying_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nFrozen_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rFrozen_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tFrozen_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nAssistCharge_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rAssistCharge_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tAssistCharge_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEnrage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEnrage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEnrage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSuddenDeath_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSuddenDeath_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSuddenDeath_)

_ZTL_SEC_GETSETI(long, SecondaryStat, mSuddenDeath_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nNotDamaged_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rNotDamaged_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tNotDamaged_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nFinalCut_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rFinalCut_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tFinalCut_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nThornsEffect_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rThornsEffect_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tThornsEffect_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSwallowAttackDamage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSwallowAttackDamage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSwallowAttackDamage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMorewildDamageUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMorewildDamageUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMorewildDamageUp_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEMHP)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEMHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEMHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEMHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEMMP)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEMMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEMMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEMMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEPAD)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEPAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEPAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEPAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEPDD)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEPDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEPDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEPDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEMDD)

_ZTL_SEC_GETSETI(long, SecondaryStat, nEMDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rEMDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tEMDD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tGuard_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMine_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMine_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMine_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSafetyDamage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSafetyDamage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSafetyDamage_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSafetyAbsorb_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSafetyAbsorb_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSafetyAbsorb_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nCyclone_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rCyclone_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tCyclone_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSwallowCritical_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSwallowCritical_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSwallowCritical_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSwallowMaxMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSwallowMaxMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSwallowMaxMP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSwallowDefence_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSwallowDefence_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSwallowDefence_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSwallowEvasion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSwallowEvasion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSwallowEvasion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSwallowBuffTime_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nConversion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rConversion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tConversion_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nRevive_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rRevive_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tRevive_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSneak_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSneak_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSneak_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nMorewildMaxHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rMorewildMaxHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tMorewildMaxHP_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDice_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDice_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDice_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBlessingArmor_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBlessingArmor_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBlessingArmor_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBlessingArmorIncPAD_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nDamR_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rDamR_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tDamR_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nTeleportMasteryOn_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rTeleportMasteryOn_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tTeleportMasteryOn_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nCombatOrders_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rCombatOrders_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tCombatOrders_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nBeholder_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rBeholder_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tBeholder_)

_ZTL_SEC_GETSETI(long, SecondaryStat, nSummonBomb_)

_ZTL_SEC_GETSETI(long, SecondaryStat, rSummonBomb_)

_ZTL_SEC_GETSETI(long, SecondaryStat, tSummonBomb_)

_ZTL_SEC_GETSETI(long, SecondaryStat, lSummonBomb_)

void SecondaryStat::Clear()
{
    __sub_00327790(this, nullptr);
}

int32_t __cdecl SecondaryStat::IsMovementAffectingStat(MY_UINT128 uFlag)
{
    return __sub_003208C0(CreateNakedParam(uFlag));
}

/*const TemporaryStatBase<long>* SecondaryStat::operator[](int32_t index) {
    return _op_index_833(this, index);
}*/
const TemporaryStatBase<long>* SecondaryStat::_op_index_833(SecondaryStat* pThis, int32_t index)
{
    return __sub_0023A620(pThis, nullptr, index);
}

TemporaryStatBase<long>* SecondaryStat::operator[](int32_t arg0)
{
    return _op_index_834(this, arg0);
}

TemporaryStatBase<long>* SecondaryStat::_op_index_834(SecondaryStat* pThis, int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long SecondaryStat::GetPAD(const CharacterData& cd, long nBulletItemID, long nPsdPADX, long nPsdPADR, long nIncPAD,
                           long* pIncinOrg)
{
    return __sub_00325A70(this, nullptr, cd, nBulletItemID, nPsdPADX, nPsdPADR, nIncPAD, pIncinOrg);
}

long SecondaryStat::GetMAD(long nPsdMADX, long nPsdMADR, long nDragonFury, long* pIncinOrg)
{
    return __sub_00323700(this, nullptr, nPsdMADX, nPsdMADR, nDragonFury, pIncinOrg);
}

long SecondaryStat::GetPDD(long nBasePDD, const CharacterData& cd, long nPsdPDDR, long* pIncinOrg,
                           int32_t bShieldEquiped,
                           long nDarkForcePddr)
{
    return __sub_00325D20(this, nullptr, nBasePDD, cd, nPsdPDDR, pIncinOrg, bShieldEquiped, nDarkForcePddr);
}

long SecondaryStat::GetMDD(long nBaseMDD, const CharacterData& cd, long nPsdMDDR, long* pIncinOrg,
                           int32_t bShieldEquiped)
{
    return __sub_00325F70(this, nullptr, nBaseMDD, cd, nPsdMDDR, pIncinOrg, bShieldEquiped);
}

long SecondaryStat::GetACC(const CharacterData& cd, long nPdsACCR, long nBaseACC, long* pIncinOrg)
{
    return __sub_003261D0(this, nullptr, cd, nPdsACCR, nBaseACC, pIncinOrg);
}

long SecondaryStat::GetEVA(const CharacterData& cd, long nPdsEVAR, long nBaseEVA, long* pIncinOrg)
{
    return __sub_003262A0(this, nullptr, cd, nPdsEVAR, nBaseEVA, pIncinOrg);
}

long SecondaryStat::GetSpeed(long nPsdSpeed) const
{
    auto speed = _ZtlSecureGet_nSpeed();
    auto extraSpeed = _ZtlSecureGet_nSpeed_();
    if (extraSpeed >= 0)
    {
        auto tmpSpeed = aTemporaryStat[1]->GetValue();
        if (tmpSpeed >= extraSpeed)
            extraSpeed = tmpSpeed;
    }

    //TODO(game) verify
    return nPsdSpeed + speed + extraSpeed;


    //return __sub_004615E0((SecondaryStat*)this, nullptr, nPsdSpeed);
}

long SecondaryStat::GetJump(long nPsdJump)
{
    return __sub_00461680(this, nullptr, nPsdJump);
}

long SecondaryStat::GetIncPAD(const CharacterData& cd)
{
    return __sub_003257A0(this, nullptr, cd);
}

long SecondaryStat::GetIncACC(const CharacterData& cd)
{
    return __sub_00325850(this, nullptr, cd);
}

long SecondaryStat::GetIncEVA(const CharacterData& cd)
{
    return __sub_00325900(this, nullptr, cd);
}

long SecondaryStat::GetIncEPAD(const CharacterData& cd)
{
    return __sub_003259B0(this, nullptr, cd);
}

int32_t SecondaryStat::IsRidingVehicle()
{
    return __sub_004616F0(this, nullptr);
}

int32_t SecondaryStat::IsRidingSkillVehicle()
{
    auto& vehicle = aTemporaryStat[3];
    if (!vehicle->IsActivated())
        return false;
    ZFatalSectionGuard lock(vehicle->GetLock());
    return vehicle->GetValue() / 10000 == 193;
}

int32_t SecondaryStat::IsRidingTamedMob()
{
    //TODO(game)
    return false;
}

int32_t SecondaryStat::IsRidingEvanDragon()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t SecondaryStat::IsEventVehicle()
{
    return __sub_00461740(this, nullptr);
}

int32_t SecondaryStat::IsMechanicVehicle()
{
    //TODO(game)
    return 0;
}

int32_t SecondaryStat::IsWildhunterJaguarVehicle()
{
    //TODO(game)
    return 0;
}

long SecondaryStat::GetVechicleID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long SecondaryStat::GetJaguarRidingMaxHPUp(const CharacterData& c)
{
    return __sub_00329650(this, nullptr, c);
}

void SecondaryStat::Reset(MY_UINT128 uFlagTemp)
{
    __sub_003296B0(this, nullptr, CreateNakedParam(uFlagTemp));
}

MY_UINT128 SecondaryStat::DecodeForLocal(CInPacket& tCur, ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>& uFlagTemp)
{
    return __sub_003350E0(this, nullptr, tCur, uFlagTemp);
}

MY_UINT128 SecondaryStat::DecodeForRemote(CInPacket& iPacket)
{
    return __sub_0032B7B0(this, nullptr, iPacket);
}

void SecondaryStat::SetFrom(const CharacterData& c, const BasicStat& bs, const ForcedStat& fs,
                            ZRef<GW_ItemSlotBase>* aRealEquip, ZRef<GW_ItemSlotBase>* aRealEquip2,
                            ZRef<GW_ItemSlotBase>* aRealDragonEquip, ZRef<GW_ItemSlotBase>* aRealMechanicEquip)
{
    __sub_00333A70(this, nullptr, c, bs, fs, aRealEquip, aRealEquip2, aRealDragonEquip, aRealMechanicEquip);
}

void SecondaryStat::ApplyItemOption(long nItemOptionID, long nLevel)
{
    __sub_0032FC70(this, nullptr, nItemOptionID, nLevel);
}

void SecondaryStat::ApplyItemOptionR(long nItemOptionID, long nLevel, SecondaryStatRateOption& option)
{
    __sub_0032FE50(this, nullptr, nItemOptionID, nLevel, option);
}

void SecondaryStat::ApplySocketOption(long nSocketOptionID, long nLevel)
{
    __sub_0032FF10(this, nullptr, nSocketOptionID, nLevel);
}

void SecondaryStat::ApplySocketOptionR(long nSocketOptionID, long nLevel, SecondaryStatRateOption& option)
{
    __sub_0032FFA0(this, nullptr, nSocketOptionID, nLevel, option);
}

MY_UINT128 SecondaryStat::CheckByTime(long tCur)
{
    return __sub_00323870(this, nullptr, tCur);
}

long SecondaryStat::GetRemainTime(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t SecondaryStat::IsSetted(long nReason)
{
    return __sub_00324270(this, nullptr, nReason);
}

SecondaryStat& SecondaryStat::operator=(const SecondaryStat& arg0)
{
    return _op_assign_867(this, arg0);
}

SecondaryStat& SecondaryStat::_op_assign_867(SecondaryStat* pThis, const SecondaryStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SecondaryStat::VIEWELEM::~VIEWELEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void SecondaryStat::VIEWELEM::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SecondaryStat::VIEWELEM::VIEWELEM(const SecondaryStat::VIEWELEM& arg0)
{
    _ctor_1(arg0);
}

void SecondaryStat::VIEWELEM::_ctor_1(const SecondaryStat::VIEWELEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

SecondaryStat::VIEWELEM::VIEWELEM()
{
}

void SecondaryStat::VIEWELEM::_ctor_0()
{
    new(this) VIEWELEM();
    //return __sub_00320860(this, nullptr);
}

SecondaryStat::VIEWELEM& SecondaryStat::VIEWELEM::operator=(const SecondaryStat::VIEWELEM& arg0)
{
    return _op_assign_3(this, arg0);
}

SecondaryStat::VIEWELEM&
SecondaryStat::VIEWELEM::_op_assign_3(SecondaryStat::VIEWELEM* pThis, const SecondaryStat::VIEWELEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

BasicStat::BasicStat()
{
    // TODO UNIMPLEMENTED; //_ctor_0();
}

void BasicStat::_ctor_0()
{
    // TODO: No module found for method
    // TODO: UNIMPLEMENTED;
}

_ZTL_SEC_GETSETI(long, BasicStat, nGender)

_ZTL_SEC_GETSETI(long, BasicStat, nLevel)

_ZTL_SEC_GETSETI(long, BasicStat, nJob)

_ZTL_SEC_GETSETI(long, BasicStat, nSTR)

_ZTL_SEC_GETSETI(long, BasicStat, nDEX)

_ZTL_SEC_GETSETI(long, BasicStat, nINT)

_ZTL_SEC_GETSETI(long, BasicStat, nLUK)

_ZTL_SEC_GETSETI(long, BasicStat, nPOP)

_ZTL_SEC_GETSETI(long, BasicStat, nMHP)

_ZTL_SEC_GETSETI(long, BasicStat, nMMP)

long BasicStat::CalcBasePDD()
{
    //return __sub_00321A40(this, nullptr);

    auto str = _ZtlSecureGet_nSTR();
    auto dex = _ZtlSecureGet_nDEX();
    auto luk = _ZtlSecureGet_nLUK();
    auto int_ = _ZtlSecureGet_nINT();
    return (int)((double)int_ * 0.4
               + 0.5 * (double)luk
               + (double)dex * 0.5
               + (double)str * 1.2);
}

long BasicStat::CalcBaseMDD()
{
    //return __sub_00321AD0(this, nullptr);
    auto str = _ZtlSecureGet_nSTR();
    auto dex = _ZtlSecureGet_nDEX();
    auto luk = _ZtlSecureGet_nLUK();
    auto int_ = _ZtlSecureGet_nINT();
    return (int)((double)str * 0.4
             + 0.5 * (double)dex
             + (double)luk * 0.5
             + (double)int_ * 1.2);
}

long BasicStat::CalcBasePACC()
{
    //return __sub_00321B60(this, nullptr);

    auto dex = _ZtlSecureGet_nDEX();
    auto luk = _ZtlSecureGet_nLUK();
    return (int)((double)luk + (double)dex * 1.2);
}

long BasicStat::CalcBaseMACC()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long BasicStat::CalcBasePEVA()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long BasicStat::CalcBaseMEVA()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void BasicStat::SetFrom(const CharacterData& c, const ForcedStat& fs, ZRef<GW_ItemSlotBase>* aRealEquip,
                        ZRef<GW_ItemSlotBase>* aRealEquip2, ZRef<GW_ItemSlotBase>* aRealDragonEquip,
                        ZRef<GW_ItemSlotBase>* aRealMechanicEquip, long nMaxHPIncRate, long nMaxMPIncRate,
                        long nBasicStatInc, long nMaxHPInc, long nMaxMPInc, long nSwallowMaxMPIncRate,
                        long nConversionMaxHPIncRate, long nMorewildMaxHPIncRate, long nPdsMHPr, long nPdsMMPr,
                        long nJaguarRidingHPIncRate)
{
    __sub_00332BA0(this, nullptr, c, fs, aRealEquip, aRealEquip2, aRealDragonEquip, aRealMechanicEquip, nMaxHPIncRate,
                   nMaxMPIncRate, nBasicStatInc, nMaxHPInc, nMaxMPInc, nSwallowMaxMPIncRate, nConversionMaxHPIncRate,
                   nMorewildMaxHPIncRate, nPdsMHPr, nPdsMMPr, nJaguarRidingHPIncRate);
}

void BasicStat::ApplyItemOption(long nItemOptionID, long nLevel)
{
    __sub_0032F920(this, nullptr, nItemOptionID, nLevel);
}

void BasicStat::ApplyItemOptionR(long nItemOptionID, long nLevel, BasicStatRateOption& option)
{
    __sub_0032FA90(this, nullptr, nItemOptionID, nLevel, option);
}

void BasicStat::ApplySocketOption(long nSocketOptionID, long nLevel)
{
    __sub_0032FB50(this, nullptr, nSocketOptionID, nLevel);
}

void BasicStat::ApplySocketOptionR(long nSocketOptionID, long nLevel, BasicStatRateOption& option)
{
    __sub_0032FBE0(this, nullptr, nSocketOptionID, nLevel, option);
}

void BasicStat::Clear()
{
    __sub_0007F6F0(this, nullptr);
}

ForcedStat::ForcedStat()
{
    // TODO UNIMPLEMENTED;
    //_ctor_0();
}

void ForcedStat::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_ZTL_SEC_GETSETI(long, ForcedStat, nSTR)

_ZTL_SEC_GETSETI(long, ForcedStat, nDEX)

_ZTL_SEC_GETSETI(long, ForcedStat, nINT)

_ZTL_SEC_GETSETI(long, ForcedStat, nLUK)

_ZTL_SEC_GETSETI(long, ForcedStat, nPAD)

_ZTL_SEC_GETSETI(long, ForcedStat, nPDD)

_ZTL_SEC_GETSETI(long, ForcedStat, nMAD)

_ZTL_SEC_GETSETI(long, ForcedStat, nMDD)

_ZTL_SEC_GETSETI(long, ForcedStat, nACC)

_ZTL_SEC_GETSETI(long, ForcedStat, nEVA)

_ZTL_SEC_GETSETI(long, ForcedStat, nSpeed)

_ZTL_SEC_GETSETI(long, ForcedStat, nJump)

_ZTL_SEC_GETSETI(long, ForcedStat, nSpeedMax)

void ForcedStat::Clear()
{
    //__sub_00327540(this, nullptr);
    _ZtlSecurePut_nSTR(0);
    _ZtlSecurePut_nDEX(0);
    _ZtlSecurePut_nINT(0);
    _ZtlSecurePut_nLUK(0);
    _ZtlSecurePut_nPAD(0);
    _ZtlSecurePut_nPDD(0);
    _ZtlSecurePut_nMAD(0);
    _ZtlSecurePut_nMDD(0);
    _ZtlSecurePut_nACC(0);
    _ZtlSecurePut_nEVA(0);
    _ZtlSecurePut_nSpeed(0);
    _ZtlSecurePut_nJump(0);
    _ZtlSecurePut_nSpeedMax(0);
}

void ForcedStat::Encode(COutPacket& arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void ForcedStat::Decode(CInPacket& iPacket)
{
    __sub_00327600(this, nullptr, iPacket);
}

int32_t ForcedStat::IsForced()
{
    //return __sub_00323060(this, nullptr);
    return _ZtlSecureGet_nSTR() || _ZtlSecureGet_nDEX()
        || _ZtlSecureGet_nINT() || _ZtlSecureGet_nLUK()
        || _ZtlSecureGet_nPAD() || _ZtlSecureGet_nPDD()
        || _ZtlSecureGet_nMAD() || _ZtlSecureGet_nMDD()
        || _ZtlSecureGet_nACC() || _ZtlSecureGet_nEVA()
        || _ZtlSecureGet_nSpeed() || _ZtlSecureGet_nJump()
        || _ZtlSecureGet_nSpeedMax();
}

NEXTLEVEL::NEXTLEVEL()
{
    _ctor_0();
}

void NEXTLEVEL::_ctor_0()
{
    return __sub_00321360(this, nullptr);
}

long NEXTLEVEL::GetNextLevelExp(long arg0)
{
    return n[arg0 + 1];
}

CalcDamage::~CalcDamage()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CalcDamage::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CalcDamage::CalcDamage()
{
}

void CalcDamage::_ctor_0()
{
    //return __sub_0032C490(this, nullptr);
    new(this) CalcDamage();
}

void CalcDamage::SetSeed(uint32_t s1, uint32_t s2, uint32_t s3)
{
    m_RndForCheckDamageMiss.SetSeed(s1, s2, s3);
    m_RndForMob.SetSeed(s1, s2, s3);
    m_RndForMortalBlow.SetSeed(s1, s2, s3);
    m_RndForSummoned.SetSeed(s1, s2, s3);
    m_RndGenForCharacter.SetSeed(s1, s2, s3);
    m_RndGenForMob.SetSeed(s1, s2, s3);
    //__sub_00326470(this, nullptr, s1, s2, s3);
}

double __cdecl CalcDamage::GetMsateryConstByWT(long nWT)
{
    switch (nWT)
    {
    case 0x25:
    case 0x26:
        return 0.25;
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
        return 0.15;
    default:
        return 0.15;
    }
    // return __sub_00321540(nWT);
}

double __cdecl CalcDamage::CalcDamageByWT(long arg0, const BasicStat& arg1, long arg2, long arg3)
{
    return __sub_00324DB0(arg0, arg1, arg2, arg3);
}

long CalcDamage::PDamage(const MobStat& ms, const CharacterData& cd, const BasicStat& bs, const SecondaryStat& ss,
                         MobAttackInfo* pInfo, uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd,
                         long* pnReduce, unsigned long dwMobTemplateID, int32_t bShieldEquiped, long nDarkForcePddr)
{
    return __sub_0032E720(this, nullptr, ms, cd, bs, ss, pInfo, nRandForMissCheck, CreateNakedParam(pPsd), pnReduce,
                          dwMobTemplateID, bShieldEquiped, nDarkForcePddr);
}

long CalcDamage::PDamage(const MobStat& msMobAttack, const MobStat& msMobTarget)
{
    return __sub_00326910(this, nullptr, msMobAttack, msMobTarget);
}

long CalcDamage::PDamage(const unsigned long dwMobID, const MobStat& ms, const CharacterData& cd, const BasicStat& bs,
                         const SecondaryStat& ss, const SKILLENTRY* pSkill, long nSLV,
                         const ZRef<PassiveSkillData> pPsd, long nDamage, long nWeaponItemID, long nBulletItemID)
{
    return __sub_0032DDD0(this, nullptr, dwMobID, ms, cd, bs, ss, pSkill, nSLV, CreateNakedParam(pPsd), nDamage,
                          nWeaponItemID,
                          nBulletItemID);
}

void CalcDamage::PDamage(const CharacterData& cd, const BasicStat& bs, const SecondaryStat& ss,
                         const unsigned long dwMobID,
                         const MobStat& ms, const CMobTemplate* pTemplate, const ZRef<PassiveSkillData> pPsd,
                         int32_t& bNextAttackCritical, long nAttackCount, long nDamagePerMob, long nWeaponItemID,
                         long nBulletItemID, long nAttackType, long nAction, int32_t bShadowPartner,
                         const SKILLENTRY* pSkill, long nSLV, long* aDamage, int32_t* abCritical, long nCriticalProb,
                         long nCriticalDamage, long nTotalDAMr, long nBossDAMr, long nIgnoreTargetDEF, long nDragonFury,
                         long nAR01Pad, long tKeyDown, long nDarkForce, long nAdvancedChargeDamage, int32_t bInvincible)
{
    __sub_00330130(this, nullptr, cd, bs, ss, dwMobID, ms, pTemplate, CreateNakedParam(pPsd), bNextAttackCritical,
                   nAttackCount, nDamagePerMob, nWeaponItemID, nBulletItemID, nAttackType, nAction, bShadowPartner,
                   pSkill, nSLV, aDamage, abCritical, nCriticalProb, nCriticalDamage, nTotalDAMr, nBossDAMr,
                   nIgnoreTargetDEF, nDragonFury, nAR01Pad, tKeyDown, nDarkForce, nAdvancedChargeDamage, bInvincible);
}

long CalcDamage::MDamage(const MobStat& ms, const CharacterData& cd, const BasicStat& bs, const SecondaryStat& ss,
                         uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd, long* pnReduce,
                         int32_t bShieldEquiped)
{
    return __sub_0032EA20(this, nullptr, ms, cd, bs, ss, nRandForMissCheck, CreateNakedParam(pPsd), pnReduce,
                          bShieldEquiped);
}

long CalcDamage::MDamage(const MobStat& msMobAttack, const MobStat& msMobTarget)
{
    return __sub_00326970(this, nullptr, msMobAttack, msMobTarget);
}

long CalcDamage::MDamage(const unsigned long dwMobID, const MobStat& ms, const CharacterData& cd, const BasicStat& bs,
                         const SecondaryStat& ss, const SKILLENTRY* pSkill, long nSLV,
                         const ZRef<PassiveSkillData> pPsd, long nDamage, long nWeaponItemID, long nDragonFury)
{
    return __sub_0032E200(this, nullptr, dwMobID, ms, cd, bs, ss, pSkill, nSLV, CreateNakedParam(pPsd), nDamage,
                          nWeaponItemID,
                          nDragonFury);
}

long CalcDamage::MDamage(const CharacterData& arg0, const BasicStat& arg1, const SecondaryStat& arg2,
                         const unsigned long arg3, const MobStat& arg4, const CMobTemplate* arg5,
                         const ZRef<PassiveSkillData> arg6, long arg7, long arg8, long arg9, long arg10, long arg11,
                         long arg12, long arg13, long arg14)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CalcDamage::MDamage(const CharacterData& cd, const BasicStat& bs, const SecondaryStat& ss,
                         const unsigned long dwMobID,
                         const MobStat& ms, const CMobTemplate* pTemplate, const ZRef<PassiveSkillData> pPsd,
                         int32_t& bNextAttackCritical, long nDamagePerMob, long nWeaponItemID, long nAction,
                         const SKILLENTRY* pSkill, long nSLV, long* aDamage, int32_t* abCritical, long nCriticalProb,
                         long nCriticalDamage, long nTotalDAMr, long nBossDAMr, long nIgnoreTargetDEF, long nMobCount,
                         long tKeyDown, long nDragonFury, long nAR01Mad)
{
    __sub_0032CD60(this, nullptr, cd, bs, ss, dwMobID, ms, pTemplate, CreateNakedParam(pPsd), bNextAttackCritical,
                   nDamagePerMob, nWeaponItemID, nAction, pSkill, nSLV, aDamage, abCritical, nCriticalProb,
                   nCriticalDamage, nTotalDAMr, nBossDAMr, nIgnoreTargetDEF, nMobCount, tKeyDown, nDragonFury,
                   nAR01Mad);
}

int32_t
CalcDamage::CheckPDamageMiss(const MobStat& ms, const CharacterData& cd, const BasicStat& bs, SecondaryStat& ss,
                             uint32_t nRandForMissCheck, long nPsdEVAR, long nPsdER)
{
    return __sub_00326720(this, nullptr, ms, cd, bs, ss, nRandForMissCheck, nPsdEVAR, nPsdER);
}

int32_t
CalcDamage::CheckMDamageMiss(const MobStat& ms, const CharacterData& cd, const BasicStat& bs, SecondaryStat& ss,
                             uint32_t nRandForMissCheck, long nPsdEVAR, long nPsdER)
{
    //return __sub_00326830(this, nullptr, ms, cd, bs, ss, nRandForMissCheck, nPsdEVAR, nPsdER);
    if (ms.bCannotEvade)
        return 0;

    auto luk = bs._ZtlSecureGet_nLUK();
    auto dex = bs._ZtlSecureGet_nDEX();
    auto eva = ss.GetEVA(cd, nPsdEVAR, dex + 2 * luk, nullptr);
    auto acc = ms.nACC + ms.nACC_;

    auto mobAcc = 0;
    if (acc > 0)
    {
        mobAcc = ms.nACC + ms.nACC_;
        if (mobAcc >= 9999)
            mobAcc = 9999;
    }


    auto lvl = bs._ZtlSecureGet_nLevel();
    auto rnd = get_rand(nRandForMissCheck, 100., 0.);
    auto val = (double)_anon_calc_evar(eva, mobAcc, lvl, ms.nLevel, nPsdER);
    bool gt = val >= rnd;
    return gt;
}

uint32_t CalcDamage::GetManagedRandom()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint32_t CalcDamage::GetCheckDamageMissRandom()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint32_t CalcDamage::GetMortalBlowRandom()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CalcDamage::CalcMImmune(const MobStat& ms, const SecondaryStat& ss, long nRand)
{
    return __sub_00323020(this, nullptr, ms, ss, nRand);
}

int32_t CalcDamage::CalcPImmune(const MobStat& ms, const SecondaryStat& ss, long nRand)
{
    return __sub_00323020(this, nullptr, ms, ss, nRand);
}

int32_t
CalcDamage::IsCounterAttackHit(const MobStat& ms, const CharacterData& cd, const BasicStat& bs, const SecondaryStat& ss,
                               const ZRef<PassiveSkillData> pPsd, int32_t bInvincible, int32_t bMagicAttack)
{
    return __sub_0032E600(this, nullptr, ms, cd, bs, ss, CreateNakedParam(pPsd), bInvincible, bMagicAttack);
}

void __cdecl CalcDamage::LoadStandardPDD()
{
    __sub_00340520();
}

long __cdecl CalcDamage::GetStandardPDD(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CalcDamage::GetMesoGuardReduce(const CharacterData& cd, double damage)
{
    return __sub_003251D0(this, nullptr, cd, damage);
}

long CalcDamage::PDamageSummoned(const MobStat& ms, const CharacterData& cd, const BasicStat& bs,
                                 const SecondaryStat& ss,
                                 MobAttackInfo* pInfo, uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd,
                                 long* pnReduce, unsigned long dwMobTemplateID, int32_t bShieldEquiped,
                                 long nDarkForcePddr)
{
    /*return __sub_0032EC90(this, nullptr, ms, cd, bs, ss, pInfo, nRandForMissCheck, CreateNakedParam(pPsd), pnReduce,
                          dwMobTemplateID, bShieldEquiped, nDarkForcePddr);*/
    return this->PDamage(ms, cd, bs, ss, pInfo, nRandForMissCheck, pPsd, pnReduce, dwMobTemplateID, bShieldEquiped,
                         nDarkForcePddr);
}

long CalcDamage::MDamageSummoned(const MobStat& ms, const CharacterData& cd, const BasicStat& bs,
                                 const SecondaryStat& ss,
                                 uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd, long* pnReduce,
                                 int32_t bShieldEquiped)
{
    /*return __sub_0032ED70(this, nullptr, ms, cd, bs, ss, nRandForMissCheck, CreateNakedParam(pPsd), pnReduce,
                          bShieldEquiped);*/
    return this->MDamage(ms, cd, bs, ss, nRandForMissCheck, pPsd, pnReduce, bShieldEquiped);
}

long __cdecl CalcDamage::GetCounterDamage(long nAT, MobStat* pMobStat, long tAttackTime, long nMobCount,
                                          long nDamagePerMob,
                                          long nSkillID, long nAction)
{
    //return __sub_0032C4D0(nAT, pMobStat, tAttackTime, nMobCount, nDamagePerMob, nSkillID, nAction);
    int nMCounter; // edi
    int wMCounter; // esi
    int v10; // ecx

    if (!pMobStat || pMobStat->nCounterProb_ && _D_G_RAND.Random() % 0x64 >= pMobStat->nCounterProb_)
        return 0;
    if (nAT == 2)
    {
        nMCounter = pMobStat->nMCounter_;
        wMCounter = pMobStat->wMCounter_;
    }
    else
    {
        nMCounter = pMobStat->nPCounter_;
        wMCounter = pMobStat->wPCounter_;
    }
    v10 = nMCounter;
    if (wMCounter)
    {
        CRand32 rnd;
        rnd.SetSeed(tAttackTime, nSkillID + tAttackTime + nMobCount, tAttackTime + nDamagePerMob + nAction + 10);
        return nMCounter + rnd.Random() % wMCounter - wMCounter / 2;
    }
    return v10;
}

MobStat::~MobStat()
{
    UNIMPLEMENTED; // _dtor_0();
}

void MobStat::_dtor_0()
{
    return __sub_00240930(this, nullptr);
}

MobStat::MobStat(const MobStat& arg0)
{
    _ctor_1(arg0);
}

void MobStat::_ctor_1(const MobStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MobStat::MobStat()
{
    UNIMPLEMENTED; //_ctor_0();
}

void MobStat::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MobStat::AddBurnedInfo(long arg0, long arg1, long arg2, unsigned long arg3, long arg4, long arg5, long arg6,
                            long arg7)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MobStat::SetFrom(const CMobTemplate* pTemplate)
{
    __sub_003249F0(this, nullptr, pTemplate);
}

void MobStat::SetFromWhenDoom(const CMobTemplate* pTemplate)
{
    //__sub_00324B50(this, nullptr, pTemplate);
    aDamagedElemAttr = pTemplate->aDamagedElemAttr;
    nPAD = pTemplate->_ZtlSecureGet_nPAD();
    nMAD = pTemplate->_ZtlSecureGet_nMAD();
    nACC = pTemplate->_ZtlSecureGet_nACC();
    nSpeed = pTemplate->_ZtlSecureGet_nSpeed();
    bCannotEvade = pTemplate->_ZtlSecureGet_bCannotEvade();
}

void MobStat::EncodeTemporary(MY_UINT128 arg0, COutPacket& arg1, long arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MobStat::DecodeTemporary(MY_UINT128 uFlag, CInPacket& iPacket, long tCur)
{
    __sub_003408C0(this, nullptr, CreateNakedParam(uFlag), iPacket, tCur);
}

MY_UINT128 MobStat::ResetTemporary(long arg0, ZList<ZPair<unsigned long, long>>& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MobStat::Reset(MY_UINT128 uReset, CInPacket& iPacket)
{
    __sub_0032CC90(this, nullptr, CreateNakedParam(uReset), iPacket);
}

void MobStat::Reset(MY_UINT128 uReset)
{
    __sub_00320B40(this, nullptr, CreateNakedParam(uReset));
}

void MobStat::AdjustDamagedElemAttr(long nSkillID, const long* aOriginalDamagedElemAttr)
{
    __sub_003211F0(this, nullptr, nSkillID, aOriginalDamagedElemAttr);
}

void MobStat::ResetDamagedElemAttr(const long* aOriginalDamagedElemAttr)
{
    __sub_00321270(this, nullptr, aOriginalDamagedElemAttr);
}

int32_t __cdecl MobStat::IsMovementAffectingStat(MY_UINT128 uFlag)
{
    return __sub_00321290(CreateNakedParam(uFlag));
}

MobStat& MobStat::operator=(const MobStat& arg0)
{
    return _op_assign_14(this, arg0);
}

MobStat& MobStat::_op_assign_14(MobStat* pThis, const MobStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MobStat::BURNED_INFO::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MobStat::BURNED_INFO::Decode(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

double __cdecl zmax_double_(double a, double b)
{
    //return __sub_00321840(a, b);
    return a > b ? a : b;
}

uint32_t __fastcall _ZtlSecureTear_char_(char arg0, char* arg1)
{
    return __sub_00326C20(arg0, arg1);
}

unsigned long __cdecl _anon_DecodeTime(CInPacket& iPacket)
{
    //return __sub_00325430(iPacket);
    auto t = timeGetTime();
    auto sub = iPacket.Decode1();
    auto base = iPacket.Decode4();
    return sub ? t - base : t + base;
}

double __cdecl get_damage_adjusted_by_elemAttr(double damage, long nAttr, double dAdjust, double dBoost)
{
    //return __sub_003231E0(damage, nAttr, dAdjust, dBoost);
    double result; // st7

    switch (nAttr)
    {
    case 1:
        result = (1.0 - dAdjust) * damage;
        break;
    case 2:
        result = (1.0 - (dAdjust * 0.5 + dBoost)) * damage;
        break;
    case 3:
        result = (dAdjust * 0.5 + dBoost + 1.0) * damage;
        if (damage >= result)
            result = damage;
        if (result >= 999999.0)
            result = 999999.0;
        break;
    default:
        result = damage;
        break;
    }
    return result;
}

double __cdecl get_rand(uint32_t nRand, double f0, double f1)
{
    //return __sub_00326370(nRand, f0, f1);
    return get_rand_1(nRand, f0, f1);
}

double __cdecl get_rand_1(uint32_t nRand, double f0, double f1)
{
    //return __sub_00326370(nRand, f0, f1);
    auto v3 = f1;
    auto v4 = f0;
    if (f0 > f1)
    {
        v3 = f0;
        v4 = f1;
        return v4 + (double)(nRand % 0x989680) * (v3 - v4) / 9999999.0;
    }
    if (f1 != f0)
        return v4 + (double)(nRand % 0x989680) * (v3 - v4) / 9999999.0;
    return f0;
}

double __cdecl get_damage_adjusted_by_charged_elemAttr(double damage, const long* aDamagedElemAttr,
                                                       const SecondaryStat& ss,
                                                       const CharacterData& cd)
{
    return __sub_00323400(damage, aDamagedElemAttr, ss, cd);
}

long __cdecl get_next_item_level_exp(ZRef<GW_ItemSlotBase> pItem)
{
    //return __sub_00330030(CreateNakedParam(pItem));
    auto itemInfo = CItemInfo::GetInstance();


    auto exp = 0;
    long id = pItem->nItemID;;
    if (itemInfo && itemInfo->IsGrowthItem(id))
    {
        if (auto eqItem = itemInfo->GetEquipItem(id))
        {
            auto lvl = eqItem->_ZtlSecureGet_nrLevel();
            exp = get_next_level_exp(exp);
        }
    }


    return exp;
}

void __cdecl _anon_ApplyGuidedBulletDamage(const CharacterData& cd, SecondaryStat& ss,
                                           const unsigned long dwMobID,
                                           double& damage)
{
    //return __sub_003265E0(cd, ss, dwMobID, damage);
    const SKILLENTRY* skillEntry{};
    auto lvl = CSkillInfo::GetInstance()->GetSkillLevel(cd, 5220011, &skillEntry);
    if (lvl <= 0)
    {
        return;
    }

    auto& tmp = ss.aTemporaryStat[5];
    if (tmp && tmp->IsActivated())
    {
        ZFatalSectionGuard guard(tmp->GetLock());
        if (tmp->GetValue() == dwMobID)
        {
            auto levelData = skillEntry->GetLevelData(lvl);
            auto x = levelData._ZtlSecureGet_nX();
            damage = static_cast<double>(x) * damage / 100.;
        }
    }
}

double __cdecl _anon_adjust_ramdom_damage(double damage, long nRand, double k, long nMastery)
{
    //return __sub_00326690(damage, nRand, k, nMastery);
    auto v4 = (double)nMastery / 100.0 + k;
    if (v4 >= 0.95)
        v4 = 0.95;
    return get_rand(nRand, damage, (double)(int)(v4 * damage + 0.5));
}

void __cdecl _anon_EncodeTime(COutPacket& oPacket, const unsigned long tTime)
{
    //return __sub_0032F150(oPacket, tTime);
    auto v2 = timeGetTime();
    auto v3 = 0;
    if (tTime >= v2)
        v3 = tTime - v2;
    else
        v3 = v2 - tTime;

    oPacket.Encode1(tTime < v2);
    oPacket.Encode4(v3);
}

long __cdecl _anon_calc_base_damage(long p1, long p2, long p3, long ad, double k)
{
    //return __sub_00321500(p1, p2, p3, ad, k);
    return (int)((double)(p3 + p2 + 4 * p1) / 100.0 * ((double)ad * k) + 0.5);
}

int32_t __cdecl GetIdealStatUp(const BasicStat& bs, int32_t bWantToBeInfighter, ZArray<StatPair>& aStatUp)
{
    return __sub_0033DDB0(bs, bWantToBeInfighter, aStatUp);
}

double __cdecl _anon_calc_mob_base_damamge(long p1, long nRand, long nAttackLevel, long nTargetLevel)
{
    //return __sub_003266F0(p1, nRand, nAttackLevel, nTargetLevel);
    return get_rand(nRand, (double)p1, 0.85 * (double)p1);
}

double __cdecl _anon_adjust_base_depense(double damage, long nADD, long nAttackLevel, long nTargetLevel, long nPsdDR)
{
    //return __sub_00324C20(damage, nADD, nAttackLevel, nTargetLevel, nPsdDR);
    auto v5 = (double)nADD * 0.25;
    auto v6 = (int)(v5 + 0.5);
    auto nFixedCanceling = v6;
    auto v7 = (int)sqrt(v5);
    auto v8 = nPsdDR * v7 / 100 + v7;
    if (nTargetLevel < nAttackLevel)
    {
        auto v9 = abs(nAttackLevel - nTargetLevel);
        auto v10 = 4 * v9;
        if ((int)(4 * v9) >= v6)
            v10 = (int)(v5 + 0.5);
        auto v11 = 2 * v9;
        nFixedCanceling = v6 - v10;
        if (v11 >= v8)
            v11 = v8;
        v8 -= v11;
    }
    auto result = damage - (double)nFixedCanceling;
    auto v13 = damage * (double)(100 - v8) / 100.0;
    if (v13 <= result)
        result = v13;
    if (result <= 1.0)
        return 1.0;
    return result;
}

int32_t __cdecl IsCalcDamageStat(MY_UINT128 uFlag)
{
    return __sub_003215A0(CreateNakedParam(uFlag));
}

double __cdecl get_damage_adjusted_by_elemAttr(double damage, const SKILLENTRY* pSkill, const long* aDamagedElemAttr,
                                               const long nSLV,
                                               double dAdjustByBuff, double dBoost)
{
    //return __sub_00323270(arg0, arg1, arg2, arg3, arg4, arg5);
    if (!pSkill || !nSLV)
        return damage;
    auto nSkillID = pSkill->nSkillID;
    if (pSkill->nSkillID > 3111003)
    {
        if (nSkillID != 3211003)
            return get_damage_adjusted_by_elemAttr(damage, aDamagedElemAttr[pSkill->nAttackElemAttr], dAdjustByBuff,
                                                   dBoost);
    }
    else if (pSkill->nSkillID != 3111003)
    {
        if (nSkillID == 2111006)
        {
            auto damage_adjusted_by_elemAttr = get_damage_adjusted_by_elemAttr(
                damage * 0.5, aDamagedElemAttr[4], 1.0, dBoost);
            return get_damage_adjusted_by_elemAttr(damage * 0.5, aDamagedElemAttr[2], 1.0, 0.0) +
                damage_adjusted_by_elemAttr;
        }
        if (nSkillID == 2211006)
        {
            auto v10 = get_damage_adjusted_by_elemAttr(damage * 0.5, aDamagedElemAttr[3], 1.0, dBoost);
            return get_damage_adjusted_by_elemAttr(damage * 0.5, aDamagedElemAttr[1], 1.0, 0.0) + v10;
        }
        return get_damage_adjusted_by_elemAttr(damage, aDamagedElemAttr[pSkill->nAttackElemAttr], dAdjustByBuff,
                                               dBoost);
    }
    auto LevelData = pSkill->GetLevelData(nSLV);
    auto v9 = LevelData._ZtlSecureGet_nX();
    return get_damage_adjusted_by_elemAttr(damage, aDamagedElemAttr[pSkill->nAttackElemAttr], v9 / 100.0, dBoost);
}

long __cdecl _anon_calc_accr(long nACC, long nMobEVA, long nAttackLevel, long nTargetLevel, long nAr)
{
    //return __sub_00324CE0(nACC, nMobEVA, nAttackLevel, nTargetLevel, nAr);
    auto v5 = (int)sqrt((double)nACC);
    auto v6 = sqrt((double)nMobEVA);
    auto result = v5 - (int)v6 + 100 + nAr * (v5 - (int)v6 + 100) / 100;
    if (result >= 100)
        result = 100;
    if (nTargetLevel > nAttackLevel)
    {
        auto v8 = 5 * (nTargetLevel - nAttackLevel);
        if (v8 >= result)
            v8 = result;
        result -= v8;
    }
    return result;
}

void __cdecl get_real_equip(const CharacterData& c, ZRef<GW_ItemSlotPet>* aPetItems, ZRef<GW_ItemSlotBase>* aRealEquip,
                            ZRef<GW_ItemSlotBase>* aRealEquip2, ZRef<GW_ItemSlotBase>* aDragonEquip,
                            ZRef<GW_ItemSlotBase>* aMechanicEquip,
                            long nBasicStatInc, long nExcl1, long nExcl2)
{
    return __sub_0033E390(c, aPetItems, aRealEquip, aRealEquip2, aDragonEquip, aMechanicEquip, nBasicStatInc, nExcl1,
                          nExcl2);
}

void __cdecl ApplyItemOption(long nItemOptionID, long nLevel, long& niSTR, long& niINT, long& niDEX, long& niLUK)
{
    auto itemOpt = CItemOptionInfo::GetInstance()->GetItemOption(nItemOptionID);
    if (itemOpt)
    {
        //TODO(itemgame)
        auto& lvl = itemOpt->aLevelData[nLevel];
        niSTR += lvl.niSTR;
        niINT += lvl.niINT;
        niDEX += lvl.niDEX;
        niLUK += lvl.niLUK;
    }

    //return __sub_0032F3E0(nItemOptionID, nLevel, niSTR, niINT, niDEX, niLUK);
}

void ApplySocketOption(long socketOptId, long nLevel, long& niSTR, long& niINT, long& niDEX, long& niLUK)
{
    //UNIMPLEMENTED;
    auto itemOpt = CItemOptionInfo::GetInstance()->GetSocketOption(socketOptId);
    if (itemOpt)
    {
        //TODO(itemgame) missing for now
    }
}

void ApplySocketOptionR(long socketOptId, long nLevel, long& niSTRr, long& niINTr, long& niDEXr, long& niLUKr)
{
    //UNIMPLEMENTED;
    auto itemOpt = CItemOptionInfo::GetInstance()->GetSocketOption(socketOptId);
    if (itemOpt)
    {
        //TODO(itemgame) missing for now
    }
}

void ClearSocketOption(long socketOptId, long nLevel, long& niSTR, long& niINT, long& niDEX, long& niLUK)
{
    //UNIMPLEMENTED;
    auto itemOpt = CItemOptionInfo::GetInstance()->GetSocketOption(socketOptId);
    if (itemOpt)
    {
        //TODO(itemgame) missing for now
    }
}

void ClearSocketOptionR(long socketOptId, long nLevel, long& niSTRr, long& niINTr, long& niDEXr, long& niLUKr)
{
    //UNIMPLEMENTED;
    auto itemOpt = CItemOptionInfo::GetInstance()->GetSocketOption(socketOptId);
    if (itemOpt)
    {
        //TODO(itemgame) missing for now
    }
}

void ApplyItemOptionR(long itemOptId, long nLevel, long& niSTRr, long& niINTr, long& niDEXr, long& niLUKr)
{
    //UNIMPLEMENTED;
    auto itemOpt = CItemOptionInfo::GetInstance()->GetItemOption(itemOptId);
    if (itemOpt)
    {
        //TODO(itemgame)
        auto& lvl = itemOpt->aLevelData[nLevel];
        niSTRr += lvl.niSTRr;
        niINTr += lvl.niINTr;
        niDEXr += lvl.niDEXr;
        niLUKr += lvl.niLUKr;
    }
}

void ClearItemOption(long nItemOptionID, long nLevel, long& niSTR, long& niINT, long& niDEX, long& niLUK)
{
    //UNIMPLEMENTED;
    auto itemOpt = CItemOptionInfo::GetInstance()->GetItemOption(nItemOptionID);
    if (itemOpt)
    {
        //TODO(itemgame)
        auto& lvl = itemOpt->aLevelData[nLevel];
        niSTR -= lvl.niSTR;
        niINT -= lvl.niINT;
        niDEX -= lvl.niDEX;
        niLUK -= lvl.niLUK;
    }
}

void ClearItemOptionR(long itemOptId, long nLevel, long& niSTRr, long& niINTr, long& niDEXr, long& niLUKr)
{
    //UNIMPLEMENTED;
    auto itemOpt = CItemOptionInfo::GetInstance()->GetItemOption(itemOptId);
    if (itemOpt)
    {
        //TODO(itemgame)
        auto& lvl = itemOpt->aLevelData[nLevel];
        niSTRr -= lvl.niSTRr;
        niINTr -= lvl.niINTr;
        niDEXr -= lvl.niDEXr;
        niLUKr -= lvl.niLUKr;
    }
}
