// IG.cpp
#include "IG.hpp"
#include "IG_regen.ipp"

 IGObj::IGObj(const IGObj& arg0) {
	_ctor_0( arg0);
}
void IGObj::_ctor_0( const IGObj& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 IGObj::IGObj() {
	//TODO UNIMPLEMENTED; //_ctor_1();
}
void IGObj::_ctor_1() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void IGObj::Update() {
	__sub_00038CA0(this, nullptr);
}
IGObj& IGObj::operator=(const IGObj& arg0) {
	return _op_assign_3(this, arg0);
}
IGObj& IGObj::_op_assign_3(IGObj* pThis, const IGObj& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}


 IUIMsgHandler::IUIMsgHandler(const IUIMsgHandler& arg0) {
	_ctor_0( arg0);
}
void IUIMsgHandler::_ctor_0( const IUIMsgHandler& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 IUIMsgHandler::IUIMsgHandler() {
	//UNIMPLEMENTED; //_ctor_1();
}
void IUIMsgHandler::_ctor_1() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void IUIMsgHandler::OnKey(uint32_t wParam, uint32_t lParam) {
	__sub_0007D230(this, nullptr, wParam, lParam);
}
int32_t IUIMsgHandler::OnSetFocus(int32_t bFocus) {
	return __sub_0007D240(this, nullptr, bFocus);
}
void IUIMsgHandler::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0007D250(this, nullptr, msg, wParam, rx, ry);
}
int32_t IUIMsgHandler::OnMouseMove(long rx, long ry) {
	return __sub_0007D260(this, nullptr, rx, ry);
}
int32_t IUIMsgHandler::OnMouseWheel(long rx, long ry, long nWheel) {
	return __sub_00071870(this, nullptr, rx, ry, nWheel);
}
void IUIMsgHandler::OnMouseEnter(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void IUIMsgHandler::OnDraggableMove(long nState, IDraggable* pObj, long rx, long ry) {
	__sub_00029A90(this, nullptr, nState, pObj, rx, ry);
}
void IUIMsgHandler::SetEnable(int32_t bEnable) {
	__sub_00029AA0(this, nullptr, bEnable);
}
int32_t IUIMsgHandler::IsEnabled() {
	return 1;
	//__sub_00029AB0(this, nullptr);
}
void IUIMsgHandler::SetShow(int32_t bShow) {
	__sub_00029AC0(this, nullptr, bShow);
}
int32_t IUIMsgHandler::IsShown() {
	return __sub_00029AD0(this, nullptr);
}
long IUIMsgHandler::GetAbsLeft() {
	return __sub_0007D280(this, nullptr);
}
long IUIMsgHandler::GetAbsTop() {
	return __sub_0007D290(this, nullptr);
}
void IUIMsgHandler::ClearToolTip() {
	__sub_00029AE0(this, nullptr);
}
void IUIMsgHandler::OnIMEModeChange(char cMode) {
	__sub_00029AF0(this, nullptr, cMode);
}
void IUIMsgHandler::OnIMEResult(const char* sComp) {
	__sub_00029B00(this, nullptr, sComp);
}
void IUIMsgHandler::OnIMEComp(const char* sComp, ZArray<unsigned long>& adwCls, uint32_t nClsIdx, long nCursor, ZList<ZXString<char> >& lCand, long nBegin, long nPage, long nCur) {
	__sub_00029B10(this, nullptr, sComp, adwCls, nClsIdx, nCursor, lCand, nBegin, nPage, nCur);
}
IUIMsgHandler& IUIMsgHandler::operator=(const IUIMsgHandler& arg0) {
	return _op_assign_22(this, arg0);
}
IUIMsgHandler& IUIMsgHandler::_op_assign_22(IUIMsgHandler* pThis, const IUIMsgHandler& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

 INetMsgHandler::INetMsgHandler(const INetMsgHandler& arg0) {
	_ctor_0( arg0);
}
void INetMsgHandler::_ctor_0( const INetMsgHandler& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 INetMsgHandler::INetMsgHandler() {
	//UNIMPLEMENTED; //_ctor_1();
}
void INetMsgHandler::_ctor_1() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void INetMsgHandler::OnPacket(long nType, CInPacket& iPacket) {
	__sub_0007D2E0(this, nullptr, nType, iPacket);
}
INetMsgHandler& INetMsgHandler::operator=(const INetMsgHandler& arg0) {
	return _op_assign_3(this, arg0);
}
INetMsgHandler& INetMsgHandler::_op_assign_3(INetMsgHandler* pThis, const INetMsgHandler& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}