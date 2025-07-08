// FuncKeyMappedMan.cpp
#include "FuncKeyMappedMan.hpp"
#include "FuncKeyMappedMan_regen.ipp"

 CFuncKeyMappedMan::~CFuncKeyMappedMan() {
}
void CFuncKeyMappedMan::_dtor_0() {
	return __sub_001687C0(this, nullptr);
}
 CFuncKeyMappedMan::CFuncKeyMappedMan(const CFuncKeyMappedMan& arg0) {
	_ctor_1( arg0);
}
void CFuncKeyMappedMan::_ctor_1( const CFuncKeyMappedMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CFuncKeyMappedMan::CFuncKeyMappedMan() {
	//TODO: UNIMPLEMENTED; //_ctor_0();
}
void CFuncKeyMappedMan::_ctor_0() {
	//return __sub_00168710(this, nullptr);
	//TODO
}
void CFuncKeyMappedMan::OnInit(CInPacket& iPacket) {
	__sub_00168C30(this, nullptr, iPacket);
}
void CFuncKeyMappedMan::OnPetConsumeItemInit(CInPacket& iPacket) {
	__sub_001688C0(this, nullptr, iPacket);
}
void CFuncKeyMappedMan::OnPetConsumeMPItemInit(CInPacket& iPacket) {
	__sub_001688F0(this, nullptr, iPacket);
}
void CFuncKeyMappedMan::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00168CE0(this, nullptr, nType, iPacket);
}
void CFuncKeyMappedMan::BackUpFuncKeyMap() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CFuncKeyMappedMan::SaveFuncKeyMap() {
	__sub_00168A60(this, nullptr);
}
void CFuncKeyMappedMan::AdaptVirtualKey() {
	__sub_001687E0(this, nullptr);
}
void CFuncKeyMappedMan::RestoreFuncKeyMap() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CFuncKeyMappedMan::IsFuncKeyMapModified() {
	return __sub_003D8180(this, nullptr);
}
void CFuncKeyMappedMan::RemoveAllFuncKeyMap() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CFuncKeyMappedMan::DefaultFuncKeyMap() {
	__sub_00168600(this, nullptr);
}
void CFuncKeyMappedMan::ChangePetConsumeItemID(long nPetConsumeItemID) {
	__sub_00168920(this, nullptr, nPetConsumeItemID);
}
void CFuncKeyMappedMan::ChangePetConsumeMPItemID(long nPetConsumeMPItemID) {
	__sub_001689C0(this, nullptr, nPetConsumeMPItemID);
}
long CFuncKeyMappedMan::GetPetConsumeItemID() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CFuncKeyMappedMan::GetPetConsumeMPItemID() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
FUNCKEY_MAPPED& CFuncKeyMappedMan::FuncKeyMapped(long nIdx) {
	return __sub_00168620(this, nullptr, nIdx);
}
void CFuncKeyMappedMan::SetNormalAttackCode(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CFuncKeyMappedMan::GetNormalAttackCode() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
FUNCKEY_MAPPED& CFuncKeyMappedMan::FuncKeyMapped_StatusBar(long nIdx) {
	return __sub_00168620(this, nullptr, nIdx);
}
void CFuncKeyMappedMan::AdjustConfigurationByVersion() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CFuncKeyMappedMan& CFuncKeyMappedMan::operator=(const CFuncKeyMappedMan& arg0) {
	return _op_assign_23(this, arg0);
}
CFuncKeyMappedMan& CFuncKeyMappedMan::_op_assign_23(CFuncKeyMappedMan* pThis, const CFuncKeyMappedMan& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

