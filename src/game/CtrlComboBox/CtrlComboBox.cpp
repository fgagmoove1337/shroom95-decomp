// CtrlComboBox.cpp
#include "CtrlComboBox.hpp"
#include "CtrlComboBox_regen.ipp"

CCtrlComboBoxSelect::~CCtrlComboBoxSelect()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCtrlComboBoxSelect::_dtor_0()
{
    return __sub_000D8530(this, nullptr);
}

CCtrlComboBoxSelect::CCtrlComboBoxSelect(const CCtrlComboBoxSelect& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBoxSelect::_ctor_1(const CCtrlComboBoxSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBoxSelect::CCtrlComboBoxSelect(CCtrlComboBox* pComboBox, long nSelect, long nSelectMax, FONT_TYPE fTypeSelect,
                                         FONT_TYPE fTypeSelectFocused, long nTextOffset_Y, int32_t bDeleteEnable)
{
    //_ctor_0(pComboBox, nSelect, nSelectMax, fTypeSelect, fTypeSelectFocused, nTextOffset_Y, bDeleteEnable);
    m_pComboBox = pComboBox;
    m_fTypeSelect = fTypeSelect;
    m_nSelect = nSelect;
    m_nSelectMax = nSelectMax;
    m_nTextOffset_Y = nTextOffset_Y;
    m_fTypeSelectFocused = fTypeSelectFocused;
    m_bDeleteEnable = bDeleteEnable;
}

void CCtrlComboBoxSelect::_ctor_0(CCtrlComboBox* pComboBox, long nSelect, long nSelectMax, FONT_TYPE fTypeSelect,
                                  FONT_TYPE fTypeSelectFocused, long nTextOffset_Y, int32_t bDeleteEnable)
{
    //return __sub_000D8480(this, nullptr, pComboBox, nSelect, nSelectMax, fTypeSelect, fTypeSelectFocused, nTextOffset_Y,
     //                     bDeleteEnable);
    new(this) CCtrlComboBoxSelect(pComboBox, nSelect, nSelectMax, fTypeSelect, fTypeSelectFocused, nTextOffset_Y, bDeleteEnable);
}

void CCtrlComboBoxSelect::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000D9AC0(this, nullptr, rx, ry, pRect);
}

void CCtrlComboBoxSelect::OnCreate(void* pData)
{
    __sub_000D8B20(this, nullptr, pData);
}

void CCtrlComboBoxSelect::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_000D91F0(this, nullptr, wParam, lParam);
}

int32_t CCtrlComboBoxSelect::OnSetFocus(int32_t bFocus)
{
    return __sub_000D91A0(this, nullptr, bFocus);
}

void CCtrlComboBoxSelect::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_000D97F0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CCtrlComboBoxSelect::OnMouseMove(long rx, long ry)
{
    return __sub_000D82B0(this, nullptr, rx, ry);
}

int32_t CCtrlComboBoxSelect::OnMouseWheel(long rx, long ry, long nDelta)
{
    return __sub_000D8300(this, nullptr, rx, ry, nDelta);
}

CCtrlComboBoxSelect& CCtrlComboBoxSelect::operator=(const CCtrlComboBoxSelect& arg0)
{
    return _op_assign_13(this, arg0);
}

CCtrlComboBoxSelect& CCtrlComboBoxSelect::_op_assign_13(CCtrlComboBoxSelect* pThis, const CCtrlComboBoxSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::~CCtrlComboBox()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCtrlComboBox::_dtor_0()
{
    return __sub_000DA1E0(this, nullptr);
}

CCtrlComboBox::CCtrlComboBox(const CCtrlComboBox& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBox::_ctor_1(const CCtrlComboBox& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::CCtrlComboBox()
{
    m_nPrevSelect = -1;
}

void CCtrlComboBox::_ctor_0()
{
    //return __sub_000DA090(this, nullptr);
    new(this) CCtrlComboBox();
}

void CCtrlComboBox::CreateCtrl(CWnd* pParent, uint32_t nId, long nType, long l, long t, long w, long h, void* pData)
{
    __sub_000DA330(this, nullptr, pParent, nId, nType, l, t, w, h, pData);
}

void CCtrlComboBox::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000DD250(this, nullptr, rx, ry, pRect);
}

void CCtrlComboBox::OnCreate(void* pData)
{
    __sub_000DA7D0(this, nullptr, pData);
}

void CCtrlComboBox::OnDestroy()
{
    __sub_000D9310(this, nullptr);
}

int32_t CCtrlComboBox::OnSetFocus(int32_t bFocus)
{
    return __sub_000D8130(this, nullptr, bFocus);
}

void CCtrlComboBox::Update()
{
    __sub_000D8320(this, nullptr);
}

void CCtrlComboBox::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_000DA450(this, nullptr, msg, wParam, rx, ry);
}

void CCtrlComboBox::OnMouseEnter(int32_t bEnter)
{
    __sub_000D80E0(this, nullptr, bEnter);
}

void CCtrlComboBox::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_000D9910(this, nullptr, wParam, lParam);
}

int32_t CCtrlComboBox::HitTest(long rx, long ry)
{
    return __sub_000D8350(this, nullptr, rx, ry);
}

void CCtrlComboBox::SetAbove(CCtrlWnd* pCtrl)
{
    __sub_000D83D0(this, nullptr, pCtrl);
}

void CCtrlComboBox::AddItem(const char* sItemName, unsigned long dwParam)
{
    __sub_000DE640(this, nullptr, sItemName, dwParam);
}

void CCtrlComboBox::RemoveAllItems()
{
    __sub_000D8E30(this, nullptr);
}

void CCtrlComboBox::GetComboBoxUOL(long nType, Ztl_bstr_t& m_sUOL)
{
    __sub_000DA6F0(this, nullptr, nType, m_sUOL);
}

ZXString<char> CCtrlComboBox::GetText()
{
    return __sub_000D9950(this, nullptr);
}

ZList<CCtrlComboBox::ITEM_INFO> CCtrlComboBox::GetItemList()
{
    return __sub_0058EF80(this, nullptr);
}

long CCtrlComboBox::GetItemCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CCtrlComboBox::GetCurSelect()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CCtrlComboBox::GetItemParam(long nIdx)
{
    return __sub_000D8E40(this, nullptr, nIdx);
}

void CCtrlComboBox::SetSelect(long nSelect)
{
    __sub_000D90E0(this, nullptr, nSelect);
}

void CCtrlComboBox::SetForcedSelect(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlComboBox::Delete(long nSelect)
{
    __sub_000D96D0(this, nullptr, nSelect);
}

void CCtrlComboBox::DeleteByParam(unsigned long dwParam, int32_t bOpenSelectWnd)
{
    __sub_000DA470(this, nullptr, dwParam, bOpenSelectWnd);
}

int32_t CCtrlComboBox::IsActivateComboBoxSelectWnd()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CCtrlComboBox::GetComboBoxItemTotalHeight()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlComboBox::RemoveSelectWnd()
{
    __sub_000D9070(this, nullptr);
}

void CCtrlComboBox::MakeSelectWnd()
{
    __sub_000D94E0(this, nullptr);
}

void CCtrlComboBox::MakeScrollBar()
{
    __sub_000D9320(this, nullptr);
}

void CCtrlComboBox::BtClicked()
{
    __sub_000D98D0(this, nullptr);
}

_x_com_ptr<IWzCanvas> CCtrlComboBox::GetButtonCanvas()
{
    return __sub_000D8560(this, nullptr);
}

_x_com_ptr<IWzCanvas> CCtrlComboBox::GetStartCanvas()
{
    return __sub_000D8710(this, nullptr);
}

_x_com_ptr<IWzCanvas> CCtrlComboBox::GetLineCanvas()
{
    return __sub_000D8810(this, nullptr);
}

int32_t CCtrlComboBox::IsItemExist()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox& CCtrlComboBox::operator=(const CCtrlComboBox& arg0)
{
    return _op_assign_39(this, arg0);
}

CCtrlComboBox& CCtrlComboBox::_op_assign_39(CCtrlComboBox* pThis, const CCtrlComboBox& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::ITEM_INFO::~ITEM_INFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCtrlComboBox::ITEM_INFO::_dtor_0()
{
    return __sub_000D94C0(this, nullptr);
}

CCtrlComboBox::ITEM_INFO::ITEM_INFO(const CCtrlComboBox::ITEM_INFO& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBox::ITEM_INFO::_ctor_1(const CCtrlComboBox::ITEM_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::ITEM_INFO::ITEM_INFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CCtrlComboBox::ITEM_INFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::ITEM_INFO& CCtrlComboBox::ITEM_INFO::operator=(const CCtrlComboBox::ITEM_INFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlComboBox::ITEM_INFO& CCtrlComboBox::ITEM_INFO::_op_assign_3(CCtrlComboBox::ITEM_INFO* pThis,
                                                                 const CCtrlComboBox::ITEM_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::CREATEPARAM::~CREATEPARAM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCtrlComboBox::CREATEPARAM::_dtor_0()
{
    return __sub_0008A920(this, nullptr);
}

CCtrlComboBox::CREATEPARAM::CREATEPARAM(const CCtrlComboBox::CREATEPARAM& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBox::CREATEPARAM::_ctor_1(const CCtrlComboBox::CREATEPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::CREATEPARAM::CREATEPARAM()
{
    nBackColor = 0xFFEEEEEE;
    nBackFocusedColor = 0xFFA5A198;
    nBorderColor = 0xFF999999;
    nBoxWidth = -1;
    nBoxTextLeftOffset = 7;
    nDesign = 1;
    nType_ScrollBar = 3;
    fType = FONT_BASIC_BLACK;
    fTypeFocused = FONT_BASIC_WHITE;
    fTypeSelect = FONT_BASIC_BLACK;
    fTypeSelectFocused = FONT_BASIC_WHITE;
    nItemListPosType = 1;
}

void CCtrlComboBox::CREATEPARAM::_ctor_0()
{
    //return __sub_000894F0(this, nullptr);
    new(this) CCtrlComboBox::CREATEPARAM();
}

CCtrlComboBox::CREATEPARAM& CCtrlComboBox::CREATEPARAM::operator=(const CCtrlComboBox::CREATEPARAM& arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlComboBox::CREATEPARAM& CCtrlComboBox::CREATEPARAM::_op_assign_3(CCtrlComboBox::CREATEPARAM* pThis,
                                                                     const CCtrlComboBox::CREATEPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> __cdecl operator__char_char__144860(const char* s1, const ZXString<char>& s2)
{
    return __sub_000D99A0(s1, s2);
}
