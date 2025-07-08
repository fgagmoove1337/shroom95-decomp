// CtrlSelector.cpp
#include "CtrlSelector.hpp"
#include "CtrlSelector_regen.ipp"

 CCtrlSelector::~CCtrlSelector() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlSelector::_dtor_0() {
	return __sub_000EC850(this, nullptr);
}
 CCtrlSelector::CCtrlSelector(const CCtrlSelector& arg0) {
	_ctor_1( arg0);
}
void CCtrlSelector::_ctor_1( const CCtrlSelector& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelector::CCtrlSelector() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlSelector::_ctor_0() {
	return __sub_000EC7D0(this, nullptr);
}
void CCtrlSelector::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, long w, void* pData) {
	__sub_000EB610(this, nullptr, pParent, nId, l, t, w, pData);
}
void CCtrlSelector::SetSelectorStart(long nNo, long nNoPerPage, int32_t bCenterAlign, int32_t bEmphasize) {
	__sub_000EC920(this, nullptr, nNo, nNoPerPage, bCenterAlign, bEmphasize);
}
void CCtrlSelector::SetSelector(long nIdx, ZXString<char> sText) {
	__sub_000EB810(this, nullptr, nIdx, CreateNakedParam(sText));
}
void CCtrlSelector::SetSelectorEnd() {
	__sub_000EC980(this, nullptr);
}
void CCtrlSelector::SetSelectorAttr(long clrBackgrnd, long clrBasic, long clrMouseOver) {
	__sub_000EB9F0(this, nullptr, clrBackgrnd, clrBasic, clrMouseOver);
}
int32_t CCtrlSelector::OnMouseMove(long rx, long ry) {
	return __sub_000EB680(this, nullptr, rx, ry);
}
void CCtrlSelector::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000EC990(this, nullptr, msg, wParam, rx, ry);
}
void CCtrlSelector::OnMouseEnter(int32_t bEnter) {
	__sub_000EB650(this, nullptr, bEnter);
}
void CCtrlSelector::Draw(long rx, long ry, const tagRECT* pRect) {
	__sub_000EBC50(this, nullptr, rx, ry, pRect);
}
void CCtrlSelector::SetCurSel(long nCurSel) {
	__sub_000EC8F0(this, nullptr, nCurSel);
}
long CCtrlSelector::GetCurSel() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCtrlSelector::GetCount() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlSelector::ResetVisible() {
	__sub_000EC220(this, nullptr);
}
CCtrlSelector& CCtrlSelector::operator=(const CCtrlSelector& arg0) {
	return _op_assign_19(this, arg0);
}
CCtrlSelector& CCtrlSelector::_op_assign_19(CCtrlSelector* pThis, const CCtrlSelector& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelector::VISIBLE_ITEM::~VISIBLE_ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlSelector::VISIBLE_ITEM::_dtor_0() {
	return __sub_000EB7D0(this, nullptr);
}
 CCtrlSelector::VISIBLE_ITEM::VISIBLE_ITEM(const CCtrlSelector::VISIBLE_ITEM& arg0) {
	_ctor_1( arg0);
}
void CCtrlSelector::VISIBLE_ITEM::_ctor_1( const CCtrlSelector::VISIBLE_ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlSelector::VISIBLE_ITEM::VISIBLE_ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlSelector::VISIBLE_ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCtrlSelector::VISIBLE_ITEM& CCtrlSelector::VISIBLE_ITEM::operator=(const CCtrlSelector::VISIBLE_ITEM& arg0) {
	return _op_assign_3(this, arg0);
}
CCtrlSelector::VISIBLE_ITEM& CCtrlSelector::VISIBLE_ITEM::_op_assign_3(CCtrlSelector::VISIBLE_ITEM* pThis, const CCtrlSelector::VISIBLE_ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

