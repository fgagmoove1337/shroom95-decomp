// VecCtrlUser.cpp
#include "VecCtrlUser.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "VecCtrlUser_regen.ipp"

 CVecCtrlUser::~CVecCtrlUser() {
}
void CVecCtrlUser::_dtor_0() {
	//return __sub_005A0840(this, nullptr);
 	this->~CVecCtrlUser();
}
 CVecCtrlUser::CVecCtrlUser(const CVecCtrlUser& arg0) {
	_ctor_1( arg0);
}
void CVecCtrlUser::_ctor_1( const CVecCtrlUser& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecCtrlUser::CVecCtrlUser() {
}
void CVecCtrlUser::_ctor_0() {
	//return __sub_005A07D0(this, nullptr);
 	new(this) CVecCtrlUser();
}
CVecCtrlUser* __cdecl CVecCtrlUser::CreateInstance() {
	//return __sub_005A0BB0();
 	return new CVecCtrlUser();
}
void CVecCtrlUser::SetForcedFlush() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CVecCtrlUser::OnSit(long x, long y) {
	//__sub_005A0860(this, nullptr, x, y);
 	Z_CHECK_HR(this->raw_Move(x, y));
}
void CVecCtrlUser::SetSecondaryStatChangedPoint(unsigned char arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlUser::GetImpactValidity() {
	return __sub_005A0C30(this, nullptr);
}
void CVecCtrlUser::DoCombatStep(double vx, double vy) {
	__sub_0053A7D0(this, nullptr, vx, vy);
}
int32_t CVecCtrlUser::CollisionDetectFloat(const AbsPos& p1, long& tElapse, int32_t bCalcFloat) {
	return __sub_005A1BA0(this, nullptr, p1, tElapse, bCalcFloat);
}
void CVecCtrlUser::SetFlyingSkill() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CVecCtrlUser::ResetFlyingSkill() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CVecCtrlUser::IsFlyingSkill() {
	return __sub_005A0C30(this, nullptr);
}
int32_t CVecCtrlUser::IsFlyingSkillState() {
	return __sub_005A0CB0(this, nullptr);
}
int32_t CVecCtrlUser::IsUserFlying() {
	return __sub_005A0CB0(this, nullptr);
}
int32_t CVecCtrlUser::IsPermitMapFlyingSkill() {
	return __sub_005A0CB0(this, nullptr);
}
long CVecCtrlUser::BeginUpdateActive() {
	//return __sub_005A0B40(this, nullptr);
 	auto updated = CVecCtrl::BeginUpdateActive();
 	auto vy = m_apl._ZtlSecureGet_vy();
 	if (vy < GetPhysicalSpace2D()->m_constants->dFallSpeed)
 		m_nMaxFreeFallTickCount = 0;
 	else
 		++m_nMaxFreeFallTickCount;


 	return updated;
}
int32_t CVecCtrlUser::WorkUpdateActive(long pUserLocal) {
	return __sub_005A1390(this, nullptr, pUserLocal);
}
void CVecCtrlUser::WorkUpdateActiveLadderOrRope() {
	__sub_005A1180(this, nullptr);
}
int32_t CVecCtrlUser::IsAbleToClimbLadderOrRope() {
	return __sub_005A0C30(this, nullptr);
}
void CVecCtrlUser::EndUpdateActive() {
	//__sub_005A0D20(this, nullptr);
 	auto field = get_field();
 	auto fieldTy = field->GetFieldType();
 	if (m_path.IsTimeForFlush(false, fieldTy == 29))
 	{
 		//TODO(game) send path
 		auto lastElem = m_path.GetLastElement();
 		if (auto fh = GetFoothold())
 		{
 			m_rp.SetFromAbsPos(m_ap, fh);
 		}
 	}
}
void CVecCtrlUser::OnAttachedObjectChanged(CStaticFoothold* pfhNew, CLadderOrRope* pLadderOrRopeNew, long tElapse) {
	__sub_005A0FF0(this, nullptr, pfhNew, pLadderOrRopeNew, tElapse);
}
void CVecCtrlUser::MakeContinuousMovePath(long tElapse) {
	__sub_005A08A0(this, nullptr, tElapse);
}
void CVecCtrlUser::MakeNewMovePathElem() {
	__sub_005A09F0(this, nullptr);
}
CVecCtrlUser& CVecCtrlUser::operator=(const CVecCtrlUser& arg0) {
	return _op_assign_24(this, arg0);
}
CVecCtrlUser& CVecCtrlUser::_op_assign_24(CVecCtrlUser* pThis, const CVecCtrlUser& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

