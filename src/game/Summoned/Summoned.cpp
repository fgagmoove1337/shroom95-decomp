// Summoned.cpp
#include "Summoned.hpp"

static ZMap<unsigned long, ZRef<SummonedAttackInfo>, unsigned long> FAKE_ZMap_unsigned_long_ZRef_SummonedAttackInfo_unsigned_long{};
static ZArray<ATTACKINFO> FAKE_ZArray_ATTACKINFO{};
static ZRef<SummonedAttackInfo> FAKE_ZRef_SummonedAttackInfo{};


#include "Summoned_regen.ipp"

ZMap<unsigned long, ZRef<SummonedAttackInfo>, unsigned long> CSummonedBase::ms_mSummonedAttackInfo{};

CSummonedBase::~CSummonedBase()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CSummonedBase::_dtor_0()
{
	return __sub_00348D90(this, nullptr);
}
CSummonedBase::CSummonedBase(const CSummonedBase &arg0)
{
	_ctor_1( arg0);
}
void CSummonedBase::_ctor_1( const CSummonedBase &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummonedBase::CSummonedBase()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CSummonedBase::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZRef<SummonedAttackInfo> CSummonedBase::LoadAttackInfo(long nSkillID, long nIdx, long nSLV, long nAIType)
{
	ZRef<SummonedAttackInfo> ret;
	return *__sub_00358B20(this, nullptr, &ret, nSkillID, nIdx, nSLV, nAIType);
}
long CSummonedBase::AIType2Action(long nAIType)
{
	return __sub_00348DA0(this, nullptr, nAIType);
}
long CSummonedBase::Action2AIType(long nAction)
{
	return __sub_00348DF0(this, nullptr, nAction);
}
CSummonedBase &CSummonedBase::operator=(const CSummonedBase &arg0)
{
	return _op_assign_6(this, arg0);
}
CSummonedBase &CSummonedBase::_op_assign_6(CSummonedBase *pThis, const CSummonedBase &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::~CSummoned()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CSummoned::_dtor_0()
{
	return __sub_0034FC80(this, nullptr);
}
CSummoned::CSummoned(const CSummoned &arg0) : m_dwSummonedID(arg0.m_dwSummonedID)
{
	_ctor_1( arg0);
}
void CSummoned::_ctor_1( const CSummoned &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::CSummoned(unsigned long dwCharacterID, unsigned long dwSummonedID, long nSkillID, unsigned char nCharLevel, long nSLV) : m_dwSummonedID(dwSummonedID)
{
	_ctor_0( dwCharacterID, dwSummonedID, nSkillID, nCharLevel, nSLV);
}
void CSummoned::_ctor_0( unsigned long dwCharacterID, unsigned long dwSummonedID, long nSkillID, unsigned char nCharLevel, long nSLV)
{
	return __sub_00350010(this, nullptr, dwCharacterID, dwSummonedID, nSkillID, nCharLevel, nSLV);
}
int32_t CSummoned::Init(CInPacket &iPacket)
{
	return __sub_00355740(this, nullptr, iPacket);
}
int32_t CSummoned::Init(long x, long y, long nMoveAction, short nCurFoothold, long nMoveAbility, long nAssistType, long nEnterType, AvatarLook *pAvatarLook)
{
	return __sub_00354E60(this, nullptr, x, y, nMoveAction, nCurFoothold, nMoveAbility, nAssistType, nEnterType, pAvatarLook);
}
void CSummoned::SetActive(int32_t bLeader)
{
	__sub_0034A120(this, nullptr, bLeader);
}
int32_t CSummoned::IsLeft()
{
	return __sub_00349C90(this, nullptr);
}
int32_t CSummoned::IsPosFixed()
{
	return __sub_00349C90(this, nullptr);
}
unsigned long CSummoned::GetID()
{
	return __sub_00348E70(this, nullptr);
}
long CSummoned::GetMoveAction()
{
	return __sub_00349530(this, nullptr);
}
void CSummoned::SetMoveAction(long nMA, int32_t bReload)
{
	__sub_0034A630(this, nullptr, nMA, bReload);
}
void CSummoned::SetAttackAction(long nAttackAction)
{
	__sub_0034A0F0(this, nullptr, nAttackAction);
}
long CSummoned::GetOneTimeAction()
{
	return __sub_00349530(this, nullptr);
}
long CSummoned::GetOneTimeActionRemain()
{
	return __sub_00349530(this, nullptr);
}
int32_t CSummoned::IsOnPlayingOneTimeAction()
{
	return __sub_00349C90(this, nullptr);
}
void CSummoned::ResetOneTimeAction()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CSummoned::GetCurrentAction(long *pnDir)
{
	return __sub_003494C0(this, nullptr, pnDir);
}
int32_t CSummoned::GetBodyRect(tagRECT &rc, int32_t bContinuous)
{
	return __sub_0034AAD0(this, nullptr, rc, bContinuous);
}
tagPOINT CSummoned::GetHitPoint(tagRECT arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CSummoned::GetHeight()
{
	return __sub_00349530(this, nullptr);
}
_x_com_ptr<IWzVector2D> CSummoned::GetVecCtrl()
{
	return __sub_0023C7A0(this, nullptr);
}
long CSummoned::GetSkillID()
{
	return __sub_00349530(this, nullptr);
}
long CSummoned::GetSkillLevel()
{
	return __sub_00349530(this, nullptr);
}
CUser *CSummoned::GetOwnerUser()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::SetShoeAttr()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CSummoned::AttackToTargetMob(CMob *pMob, long tCur)
{
	return __sub_003501D0(this, nullptr, pMob, tCur);
}
void CSummoned::TryDoingAttack(long tCur, long nAIType)
{
	__sub_00356860(this, nullptr, tCur, nAIType);
}
void CSummoned::TryDoingAttackTarget(long tCur)
{
	__sub_00352710(this, nullptr, tCur);
}
void CSummoned::TryDoingAttackManual(long tCur)
{
	__sub_00351240(this, nullptr, tCur);
}
int32_t CSummoned::TryDoingHeal(long tCur)
{
	return __sub_0034AD90(this, nullptr, tCur);
}
void CSummoned::TryDoingGiveBuff(long tCur)
{
	__sub_0034AF50(this, nullptr, tCur);
}
int32_t CSummoned::TryDoingHealingRobot(unsigned long dwLocalUserID, tagRECT &rectLocalUser)
{
	return __sub_0034B3E0(this, nullptr, dwLocalUserID, rectLocalUser);
}
void CSummoned::TryDoingSummon(long tCur)
{
	__sub_0034B640(this, nullptr, tCur);
}
void CSummoned::TryDoingTaslaCoilAttack(long tCur)
{
	__sub_00352780(this, nullptr, tCur);
}
void CSummoned::SetDamaged(long nDamage, long vx, long vy, CMob *pMob, long nAttackIdx, long nDir)
{
	__sub_0034B730(this, nullptr, nDamage, vx, vy, pMob, nAttackIdx, nDir);
}
void CSummoned::Update()
{
	__sub_00357F70(this, nullptr);
}
void CSummoned::ProcessAction(long tCur)
{
	__sub_0034A6A0(this, nullptr, tCur);
}
void CSummoned::ProcessAttack(long tCur)
{
	__sub_0034ABF0(this, nullptr, tCur);
}
void CSummoned::ChaseTarget(int32_t bChase, IVecCtrlOwner *pTarget)
{
	__sub_00349290(this, nullptr, bChase, pTarget);
}
int32_t CSummoned::IsActive()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CSummoned::IsInvulnerable()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::SetSuspended(long nSuspend)
{
	__sub_00348E60(this, nullptr, nSuspend);
}
int32_t CSummoned::IsSuspended()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::ShowEffect(long nType)
{
	__sub_0034C290(this, nullptr, nType);
}
void CSummoned::PreserveAction()
{
	__sub_0034BEF0(this, nullptr);
}
unsigned long CSummoned::GetTargetID()
{
	return __sub_00348E70(this, nullptr);
}
void CSummoned::SetTargetID(unsigned long nTargetID)
{
	__sub_00348E80(this, nullptr, nTargetID);
}
const long CSummoned::GetAssistType()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::SetAssistAttackManual(int32_t bLeader)
{
	__sub_0034A120(this, nullptr, bLeader);
}
const int32_t CSummoned::IsAssistAttackManual()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::SendRemove()
{
	__sub_0034C170(this, nullptr);
}
void CSummoned::ChangeEndTime(long arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::SetTeslaCoilLeader(int32_t bLeader)
{
	__sub_0034A120(this, nullptr, bLeader);
}
void CSummoned::SetTeslaCoilTriangle(ZRef<Triangle> pTriangle, ZRef<ZArray<unsigned long>> padwID)
{
	__sub_00354D30(this, nullptr, CreateNakedParam(pTriangle), CreateNakedParam(padwID));
}
void CSummoned::ShowTeslaCoilTriangle(ZRef<Triangle> pTriangle, long tStart, long tEnd, Ztl_bstr_t sEffectUOL)
{
	__sub_0034C6C0(this, nullptr, CreateNakedParam(pTriangle), tStart, tEnd, CreateNakedParam(sEffectUOL));
}
long CSummoned::GetType()
{
	return __sub_0034FED0(this, nullptr);
}
long CSummoned::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl *pvc)
{
	return __sub_00348F10(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}
void CSummoned::OnLayerZChanged(const CVecCtrl *pvc)
{
	__sub_00349810(this, nullptr, pvc);
}
const ZRef<CAttrShoe> CSummoned::GetShoeAttr()
{
	return __sub_0034FF60(this, nullptr);
}
const tagPOINT CSummoned::GetPos()
{
	return __sub_0034FF90(this, nullptr);
}
const tagPOINT CSummoned::GetPosPrev()
{
	return __sub_0034FFC0(this, nullptr);
}
long CSummoned::GetZMass()
{
	return __sub_0034FF40(this, nullptr);
}
void CSummoned::OnRemoved(CInPacket &iPacket)
{
	__sub_0034C450(this, nullptr, iPacket);
}
void CSummoned::OnMove(CInPacket &iPacket)
{
	__sub_00349250(this, nullptr, iPacket);
}
void CSummoned::OnAttack(CInPacket &iPacket)
{
	__sub_00353340(this, nullptr, iPacket);
}
void CSummoned::OnSkill(CInPacket &iPacket)
{
	__sub_0034A940(this, nullptr, iPacket);
}
void CSummoned::OnHit(CInPacket &iPacket)
{
	__sub_0034BC80(this, nullptr, iPacket);
}
void CSummoned::PrepareActionLayer()
{
	__sub_00349CD0(this, nullptr);
}
long CSummoned::MoveAction2RawAction(long nMA, long *pnDir)
{
	return __sub_00348E90(this, nullptr, nMA, pnDir);
}
void CSummoned::SetLayerZ()
{
	__sub_00349650(this, nullptr);
}
void CSummoned::SetFrameInfo(ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> &l, __POSITION *pos)
{
	__sub_003491A0(this, nullptr, l, pos);
}
void CSummoned::MakeIncDecHPEffect(long nDelta)
{
	__sub_00349840(this, nullptr, nDelta);
}
_ZTL_SEC_GETSETI(long, CSummoned, m_nMoveAction)
_ZTL_SEC_GETSETI(long, CSummoned, m_nOneTimeAction)
_ZTL_SEC_GETSETI(long, CSummoned, m_tHitPeriodRemain)

void CSummoned::_LoadEffect()
{
	__sub_00354050(this, nullptr);
}
void CSummoned::_UpdateEffect()
{
	__sub_00354970(this, nullptr);
}
CSummoned::ATTACKEFFECT::~ATTACKEFFECT()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CSummoned::ATTACKEFFECT::_dtor_0()
{
	return __sub_0034C430(this, nullptr);
}
CSummoned::ATTACKEFFECT::ATTACKEFFECT(const CSummoned::ATTACKEFFECT &arg0)
{
	_ctor_1( arg0);
}
void CSummoned::ATTACKEFFECT::_ctor_1( const CSummoned::ATTACKEFFECT &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::ATTACKEFFECT::ATTACKEFFECT()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CSummoned::ATTACKEFFECT::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::ATTACKEFFECT::SetAttackEffect(Ztl_bstr_t sEffect_, long tCur, long tEffectAfter, int32_t bLeft_, int32_t bSelfDestruct_)
{
	__sub_0034C3C0(this, nullptr, CreateNakedParam(sEffect_), tCur, tEffectAfter, bLeft_, bSelfDestruct_);
}
CSummoned::ATTACKEFFECT &CSummoned::ATTACKEFFECT::operator=(const CSummoned::ATTACKEFFECT &arg0)
{
	return _op_assign_4(this, arg0);
}
CSummoned::ATTACKEFFECT &CSummoned::ATTACKEFFECT::_op_assign_4(CSummoned::ATTACKEFFECT *pThis, const CSummoned::ATTACKEFFECT &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::SummonedBullet::~SummonedBullet()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CSummoned::SummonedBullet::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::SummonedBullet::SummonedBullet(const CSummoned::SummonedBullet &arg0)
{
	_ctor_1( arg0);
}
void CSummoned::SummonedBullet::_ctor_1( const CSummoned::SummonedBullet &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::SummonedBullet::SummonedBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL, long nAttackIdx)
{
	_ctor_0( tStart, tEnd, ptStart, ptEnd, pVecTarget, z, sBallUOL, nAttackIdx);
}
void CSummoned::SummonedBullet::_ctor_0( long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL, long nAttackIdx)
{
	return __sub_0034F3D0(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd), CreateNakedParam(pVecTarget), z, CreateNakedParam(sBallUOL), nAttackIdx);
}
_x_com_ptr<IWzGr2DLayer> CSummoned::SummonedBullet::PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise)
{
	return __sub_0034F4F0(this, nullptr, CreateNakedParam(pOrigin), bClockwise);
}
CSummoned::SummonedBullet &CSummoned::SummonedBullet::operator=(const CSummoned::SummonedBullet &arg0)
{
	return _op_assign_4(this, arg0);
}
CSummoned::SummonedBullet &CSummoned::SummonedBullet::_op_assign_4(CSummoned::SummonedBullet *pThis, const CSummoned::SummonedBullet &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::SummonedBullet::Container::~Container()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CSummoned::SummonedBullet::Container::_dtor_0()
{
	return __sub_0034AA80(this, nullptr);
}
CSummoned::SummonedBullet::Container::Container(const CSummoned::SummonedBullet::Container &arg0)
{
	_ctor_1( arg0);
}
void CSummoned::SummonedBullet::Container::_ctor_1( const CSummoned::SummonedBullet::Container &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSummoned::SummonedBullet::Container::Container()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CSummoned::SummonedBullet::Container::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSummoned::SummonedBullet::Container::OnRemoved()
{
	__sub_0034A9D0(this, nullptr);
}
CSummoned::SummonedBullet::Container &CSummoned::SummonedBullet::Container::operator=(const CSummoned::SummonedBullet::Container &arg0)
{
	return _op_assign_4(this, arg0);
}
CSummoned::SummonedBullet::Container &CSummoned::SummonedBullet::Container::_op_assign_4(CSummoned::SummonedBullet::Container *pThis, const CSummoned::SummonedBullet::Container &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CSummoned::SummonedBullet::OnRemovedFunc::operator()(CSummoned::SummonedBullet &arg0)
{
	return _op_call_0(this, arg0);
}
int32_t CSummoned::SummonedBullet::OnRemovedFunc::_op_call_0(CSummoned::SummonedBullet::OnRemovedFunc *pThis, CSummoned::SummonedBullet &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CTutor::~CTutor()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CTutor::_dtor_0()
{
	return __sub_00356710(this, nullptr);
}
CTutor::CTutor(const CTutor &arg0)
{
	_ctor_1( arg0);
}
void CTutor::_ctor_1( const CTutor &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CTutor::CTutor(unsigned long dwCharacterID, long nSkillID)
{
	_ctor_0( dwCharacterID, nSkillID);
}
void CTutor::_ctor_0( unsigned long dwCharacterID, long nSkillID)
{
	return __sub_00355980(this, nullptr, dwCharacterID, nSkillID);
}
void CTutor::Update()
{
	__sub_00358460(this, nullptr);
}
void CTutor::OnMessage(long nIdx, long nDuration)
{
	__sub_0034EEE0(this, nullptr, nIdx, nDuration);
}
void CTutor::OnMessage(ZXString<char> &sMsg, long nWidth, long nDuration)
{
	__sub_0034C880(this, nullptr, sMsg, nWidth, nDuration);
}
