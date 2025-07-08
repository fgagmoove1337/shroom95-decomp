// UIStatusBar.cpp
#include "UIStatusBar.hpp"

#include "MemoListDlg/MemoListDlg.hpp"
#include "UtilDlg/UtilDlg.hpp"
#include "UIUserList/UIUserList.hpp"
#include "WvsExtra.h"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZArray<ZRef<CUIStatusBar::CChatLog>> FAKE_ZArray_ZRef_CUIStatusBar_CChatLog{};
static ZRef<CUIStatusBar::CChatLog> FAKE_ZRef_CUIStatusBar_CChatLog{};
static ZRef<CMemoListDlg> FAKE_ZRef_CMemoListDlg{};
static ZRef<CUtilDlg> FAKE_ZRef_CUtilDlg{};

static ExtractCharacterNameHelper<ZXString<unsigned short>> FAKE_ExtractCharacterNameHelper_ZXString_unsignedshort{};

static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>
FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_NameDescComp{};

#include "UIStatusBar_regen.ipp"

ZArray<ZRef<CUIStatusBar::CChatLog>> CUIStatusBar::m_aChatLog;

CBitmapStrNumber::~CBitmapStrNumber()
{
}

void CBitmapStrNumber::_dtor_0()
{
    return __sub_004717B0(this, nullptr);
}

CBitmapStrNumber::CBitmapStrNumber(const CBitmapStrNumber& arg0)
{
    _ctor_1(arg0);
}

void CBitmapStrNumber::_ctor_1(const CBitmapStrNumber& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CBitmapStrNumber::CBitmapStrNumber(_x_com_ptr<IWzProperty> pProp, long nSpace, const char* sEtcChars)
{
    //_ctor_0(pProp, nSpace, sEtcChars);

    m_strEtcChars = sEtcChars;
    m_nSpace = nSpace;

    for (auto i = 0; i < 10; ++i)
    {
        wchar_t buf[32]{};
        _itow_s(i, buf, 10);

        auto num = pProp->GetItemT<IWzCanvas>(buf);
        m_apCanvasDigit[i] = _x_com_ptr<IWzCanvas>(num);
    }

    for (char c : m_strEtcChars.GetSpan())
    {
        wchar_t buf[2]{};
        buf[0] = c;
        auto num = pProp->GetItemT<IWzCanvas>(buf);
        m_apCanvasEtc.Insert(_x_com_ptr<IWzCanvas>(num));
    }
}

void CBitmapStrNumber::_ctor_0(_x_com_ptr<IWzProperty> pProp, long nSpace, const char* sEtcChars)
{
    return __sub_00476470(this, nullptr, CreateNakedParam(pProp), nSpace, sEtcChars);
}

void CBitmapStrNumber::Draw(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, const char* sNumber,
                            CBitmapStrNumber::Align align)
{
    __sub_004713C0(this, nullptr, CreateNakedParam(pCanvas), x, y, sNumber, align);
}

_x_com_ptr<IWzCanvas> CBitmapStrNumber::_GetDigit(char cDigit)
{
    char c = cDigit - '0';
    if (c < kNumber_Count && c >= 0)
    {
        return m_apCanvasDigit[c];
    }

    auto etcIx = m_strEtcChars.Find(cDigit, 0);
    if (etcIx != SIZE_MAX)
    {
        return m_apCanvasEtc[etcIx];
    }

    return _x_com_ptr<IWzCanvas>();
    //return __sub_0046D350(this, nullptr, cDigit);
}

CBitmapStrNumber& CBitmapStrNumber::operator=(const CBitmapStrNumber& arg0)
{
    //return _op_assign_5(this, arg0);
    m_apCanvasDigit = arg0.m_apCanvasDigit;
    m_apCanvasEtc = arg0.m_apCanvasEtc;
    m_nSpace = arg0.m_nSpace;
    m_align = arg0.m_align;
    m_strEtcChars = arg0.m_strEtcChars;
    return *this;
}

CBitmapStrNumber& CBitmapStrNumber::_op_assign_5(CBitmapStrNumber* pThis, const CBitmapStrNumber& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::~CUIStatusBar()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIStatusBar::_dtor_0()
{
    return __sub_00132150(this, nullptr);
}

CUIStatusBar::CUIStatusBar(const CUIStatusBar& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::_ctor_1(const CUIStatusBar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CUIStatusBar()
{
    ms_pInstance = this;
    m_nChatTarget = 8;
    m_nCurPtY = -1;

    auto gauge = get_rm()->GetObjectT<IWzProperty>(L"UI/StatusBar2.img/mainBar/gauge/number");
    _x_com_ptr<IWzProperty> pGauge(gauge);
    m_GougeNo = CBitmapStrNumber(pGauge, 0, "[]\\%.");

    m_nPastHP = -1;
    m_nPastMP = -1;
    m_tLastUpdateSkillCooltime = timeGetTime();
    m_uiItemToolTip.IgnoreWeddingInfo();
    CreateWnd(0, -578, 1024, 578, 0xC00615D0, true, nullptr, true, Origin_LB);
}


void CUIStatusBar::_ctor_0()
{
    return __sub_004767C0(this, nullptr);
}

void CUIStatusBar::OnCreate(void* pCanvas)
{
    /*m_lm.Init(this, 512, 577);
    m_nScrWidth = CCtrlScrollBar::GetScrollBarSize(1, 8);
    auto ftBlack = get_basic_font(FONT_BASIC_BLACK);*/


    __sub_0047B5F0(this, nullptr, pCanvas);
}

int32_t CUIStatusBar::OnSetFocus(int32_t bFocus)
{
    return __sub_00471FE0(this, nullptr, bFocus);
}

void CUIStatusBar::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_004803F0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIStatusBar::OnMouseMove(long rx, long ry)
{
    return __sub_0047A7B0(this, nullptr, rx, ry);
}

void CUIStatusBar::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_0047FDE0(this, nullptr, wParam, lParam);
}

void CUIStatusBar::OnMouseEnter(int32_t bEnter)
{
    __sub_0046CC80(this, nullptr, bEnter);
}

void CUIStatusBar::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004804A0(this, nullptr, nId, param1, param2);
}

void CUIStatusBar::OnButtonClicked(uint32_t nId)
{
    __sub_00480540(this, nullptr, nId);
}

int32_t CUIStatusBar::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_0046D500(this, nullptr, rx, ry, ppCtrl);
}

void CUIStatusBar::Draw(const tagRECT* pRect)
{
    __sub_00476CD0(this, nullptr, pRect);
}

void CUIStatusBar::Update()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::ClearToolTip()
{
    __sub_00471FF0(this, nullptr);
}

uint32_t CUIStatusBar::GetEmotionKey(ZXString<char>& sChat)
{
    return __sub_004706E0(this, nullptr, sChat);
}

void CUIStatusBar::StartChat(const char* sText)
{
    __sub_0047A4B0(this, nullptr, sText);
}

void CUIStatusBar::EndChat()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::FloatNotice(const char* sNotice, long nType, unsigned long dwDuration)
{
    __sub_0046D430(this, nullptr, sNotice, nType, dwDuration);
}

void CUIStatusBar::SetProblem(const char* sProblem)
{
    __sub_0046D4B0(this, nullptr, sProblem);
}

int32_t CUIStatusBar::SetItemMsg(const char* sMsg, long nType, unsigned long dwDuration)
{
    return __sub_0046CDF0(this, nullptr, sMsg, nType, dwDuration);
}

void CUIStatusBar::ChatLogAdd(const char* sChat, long lType, long nChannelID, int32_t bWhisperIcon,
                              ZRef<GW_ItemSlotBase> pItem)
{
    //TODO(game) __sub_0047AEC0(this, nullptr, sChat, lType, nChannelID, bWhisperIcon, CreateNakedParam(pItem));
}

void CUIStatusBar::NoticeMsgAdd(const char* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUIStatusBar::GetShortCutIndexByPos(long x, long y)
{
    return __sub_0046D640(this, nullptr, x, y);
}

void CUIStatusBar::ResetButtonToolTip()
{
    __sub_00132150(this, nullptr);
}

ZXString<char> CUIStatusBar::GetWhisperTarget()
{
    return __sub_000D97C0(this, nullptr);
}

void CUIStatusBar::SetWhisperTarget(ZXString<char> sWhisperTarget, int32_t bResetIfEqual)
{
    __sub_00471830(this, nullptr, CreateNakedParam(sWhisperTarget), bResetIfEqual);
}

void CUIStatusBar::SetChatTarget(long nTarget)
{
    __sub_0047FD30(this, nullptr, nTarget);
}

long CUIStatusBar::GetChatTarget()
{
    return __sub_0046DE40(this, nullptr);
}

void CUIStatusBar::SetWhisperTargetFromCandidate()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::AddWhisperCandidate(ZXString<char> sWhisperCandidate)
{
    __sub_00479A50(this, nullptr, CreateNakedParam(sWhisperCandidate));
}

int32_t CUIStatusBar::ChangeWhisperTarget()
{
    return __sub_0047EDA0(this, nullptr);
}

int32_t CUIStatusBar::ChangeGroupWhisperTarget()
{
    return __sub_0047F120(this, nullptr);
}

void CUIStatusBar::SetChatType(long nType)
{
    __sub_00479C00(this, nullptr, nType);
}

int32_t CUIStatusBar::GetChatType()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIStatusBar::QuickSlotToggle()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::ChangeChatWndSize(long rx, long ry, long nType)
{
    __sub_0047A540(this, nullptr, rx, ry, nType);
}

void __cdecl CUIStatusBar::RemoveChatLog()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIStatusBar::SetButtonBlink(long nIdx, int32_t bOn)
{
    __sub_0046DA90(this, nullptr, nIdx, bOn);
}

void CUIStatusBar::SetShortcutTooltip(long nIdx, char cKey)
{
    __sub_00474400(this, nullptr, nIdx, cKey);
}

ZArray<ZXString<char>> CUIStatusBar::GetChatLog()
{
    return __sub_004775A0(this, nullptr);
}

ZXString<unsigned short> CUIStatusBar::ConvertWhisperToNormal(ZXString<unsigned short> sChatLine)
{
    ZXString<unsigned short> ret;
    return *__sub_004771C0(this, nullptr, &ret, CreateNakedParam(sChatLine));
}

void CUIStatusBar::EnableButtons(int32_t bEnable)
{
    __sub_0046CF10(this, nullptr, bEnable);
}

void CUIStatusBar::ReDrawQuickslot()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::Eff_EvolRing()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::SetStatusValue(long lv, long nJob, ZXString<char> sCharName)
{
    __sub_00473590(this, nullptr, lv, nJob, CreateNakedParam(sCharName));
}

void CUIStatusBar::SetNumberValue(long hp, long hpMax, long mp, long mpMax, long exp, long expMax, long tempExp)
{
    hpMax = std::max(hpMax, hp + 10);
    mpMax = std::max(mpMax, mp + 10);
    expMax = std::max(expMax, exp + 10);


    __sub_00473D50(this, nullptr, hp, hpMax, mp, mpMax, exp, expMax, tempExp);
}

void CUIStatusBar::ProcessToolTip(long rx, long ry)
{
    __sub_00473140(this, nullptr, rx, ry);
}

void CUIStatusBar::ChatLogDraw()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::SendGroupMessage(const long nChatTarget, const ZXString<char>& sText)
{
    __sub_0047F7F0(this, nullptr, nChatTarget, sText);
}

void CUIStatusBar::SendCoupleMessage(const ZXString<char>& sText)
{
    __sub_0047B3E0(this, nullptr, sText);
}

void CUIStatusBar::ToggleMaxMinButton()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::ToggleQuickSlot()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::ToggleShortCutMenu()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::MakeCtrlEdit(int32_t bCreate)
{
    __sub_00470BA0(this, nullptr, bCreate);
}

void CUIStatusBar::FlashHPBar()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::FlashMPBar()
{
    __sub_00132150(this, nullptr);
}

int32_t CUIStatusBar::TryBeginWhisper(long rx, long ry)
{
    return __sub_0047F390(this, nullptr, rx, ry);
}

void CUIStatusBar::TryBeginShowItemInfo(long rx, long ry)
{
    __sub_0046FBF0(this, nullptr, rx, ry);
}

void CUIStatusBar::SendClaim()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::TryBeginChangeChatWnd(long rx, long ry)
{
    __sub_0046CE70(this, nullptr, rx, ry);
}

int32_t CUIStatusBar::IsQuickSlotEnabled()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIStatusBar::IsQuickSlotSlideUp()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIStatusBar::ChangeDragFuncKeyMappedIcon(long rx, long ry, FUNCKEY_MAPPED& fkm)
{
    __sub_00476CB0(this, nullptr, rx, ry, fkm);
}

void CUIStatusBar::TryBeginDragFuncKeyMappedIcon(long rx, long ry)
{
    __sub_00476C60(this, nullptr, rx, ry);
}

void CUIStatusBar::DrawDragFuncKeyMappedIcon(long arg0, long arg1, FUNCKEY_MAPPED& arg2)
{
    __sub_00472050(this, nullptr, arg0, arg1, arg2);
}

void CUIStatusBar::TryShowMemoListDlg(long rx, long ry)
{
    __sub_004779F0(this, nullptr, rx, ry);
}

void CUIStatusBar::TryUseTempExp(long rx, long ry)
{
    __sub_00470AA0(this, nullptr, rx, ry);
}

void CUIStatusBar::ChangeScreenResolution()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::_ResetChatBarPos()
{
    __sub_00132150(this, nullptr);
}

void CUIStatusBar::_RefreshChatLog()
{
    __sub_00132150(this, nullptr);
}

long CUIStatusBar::_GetFilteredChatLogCount()
{
    return __sub_0046DE40(this, nullptr);
}

void CUIStatusBar::_SetFilterButton()
{
    __sub_00132150(this, nullptr);
}

CUIStatusBar& CUIStatusBar::operator=(const CUIStatusBar& arg0)
{
    return _op_assign_76(this, arg0);
}

CUIStatusBar& CUIStatusBar::_op_assign_76(CUIStatusBar* pThis, const CUIStatusBar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CChatLog::~CChatLog()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIStatusBar::CChatLog::_dtor_0()
{
    return __sub_004719C0(this, nullptr);
}

CUIStatusBar::CChatLog::CChatLog(const CUIStatusBar::CChatLog& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::CChatLog::_ctor_1(const CUIStatusBar::CChatLog& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CChatLog::CChatLog(ZXString<unsigned short> sChat, long nType, long nBack, long nChannelID,
                                 int32_t bWhisperIcon, int32_t bFirstLine, ZRef<GW_ItemSlotBase> pItem)
{
    //_ctor_0(sChat, nType, nBack, nChannelID, bWhisperIcon, bFirstLine, pItem);
    m_nBack = nBack;
    m_sChat = sChat;
    m_nChannelID = nChannelID;
    this->_ZtlSecurePut_m_nType(nType);
    m_bFirstLine = bFirstLine;
    m_bWhisperIcon = bWhisperIcon;
    m_pItem = pItem;
}

void CUIStatusBar::CChatLog::_ctor_0(ZXString<unsigned short> sChat, long nType, long nBack, long nChannelID,
                                     int32_t bWhisperIcon, int32_t bFirstLine, ZRef<GW_ItemSlotBase> pItem)
{
    /*return __sub_004718C0(this, nullptr, CreateNakedParam(sChat), nType, nBack, nChannelID, bWhisperIcon, bFirstLine,
                          CreateNakedParam(pItem));*/
    new(this) CChatLog(sChat, nType, nBack, nChannelID, bWhisperIcon, bFirstLine, pItem);
}

_ZTL_SEC_GETSETI(long, CUIStatusBar::CChatLog, m_nType)

int32_t CUIStatusBar::CChatLog::IsFiltered(unsigned long dwFilterFlag)
{
    return __sub_0046CD30(this, nullptr, dwFilterFlag);
}

CUIStatusBar::CChatLog& CUIStatusBar::CChatLog::operator=(const CUIStatusBar::CChatLog& arg0)
{
    return _op_assign_6(this, arg0);
}

CUIStatusBar::CChatLog& CUIStatusBar::CChatLog::_op_assign_6(CUIStatusBar::CChatLog* pThis,
                                                             const CUIStatusBar::CChatLog& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CGauge::~CGauge()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIStatusBar::CGauge::_dtor_0()
{
    return __sub_0046D3F0(this, nullptr);
}

CUIStatusBar::CGauge::CGauge(const CUIStatusBar::CGauge& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::CGauge::_ctor_1(const CUIStatusBar::CGauge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CGauge::CGauge()
{
}

void CUIStatusBar::CGauge::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIStatusBar::CGauge::Create(_x_com_ptr<IWzGr2DLayer> pLayer, const wchar_t* sUOL, long nX, long nY, long nLength)
{
    __sub_004747A0(this, nullptr, CreateNakedParam(pLayer), sUOL, nX, nY, nLength);
}

void CUIStatusBar::CGauge::SetVal(double dVal)
{
    __sub_0046DEA0(this, nullptr, dVal);
}

CUIStatusBar::CGauge& CUIStatusBar::CGauge::operator=(const CUIStatusBar::CGauge& arg0)
{
    return _op_assign_5(this, arg0);
}

CUIStatusBar::CGauge& CUIStatusBar::CGauge::_op_assign_5(CUIStatusBar::CGauge* pThis, const CUIStatusBar::CGauge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CQuickSlot::~CQuickSlot()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIStatusBar::CQuickSlot::_dtor_0()
{
    return __sub_0046FAF0(this, nullptr);
}

CUIStatusBar::CQuickSlot::CQuickSlot(const CUIStatusBar::CQuickSlot& arg0)
{
    _ctor_1(arg0);
}

void CUIStatusBar::CQuickSlot::_ctor_1(const CUIStatusBar::CQuickSlot& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CQuickSlot::CQuickSlot()
{
    m_nConsumeItemCoolTimeState = -1;
    for (auto& cd : m_aFuncKeyMappedSkillCooltime)
    {
        cd = -1;
    }
}

void CUIStatusBar::CQuickSlot::_ctor_0()
{
    return __sub_0046FE90(this, nullptr);
}

void CUIStatusBar::CQuickSlot::Init(int32_t bShowSlide, CLayoutMan& lm)
{
    __sub_00474F10(this, nullptr, bShowSlide, lm);
}

void CUIStatusBar::CQuickSlot::ChangeScreenResolution(int32_t bLargeScreen, _x_com_ptr<IWzGr2DLayer> pParentLayer)
{
    __sub_0046F110(this, nullptr, bLargeScreen, CreateNakedParam(pParentLayer));
}

void CUIStatusBar::CQuickSlot::Draw()
{
    __sub_00475750(this, nullptr);
}

long CUIStatusBar::CQuickSlot::GetIndexByPos(long x, long y)
{
    return __sub_0046D030(this, nullptr, x, y);
}

void CUIStatusBar::CQuickSlot::GetPosByIndex(long nIdx, long& x, long& y)
{
    __sub_0046CCA0(this, nullptr, nIdx, x, y);
}

void CUIStatusBar::CQuickSlot::Toggle()
{
    __sub_0046D180(this, nullptr);
}

long CUIStatusBar::CQuickSlot::GetInitX()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIStatusBar::CQuickSlot::IsEnabled()
{
    return __sub_0046D2F0(this, nullptr);
}

int32_t CUIStatusBar::CQuickSlot::IsSlideUp()
{
    return __sub_0046D310(this, nullptr);
}

void CUIStatusBar::CQuickSlot::DrawConsumeItemCooltime()
{
    __sub_0046F5A0(this, nullptr);
}

void CUIStatusBar::CQuickSlot::DrawSkillCooltime()
{
    __sub_0046FF50(this, nullptr);
}

int32_t CUIStatusBar::CQuickSlot::CompareValidateFuncKeyMappedInfo()
{
    return __sub_00471000(this, nullptr);
}

const FUNCKEY_MAPPED& CUIStatusBar::CQuickSlot::GetFunckey(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatusBar::CQuickSlot& CUIStatusBar::CQuickSlot::operator=(const CUIStatusBar::CQuickSlot& arg0)
{
    return _op_assign_16(this, arg0);
}

CUIStatusBar::CQuickSlot& CUIStatusBar::CQuickSlot::_op_assign_16(CUIStatusBar::CQuickSlot* pThis,
                                                                  const CUIStatusBar::CQuickSlot& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<unsigned short> __cdecl ExtractCharacterName_ZXString_unsignedshort__(ZXString<unsigned short> sChat)
{
    return __sub_00477040(CreateNakedParam(sChat));
}
