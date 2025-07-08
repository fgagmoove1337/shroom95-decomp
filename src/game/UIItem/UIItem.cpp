// UIItem.cpp
#include "UIItem.hpp"
#include "UIItem_regen.ipp"

int32_t CUIItem::ms_anItemScrollPos[6]{};

CUIItem::~CUIItem()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIItem::_dtor_0()
{
    return __sub_003CBC80(this, nullptr);
}

CUIItem::CUIItem(const CUIItem& arg0)
{
    _ctor_1(arg0);
}

void CUIItem::_ctor_1(const CUIItem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIItem::CUIItem() : CUIWnd(0, 5, 150, 6, 1, 0, 0)
{
    ms_pInstance = this;

    auto cfg = CConfig::GetInstance();
    auto exp = cfg->GetInventoryExpanded();

    m_bExtended = exp;
    m_pBtClose = exp ? 574 : 150;
    CreateUIWndPosSaved(exp ? 594 : 172, 293, 10);
    SetItemTI(m_nOption + 1);
}

void CUIItem::_ctor_0()
{
    //return __sub_003CCE00(this, nullptr);
    new(this) CUIItem();
}

void CUIItem::OnCreate(void* arg0)
{
    __sub_003CE520(this, nullptr, arg0);
}

void CUIItem::OnDestroy()
{
    __sub_003CBE40(this, nullptr);
}

void CUIItem::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_003CF250(this, nullptr, nId, param1, param2);
}

void CUIItem::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003CC590(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIItem::OnMouseMove(long rx, long ry)
{
    return __sub_003CCA90(this, nullptr, rx, ry);
}

void CUIItem::OnButtonClicked(uint32_t nId)
{
    __sub_003CC4F0(this, nullptr, nId);
}

void CUIItem::Draw(const tagRECT* pRect)
{
    __sub_003CCF50(this, nullptr, pRect);
}

void CUIItem::Update()
{
    __sub_003CF1E0(this, nullptr);
}

void CUIItem::ResetInfo()
{
    __sub_003CBB20(this, nullptr);
}

void CUIItem::ChangeTab(long nTab)
{
    __sub_003CBC50(this, nullptr, nTab);
}

long CUIItem::GetSlotPositionFromPoint(long rx, long ry)
{
    return __sub_003CC220(this, nullptr, rx, ry);
}

long CUIItem::GetItemTypeIndex()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIItem::ToggleTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIItem::SetArrangeButton(long nTI, long nState)
{
    __sub_003CCC90(this, nullptr, nTI, nState);
}

void CUIItem::ClearLastestGetItemInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIItem::SetTryToReleaseItem(int32_t bTryToReleaseItem, long nReleaseUItemPos)
{
    __sub_003CBC10(this, nullptr, bTryToReleaseItem, nReleaseUItemPos);
}

int32_t CUIItem::IsTryToReleaseItem()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIItem::ItemRelease(long nSlotPosition, GW_ItemSlotBase* pItem)
{
    return __sub_003CC300(this, nullptr, nSlotPosition, pItem);
}

void CUIItem::ShowItemReleaseEffect(long nPos)
{
    __sub_003CE2B0(this, nullptr, nPos);
}

void CUIItem::OnTabChanged(long nTab)
{
    __sub_003CF040(this, nullptr, nTab);
}

void CUIItem::OnDropMoney()
{
    __sub_003CBFD0(this, nullptr);
}

void CUIItem::OnGather()
{
    __sub_003CBB40(this, nullptr);
}

void CUIItem::OnSort()
{
    __sub_003CBB70(this, nullptr);
}

int32_t CUIItem::GetItemSlotRect(long nSlotPosition, tagRECT* pRc)
{
    return __sub_003CBE90(this, nullptr, nSlotPosition, pRc);
}

void CUIItem::Toggle()
{
    __sub_003CBBA0(this, nullptr);
}

void CUIItem::SetItemTI(long nTab)
{
    __sub_003CBAC0(this, nullptr, nTab);
}

long CUIItem::ItemTI_2_TabIndex(long nItemTI)
{
    return __sub_003CBAF0(this, nullptr, nItemTI);
}

ZXString<unsigned short> CUIItem::_GetBackgroundUOL()
{
    //return __sub_003CCD90(this, nullptr);
    auto v2 = L"UI/UIWindow2.img/Item/FullBackgrnd";
    if ( !this->m_bExtended )
        v2 = L"UI/UIWindow2.img/Item/backgrnd";
    return ZXString<unsigned short>((const unsigned short*)v2);
}

void CUIItem::SetLastestGetItemEffect()
{
    __sub_003CD8D0(this, nullptr);
}

CUIItem& CUIItem::operator=(const CUIItem& arg0)
{
    return _op_assign_35(this, arg0);
}

CUIItem& CUIItem::_op_assign_35(CUIItem* pThis, const CUIItem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
