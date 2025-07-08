// UIRaiseManager.cpp
#include "UIRaiseManager.hpp"

CUIRaiseManager* CUIRaiseWndBase::s_pManager = nullptr;

static ZRef<CUIRaiseWndBase> FAKE_ZRef_CUIRaiseWndBase{};

#include "UIRaiseManager_regen.ipp"

 CUIRaiseWndBase::~CUIRaiseWndBase() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIRaiseWndBase::_dtor_0() {
	return __sub_00439740(this, nullptr);
}
 CUIRaiseWndBase::CUIRaiseWndBase(const CUIRaiseWndBase& arg0) {
	_ctor_1( arg0);
}
void CUIRaiseWndBase::_ctor_1( const CUIRaiseWndBase& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaiseWndBase::CUIRaiseWndBase(long nItemID, long nQuestID, long nQRData, ZXString<unsigned short>& sUIData, ZXString<char>& sName, ZArray<ZXString<char> >& asMessage, ZArray<long>& anItemID) {
	_ctor_0( nItemID, nQuestID, nQRData, sUIData, sName, asMessage, anItemID);
}
void CUIRaiseWndBase::_ctor_0( long nItemID, long nQuestID, long nQRData, ZXString<unsigned short>& sUIData, ZXString<char>& sName, ZArray<ZXString<char> >& asMessage, ZArray<long>& anItemID) {
	return __sub_0043B7C0(this, nullptr, nItemID, nQuestID, nQRData, sUIData, sName, asMessage, anItemID);
}
void CUIRaiseWndBase::OnCreate(void* pData) {
	__sub_0043ACC0(this, nullptr, pData);
}
void CUIRaiseWndBase::OnButtonClicked(uint32_t nId) {
	__sub_004391D0(this, nullptr, nId);
}
int32_t CUIRaiseWndBase::OnMouseMove(long rx, long ry) {
	return __sub_00438010(this, nullptr, rx, ry);
}
void CUIRaiseWndBase::OnMouseEnter(int32_t bEnter) {
	__sub_00437DD0(this, nullptr, bEnter);
}
int32_t CUIRaiseWndBase::OnSetFocus(int32_t bFocus) {
	return __sub_00437F90(this, nullptr, bFocus);
}
int32_t CUIRaiseWndBase::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_00437DF0(this, nullptr, rx, ry, ppCtrl);
}
int32_t CUIRaiseWndBase::PutItem(long nItemTI, long nSlotPosition) {
	return __sub_004380B0(this, nullptr, nItemTI, nSlotPosition);
}
void CUIRaiseWndBase::SetQRData(long nQRData) {
	__sub_0043B040(this, nullptr, nQRData);
}
int32_t CUIRaiseWndBase::EnableDrop(long nItemID) {
	return __sub_00437E30(this, nullptr, nItemID);
}
long CUIRaiseWndBase::GetQuestID() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIRaiseWndBase::GetQRData() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIRaiseWndBase::GetEnableDropItemIndex(long nItemID) {
	return __sub_00438140(this, nullptr, nItemID);
}
_x_com_ptr<IWzCanvas> CUIRaiseWndBase::GetPreviewImage(long nIndex) {
	_x_com_ptr<IWzCanvas> ret;
	return *__sub_0043B080(this, nullptr, &ret, nIndex);
}
void __cdecl CUIRaiseWndBase::SetManager(CUIRaiseManager* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIRaiseWndBase::_LoadBgTile(_x_com_ptr<IWzCanvas>* apCanvas, Ztl_bstr_t& sUOL) {
	__sub_004391F0(this, nullptr, apCanvas, sUOL);
}
void CUIRaiseWndBase::_Repaint() {
	__sub_00439920(this, nullptr);
}
void CUIRaiseWndBase::_LevelUp() {
	__sub_0043A640(this, nullptr);
}
void CUIRaiseWndBase::_LoadLayer(unsigned long cColor) {
	__sub_00438360(this, nullptr, cColor);
}
int32_t CUIRaiseWndBase::SendPutItem(long arg0, long arg1, long arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIRaiseWndBase::CheckDrop(long nItemID) {
	return __sub_00437E30(this, nullptr, nItemID);
}
long CUIRaiseWndBase::GetLevel() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_x_com_ptr<IWzCanvas> CUIRaiseWndBase::MakePreviewImage() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIRaiseWndBase& CUIRaiseWndBase::operator=(const CUIRaiseWndBase& arg0) {
	return _op_assign_28(this, arg0);
}
CUIRaiseWndBase& CUIRaiseWndBase::_op_assign_28(CUIRaiseWndBase* pThis, const CUIRaiseWndBase& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaiseManager::~CUIRaiseManager() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIRaiseManager::_dtor_0() {
	return __sub_00438B00(this, nullptr);
}
 CUIRaiseManager::CUIRaiseManager(const CUIRaiseManager& arg0) {
	_ctor_1( arg0);
}
void CUIRaiseManager::_ctor_1( const CUIRaiseManager& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaiseManager::CUIRaiseManager() {
	//TODO UNIMPLEMENTED; //_ctor_0();
}
void CUIRaiseManager::_ctor_0() {
	return __sub_00438AA0(this, nullptr);
}
void CUIRaiseManager::OpenWindow(long nItemID) {
	__sub_0043C510(this, nullptr, nItemID);
}
void CUIRaiseManager::DestroyWindow(long nItemID) {
	__sub_00438FB0(this, nullptr, nItemID);
}
void CUIRaiseManager::DestroyWindowWithQuestID(long nQuestID) {
	__sub_00439080(this, nullptr, nQuestID);
}
void CUIRaiseManager::RestoreWindows() {
	__sub_0043C5B0(this, nullptr);
}
void CUIRaiseManager::DestroyWindows() {
	__sub_004390A0(this, nullptr);
}
void CUIRaiseManager::ClearWindows() {
	__sub_00438880(this, nullptr);
}
void CUIRaiseManager::SetQRDataWithQuestID(long nQuestID, long nQRData) {
	__sub_0043B720(this, nullptr, nQuestID, nQRData);
}
void CUIRaiseManager::_CreateWindow(long arg0) {
	__sub_0043BC60(this, nullptr, arg0);
}
long CUIRaiseManager::_Quest2Item(long nQuestID) {
	return __sub_00438E50(this, nullptr, nQuestID);
}
CUIRaiseManager& CUIRaiseManager::operator=(const CUIRaiseManager& arg0) {
	return _op_assign_12(this, arg0);
}
CUIRaiseManager& CUIRaiseManager::_op_assign_12(CUIRaiseManager* pThis, const CUIRaiseManager& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaiseWnd::~CUIRaiseWnd() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIRaiseWnd::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaiseWnd::CUIRaiseWnd(const CUIRaiseWnd& arg0) {
	_ctor_1( arg0);
}
void CUIRaiseWnd::_ctor_1( const CUIRaiseWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaiseWnd::CUIRaiseWnd(long nItemID, long nQuestID, long nIncExpUnit, long nGrade, ZXString<unsigned short>& sUIData, ZXString<char>& sName, ZArray<ZXString<char> >& asMessage, ZArray<long>& anItemID) {
	_ctor_0( nItemID, nQuestID, nIncExpUnit, nGrade, sUIData, sName, asMessage, anItemID);
}
void CUIRaiseWnd::_ctor_0( long nItemID, long nQuestID, long nIncExpUnit, long nGrade, ZXString<unsigned short>& sUIData, ZXString<char>& sName, ZArray<ZXString<char> >& asMessage, ZArray<long>& anItemID) {
	return __sub_0043BAD0(this, nullptr, nItemID, nQuestID, nIncExpUnit, nGrade, sUIData, sName, asMessage, anItemID);
}
int32_t CUIRaiseWnd::SendPutItem(long nItemTI, long nSlotPosition, long _nItemID) {
	return __sub_00438CF0(this, nullptr, nItemTI, nSlotPosition, _nItemID);
}
long CUIRaiseWnd::GetLevel() {
	return __sub_00437E40(this, nullptr);
}
int32_t CUIRaiseWnd::CheckDrop(long nItemID) {
	return __sub_0043A970(this, nullptr, nItemID);
}
_x_com_ptr<IWzCanvas> CUIRaiseWnd::MakePreviewImage() {
	return __sub_0043B2F0(this, nullptr);
}
CUIRaiseWnd& CUIRaiseWnd::operator=(const CUIRaiseWnd& arg0) {
	return _op_assign_10(this, arg0);
}
CUIRaiseWnd& CUIRaiseWnd::_op_assign_10(CUIRaiseWnd* pThis, const CUIRaiseWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaisePieceWnd::~CUIRaisePieceWnd() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIRaisePieceWnd::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaisePieceWnd::CUIRaisePieceWnd(const CUIRaisePieceWnd& arg0) {
	_ctor_1( arg0);
}
void CUIRaisePieceWnd::_ctor_1( const CUIRaisePieceWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIRaisePieceWnd::CUIRaisePieceWnd(long nItemID, long nQuestID, long nGrade, ZXString<unsigned short>& sUIData, ZXString<char>& sName, ZArray<ZXString<char> >& asMessage, ZArray<long>& anItemID) {
	_ctor_0( nItemID, nQuestID, nGrade, sUIData, sName, asMessage, anItemID);
}
void CUIRaisePieceWnd::_ctor_0( long nItemID, long nQuestID, long nGrade, ZXString<unsigned short>& sUIData, ZXString<char>& sName, ZArray<ZXString<char> >& asMessage, ZArray<long>& anItemID) {
	return __sub_0043BBA0(this, nullptr, nItemID, nQuestID, nGrade, sUIData, sName, asMessage, anItemID);
}
int32_t CUIRaisePieceWnd::SendPutItem(long nItemTI, long nSlotPosition, long _nItemID) {
	return __sub_00438D90(this, nullptr, nItemTI, nSlotPosition, _nItemID);
}
int32_t CUIRaisePieceWnd::CheckDrop(long nItemID) {
	return __sub_00438F50(this, nullptr, nItemID);
}
long CUIRaisePieceWnd::GetLevel() {
	return __sub_00437E60(this, nullptr);
}
_x_com_ptr<IWzCanvas> CUIRaisePieceWnd::MakePreviewImage() {
	return __sub_0043B340(this, nullptr);
}
CUIRaisePieceWnd& CUIRaisePieceWnd::operator=(const CUIRaisePieceWnd& arg0) {
	return _op_assign_10(this, arg0);
}
CUIRaisePieceWnd& CUIRaisePieceWnd::_op_assign_10(CUIRaisePieceWnd* pThis, const CUIRaisePieceWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

