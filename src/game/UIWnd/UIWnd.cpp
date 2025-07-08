// UIWnd.cpp
#include "UIWnd.hpp"
#include "UIWnd_regen.ipp"

CUIWnd::~CUIWnd()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIWnd::_dtor_0()
{
    return __sub_004DD780(this, nullptr);
}

CUIWnd::CUIWnd(const CUIWnd& arg0)
{
    _ctor_1(arg0);
}

void CUIWnd::_ctor_1(const CUIWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWnd::CUIWnd(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, const wchar_t* sBackgrndUOL,
               int32_t nBackgrndX, int32_t nBackgrndY, int32_t bMultiBg)
{
    //_ctor_0(nUIType, closeType, closeX, closeY, sBackgrndUOL, nBackgrndX, nBackgrndY, bMultiBg);
    m_nBtCloseType = closeType;
    m_nUIType = nUIType;
    m_nBtCloseX = closeX;
    m_nBtCloseY = closeY;


    SetBackgrnd(sBackgrndUOL,nBackgrndX, nBackgrndY, bMultiBg, 0, 0);
    m_bPosSave = true;
}

void CUIWnd::_ctor_0(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, const wchar_t* sBackgrndUOL,
                     int32_t nBackgrndX, int32_t nBackgrndY, int32_t bMultiBg)
{
    //return __sub_004DD980(this, nullptr, nUIType, closeType, closeX, closeY, sBackgrndUOL, nBackgrndX, nBackgrndY, bMultiBg);
    new(this) CUIWnd(nUIType, closeType, closeX, closeY, bMultiBg, nBackgrndX, nBackgrndY);
}

CUIWnd::CUIWnd(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, int32_t bBackgrnd,
               int32_t nBackgrndX, int32_t nBackgrndY)
{
    //_ctor_3(nUIType, closeType, closeX, closeY, bBackgrnd, nBackgrndX, nBackgrndY);
    m_nUIType = nUIType;
    m_nBtCloseY = closeY;
    m_nBtCloseX = closeX;
    m_nBtCloseType = closeType;
    m_bPosSave = true;
    m_nBackgrndX = nBackgrndX;
    m_bBackgrnd = bBackgrnd;
    m_nBackgrndY = nBackgrndY;
}

void CUIWnd::_ctor_3(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, int32_t bBackgrnd,
                     int32_t nBackgrndX, int32_t nBackgrndY)
{
    //return __sub_004DD680(this, nullptr, nUIType, closeType, closeX, closeY, bBackgrnd, nBackgrndX, nBackgrndY);
    new(this) CUIWnd(nUIType, closeType, closeX, closeY, bBackgrnd, nBackgrndX, nBackgrndY);
}

void CUIWnd::CreateUIWndPosSaved(long w, long h, long z)
{
    __sub_004DD300(this, nullptr, w, h, z);
}

void CUIWnd::CreateUIWndPosForced(long smallL, long smallT, long largeL, long largeT, long w, long h, long z)
{
    __sub_004DD240(this, nullptr, smallL, smallT, largeL, largeT, w, h, z);
}

void CUIWnd::OnCreate(void* pData, ZXString<unsigned short> sUOL, int32_t bMultiBg)
{
    __sub_004DDB30(this, nullptr, pData, CreateNakedParam(sUOL), bMultiBg);
}

void CUIWnd::OnCreate(void* pData)
{
    __sub_004DDA90(this, nullptr, pData);
}

void CUIWnd::OnDestroy()
{
    __sub_004DD380(this, nullptr);
}

void CUIWnd::OnMouseEnter(int32_t bEnter)
{
    __sub_004DD2A0(this, nullptr, bEnter);
}

int32_t CUIWnd::OnSetFocus(int32_t bFocus)
{
    return __sub_003734B0(this, nullptr, bFocus);
}

void CUIWnd::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_004DD550(this, nullptr, wParam, lParam);
}

void CUIWnd::OnButtonClicked(uint32_t nId)
{
    __sub_004DD520(this, nullptr, nId);
}

int32_t CUIWnd::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_004DD2C0(this, nullptr, rx, ry, ppCtrl);
}

void CUIWnd::ClearToolTip()
{
    __sub_000ABE20(this, nullptr);
}

void CUIWnd::ReloadBackgrnd(int32_t bMultiBg)
{
    __sub_004DDAE0(this, nullptr, bMultiBg);
}

void CUIWnd::SetScreenMode(bool bIsLarge, bool bNeedInvalidateTabs)
{
    __sub_004DD570(this, nullptr, bIsLarge, bNeedInvalidateTabs);
}

ZXString<unsigned short> CUIWnd::GetResName()
{
    return __sub_004DD860(this, nullptr);
}

CUIWnd& CUIWnd::operator=(const CUIWnd& arg0)
{
    return _op_assign_21(this, arg0);
}

CUIWnd& CUIWnd::_op_assign_21(CUIWnd* pThis, const CUIWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
