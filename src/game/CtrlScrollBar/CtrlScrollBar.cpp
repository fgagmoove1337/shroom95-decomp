// CtrlScrollBar.cpp
#include "CtrlScrollBar.hpp"
#include "CtrlScrollBar_regen.ipp"

 CCtrlScrollBar::~CCtrlScrollBar() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlScrollBar::_dtor_0() {
	return __sub_000EA050(this, nullptr);
}
 CCtrlScrollBar::CCtrlScrollBar(const CCtrlScrollBar& arg0) {
	_ctor_1( arg0);
}
void CCtrlScrollBar::_ctor_1( const CCtrlScrollBar& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlScrollBar::CCtrlScrollBar() {
	m_nWheelRange = -1;
}
void CCtrlScrollBar::_ctor_0() {
	return __sub_000E9FC0(this, nullptr);
}

void CCtrlScrollBar::_ctor_default()
{
 	new(this) CCtrlScrollBar();
}

void CCtrlScrollBar::CreateCtrl(CWnd* pParent, uint32_t nId, long hv, long type, long l, long t, long length, void* pData) {
	__sub_000EB430(this, nullptr, pParent, nId, hv, type, l, t, length, pData);
}
int32_t CCtrlScrollBar::OnMouseMove(long rx, long ry) {
	return __sub_000E9B90(this, nullptr, rx, ry);
}
void CCtrlScrollBar::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000E9F80(this, nullptr, msg, wParam, rx, ry);
}
int32_t CCtrlScrollBar::OnMouseWheel(long rx, long ry, long nDelta) {
	return __sub_000E9C30(this, nullptr, rx, ry, nDelta);
}
void CCtrlScrollBar::OnMouseEnter(int32_t bEnter) {
	__sub_000E9BD0(this, nullptr, bEnter);
}
void CCtrlScrollBar::Draw(long rx, long ry, const tagRECT* pRect) {
	__sub_000EA940(this, nullptr, rx, ry, pRect);
}
void CCtrlScrollBar::Update() {
	__sub_000E9E80(this, nullptr);
}
long CCtrlScrollBar::GetCurPos() {
	// TODO: No module found for method
	//UNIMPLEMENTED;
	return m_nCurPos;
}
long CCtrlScrollBar::GetScrollRange() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlScrollBar::SetCurPos(long nPos) {
	__sub_000E9B50(this, nullptr, nPos);
}
void CCtrlScrollBar::SetScrollRange(long nRange) {
	__sub_000E9B70(this, nullptr, nRange);
}
int32_t CCtrlScrollBar::IsEnabled() {
	return __sub_000E9850(this, nullptr);
}
void CCtrlScrollBar::HideThumb(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlScrollBar::SetWheelRange(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __cdecl CCtrlScrollBar::GetScrollBarSize(long hv, long type) {
	return __sub_000EA230(hv, type);
}
int32_t CCtrlScrollBar::SetScrollBarSize(long length) {
	return __sub_000E9B00(this, nullptr, length);
}
_x_com_ptr<IWzCanvas> CCtrlScrollBar::GetScrollBarCanvas(long nImgType) {
	_x_com_ptr<IWzCanvas> ret;
	return *__sub_000EA530(this, nullptr, &ret, nImgType);
}
void CCtrlScrollBar::ValidatePosAndRange() {
	__sub_000E9820(this, nullptr);
}
long CCtrlScrollBar::ScrHitTest(long rx, long ry) {
	return __sub_000E9890(this, nullptr, rx, ry);
}
int32_t CCtrlScrollBar::AutoRepeat() {
	return __sub_000E9850(this, nullptr);
}
void CCtrlScrollBar::MouseDown(long rx, long ry) {
	__sub_000E9D20(this, nullptr, rx, ry);
}
void CCtrlScrollBar::MouseUp(long rx, long ry) {
	__sub_000E9DE0(this, nullptr, rx, ry);
}
void CCtrlScrollBar::DoPrevNext(long delta) {
	__sub_000E9950(this, nullptr, delta);
}
void CCtrlScrollBar::DoPrevNextBar(long delta) {
	__sub_000E9CB0(this, nullptr, delta);
}
void CCtrlScrollBar::DoThumbStart(long rx, long ry) {
	__sub_000E99B0(this, nullptr, rx, ry);
}
void CCtrlScrollBar::DoThumbMove(long rx, long ry) {
	__sub_000E99E0(this, nullptr, rx, ry);
}
void CCtrlScrollBar::DoThumbEnd(long rx, long ry) {
	__sub_000E9A70(this, nullptr, rx, ry);
}
void __cdecl CCtrlScrollBar::GetScrollBarBaseUOL(long hv, long type, ZXString<unsigned short>& sUOL) {
	__sub_000EA0F0(hv, type, sUOL);
}
CCtrlScrollBar& CCtrlScrollBar::operator=(const CCtrlScrollBar& arg0) {
	return _op_assign_34(this, arg0);
}
CCtrlScrollBar& CCtrlScrollBar::_op_assign_34(CCtrlScrollBar* pThis, const CCtrlScrollBar& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

