// VecCtrlDragon.cpp
#include "VecCtrlDragon.hpp"
#include "VecCtrlDragon_regen.ipp"

 CVecCtrlDragon::~CVecCtrlDragon() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CVecCtrlDragon::_dtor_0() {
	return __sub_00595DF0(this, nullptr);
}
 CVecCtrlDragon::CVecCtrlDragon(const CVecCtrlDragon& arg0) {
	_ctor_1( arg0);
}
void CVecCtrlDragon::_ctor_1( const CVecCtrlDragon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecCtrlDragon::CVecCtrlDragon() {
	UNIMPLEMENTED; //_ctor_0();
}
void CVecCtrlDragon::_ctor_0() {
	return __sub_00595DD0(this, nullptr);
}
void CVecCtrlDragon::Init(IVecCtrlOwner* pUser, unsigned long dwCharacterID) {
	__sub_00595E10(this, nullptr, pUser, dwCharacterID);
}
void CVecCtrlDragon::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget) {
	__sub_00595E40(this, nullptr, bChase, pTarget);
}
CVecCtrlDragon* __cdecl CVecCtrlDragon::CreateInstance() {
	return __sub_00595F20();
}
int32_t CVecCtrlDragon::WorkUpdateActive(long rcOut) {
	return __sub_00595FC0(this, nullptr, rcOut);
}
void CVecCtrlDragon::EndUpdateActive() {
	__sub_00596570(this, nullptr);
}
int64_t CVecCtrlDragon::WorkUpdatePassive(long tElapse) {
	return __sub_00595E70(this, nullptr, tElapse);
}
CVecCtrlDragon& CVecCtrlDragon::operator=(const CVecCtrlDragon& arg0) {
	return _op_assign_9(this, arg0);
}
CVecCtrlDragon& CVecCtrlDragon::_op_assign_9(CVecCtrlDragon* pThis, const CVecCtrlDragon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

