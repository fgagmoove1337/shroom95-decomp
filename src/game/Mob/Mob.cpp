// Mob.cpp
#include "Mob.hpp"

#include <random>

#include "Summoned/Summoned.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZRef_CStage{};

static ZRef<CMob::ReservedPacket> FAKE_ZRef_CMob_ReservedPacket{};
static ZRef<CSummoned> FAKE_ZRef_CSummoned{};
static ZRef<ITEMSKILLLEVELDATA> FAKE_ZRef_ITEMSKILLLEVELDATA{};
static ZRef<ITEMOPTIONSKILLLEVELDATA> FAKE_ZRef_ITEMOPTIONSKILLLEVELDATA{};
static ZRef<MobSpeakInformation> FAKE_ZRef_MobSpeakInformation{};
static ZRef<MobSpeakCondition> FAKE_ZRef_MobSpeakCondition{};
static ZRef<CMob::MobBullet> FAKE_ZRef_CMob_MobBullet{};

#include "Mob_regen.ipp"


 CMob::~CMob() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMob::_dtor_0() {
	return __sub_0024D050(this, nullptr);
}
 CMob::CMob(const CMob& arg0) {
	_ctor_1( arg0);
}
void CMob::_ctor_1( const CMob& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::CMob(CMobTemplate* pMobTemplate) {
	_ctor_0( pMobTemplate);
}
void CMob::_ctor_0( CMobTemplate* pMobTemplate) {
	return __sub_0024CA30(this, nullptr, pMobTemplate);
}
void CMob::Init(unsigned long dwMobID, CInPacket& iPacket) {
	__sub_0024D3B0(this, nullptr, dwMobID, iPacket);
}
void CMob::SetActive(int32_t bActive) {
	__sub_00240950(this, nullptr, bActive);
}
int32_t CMob::IsActive() {
	return __sub_0023AB30(this, nullptr);
}
int32_t CMob::IsInViewSplit() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::SetInViewSplit(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget, int32_t bForced) {
	__sub_00242DB0(this, nullptr, bChase, pTarget, bForced);
}
CMobTemplate* CMob::GetTemplate() {
	return __sub_00239F30(this, nullptr);
}
CMobTemplate* CMob::GetCurTemplate() {
	return __sub_00239F40(this, nullptr);
}
MobStat* CMob::GetMobStat() {
	return __sub_00239F60(this, nullptr);
}
long CMob::GetCalcDamageStatIndex() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
unsigned long CMob::GetMobID() {
	return __sub_0023C5B0(this, nullptr);
}
int32_t CMob::IsBossMob() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMob::GetMoveAbility() {
	return __sub_0023A690(this, nullptr);
}
const MobAttackInfo* CMob::GetAttackInfo(long nAction) {
	return __sub_00241330(this, nullptr, nAction);
}
long CMob::GetMoveAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::SetMoveAction(long nMA, int32_t bReload) {
	__sub_0024EC40(this, nullptr, nMA, bReload);
}
int32_t CMob::IsInited() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsSuspended() {
	return __sub_0023C5D0(this, nullptr);
}
long CMob::GetSuspended() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::SetSuspended(long nSuspend) {
	__sub_00240910(this, nullptr, nSuspend);
}
int32_t CMob::IsNotAttack() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsDamagedByMob() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::CheckDamagedByMob(unsigned long dwTemplateID) {
	return __sub_0023D4B0(this, nullptr, dwTemplateID);
}
int32_t CMob::IsMobOurTeam() {
	return __sub_0023B4A0(this, nullptr);
}
int32_t CMob::IsSamePhaseWithMe() {
	return __sub_0023B510(this, nullptr);
}
int32_t CMob::IsNoFlip() {
	return __sub_0023A6B0(this, nullptr);
}
int32_t CMob::IsDazzledMobByMe() {
	return __sub_0023B570(this, nullptr);
}
int32_t CMob::IsDazzled() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::SetLastHitDazzledMob(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMob::GetLastHitDazzledMob() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMob::GetDeadType() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::SetDeadType(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsTimeBomb() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const ZList<unsigned long>& CMob::GetReviveList() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsOnPlayingOneTimeAction() {
	return __sub_0023E1D0(this, nullptr);
}
long CMob::GetOneTimeAction() {
	return __sub_0023C5F0(this, nullptr);
}
void CMob::ResetOneTimeAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMob::GetOneTimeActionRemain() {
	return __sub_0023E6D0(this, nullptr);
}
int32_t CMob::SetAttackAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMob::GetRandomHitAction() {
	return __sub_00239F70(this, nullptr);
}
int32_t CMob::IsLeft() {
	return __sub_0023C610(this, nullptr);
}
long CMob::GetCurrentAction(long* pnDir) {
	return __sub_00249EA0(this, nullptr, pnDir);
}
long CMob::GetCurrentFrameIndex() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::GetBodyRect(tagRECT& rc, int32_t bContinuous) {
	return __sub_00242140(this, nullptr, rc, bContinuous);
}
tagPOINT CMob::GetHitPoint(tagRECT rcAttack) {
	tagPOINT ret{};
	return *__sub_00242260(this, nullptr, &ret, CreateNakedParam(rcAttack));
}
tagPOINT CMob::GetHitPointHeightRand(tagRECT rcAttack) {
	tagPOINT ret{};
	return *__sub_00242310(this, nullptr, &ret, CreateNakedParam(rcAttack));
}
void CMob::GetAttackBodyRect(ZArray<tagRECT>& arcAttack, int32_t bContinuous) {
	__sub_002443C0(this, nullptr, arcAttack, bContinuous);
}
void CMob::GetMultiBodyRect(ZArray<tagRECT>& arcMulti, int32_t bContinuous) {
	__sub_002443E0(this, nullptr, arcMulti, bContinuous);
}
void CMob::GetArrayBodyRectImpl(const ZArray<tagRECT>& originBodyRect, const ZArray<tagRECT>& originBodyRectFlip, ZArray<tagRECT>& arcRect, int32_t bContinuous) {
	__sub_00242400(this, nullptr, originBodyRect, originBodyRectFlip, arcRect, bContinuous);
}
long CMob::GetHeight() {
	return __sub_0023C810(this, nullptr);
}
long CMob::GetHalfWidth() {
	return __sub_0023E790(this, nullptr);
}
long CMob::GetPushedDamage() {
	return __sub_0023B5C0(this, nullptr);
}
long CMob::GetTeamForMCarnival() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsImmovable() {
	return __sub_0023C640(this, nullptr);
}
int32_t CMob::IsPosFixed() {
	return __sub_0023A6E0(this, nullptr);
}
int32_t CMob::IsDoom() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CStaticFoothold* CMob::GetFoothold() {
	return __sub_0053A1A0(this, nullptr);
}
_x_com_ptr<IWzVector2D> CMob::GetVecCtrl() {
	return __sub_0023C680(this, nullptr);
}
_x_com_ptr<IWzVector2D> CMob::GetActiveVecCtrl() {
	return __sub_0023C6B0(this, nullptr);
}
void CMob::SetShoeAttr() {
	__sub_00241E50(this, nullptr);
}
void CMob::AddDamageInfo(unsigned long dwCharacterId, long nSkillID, long tDelayedProcess, long nHitAction, int32_t bLeft, long nDamage, int32_t bCriticalAttack, long nAttackIdx, tagPOINT pt, Ztl_bstr_t sHitAni, int32_t bChase, long nMoveType, long nBulletCashItemID, long nMoveEndingPosX, long nMoveEndingPosY, int32_t bMoveLeft) {
	__sub_00253A10(this, nullptr, dwCharacterId, nSkillID, tDelayedProcess, nHitAction, bLeft, nDamage, bCriticalAttack, nAttackIdx, CreateNakedParam(pt), CreateNakedParam(sHitAni), bChase, nMoveType, nBulletCashItemID, nMoveEndingPosX, nMoveEndingPosY, bMoveLeft);
}
long CMob::GetRemainDamageInfoDelay() {
	return __sub_0023E730(this, nullptr);
}
void CMob::OnDie() {
	__sub_0024E4B0(this, nullptr);
}
void CMob::OnBomb() {
	__sub_00250EC0(this, nullptr);
}
void CMob::OnDestructByMiss() {
	__sub_0024EA30(this, nullptr);
}
void CMob::OnSwallowed() {
	__sub_00241810(this, nullptr);
}
void CMob::OnRevive() {
	__sub_00240AA0(this, nullptr);
}
void CMob::OnDoomed(int32_t bDoom) {
	__sub_0024ED40(this, nullptr, bDoom);
}
void CMob::Update() {
	__sub_00254300(this, nullptr);
}
void CMob::ProcessAction(long tCur) {
	__sub_0024AB60(this, nullptr, tCur);
}
void CMob::ProcessAttack(long arg0) {
	__sub_00252950(this, nullptr, arg0);
}
void CMob::SetTemporaryStat(CInPacket& iPacket, long nCalcDamageIndex) {
	__sub_0024AFD0(this, nullptr, iPacket, nCalcDamageIndex);
}
void CMob::ShowHPIndicator() {
	__sub_0023E200(this, nullptr);
}
void CMob::HideHPIndicator() {
	__sub_0023E530(this, nullptr);
}
long CMob::MakeNameTag(const char* sName, _x_com_ptr<IWzGr2DLayer> pOverlay, _x_com_ptr<IWzVector2D> pvc) {
	return __sub_00246AE0(this, nullptr, sName, CreateNakedParam(pOverlay), CreateNakedParam(pvc));
}
int32_t CMob::IsTargetInAttackRange(long anAttackAction, long* rcTarget, int32_t* abAttackLeft, CMob::TARGETINFO* bNoFlip, long pUserLocal) {
	return __sub_00245F50(this, nullptr, anAttackAction, rcTarget, abAttackLeft, bNoFlip, pUserLocal);
}
long CMob::GetType() {
	return __sub_0024CF70(this, nullptr);
}
long CMob::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc) {
	return __sub_0023CAF0(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}
void CMob::OnLayerZChanged(const CVecCtrl* pvc) {
	__sub_0023B470(this, nullptr, pvc);
}
const ZRef<CAttrShoe> CMob::GetShoeAttr() {
	return __sub_00240C20(this, nullptr);
}
const tagPOINT CMob::GetPos() {
	return __sub_0024CFF0(this, nullptr);
}
const tagPOINT CMob::GetPosPrev() {
	return __sub_0024D020(this, nullptr);
}
long CMob::GetZMass() {
	return __sub_0024CFA0(this, nullptr);
}
void CMob::OnMove(CInPacket& iPacket) {
	__sub_002521E0(this, nullptr, iPacket);
}
void CMob::OnCtrlAck(CInPacket& iPacket) {
	__sub_00240C50(this, nullptr, iPacket);
}
void CMob::OnStatSet(CInPacket& iPacket) {
	__sub_00252660(this, nullptr, iPacket);
}
void CMob::OnStatReset(CInPacket& iPacket) {
	__sub_00252780(this, nullptr, iPacket);
}
void CMob::OnSuspendReset(CInPacket& iPacket) {
	__sub_0024ACB0(this, nullptr, iPacket);
}
void CMob::OnAffected(CInPacket& iPacket) {
	__sub_00244400(this, nullptr, iPacket);
}
void CMob::OnDamaged(CInPacket& iPacket) {
	__sub_0024ECB0(this, nullptr, iPacket);
}
void CMob::OnCatchEffect(CInPacket& iPacket) {
	__sub_0023CD00(this, nullptr, iPacket);
}
void CMob::OnEffectByItem(CInPacket& iPacket) {
	__sub_0023CD40(this, nullptr, iPacket);
}
void CMob::OnSpecialEffectBySkill(CInPacket& iPacket) {
	__sub_002540B0(this, nullptr, iPacket);
}
void CMob::OnHPIndicator(CInPacket& iPacket) {
	__sub_00242EF0(this, nullptr, iPacket);
}
void CMob::OnMobAttackedByMob(CInPacket& iPacket) {
	__sub_002436A0(this, nullptr, iPacket);
}
void CMob::OnMobSpeaking(CInPacket& iPacket) {
	__sub_00250000(this, nullptr, iPacket);
}
void CMob::OnMobSkillDelay(CInPacket& iPacket) {
	__sub_0023D560(this, nullptr, iPacket);
}
void CMob::OnEscortFullPath(CInPacket& iPacket) {
	__sub_00243D90(this, nullptr, iPacket);
}
void CMob::OnIncMobChargeCount(CInPacket& iPacket) {
	__sub_0023D500(this, nullptr, iPacket);
}
int32_t CMob::SendDropPickUpRequest(unsigned long dwID) {
	return __sub_00244450(this, nullptr, dwID);
}
void CMob::SetGuided(long nSkillID, long nDelay) {
	__sub_00244570(this, nullptr, nSkillID, nDelay);
}
void CMob::ResetGuided() {
	__sub_002410B0(this, nullptr);
}
int32_t CMob::IsRectIntersectWithTrapezoid(long x0, long x1, long x2, long y, long r, const tagRECT& rc) {
	return __sub_0023B390(this, nullptr, x0, x1, x2, y, r, rc);
}
void CMob::OnHit(unsigned long dwCharacterId, long nSkillID, long nHitAction, int32_t bLeft, long nDamage, int32_t bCriticalAttack, long nAttackIdx, int32_t bChase, long nMoveType, long nBulletCashItemID, long nMoveEndingPosX, long nMoveEndingPosY, int32_t bMoveLeft, int32_t bZigZagDamage) {
	__sub_00253100(this, nullptr, dwCharacterId, nSkillID, nHitAction, bLeft, nDamage, bCriticalAttack, nAttackIdx, bChase, nMoveType, nBulletCashItemID, nMoveEndingPosX, nMoveEndingPosY, bMoveLeft, bZigZagDamage);
}
void CMob::DoAttack(long nAction, int32_t bLeft, CMob::TARGETINFO ti) {
	__sub_002504D0(this, nullptr, nAction, bLeft, CreateNakedParam(ti));
}
void CMob::RegisterMagicBulletAnimation(long arg0, long arg1, tagPOINT arg2, tagPOINT arg3, _x_com_ptr<IWzVector2D> arg4, long arg5, Ztl_bstr_t arg6, int32_t arg7) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_x_com_ptr<IWzGr2DLayer> CMob::LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, long rx, long ry, long nZ_Diff, long nPos) {
	_x_com_ptr<IWzGr2DLayer> ret;
	return *__sub_00244900(this, nullptr, &ret, CreateNakedParam(bsUOL), bLeft, rx, ry, nZ_Diff, nPos);
}
_x_com_ptr<IWzGr2DLayer> CMob::LoadEffectLayer(long nItemID) {
	_x_com_ptr<IWzGr2DLayer> ret;
	return *__sub_002458E0(this, nullptr, &ret, nItemID);
}
void CMob::ShowDamage(long nDamage, long nAttackIdx, int32_t bCriticalAttack, int32_t bHalfHeight, int32_t ZigZagDamage, int32_t bAdjustHeight) {
	__sub_0023C950(this, nullptr, nDamage, nAttackIdx, bCriticalAttack, bHalfHeight, ZigZagDamage, bAdjustHeight);
}
void CMob::ShowEffectByItem(long nItemID, int32_t bSuccess) {
	__sub_0023B2D0(this, nullptr, nItemID, bSuccess);
}
void CMob::ShowCatchEffect(int32_t bSuccess, long tDelay) {
	__sub_0023B220(this, nullptr, bSuccess, tDelay);
}
void CMob::UpdateAffectedSkillList(long tDelay) {
	__sub_0024A500(this, nullptr, tDelay);
}
int32_t CMob::ShowAffectedSkill(long arg0) {
	return __sub_0024EF30(this, nullptr, arg0);
}
void CMob::SetAffectedLayerPos() {
	__sub_0023EAF0(this, nullptr);
}
void CMob::ShiftAffectedSkillAnimation(int32_t bForced) {
	__sub_00248640(this, nullptr, bForced);
}
void CMob::ApplyControl(long tCur) {
	__sub_00240D20(this, nullptr, tCur);
}
void CMob::TryPickUpDrop(long tCur) {
	__sub_0023EA60(this, nullptr, tCur);
}
void CMob::TryFirstAttack() {
	__sub_002482F0(this, nullptr);
}
void CMob::TryFirstSelfDestruction() {
	__sub_00240EE0(this, nullptr);
}
int32_t CMob::TryDoingSkill(long& nAction, int32_t& bLeft, CMob::TARGETINFO& ti) {
	return __sub_0024AE60(this, nullptr, nAction, bLeft, ti);
}
void CMob::TrySelfDestruct() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::TrySpeaking(long nSpeakInfo, long nSpeech) {
	__sub_0024B6D0(this, nullptr, nSpeakInfo, nSpeech);
}
void CMob::ShowHitEffect(long nDamage) {
	__sub_0024B140(this, nullptr, nDamage);
}
void CMob::CreateHPIndicator(long nPercent, unsigned long dwColor) {
	__sub_00243160(this, nullptr, nPercent, dwColor);
}
void CMob::DrawHPTag(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::AdjustHPIndicatorPosition() {
	__sub_00242F80(this, nullptr);
}
void CMob::InitAngerGaugeData() {
	__sub_00248B00(this, nullptr);
}
void CMob::CreateAngerIndicator() {
	__sub_0023CD70(this, nullptr);
}
void CMob::AdjustAngerIndicatorPosition() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::AnimateAngerIndicator() {
	__sub_0023D060(this, nullptr);
}
void CMob::AngerGaugeFullChargeEffect() {
	__sub_002490B0(this, nullptr);
}
void CMob::ChangeAngerIndicator(long nIndicatorIndex) {
	__sub_0023A100(this, nullptr, nIndicatorIndex);
}
_ZTL_SEC_GETSETI(int32_t, CMob, m_bInViewSplit)
_ZTL_SEC_GETSETI(long, CMob, m_nMobCtrlState)
_ZTL_SEC_GETSETI(short, CMob, m_nMobCtrlSN)
_ZTL_SEC_GETSETI(long, CMob, m_tLastApplyCtrl)
_ZTL_SEC_GETSETI(long, CMob, m_tLastTryPickUpDrop)
_ZTL_SEC_GETSETI(unsigned long, CMob, m_dwMobID)
_ZTL_SEC_GETSETI(long, CMob, m_nMP)
_ZTL_SEC_GETSETI(long, CMob, m_nMoveAction)
_ZTL_SEC_GETSETI(long, CMob, m_nOneTimeAction)
_ZTL_SEC_GETSETI(long, CMob, m_tHitExpire)
_ZTL_SEC_GETSETI(long, CMob, m_tLastHitExpire)
_ZTL_SEC_GETSETI(long, CMob, m_tCurFrameRemain)
_ZTL_SEC_GETSETI(long, CMob, m_tNextFramesRemain)
_ZTL_SEC_GETSETI(long, CMob, m_tActionDelay)
_ZTL_SEC_GETSETI(long, CMob, m_tInitDelay)
_ZTL_SEC_GETSETI(long, CMob, m_nDeadType)
_ZTL_SEC_GETSETI(int32_t, CMob, m_nSuspended)

void CMob::ClearActionLayer() {
	__sub_0023E940(this, nullptr);
}
void CMob::PrepareActionLayer() {
	__sub_0024A030(this, nullptr);
}
long CMob::GetActionDelay(long nAction) {
	return __sub_0023E970(this, nullptr, nAction);
}
void CMob::SetLayerZ() {
	__sub_0023AB50(this, nullptr);
}
long CMob::MoveAction2RawAction(long nMA, long* pnDir) {
	return __sub_0023A9C0(this, nullptr, nMA, pnDir);
}
long CMob::RawAction2MoveAction(long nAction) {
	return __sub_0023AA70(this, nullptr, nAction);
}
void CMob::SetFrameInfo(ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY> >& l, __POSITION* pos) {
	__sub_00242560(this, nullptr, l, pos);
}
void CMob::GenerateMovePath(long nAction, int32_t bLeft, CMob::TARGETINFO ti, int32_t bChase, long nMoveType, long nMoveEndingX, long nMoveEndingY, int32_t bMoveLeft, int32_t bRiseByToss) {
	__sub_00251100(this, nullptr, nAction, bLeft, CreateNakedParam(ti), bChase, nMoveType, nMoveEndingX, nMoveEndingY, bMoveLeft, bRiseByToss);
}
void CMob::SetNeedToUpdateCrc(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
unsigned long CMob::GetCrc() {
	return __sub_0023D530(this, nullptr);
}
unsigned long CMob::CalcCrc() {
	return __sub_0023B5A0(this, nullptr);
}
long CMob::GetHPPercentage() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsRisingByToss() {
	return __sub_0023A980(this, nullptr);
}
int32_t CMob::CanBeTossedAgain() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CMob::IsAttackAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CMob::IsSkillAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CMob::IsHitAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CMob::IsDieAction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::SetDamagedByMob(long nDamage, long vx, long vy, CMob* pAttackMob, long nAttackIdx, long nDir) {
	__sub_0024B260(this, nullptr, nDamage, vx, vy, pAttackMob, nAttackIdx, nDir);
}
int32_t CMob::LoadMobAction(long nAction) {
	return __sub_0023B6B0(this, nullptr, nAction);
}
long CMob::GetFineAction(long nAction) {
	return __sub_00249270(this, nullptr, nAction);
}
long CMob::GetFineMoveDirAction(long nMoveDirAction) {
	return __sub_002493D0(this, nullptr, nMoveDirAction);
}
int32_t CMob::IsMultiBallAttack(long nAction, long& nBulletNumber, long& nRange) {
	return __sub_00241100(this, nullptr, nAction, nBulletNumber, nRange);
}
void CMob::SetMultiBallTarget(long nBulletNumber, long nRange) {
	__sub_002438A0(this, nullptr, nBulletNumber, nRange);
}
void CMob::SetRandTimeForAreaAttack(long nAction) {
	__sub_00243B80(this, nullptr, nAction);
}
tagPOINT CMob::SetBallDestPoint(tagPOINT pt1, tagPOINT pt2, int32_t bLeft, long nRange) {
	tagPOINT ret{};
	return *__sub_0023A130(this, nullptr, &ret, CreateNakedParam(pt1), CreateNakedParam(pt2), bLeft, nRange);
}
void CMob::ProcessStatSet(MY_UINT128 uFlagSet, CInPacket& iPacket) {
	__sub_0024BDD0(this, nullptr, CreateNakedParam(uFlagSet), iPacket);
}
void CMob::ProcessStatReset(MY_UINT128 uFlagReset, CInPacket& iPacket) {
	__sub_00250030(this, nullptr, CreateNakedParam(uFlagReset), iPacket);
}
void CMob::UpdateTimeBomb() {
	__sub_00243C30(this, nullptr);
}
void CMob::SetTimeBombTime(long nSkillID) {
	__sub_0023B720(this, nullptr, nSkillID);
}
void CMob::SetSwallowCharacter(unsigned long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsEscortMob() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsNotEnemyMob() {
	return __sub_00239FB0(this, nullptr);
}
void CMob::SendCollisionEscort(long nDest) {
	__sub_00241150(this, nullptr, nDest);
}
int32_t CMob::IsChaseTargetEscort() {
	return __sub_0023B7B0(this, nullptr);
}
int32_t CMob::IsChaseTargetDazzle() {
	return __sub_0023B830(this, nullptr);
}
int32_t CMob::IsAbleTargetEscortMob(CMob* pEscortMob) {
	return __sub_0023B8A0(this, nullptr, pEscortMob);
}
long CMob::GetDamagedByMobofNonDamageTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::UpdateEscortStopActRepeat() {
	__sub_0024C730(this, nullptr);
}
void CMob::ClearEscortInfo() {
	__sub_0023B980(this, nullptr);
}
void CMob::SendRequestEscortPath() {
	__sub_002411F0(this, nullptr);
}
void CMob::SendEscortStopEndRequest() {
	__sub_00241290(this, nullptr);
}
void CMob::OnEscortStopEndPermmision() {
	__sub_0023B9C0(this, nullptr);
}
void CMob::OnEscortStopSay(CInPacket& iPacket) {
	__sub_0024C500(this, nullptr, iPacket);
}
void CMob::OnEscortReturnBefore(CInPacket& iPaket) {
	__sub_00249410(this, nullptr, iPaket);
}
void CMob::SetRushAttack(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::ResetRushAttack() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::IsOnRushAttack() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMob::GetRushAttackIdx() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::OnNextAttack(CInPacket& iPacket) {
	__sub_002528A0(this, nullptr, iPacket);
}
int32_t CMob::IsCantPassByTeleport() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMob& CMob::operator=(CMob& arg0) {
	return _op_assign_223(this, arg0);
}
CMob& CMob::_op_assign_223(CMob* pThis, CMob& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::TARGETINFO::TARGETINFO() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMob::TARGETINFO::_ctor_0() {
	return __sub_00239FA0(this, nullptr);
}
 CMob::ATTACKEFFECT::~ATTACKEFFECT() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMob::ATTACKEFFECT::_dtor_0() {
	return __sub_002447C0(this, nullptr);
}
 CMob::ATTACKEFFECT::ATTACKEFFECT(const CMob::ATTACKEFFECT& arg0) {
	_ctor_1( arg0);
}
void CMob::ATTACKEFFECT::_ctor_1( const CMob::ATTACKEFFECT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::ATTACKEFFECT::ATTACKEFFECT() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMob::ATTACKEFFECT::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMob::ATTACKEFFECT& CMob::ATTACKEFFECT::operator=(const CMob::ATTACKEFFECT& arg0) {
	return _op_assign_3(this, arg0);
}
CMob::ATTACKEFFECT& CMob::ATTACKEFFECT::_op_assign_3(CMob::ATTACKEFFECT* pThis, const CMob::ATTACKEFFECT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::AFFECTEDSKILLENTRY::~AFFECTEDSKILLENTRY() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMob::AFFECTEDSKILLENTRY::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY(const CMob::AFFECTEDSKILLENTRY& arg0) {
	_ctor_1( arg0);
}
void CMob::AFFECTEDSKILLENTRY::_ctor_1( const CMob::AFFECTEDSKILLENTRY& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMob::AFFECTEDSKILLENTRY::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMob::AFFECTEDSKILLENTRY& CMob::AFFECTEDSKILLENTRY::operator=(const CMob::AFFECTEDSKILLENTRY& arg0) {
	return _op_assign_3(this, arg0);
}
CMob::AFFECTEDSKILLENTRY& CMob::AFFECTEDSKILLENTRY::_op_assign_3(CMob::AFFECTEDSKILLENTRY* pThis, const CMob::AFFECTEDSKILLENTRY& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, tDelayedProcess)
_ZTL_SEC_GETSETI(unsigned long, CMob::DAMAGEINFO, dwCharacterId)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nSkillID)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nHitAction)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bLeft)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nDamage)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bCriticalAttack)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nAttackIdx)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bChase)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nMoveType)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nBulletCashItemID)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nMoveEndingPosX)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nMoveEndingPosY)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bMoveLeft)

 CMob::HITEFFECT::~HITEFFECT() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMob::HITEFFECT::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::HITEFFECT::HITEFFECT(const CMob::HITEFFECT& arg0) {
	_ctor_1( arg0);
}
void CMob::HITEFFECT::_ctor_1( const CMob::HITEFFECT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::HITEFFECT::HITEFFECT() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMob::HITEFFECT::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMob::HITEFFECT& CMob::HITEFFECT::operator=(const CMob::HITEFFECT& arg0) {
	return _op_assign_3(this, arg0);
}
CMob::HITEFFECT& CMob::HITEFFECT::_op_assign_3(CMob::HITEFFECT* pThis, const CMob::HITEFFECT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::DelaySkill::DelaySkill() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMob::DelaySkill::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::ReservedPacket::~ReservedPacket() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMob::ReservedPacket::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::ReservedPacket::ReservedPacket(CMob::ReservedPacket& arg0) {
	_ctor_1( arg0);
}
void CMob::ReservedPacket::_ctor_1( CMob::ReservedPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::ReservedPacket::ReservedPacket() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMob::ReservedPacket::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMob::ReservedPacket& CMob::ReservedPacket::operator=(const CMob::ReservedPacket& arg0) {
	return _op_assign_3(this, arg0);
}
CMob::ReservedPacket& CMob::ReservedPacket::_op_assign_3(CMob::ReservedPacket* pThis, const CMob::ReservedPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::MobBullet::~MobBullet() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMob::MobBullet::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::MobBullet::MobBullet(const CMob::MobBullet& arg0) {
	_ctor_1( arg0);
}
void CMob::MobBullet::_ctor_1( const CMob::MobBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::MobBullet::MobBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bLeft, Ztl_bstr_t sBallUOL, long nAttackIdx) {
	_ctor_0( tStart, tEnd, ptStart, ptEnd, pVecTarget, z, bLeft, sBallUOL, nAttackIdx);
}
void CMob::MobBullet::_ctor_0( long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bLeft, Ztl_bstr_t sBallUOL, long nAttackIdx) {
	return __sub_002495B0(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd), CreateNakedParam(pVecTarget), z, bLeft, CreateNakedParam(sBallUOL), nAttackIdx);
}
void CMob::MobBullet::ProcessAttack(CMob* pThisMob, CUserLocal* pUserLocal, tagRECT rcUserLocal) {
	__sub_0024C7A0(this, nullptr, pThisMob, pUserLocal, CreateNakedParam(rcUserLocal));
}
_x_com_ptr<IWzGr2DLayer> CMob::MobBullet::PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise) {
	return __sub_002496D0(this, nullptr, CreateNakedParam(pOrigin), bClockwise);
}
CMob::MobBullet& CMob::MobBullet::operator=(const CMob::MobBullet& arg0) {
	return _op_assign_5(this, arg0);
}
CMob::MobBullet& CMob::MobBullet::_op_assign_5(CMob::MobBullet* pThis, const CMob::MobBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::MobBullet::Container::~Container() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMob::MobBullet::Container::_dtor_0() {
	return __sub_00241760(this, nullptr);
}
 CMob::MobBullet::Container::Container(const CMob::MobBullet::Container& arg0) {
	_ctor_1( arg0);
}
void CMob::MobBullet::Container::_ctor_1( const CMob::MobBullet::Container& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::MobBullet::Container::Container() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMob::MobBullet::Container::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMob::MobBullet::Container::OnRemoved() {
	__sub_00241760(this, nullptr);
}
void CMob::MobBullet::Container::ProcessAttack(CMob* pMob, CUserLocal* pUserLocal, tagRECT rcUserLocal, long tCur) {
	__sub_002503E0(this, nullptr, pMob, pUserLocal, CreateNakedParam(rcUserLocal), tCur);
}
CMob::MobBullet::Container& CMob::MobBullet::Container::operator=(const CMob::MobBullet::Container& arg0) {
	return _op_assign_5(this, arg0);
}
CMob::MobBullet::Container& CMob::MobBullet::Container::_op_assign_5(CMob::MobBullet::Container* pThis, const CMob::MobBullet::Container& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::MobBullet::OnRemovedFunc::operator()(CMob::MobBullet& arg0) {
	return _op_call_0(this, arg0);
}
int32_t CMob::MobBullet::OnRemovedFunc::_op_call_0(CMob::MobBullet::OnRemovedFunc* pThis, CMob::MobBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMob::MobBullet::ProcessAttackFunc::ProcessAttackFunc(CMob* arg0, CUserLocal* arg1, tagRECT arg2, long arg3) {
	_ctor_0( arg0, arg1, arg2, arg3);
}
void CMob::MobBullet::ProcessAttackFunc::_ctor_0( CMob* arg0, CUserLocal* arg1, tagRECT arg2, long arg3) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMob::MobBullet::ProcessAttackFunc::operator()(CMob::MobBullet& arg0) {
	return _op_call_1(this, arg0);
}
int32_t CMob::MobBullet::ProcessAttackFunc::_op_call_1(CMob::MobBullet::ProcessAttackFunc* pThis, CMob::MobBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

CMob* __cdecl CreateMob(CMobTemplate* pMobTemplate) {
	return __sub_00250440(pMobTemplate);
}
const wchar_t* __cdecl get_item_sound(long nItemID, int32_t bSuccess) {
	return __sub_0023A050(nItemID, bSuccess);
}
void __stdcall _vectorconstructoriterator_(void* __t, uint32_t __s, int32_t __n, PROC* __f) {
	return __sub_0023A070(__t, __s, __n, __f);
}
tagRECT& __cdecl adjust_rect(tagRECT& rc, long x, long y, int32_t bFlip) {
	if(bFlip) {
		auto tmp = -rc.left;
		rc.left = -rc.right;
		rc.right = tmp;
	}
	OffsetRect(&rc, x, y);
	return rc;
	//return __sub_0023C7D0(rc, x, y, bFlip);
}
long __cdecl calc_priority(long x1, long y1, long x2, long y2) {
	return __sub_0023A0B0(x1, y1, x2, y2);
}
void __cdecl get_random_unique_array(ZArray<long>& anShuffle, long nStart, unsigned long nRange, unsigned long nCount) {
	if (!nRange || !nCount) {
		return;
	}


 	anShuffle.Alloc(nCount);
	ZList<long> l;

 	auto remaining = nCount;

 	auto ix = 0;

 	auto count = nCount;

 	while (remaining)
 	{
 		nCount = count;
 		nCount = std::min(count, nRange);
 		for (auto i = 0; i < nRange; ++i)
 		{
 			l.Insert(nStart + i);
 		}

 		for (auto i = 0; i < nCount; ++i)
 		{
 			auto rand = _D_G_RAND.Random();
 			if (auto len = l.GetCount())
 			{
 				rand %= len;
 			}

 			auto val = l.FindIndex(rand);
 			anShuffle[ix++] = *val;
 			l.RemoveAt(val);
 		}

 		remaining -= nCount;
 		count = remaining;
 	}


	//return __sub_002447E0(anShuffle, nStart, nRange, nCount);

}
