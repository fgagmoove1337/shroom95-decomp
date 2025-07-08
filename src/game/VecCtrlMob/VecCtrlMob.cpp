// VecCtrlMob.cpp
#include "VecCtrlMob.hpp"
#include "VecCtrlMob_regen.ipp"

CMoveRandMan::~CMoveRandMan()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CMoveRandMan::_dtor_0()
{
	return __sub_00596C20(this, nullptr);
}
CMoveRandMan::CMoveRandMan()
{
	UNIMPLEMENTED; //_ctor_1();
}
void CMoveRandMan::_ctor_1()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint32_t CMoveRandMan::GetRndValue(long arg0, int32_t arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint32_t CMoveRandMan::GetLastRnd()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint32_t CMoveRandMan::GetNoRangeFilteredLastRnd()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMoveRandMan::IsGenerated()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMoveRandMan::IsPassed()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMoveRandMan::SetGenerated()
{
	__sub_00596C20(this, nullptr);
}
void CMoveRandMan::Init()
{
	__sub_00596C20(this, nullptr);
}
void CMoveRandMan::SetSeed(uint32_t s1, uint32_t s2, uint32_t s3)
{
	__sub_00596CB0(this, nullptr, s1, s2, s3);
}
void CMoveRandMan::GetSeed(uint32_t &arg0, uint32_t &arg1, uint32_t &arg2)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint16_t CMoveRandMan::GetRandCnt()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlMob::~CVecCtrlMob()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CVecCtrlMob::_dtor_0()
{
	return __sub_00597240(this, nullptr);
}
CVecCtrlMob::CVecCtrlMob(const CVecCtrlMob &arg0)
	: m_moveCtx(arg0.m_moveCtx)
{
	_ctor_1( arg0);
}
void CVecCtrlMob::_ctor_1( const CVecCtrlMob &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlMob::CVecCtrlMob()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CVecCtrlMob::_ctor_0()
{
	return __sub_00597C60(this, nullptr);
}
void CVecCtrlMob::Init(IVecCtrlOwner *pOwner, long nMoveAbility, long nHomeMass)
{
	__sub_00596A00(this, nullptr, pOwner, nMoveAbility, nHomeMass);
}
void CVecCtrlMob::SetActive(int32_t pMob, long pLR, long arg2, long arg3, long arg4, long arg5, CStaticFoothold *arg6)
{
	__sub_005987F0(this, nullptr, pMob, pLR, arg2, arg3, arg4, arg5, arg6);
}
void CVecCtrlMob::SetMoveAbility(long arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CVecCtrlMob::UpdateActiveInterrupted(long nXDiff, long bOnce, long fDrag, long pAttrShoe, long tSlice, long rpl, long dPosDiff, long apl)
{
	__sub_00598C80(this, nullptr, nXDiff, bOnce, fDrag, pAttrShoe, tSlice, rpl, dPosDiff, apl);
}
void CVecCtrlMob::ChaseTarget(int32_t bChase, IVecCtrlOwner *pTarget, int32_t bForced)
{
	__sub_0059B660(this, nullptr, bChase, pTarget, bForced);
}
void CVecCtrlMob::ChaseTargetImp(int32_t bChase, IVecCtrlOwner *pTarget, int32_t bForced)
{
	__sub_00598AD0(this, nullptr, bChase, pTarget, bForced);
}
int32_t CVecCtrlMob::IsChasing()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlMob::IsForcedChase()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
IVecCtrlOwner *CVecCtrlMob::GetChaseTarget()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CVecCtrlMob::GetMoveAbility()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlMob::IsCheatMobMoveRand()
{
	return __sub_0059CEB0(this, nullptr);
}
int32_t CVecCtrlMob::IsCheatMobMoveRandImp()
{
	return __sub_0059A8C0(this, nullptr);
}
TSecType<long> CVecCtrlMob::GetHackedCode()
{
	return __sub_002417B0(this, nullptr);
}
long CVecCtrlMob::GetTargetX()
{
	return __sub_00597620(this, nullptr);
}
long CVecCtrlMob::GetTargetY()
{
	return __sub_00597620(this, nullptr);
}
void CVecCtrlMob::RiseByToss(double vy)
{
	__sub_0059B400(this, nullptr, vy);
}
void CVecCtrlMob::ClearTemporaryValues()
{
	__sub_00596A30(this, nullptr);
}
long CVecCtrlMob::GetChaseDuration()
{
	return __sub_00597620(this, nullptr);
}
void CVecCtrlMob::SaveFloatStateBeforeCollision()
{
	__sub_0059A380(this, nullptr);
}
void CVecCtrlMob::SaveFloatStateAfterCollision()
{
	__sub_0059A450(this, nullptr);
}
int32_t CVecCtrlMob::CollisionDetectWalk(const RelPos &d, long &r, int32_t rgC)
{
	return __sub_0059C650(this, nullptr, d, r, rgC);
}
int32_t CVecCtrlMob::CollisionDetectFloat(const AbsPos &r, long &rgL, int32_t l)
{
	return __sub_0059A4A0(this, nullptr, r, rgL, l);
}
CVecCtrlMob *__cdecl CVecCtrlMob::CreateInstance()
{
	return __sub_00598770();
}
void CVecCtrlMob::SetStatChangedPoint(unsigned char arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CVecCtrlMob::SetMoveRandManSeed(uint32_t s1, uint32_t s2, uint32_t s3)
{
	__sub_00597160(this, nullptr, s1, s2, s3);
}
long CVecCtrlMob::BeginUpdateActive()
{
	return __sub_00597620(this, nullptr);
}
int32_t CVecCtrlMob::WorkUpdateActive(long arg0)
{
	return __sub_0059D450(this, nullptr, arg0);
}
void CVecCtrlMob::InspectUpdateActive()
{
	__sub_005996F0(this, nullptr);
}
void CVecCtrlMob::FlyCtrlGuardingBefore()
{
	__sub_00599EC0(this, nullptr);
}
void CVecCtrlMob::FlyCtrlGuardingAfter()
{
	__sub_0059A0E0(this, nullptr);
}
void CVecCtrlMob::CtrlUpdateActiveStop()
{
	__sub_0059B6A0(this, nullptr);
}
void CVecCtrlMob::CtrlUpdateActiveMove()
{
	__sub_0059D090(this, nullptr);
}
void CVecCtrlMob::CtrlUpdateActiveJump()
{
	__sub_005998F0(this, nullptr);
}
void CVecCtrlMob::CtrlUpdateActiveFly()
{
	__sub_0059BEB0(this, nullptr);
}
void CVecCtrlMob::CtrlUpdateActiveEscort()
{
	__sub_0059B8D0(this, nullptr);
}
void CVecCtrlMob::DelayedGiveUpChasing()
{
	__sub_0059A860(this, nullptr);
}
void CVecCtrlMob::ClearMoveContext()
{
	__sub_00597190(this, nullptr);
}
void CVecCtrlMob::SetJumpNext(int32_t bWantToJumpUp)
{
	__sub_005971E0(this, nullptr, bWantToJumpUp);
}
void CVecCtrlMob::WorkUpdateActiveLadderOrRope()
{
	__sub_0059B4D0(this, nullptr);
}
int32_t CVecCtrlMob::IsAbleToClimbLadderOrRope()
{
	return __sub_00596E50(this, nullptr);
}
void CVecCtrlMob::MoveMobOnLadderOrRopeX()
{
	__sub_00596EB0(this, nullptr);
}
void CVecCtrlMob::MoveMobOnRightAngleX()
{
	__sub_005970A0(this, nullptr);
}
void CVecCtrlMob::CollisionDetectEscortDest()
{
	__sub_00597630(this, nullptr);
}
void CVecCtrlMob::CollisionDetectEscortBeforeTargetPosition()
{
	__sub_00596AD0(this, nullptr);
}
void CVecCtrlMob::SetRushAttack(double v, long nDistance, long tAttackActionRemain)
{
	__sub_00596DB0(this, nullptr, v, nDistance, tAttackActionRemain);
}
void CVecCtrlMob::MoveMobBeforeEscortCurDest()
{
	__sub_0059CF00(this, nullptr);
}
void CVecCtrlMob::SetEscortMobAttr()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CVecCtrlMob::ClearEscortInfo()
{
	__sub_00597120(this, nullptr);
}
void CVecCtrlMob::SetEcortStop(long arg0, int32_t arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlMob::IsEscortStop()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlMob::IsEscortJumpForLadder()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlMob::MoveContext::MoveContext()

	: sc(this->a),
	  wc(this->b, this->c),
	  jc(this->a, this->b, this->d, this->c),
	  fc(this->e, this->d, this->a, this->c)
{
	// TODO
}
CVecCtrlMob::MoveContext::~MoveContext()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CVecCtrlMob::MoveContext::_dtor_0()
{
	return __sub_00596D00(this, nullptr);
}
CVecCtrlMob::MoveContext::MoveContext(const CVecCtrlMob::MoveContext &arg0) : sc(arg0.sc), wc(arg0.wc), jc(arg0.jc), fc(arg0.fc)
{
	_ctor_1( arg0);
}
void CVecCtrlMob::MoveContext::_ctor_1( const CVecCtrlMob::MoveContext &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
/*CVecCtrlMob::MoveContext::MoveContext()
{
	UNIMPLEMENTED; //_ctor_0();
}*/
void CVecCtrlMob::MoveContext::_ctor_0()
{
	return __sub_00597AB0(this, nullptr);
}
void CVecCtrlMob::MoveContext::ClearMoveContext()
{
	__sub_00596D00(this, nullptr);
}
CVecCtrlMob::MoveContext::StopContext::StopContext(TSecType<long> &arg0) : nCount(arg0)
{
	_ctor_0( arg0);
}
void CVecCtrlMob::MoveContext::StopContext::_ctor_0( TSecType<long> &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlMob::MoveContext::WalkContext::WalkContext(TSecType<long> &arg0, TSecType<long> &arg1)
	: lInputX(arg0), nCount(arg1)
{
	_ctor_0( arg0, arg1);
}
void CVecCtrlMob::MoveContext::WalkContext::_ctor_0( TSecType<long> &arg0, TSecType<long> &arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlMob::MoveContext::JumpContext::JumpContext(TSecType<long> &arg0, TSecType<long> &arg1, TSecType<int> &arg2, TSecType<long> &arg3)
	: lInputX(arg0), nCount(arg1), bWantToJumpUp(arg2), nYBeforeJump(arg3)
{
	_ctor_0( arg0, arg1, arg2, arg3);
}
void CVecCtrlMob::MoveContext::JumpContext::_ctor_0( TSecType<long> &arg0, TSecType<long> &arg1, TSecType<int> &arg2, TSecType<long> &arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlMob::MoveContext::FlyContext::FlyContext(SECPOINT &arg0, TSecType<int> &arg1, TSecType<long> &arg2, TSecType<long> &arg3)
	: ptTarget(arg0), bTarget(arg1), nZMass(arg2), nRemain(arg3)
{
	_ctor_0( arg0, arg1, arg2, arg3);
}
void CVecCtrlMob::MoveContext::FlyContext::_ctor_0( SECPOINT &arg0, TSecType<int> &arg1, TSecType<long> &arg2, TSecType<long> &arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlMob::EscortDest::EscortDest()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CVecCtrlMob::EscortDest::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}

double __cdecl ReturnDecSpeed(double v, double f, double m, double vMax, double tSec)
{
	return __sub_00596990(v, f, m, vMax, tSec);
}
