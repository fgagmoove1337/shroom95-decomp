// Dialog.cpp
#include "Dialog.hpp"

#include "spdlog/spdlog.h"

static ZRef<CCtrlWnd> FAKE_CCtrlWnd{};

#include "Dialog_regen.ipp"

CDialog::~CDialog() {
	 //UNIMPLEMENTED; // _dtor_0();
}

void CDialog::_dtor_0() {
    return __sub_0002B910(this, nullptr);
}

CDialog::CDialog(const CDialog &arg0) {
    _ctor_1(arg0);
}

void CDialog::_ctor_1(const CDialog &arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDialog::CDialog() {
    //UNIMPLEMENTED; //_ctor_0();
}

void CDialog::_ctor_0() {
    new(this) CDialog();
    //return __sub_000FE900(this, nullptr);
}

void CDialog::CreateDlg(const wchar_t *sUOL, int32_t bScreenCoord, void *pData, int32_t bMulti) {
    SetBackgrnd(Ztl_bstr_t(sUOL), 0, 0, bMulti, 0, 0);
    auto w = m_pBackgrnd->Getwidth();
    auto h = m_pBackgrnd->Getheight();

    CreateDlg(w, h, bScreenCoord, pData);
    //__sub_000FEC40(this, nullptr, sUOL, bScreenCoord, pData, bMulti);
}

void CDialog::CreateDlg(long w, long h, int32_t bScreenCoord, void *pData) {
    CreateDlg(
            -(w / 2),
            -(h / 2),
            w,
            h,
            10,
            bScreenCoord,
            pData,
            Origin_CC);
    //__sub_000FE710(this, nullptr, w, h, bScreenCoord, pData);
}

void
CDialog::CreateDlg(long l, long t, long w, long h, long z, int32_t bScreenCoord, void *pData, CWnd::UIOrigin origin) {
    CWnd::CreateWnd(l, t, w, h, z, bScreenCoord, pData, true, origin);
    //__sub_000FE6D0(this, nullptr, l, t, w, h, z, bScreenCoord, pData, origin);
}

void CDialog::CreateDlg2(const wchar_t *sUOL, long l, long t) {
    SetBackgrnd(Ztl_bstr_t(sUOL), 0, 0, true, 0, 0);
    auto w = m_pBackgrnd->Getwidth();
    auto h = m_pBackgrnd->Getheight();
    CreateDlg(l, t, w, h, 10, true, nullptr, Origin_LT);
    //__sub_000FED10(this, nullptr, sUOL, l, t);
}

void CDialog::CreateDlgOnCenter(const wchar_t *sUOL) {
    __sub_000FEDD0(this, nullptr, sUOL);
}

long CDialog::DoModal() {
    MODAL_OWNER mo(this);
    auto app = CWvsApp::GetInstance();
    app->Run(&m_bTerminate);
    return m_nRet;
    //return __sub_000FE7A0(this, nullptr);
}

void CDialog::SetRet(long nRet) {
    if(!m_bTerminate)
    {
        m_nRet = nRet;
        m_bTerminate = true;
        if(m_dwWndKey) {
            Destroy();
        }
    }
    //__sub_00029290(this, nullptr, nRet);
}

void CDialog::OnDestroy() {
    if(m_pChildModal) {
        m_pChildModal->SetRet(3);
        m_pChildModal = 0;
    }
    //__sub_0002B910(this, nullptr);
}

void CDialog::OnKey(uint32_t wParam, uint32_t lParam) {
    __sub_000FEAD0(this, nullptr, wParam, lParam);
}

int32_t CDialog::HitTest(long rx, long ry, CCtrlWnd **ppCtrl) {
    auto tst = CWnd::HitTest(rx, ry, ppCtrl);
    if(tst && m_bScreenCoord && (ppCtrl == nullptr  || *ppCtrl == nullptr)) {
        return 1;
    }
    return tst;
    //return __sub_00029A30(this, nullptr, rx, ry, ppCtrl);
}

void CDialog::OnButtonClicked(uint32_t nId) {
    if(nId == 1 || nId == 2 || nId == 8) {
        SetRet(nId);
    }
    //__sub_000292C0(this, nullptr, nId);
}

void CDialog::ProcessTab(int32_t bBackTab) {
    __sub_000FE9E0(this, nullptr, bBackTab);
}

CDialog &CDialog::operator=(const CDialog &arg0) {
    return _op_assign_18(this, arg0);
}

CDialog &CDialog::_op_assign_18(CDialog *pThis, const CDialog &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}


CUniqueModeless::~CUniqueModeless() {
    ms_pInstance = nullptr;
    //_dtor_0();
}

void CUniqueModeless::_dtor_0() {
    this->~CUniqueModeless();
    //return __sub_000299B0(this, nullptr);
}

CUniqueModeless::CUniqueModeless(const CUniqueModeless &arg0) {
    _ctor_1(arg0);
}

void CUniqueModeless::_ctor_1(const CUniqueModeless &arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUniqueModeless::CUniqueModeless() {
    ms_pInstance = this;

    if(CUIShopScanner::ms_pInstance) {
        delete CUIShopScanner::ms_pInstance;
        CUIShopScanner::ms_pInstance = nullptr;

    }
}

void CUniqueModeless::_ctor_0() {
    return __sub_000FEB70(this, nullptr);
}

void CUniqueModeless::ResetInfo() {
    //__sub_00029A70(this, nullptr);
}

void CUniqueModeless::SetRet(long nRet) {
    if (!m_bTerminate)
    {
        m_nRet = nRet;
        m_bTerminate = true;

        if (!m_dwWndKey)
            Destroy();
    }
    Destroy();
    this->~CUniqueModeless();
    //__sub_00029310(this, nullptr, nRet);
}

long CUniqueModeless::DoModal() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUniqueModeless &CUniqueModeless::operator=(const CUniqueModeless &arg0) {
    return _op_assign_9(this, arg0);
}

CUniqueModeless &CUniqueModeless::_op_assign_9(CUniqueModeless *pThis, const CUniqueModeless &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDialog::MODAL_OWNER::MODAL_OWNER(CDialog *dialog) {
    IUIMsgHandler *pHandler = dialog;
    auto wndMan = CWndMan::GetInstance();
    wndMan->SetCaptureWnd(pHandler);
    wndMan->SetFocus(pHandler);
    m_pDlg = dialog;

}

CDialog::MODAL_OWNER::~MODAL_OWNER() {
    if (m_pDlg) {
        spdlog::info("Destroying dialog from modal owner");
        m_pDlg->Destroy();
    }
}
