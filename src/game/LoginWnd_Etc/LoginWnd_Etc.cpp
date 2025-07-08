// LoginWnd_Etc.cpp
#include "LoginWnd_Etc.hpp"

#include "UISoftKeyboard/UISoftKeyboard.hpp"

static ZRef<CUISoftKeyboard> FAKE_ZRefSoftKeyboard_{};
static ZRef<CLoginUtilDlg> FAKE_ZRefLoginUtilDlg_{};

#include "LoginWnd_Etc_regen.ipp"

CLoginUtilDlg_MODAL_OWNER::~CLoginUtilDlg_MODAL_OWNER()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CLoginUtilDlg_MODAL_OWNER::_dtor_0()
{
    return __sub_001EE5F0(this, nullptr);
}

CLoginUtilDlg_MODAL_OWNER::CLoginUtilDlg_MODAL_OWNER(CLoginUtilDlg* arg0)
{
    _ctor_1(arg0);
}

void CLoginUtilDlg_MODAL_OWNER::_ctor_1(CLoginUtilDlg* arg0)
{
    return __sub_001EE700(this, nullptr, arg0);
}

CUILoginDesc::~CUILoginDesc()
{
}

void CUILoginDesc::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUILoginDesc::CUILoginDesc(const CUILoginDesc& arg0)
{
    _ctor_1(arg0);
}

void CUILoginDesc::_ctor_1(const CUILoginDesc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUILoginDesc::CUILoginDesc(CLogin* pLogin, long nStep)
{
    m_pLogin = pLogin;
    m_nStep = nStep;

    const auto b = nStep != CLogin::LS_VIEWALLCHAR;
    const POINT pt0{
        b ? 40 : -149,
        b ? -42 : 33
    };
    POINT pt{
        b ? 40 : 0,
        b ? 0 : 33
    };

    SetOption(
        0xff, 0xff, 0,
        pt0, pt, pt,
        100, 0, 300);

    auto sFmt = StringPool::GetInstance().GetStringW(0x548);
    ZXString<unsigned short> sText;
    sText.Format(sFmt.c_str(), 3); //TODO proper step

    CreateFadeWnd(
        b ? 127 : 150,
        b ? 42 : 57,
        reinterpret_cast<const wchar_t*>(sText.c_str()),
        210 - nStep,
        false, nullptr, false,
        Origin_LT
    );

    //_ctor_0( pLogin, nStep);
}

void CUILoginDesc::_ctor_0(CLogin* pLogin, long nStep)
{
    new(this) CUILoginDesc(pLogin, nStep);
    // return __sub_001F0040(this, nullptr, pLogin, nStep);
}

void CUILoginDesc::OnCreate(void* pData)
{
    __sub_001F0280(this, nullptr, pData);
}

void CUILoginDesc::Draw(const tagRECT* pRect)
{
    //__sub_001EE530(this, nullptr, pRect);
    CWnd::Draw(pRect);
}

void CUILoginDesc::Update()
{
    //__sub_001EE540(this, nullptr);
    CFadeWnd::Update();
}

void CUILoginDesc::Delete()
{
    //__sub_001EE550(this, nullptr);
    m_pLogin->CloseLoginDescWnd(this);
}

int32_t CUILoginDesc::OnSetFocus(int32_t bFocus)
{
    //return __sub_001F01B0(this, nullptr, bFocus);
    return 0;
}

int32_t CUILoginDesc::OnActivate(int32_t bActive)
{
    //return __sub_001F01C0(this, nullptr, bActive);
    return 0;
}

int32_t CUILoginDesc::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    //return __sub_001F01D0(this, nullptr, rx, ry, ppCtrl);
    return 0;
}

long CUILoginDesc::GetStep()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUILoginDesc::IsWorldDesc()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUILoginDesc& CUILoginDesc::operator=(const CUILoginDesc& arg0)
{
    return _op_assign_12(this, arg0);
}

CUILoginDesc& CUILoginDesc::_op_assign_12(CUILoginDesc* pThis, const CUILoginDesc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUILoginStart::~CUILoginStart()
{
}

void CUILoginStart::_dtor_0()
{
    return __sub_001EF480(this, nullptr);
}

CUILoginStart::CUILoginStart(const CUILoginStart& arg0)
{
    _ctor_1(arg0);
}

void CUILoginStart::_ctor_1(const CUILoginStart& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUILoginStart::CUILoginStart(CLogin* pLogin)
{
    //_ctor_0( pLogin);
    m_pLogin = pLogin;
    m_nViewWorldButtonType = 4;
    CreateDlg(0, 0, 800, 400, 210, 1, nullptr, Origin_LT);
}

void CUILoginStart::_ctor_0(CLogin* pLogin)
{
    new(this) CUILoginStart(pLogin);
    // return __sub_001EF130(this, nullptr, pLogin);
}

void CUILoginStart::OnCreate(void* pData)
{
    auto& sp = StringPool::GetInstance();
    m_aBtParam[0].sUOL = sp.GetStringW(0x549);
    m_aBtParam[1].sUOL = sp.GetStringW(0x54B);
    m_aBtParam[2].sUOL = sp.GetStringW(0x150a);
    m_aBtParam[3].sUOL = sp.GetStringW(0x150b);
    m_aBtParam[4].sUOL = sp.GetStringW(0xfba);

    Z_CHECK_HR(m_pLayer->RelMove(
        0,
        0,
        vtMissing,
        vtMissing));


    m_pFont = G_PCOM.CreateWzFont();
    auto fontName = sp.GetBSTR(0x1a25);
    Z_CHECK_HR(m_pFont->Create(fontName, 0xb, -1, vtMissing));
    m_pCanvasChannelName = 0;
    //__sub_001F03C0(this, nullptr, pData);
}

void CUILoginStart::OnButtonClicked(uint32_t nId)
{
    if (m_bRequestSent || m_pLogin->IsStepChanging())
    {
        return;
    }

    const auto step = m_pLogin->GetLoginStep();
    switch (nId)
    {
    case ID_CTRL_BT_START:
        m_pLogin->ViewRecommendWorld(false);
        if (step == CLogin::LS_CHARSELECT)
        {
            m_pLogin->GotoWorldSelect(false);
        }
        else if (step == CLogin::LS_VIEWALLCHAR)
        {
            if (const auto w = CUICharDetailVAC::GetInstance())
            {
                w->Destroy();
                CUICharDetailVAC::DestroyInstance();
            }

            if (const auto w = CUIAvatarVAC::GetInstance())
            {
                w->Destroy();
                CUIAvatarVAC::DestroyInstance();
            }

            m_pLogin->GotoWorldSelect(true);
        }
        else
        {
            m_pLogin->GotoTitle(true, nullptr);
        }
        break;

    case ID_CTRL_BT_EXIT:
        m_pLogin->ViewRecommendWorld(false);
        PostQuitMessage(0);
        break;
    case ID_CTRL_BT_VIEWWORLDSELECT:
        m_pLogin->ViewRecommendWorld(0);
        break;
    case ID_CTRL_BT_VIEWRECOMMENDWORLD:
        m_pLogin->ViewRecommendWorld(1);
        break;
    case ID_CTRL_BT_VIEWALLCHAR:
        if (SendViewAllCharacterPacket())
        {
            EnableLoginStartCtrl(true);
        }
        break;
    default:
        break;
    }


    if (const auto wndMan = CWndMan::GetInstance())
    {
        if (step - 1 <= 1)
        {
            wndMan->SetFocus(m_pLogin->GetFocusedUI());
        }
    }


    //__sub_001EE800(this, nullptr, nId);
}

int32_t CUILoginStart::OnActivate(int32_t bActive)
{
    return 0;
    // return __sub_001EF220(this, nullptr, bActive);
}

int32_t CUILoginStart::OnSetFocus(int32_t bFocus)
{
    return 0;
    // return __sub_001EF230(this, nullptr, bFocus);
}

void CUILoginStart::OnKey(uint32_t wParam, uint32_t lParam)
{
    //__sub_001EE560(this, nullptr, wParam, lParam);
}

int32_t CUILoginStart::HitTest(const long rx, const long ry, CCtrlWnd** ppCtrl)
{
    const auto res = CWnd::HitTest(rx, ry, ppCtrl);
    if (res && (ppCtrl != nullptr && *ppCtrl == nullptr))
    {
        return 0;
    }
    return res;
    // return __sub_001EE570(this, nullptr, rx, ry, ppCtrl);
}

void CUILoginStart::Draw(const tagRECT* pRect)
{
    __sub_001F19A0(this, nullptr, pRect);
}

void CUILoginStart::SetButton(long nOpt)
{
    __sub_001F0790(this, nullptr, nOpt);
}

void CUILoginStart::SetViewWorldButton(long nType)
{
    __sub_001EF250(this, nullptr, nType);
}

int32_t CUILoginStart::SendViewAllCharacterPacket()
{
    if (!m_pLogin || m_pLogin->GetLoginStep() != CLogin::LS_WORLDSELECT || m_bRequestSent)
    {
        return 0;
    }

    m_bRequestSent = true;
    if (m_pLogin->SendViewAllCharPacket())
    {
        m_bRequestSent = false;
        return 0;
    }

    return 1;
    //return __sub_001EE5A0(this, nullptr);
}

void CUILoginStart::EnableLoginStartCtrl(long nEnable)
{
    if (m_apButton[0])
    {
        m_apButton[0]->SetEnable(nEnable & ENABLE_START);
    }
    if (m_apButton[1])
    {
        m_apButton[1]->SetEnable(nEnable & ENABLE_EXIT);
    }
    if (m_apButton[4])
    {
        m_apButton[4]->SetEnable(nEnable & ENABLE_VIEWALLCHAR);
    }
    //__sub_001EE6A0(this, nullptr, nEnable);
}

CUILoginStart& CUILoginStart::operator=(const CUILoginStart& arg0)
{
    return _op_assign_14(this, arg0);
}

CUILoginStart& CUILoginStart::_op_assign_14(CUILoginStart* pThis, const CUILoginStart& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLoginUtilDlg::~CLoginUtilDlg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CLoginUtilDlg::_dtor_0()
{
    return __sub_001EF010(this, nullptr);
}

CLoginUtilDlg::CLoginUtilDlg(const CLoginUtilDlg& arg0)
{
    _ctor_1(arg0);
}

void CLoginUtilDlg::_ctor_1(const CLoginUtilDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLoginUtilDlg::CLoginUtilDlg()
{
}

void CLoginUtilDlg::_ctor_0()
{
    //return __sub_001EEFB0(this, nullptr);
    new(this) CLoginUtilDlg();
}

int32_t __cdecl CLoginUtilDlg::YesNo(long nMsg, ZRef<CDialog>* ppDialog)
{
    return __sub_001EF570(nMsg, ppDialog);
}

int32_t __cdecl CLoginUtilDlg::YesNo2(long nMsg)
{
    return __sub_001EF6F0(nMsg);
}

int32_t __cdecl CLoginUtilDlg::YesNo3(long nMsg)
{
    return __sub_001EF6F0(nMsg);
}

int32_t __cdecl CLoginUtilDlg::YesNo4(long nMsg, ZRef<CDialog>* ppDialog)
{
    return __sub_001EF570(nMsg, ppDialog);
}

void __cdecl CLoginUtilDlg::Notice(long nMsg, ZRef<CDialog>* ppDialog)
{
    const auto dlg = new CLoginUtilDlg;
    *ppDialog = dlg;

    dlg->Init(4, nMsg);
    auto str = StringPool::GetInstance().GetStringW(0x55a);
    dlg->CreateFadeWnd(249, 142, (const wchar_t*)str.c_str(), 10, true, nullptr, false, Origin_LT);
    dlg->DoModal();
    *ppDialog = 0;
    //__sub_001EF820(nMsg, ppDialog);
}

void __cdecl CLoginUtilDlg::Error(long nMsg, ZRef<CDialog>* ppDialog)
{
    __sub_001EF980(nMsg, ppDialog);
}

long __cdecl CLoginUtilDlg::AskBirthDate(ZRef<CDialog>* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl CLoginUtilDlg::ScrollNotice(ZXString<unsigned short> arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CLoginUtilDlg::Init_(long arg0, ZXString<unsigned short> arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CLoginUtilDlg::Init(long nType, long nMsg)
{
    __sub_001EE600(this, nullptr, nType, nMsg);
}

void CLoginUtilDlg::SetRet(long nRet)
{
    __sub_001EE940(this, nullptr, nRet);
}

long CLoginUtilDlg::DoModal()
{
    return CDialog::DoModal();
    // return __sub_001EEDF0(this, nullptr);
}

void CLoginUtilDlg::OnCreate(void* pData)
{
    __sub_001F0CE0(this, nullptr, pData);
}

void CLoginUtilDlg::OnButtonClicked(uint32_t nId)
{
    __sub_001EFD80(this, nullptr, nId);
}

void CLoginUtilDlg::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_001EFE50(this, nullptr, wParam, lParam);
}

void CLoginUtilDlg::Draw(const tagRECT* pRect)
{
    __sub_001EEE70(this, nullptr, pRect);
}

void CLoginUtilDlg::Delete()
{
    __sub_001EE650(this, nullptr);
}

void CLoginUtilDlg::OnPreFadeIn()
{
    __sub_001EFAE0(this, nullptr);
}

int32_t CLoginUtilDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_001EE670(this, nullptr, rx, ry, ppCtrl);
}

CLoginUtilDlg& CLoginUtilDlg::operator=(const CLoginUtilDlg& arg0)
{
    return _op_assign_22(this, arg0);
}

CLoginUtilDlg& CLoginUtilDlg::_op_assign_22(CLoginUtilDlg* pThis, const CLoginUtilDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
