// VecCtrlSummoned.cpp
#include "VecCtrlSummoned.hpp"
#include "VecCtrlSummoned_regen.ipp"

 CVecCtrlSummoned::~CVecCtrlSummoned() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CVecCtrlSummoned::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecCtrlSummoned::CVecCtrlSummoned(const CVecCtrlSummoned& arg0) {
	_ctor_1( arg0);
}
void CVecCtrlSummoned::_ctor_1( const CVecCtrlSummoned& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecCtrlSummoned::CVecCtrlSummoned() {
	UNIMPLEMENTED; //_ctor_0();
}
void CVecCtrlSummoned::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CVecCtrlSummoned::Init(IVecCtrlOwner* pOwner, unsigned long dwSummonedID, long nSkillID, long nMoveAbility) {
	__sub_0059F660(this, nullptr, pOwner, dwSummonedID, nSkillID, nMoveAbility);
}
void CVecCtrlSummoned::SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pfh) {
	__sub_0059F710(this, nullptr, bActive, x, y, vx, vy, nMoveAction, pfh);
}
int32_t CVecCtrlSummoned::CollisionDetectFloat(const AbsPos& p1, long& tElapse, int32_t bCalcFloat) {
	return __sub_0059F890(this, nullptr, p1, tElapse, bCalcFloat);
}
int32_t CVecCtrlSummoned::CollisionDetectWalk(const RelPos& d, long& arg1, int32_t arg2) {
	return __sub_0059FEE0(this, nullptr, d, arg1, arg2);
}
CVecCtrlSummoned* __cdecl CVecCtrlSummoned::CreateInstance() {
	return __sub_0059F800();
}
void CVecCtrlSummoned::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget) {
	__sub_0059F780(this, nullptr, bChase, pTarget);
}
IVecCtrlOwner* CVecCtrlSummoned::GetChaseTarget() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CVecCtrlSummoned::SetRectOut(long arg0, long arg1, long arg2, long arg3) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlSummoned::WorkUpdateActive(long pTarget) {
	return __sub_005A0090(this, nullptr, pTarget);
}
void CVecCtrlSummoned::EndUpdateActive() {
	__sub_005A0700(this, nullptr);
}
void CVecCtrlSummoned::CtrlUpdateActiveFly() {
	__sub_0059FA50(this, nullptr);
}
void CVecCtrlSummoned::CtrlUpdateActiveWalkFree() {
	__sub_0059FE80(this, nullptr);
}
void CVecCtrlSummoned::ClearMoveContext() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CVecCtrlSummoned& CVecCtrlSummoned::operator=(const CVecCtrlSummoned& arg0) {
	return _op_assign_16(this, arg0);
}
CVecCtrlSummoned& CVecCtrlSummoned::_op_assign_16(CVecCtrlSummoned* pThis, const CVecCtrlSummoned& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

