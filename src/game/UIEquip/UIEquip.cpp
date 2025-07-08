// UIEquip.cpp
#include "UIEquip.hpp"


#include "UtilDlg/UtilDlg.hpp"

static ZRef<CUISysOpt> _FAKE_ZRef_CUISysOpt{};

#include "UIEquip_regen.ipp"


EqSlotInfo CUIDragonEquip::ms_aRegion[4]{};

EqSlotInfo CUIMechanicEquip::ms_aRegion[5]{};

EqSlotInfo CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[59]{};
EqSlotInfo CUIEquip::CExpandableWndInfo::m_sPetConsumeSlotInfo[2]{};

long __cdecl EqSlotInfo::GetX(long nXpt, long nType)
{
    return __sub_003A3910(nXpt, nType);
}

long __cdecl EqSlotInfo::GetY(long nYpt, long nType)
{
    return __sub_003A3960(nYpt, nType);
}

int32_t EqSlotInfo::IsPtIn(int32_t arg0, int32_t arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIPetEquip::~CUIPetEquip()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIPetEquip::_dtor_0()
{
    return __sub_003A4A60(this, nullptr);
}

CUIPetEquip::CUIPetEquip(const CUIPetEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIPetEquip::_ctor_1(const CUIPetEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIPetEquip::CUIPetEquip(long lLeft, long lTop)
{
    _ctor_0(lLeft, lTop);
}

void CUIPetEquip::_ctor_0(long lLeft, long lTop)
{
    return __sub_003A4920(this, nullptr, lLeft, lTop);
}

void CUIPetEquip::OnCreate(void* pData)
{
    __sub_003A9FF0(this, nullptr, pData);
}

int32_t CUIPetEquip::OnSetFocus(int32_t bFocus)
{
    return __sub_003A4A00(this, nullptr, bFocus);
}

void CUIPetEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003A65A0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIPetEquip::OnMouseMove(long rx, long ry)
{
    return __sub_003A4F50(this, nullptr, rx, ry);
}

void CUIPetEquip::Draw(const tagRECT* pRect)
{
    __sub_003A5FB0(this, nullptr, pRect);
}

void CUIPetEquip::OnButtonClicked(uint32_t nId)
{
    __sub_003A7E10(this, nullptr, nId);
}

long CUIPetEquip::GetPetEquipFromPoint(int32_t rx, int32_t ry)
{
    return __sub_003A39B0(this, nullptr, rx, ry);
}

void CUIPetEquip::SetPetConsumeItem(long nItemID, long x, long y)
{
    __sub_003A9330(this, nullptr, nItemID, x, y);
}

void CUIPetEquip::SetPetConsumeMPItem(long nItemID, long x, long y)
{
    __sub_003A96C0(this, nullptr, nItemID, x, y);
}

CUIPetEquip& CUIPetEquip::operator=(const CUIPetEquip& arg0)
{
    return _op_assign_15(this, arg0);
}

CUIPetEquip& CUIPetEquip::_op_assign_15(CUIPetEquip* pThis, const CUIPetEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIEquip::~CUIEquip()
{
    //UNIMPLEMENTED; // _dtor_0();
}

void CUIEquip::_dtor_0()
{
    //return __sub_003A5320(this, nullptr);
    this->~CUIEquip();
}

CUIEquip::CUIEquip(const CUIEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIEquip::_ctor_1(const CUIEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIEquip::CUIEquip(): CUIWnd(1, 5, 162, 6, 1, 0, 0)
{
    ms_pInstance = this;
    m_nBtCloseX = 162;

    CreateUIWndPosSaved(184, 304, 10);
}

void CUIEquip::_ctor_0()
{
    new(this) CUIEquip();
    //return __sub_003A8CF0(this, nullptr);
}

void CUIEquip::OnCreate(void* pData)
{
    __sub_003A8DF0(this, nullptr, pData);
}

void CUIEquip::OnDestroy()
{
    __sub_003A54C0(this, nullptr);
}

void CUIEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003A72B0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIEquip::OnMouseMove(long rx, long ry)
{
    return __sub_003A7780(this, nullptr, rx, ry);
}

void CUIEquip::OnButtonClicked(uint32_t nId)
{
    __sub_003A7E50(this, nullptr, nId);
}

void CUIEquip::Update()
{
    __sub_003A5570(this, nullptr);
}

void CUIEquip::OnMoveWnd(long l, long t)
{
    __sub_003A4300(this, nullptr, l, t);
}

void CUIEquip::Draw(const tagRECT* pRect)
{
    __sub_003AA560(this, nullptr, pRect);
}

long CUIEquip::GetBodyPartFromPoint(int32_t rx, int32_t ry)
{
    return __sub_003A3CE0(this, nullptr, rx, ry);
}

void CUIEquip::ToggleMechanicEquip()
{
    __sub_003A7AF0(this, nullptr);
}

void CUIEquip::ToggleDragonEquip()
{
    __sub_003A7C40(this, nullptr);
}

void CUIEquip::TogglePetEquip()
{
    __sub_003A43B0(this, nullptr);
}

void CUIEquip::OnTogglePetEquip()
{
    __sub_003A43B0(this, nullptr);
}

void CUIEquip::ShowItemReleaseEffect(long nPos)
{
    __sub_003A9A50(this, nullptr, nPos);
}

int32_t CUIEquip::IsMyAddon(CWnd* pWnd)
{
    return __sub_003A5460(this, nullptr, pWnd);
}

CUIEquip& CUIEquip::operator=(const CUIEquip& arg0)
{
    return _op_assign_21(this, arg0);
}

CUIEquip& CUIEquip::_op_assign_21(CUIEquip* pThis, const CUIEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIEquip::CExpandableWndInfo::CExpandableWndInfo()
{
    m_bExpanded = CWvsContext::GetInstance()->GetBuyEquipExt();
}

CUIEquip::CExpandableWndInfo::CExpandableWndInfo(int32_t arg0)
{
    m_bExpanded = arg0;
}

void CUIEquip::CExpandableWndInfo::_ctor_0(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIEquip::CExpandableWndInfo::IsExpanded()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUIEquip::CExpandableWndInfo::GetBPCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EqSlotInfo& CUIEquip::CExpandableWndInfo::GetEqSlotInfo(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EqSlotInfo& CUIEquip::CExpandableWndInfo::GetPetConsumeSlotInfo(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIEquip::CExpandableWndInfo::SetSlotDisable_1(_x_com_ptr<IWzCanvas> pCanvas, long nSlotIndex)
{
    __sub_003A9F30(this, nullptr, CreateNakedParam(pCanvas), nSlotIndex);
}

void CUIEquip::CExpandableWndInfo::SetSlotDisable_0(_x_com_ptr<IWzCanvas> pCanvas, long nX, long nY)
{
    __sub_003A9CD0(this, nullptr, CreateNakedParam(pCanvas), nX, nY);
}

CUIDragonEquip::~CUIDragonEquip()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIDragonEquip::_dtor_0()
{
    return __sub_003A4010(this, nullptr);
}

CUIDragonEquip::CUIDragonEquip(const CUIDragonEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIDragonEquip::_ctor_1(const CUIDragonEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIDragonEquip::CUIDragonEquip(long lLeft, long lTop)
{
    _ctor_0(lLeft, lTop);
}

void CUIDragonEquip::_ctor_0(long lLeft, long lTop)
{
    return __sub_003A3F30(this, nullptr, lLeft, lTop);
}

void CUIDragonEquip::OnCreate(void* pData)
{
    __sub_003A87B0(this, nullptr, pData);
}

void CUIDragonEquip::Draw(const tagRECT* pRect)
{
    __sub_003A8960(this, nullptr, pRect);
}

int32_t CUIDragonEquip::OnMouseMove(long rx, long ry)
{
    return __sub_003A4D50(this, nullptr, rx, ry);
}

void CUIDragonEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003A5B30(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIDragonEquip::OnSetFocus(int32_t bFocus)
{
    return __sub_003A3FE0(this, nullptr, bFocus);
}

long CUIDragonEquip::GetBodyPartFromPoint(int32_t rx, int32_t ry)
{
    return __sub_003A38C0(this, nullptr, rx, ry);
}

CUIDragonEquip& CUIDragonEquip::operator=(const CUIDragonEquip& arg0)
{
    return _op_assign_12(this, arg0);
}

CUIDragonEquip& CUIDragonEquip::_op_assign_12(CUIDragonEquip* pThis, const CUIDragonEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMechanicEquip::~CUIMechanicEquip()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIMechanicEquip::_dtor_0()
{
    return __sub_003A3E80(this, nullptr);
}

CUIMechanicEquip::CUIMechanicEquip(const CUIMechanicEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIMechanicEquip::_ctor_1(const CUIMechanicEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMechanicEquip::CUIMechanicEquip(long lLeft, long lTop)
{
    _ctor_0(lLeft, lTop);
}

void CUIMechanicEquip::_ctor_0(long lLeft, long lTop)
{
    return __sub_003A3DA0(this, nullptr, lLeft, lTop);
}

void CUIMechanicEquip::OnCreate(void* pData)
{
    __sub_003A8270(this, nullptr, pData);
}

void CUIMechanicEquip::Draw(const tagRECT* pRect)
{
    __sub_003A8420(this, nullptr, pRect);
}

int32_t CUIMechanicEquip::OnMouseMove(long rx, long ry)
{
    return __sub_003A4B50(this, nullptr, rx, ry);
}

void CUIMechanicEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003A56B0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIMechanicEquip::OnSetFocus(int32_t bFocus)
{
    return __sub_003A3E50(this, nullptr, bFocus);
}

long CUIMechanicEquip::GetBodyPartFromPoint(int32_t rx, int32_t ry)
{
    return __sub_003A3870(this, nullptr, rx, ry);
}

CUIMechanicEquip& CUIMechanicEquip::operator=(const CUIMechanicEquip& arg0)
{
    return _op_assign_12(this, arg0);
}

CUIMechanicEquip& CUIMechanicEquip::_op_assign_12(CUIMechanicEquip* pThis, const CUIMechanicEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
