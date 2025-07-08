// UtilDlgEx.cpp
#include "UtilDlgEx.hpp"

#include "SoftKeyboardDlg/SoftKeyboardDlg.hpp"

static ZList<CUtilDlgEx*> FAKE_ZList_CUtilDlgEx{};
static ZArray<ZRef<GW_ItemSlotPet>> FAKE_ZArray_ZRef_GW_ItemSlotPet{};
static ZRef<CSoftKeyboardDlg> FAKE_ZRef_CSoftKeyboardDlg{};

#include "UtilDlgEx_regen.ipp"

ZList<CUtilDlgEx*> CUtilDlgEx::ms_lDialog{};

CTextAnalyzer::~CTextAnalyzer()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTextAnalyzer::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTextAnalyzer::CTextAnalyzer(const CTextAnalyzer& arg0)
{
    _ctor_1(arg0);
}

void CTextAnalyzer::_ctor_1(const CTextAnalyzer& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTextAnalyzer::CTextAnalyzer(long margin, long width)
{
    //_ctor_0(arg0, arg1);
    m_nWidth = width;
    m_nMargin = margin;
}

void CTextAnalyzer::_ctor_0(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CTextAnalyzer::AnalyzeText(ZXString<char> arg0, ZArray<CT_INFO>& arg1, ZArray<_x_com_ptr<IWzFont>>& arg2,
                                int32_t arg3, uint16_t arg4, int32_t arg5)
{
    return __sub_00587CC0(this, nullptr, CreateNakedParam(arg0), arg1, arg2, arg3, arg4, arg5);
}

long CTextAnalyzer::GetParameterNo(ZXString<char> sPhrase)
{
    return __sub_0057D620(this, nullptr, CreateNakedParam(sPhrase));
}

void CTextAnalyzer::GetPhrase(ZXString<char>& sText, ZXString<char>& sPhrase)
{
    __sub_00585850(this, nullptr, sText, sPhrase);
}

void CTextAnalyzer::GetCharacter(ZXString<char>& sText, ZXString<char>& sChar, int32_t bRemove)
{
    __sub_00583590(this, nullptr, sText, sChar, bRemove);
}

void CTextAnalyzer::GetPhrase_Sharp(ZXString<char>& sText, ZXString<char>& sPhrase)
{
    __sub_005836B0(this, nullptr, sText, sPhrase);
}

void CTextAnalyzer::GetPhrase_Gen(ZXString<char>& sText, ZXString<char>& sPhrase)
{
    __sub_005838B0(this, nullptr, sText, sPhrase);
}

void CTextAnalyzer::SeparateLineText(long nIdx, ZXString<char> sCur, ZXString<char> sNext, ZArray<CT_INFO>& aCT)
{
    __sub_0057E990(this, nullptr, nIdx, CreateNakedParam(sCur), CreateNakedParam(sNext), aCT);
}

void CTextAnalyzer::SeparateLineIcon(long nIdx, ZArray<CT_INFO>& aCT)
{
    __sub_0057B560(this, nullptr, nIdx, aCT);
}

void CTextAnalyzer::GetLine(long nLine, long& nStart, long& nEnd, long& nHeightMax, ZArray<CT_INFO>& aCT)
{
    __sub_0057B5A0(this, nullptr, nLine, nStart, nEnd, nHeightMax, aCT);
}

void CTextAnalyzer::AdjustHeight(long nStart, long nEnd, long nTop, long nHeightMax, ZArray<CT_INFO>& aCT)
{
    __sub_0057B310(this, nullptr, nStart, nEnd, nTop, nHeightMax, aCT);
}

int32_t CTextAnalyzer::IsDilimiter(ZXString<char> target)
{
    return __sub_0057D1F0(this, nullptr, CreateNakedParam(target));
}

int32_t CTextAnalyzer::IsSuffix(ZXString<char> target)
{
    return __sub_0057D320(this, nullptr, CreateNakedParam(target));
}

long CTextAnalyzer::GetPhraseType(ZXString<char> sPhrase)
{
    return __sub_0057D650(this, nullptr, CreateNakedParam(sPhrase));
}

_x_com_ptr<IWzCanvas> CTextAnalyzer::GetOutlineCanvas(_x_com_ptr<IWzCanvas> pIcon)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_0057ECD0(this, nullptr, &ret, CreateNakedParam(pIcon));
}

long CTextAnalyzer::CheckSecretItemID(long nParam)
{
    return __sub_0057B370(this, nullptr, nParam);
}

CTextAnalyzer& CTextAnalyzer::operator=(const CTextAnalyzer& arg0)
{
    return _op_assign_18(this, arg0);
}

CTextAnalyzer& CTextAnalyzer::_op_assign_18(CTextAnalyzer* pThis, const CTextAnalyzer& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUtilDlgEx::~CUtilDlgEx()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUtilDlgEx::_dtor_0()
{
    return __sub_00586880(this, nullptr);
}

CUtilDlgEx::CUtilDlgEx(const CUtilDlgEx& arg0)
{
    _ctor_1(arg0);
}

void CUtilDlgEx::_ctor_1(const CUtilDlgEx& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUtilDlgEx::CUtilDlgEx()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUtilDlgEx::_ctor_0()
{
    return __sub_005859C0(this, nullptr);
}

void CUtilDlgEx::OnCreate(void* pData)
{
    __sub_0058EDD0(this, nullptr, pData);
}

void CUtilDlgEx::OnDestroy()
{
    __sub_0057AF40(this, nullptr);
}

void CUtilDlgEx::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_00582F30(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUtilDlgEx::OnMouseMove(long rx, long ry)
{
    return __sub_00583060(this, nullptr, rx, ry);
}

void CUtilDlgEx::OnMouseEnter(int32_t bEnter)
{
    __sub_0057AF90(this, nullptr, bEnter);
}

void CUtilDlgEx::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_0057B9C0(this, nullptr, wParam, lParam);
}

void CUtilDlgEx::OnButtonClicked(uint32_t nId)
{
    __sub_00585350(this, nullptr, nId);
}

void CUtilDlgEx::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_0057AFB0(this, nullptr, nId, param1, param2);
}

void CUtilDlgEx::SetRet(long nRet)
{
    __sub_00582830(this, nullptr, nRet);
}

void CUtilDlgEx::Draw(const tagRECT* arg0)
{
    __sub_00586C20(this, nullptr, arg0);
}

int32_t CUtilDlgEx::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_0057B020(this, nullptr, rx, ry, ppCtrl);
}

void CUtilDlgEx::ClearToolTip()
{
    __sub_00586860(this, nullptr);
}

void CUtilDlgEx::CreateUtilDlgEx()
{
    __sub_0057AF20(this, nullptr);
}

void CUtilDlgEx::SetUtilDlgEx(long dlgType, long nTemplateID, ZXString<char> sText, int32_t bNoNpc, int32_t bQuest)
{
    //TODO(game)
    //__sub_0058E9F0(this, nullptr, dlgType, nTemplateID, CreateNakedParam(sText), bNoNpc, bQuest);
    m_dlgType = dlgType;
    m_nSelect = -1;
    m_nSelectPrev = -1;
    m_nListFocus = -1;
    m_nBtnFocus = -1;
    m_nTemplateID = nTemplateID;
    m_ctHeight = 0;
    m_scrHeight = 0;
    m_nScrollPos = 0;
    m_bScrollBar = false;
    m_nAvatarIndex = 0;
    m_nPetIndex = 0;
    m_usCurImage = 0;
    m_bNoNPC = bNoNpc;
    m_bQuest = bQuest;

    m_apListCT.RemoveAll();

    auto margin = GetBasicCTMargin();
    auto width = GetBasicCTWidth();
    auto textAnalyzer = new CTextAnalyzer(margin, width);
    m_ctHeight = textAnalyzer->AnalyzeText(sText, m_aCT, m_apFont, bNoNpc, false, false);
    if (m_dlgType == 4)
    {
        if ((m_bParam & 2) != 0 && m_apListCT.GetCount() == 1)
        {
            m_ctHeight = textAnalyzer->AnalyzeText(sText, m_aCT, m_apFont, bNoNpc, false, true);
            SetUtilDlgEx_LIST(true);
        }
        SetUtilDlgEx_LIST(false);
        m_ctHeight += 5;
        Layout_GEN(false);
    }

    if (m_dlgType == 7)
    {
        Layout_INPUT();
    }

    ms_lDialog.AddTail(this);
}


void CUtilDlgEx::SetUtilDlgEx(long dlgType, long nTemplateID, int32_t bNoNpc, int32_t bQuest)
{
    //__sub_0057BE40(this, nullptr, dlgType, nTemplateID, bNoNpc, bQuest);
    this->m_dlgType = dlgType;
    this->m_nTemplateID = nTemplateID;
    this->m_scrHeight = 0;
    this->m_nScrollPos = 0;
    this->m_bScrollBar = 0;
    this->m_nSelect = -1;
    this->m_nSelectPrev = -1;
    this->m_nListFocus = -1;
    this->m_nBtnFocus = -1;
    this->m_nAvatarIndex = 0;
    this->m_nPetIndex = 0;
    this->m_usCurImage = 0;
    this->m_ctHeight = 27;
    this->m_bNoNPC = bNoNpc;
    this->m_bQuest = bQuest;
    m_apListCT.RemoveAll();
}

void CUtilDlgEx::SetUtilDlgEx_Param(unsigned char arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUtilDlgEx::SetUtilDlgEx_TEXT(int32_t bPrev, int32_t bNext)
{
    __sub_0057B420(this, nullptr, bPrev, bNext);
}

void CUtilDlgEx::SetUtilDlgEx_IMAGE(int32_t bPrev, int32_t bNext)
{
    __sub_0057B450(this, nullptr, bPrev, bNext);
}

void CUtilDlgEx::SetUtilDlgEx_YESNO()
{
    __sub_0057B480(this, nullptr);
}

void CUtilDlgEx::SetUtilDlgEx_INPUT_NO(long nIntDefault, long nIntMin, long nIntMax, long nStrMin, long nStrMax,
                                       int32_t bPasswd)
{
    __sub_00583080(this, nullptr, nIntDefault, nIntMin, nIntMax, nStrMin, nStrMax, bPasswd);
}

void CUtilDlgEx::SetUtilDlgEx_INPUT_STR(const char* sStrDefault, long nStrMin, long nStrMax, int32_t bPasswd,
                                        int32_t bKoreanBaseLen)
{
    __sub_0057DA50(this, nullptr, sStrDefault, nStrMin, nStrMax, bPasswd, bKoreanBaseLen);
}

void CUtilDlgEx::SetUtilDlgEx_INPUT_MLSTR(const char* sStrDefault, long nCol, long nLine)
{
    __sub_0057DAA0(this, nullptr, sStrDefault, nCol, nLine);
}

void CUtilDlgEx::SetUtilDlgEx_COMBOBOX(ZList<ZXString<char>>& lItems)
{
    __sub_00583150(this, nullptr, lItems);
}

void CUtilDlgEx::SetUtilDlgEx_LIST(int32_t bReset)
{
    __sub_0057E830(this, nullptr, bReset);
}

void CUtilDlgEx::SetUtilDlgEx_AVATAR(ZArray<long>& aCandidate, ZRef<CharacterData> pCharacterData)
{
    __sub_0057DAE0(this, nullptr, aCandidate, CreateNakedParam(pCharacterData));
}

void CUtilDlgEx::SetUtilDlgEx_Pet(ZArray<ZRef<GW_ItemSlotPet>>& apDeadPet)
{
    __sub_00587B60(this, nullptr, apDeadPet);
}

long CUtilDlgEx::GetInputNo_Result()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CUtilDlgEx::GetInputStr_Result()
{
    return __sub_0011E680(this, nullptr);
}

long CUtilDlgEx::GetList_Result()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUtilDlgEx::GetAvatar_Result()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUtilDlgEx::GetPet_Result()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CUtilDlgEx::GetComboBoxStr()
{
    return __sub_0011E680(this, nullptr);
}

void CUtilDlgEx::ApplyComboBoxItemList(ZList<ZXString<char>>& lsItem)
{
    __sub_0058EFC0(this, nullptr, lsItem);
}

void CUtilDlgEx::AddImageList(ZXString<char> sPath)
{
    __sub_002DC0A0(this, nullptr, CreateNakedParam(sPath));
}

void __cdecl CUtilDlgEx::ForcedRet()
{
    //__sub_0057B990();
    auto head = ms_lDialog.GetHeadPosition();
    while (head)
    {
        const auto dlg = ms_lDialog.GetNext(head);
        (*dlg)->SetRet(2);
    }
}

void CUtilDlgEx::OnCreate_TEXT()
{
    __sub_0057DDC0(this, nullptr);
}

void CUtilDlgEx::OnCreate_YESNO()
{
    __sub_0057E1A0(this, nullptr);
}

void CUtilDlgEx::OnCreate_INPUT()
{
    __sub_005839A0(this, nullptr);
}

void CUtilDlgEx::OnCreate_INPUT1()
{
    __sub_005813C0(this, nullptr);
}

void CUtilDlgEx::OnCreate_MLINPUT()
{
    __sub_00583D70(this, nullptr);
}

void CUtilDlgEx::OnCreate_COMBOBOX_EDITABLE()
{
    __sub_00584380(this, nullptr);
}

void CUtilDlgEx::OnCreate_LIST()
{
    __sub_005816F0(this, nullptr);
}

void CUtilDlgEx::OnCreate_AVATAR()
{
    __sub_005846C0(this, nullptr);
}

void CUtilDlgEx::OnCreate_PET()
{
    __sub_00581AC0(this, nullptr);
}

void CUtilDlgEx::OnCreate_IMAGE()
{
    __sub_00584F70(this, nullptr);
}

void CUtilDlgEx::Layout_GEN(int32_t bAvatar)
{
    __sub_0057B060(this, nullptr, bAvatar);
}

void CUtilDlgEx::Layout_INPUT()
{
    __sub_0057B1A0(this, nullptr);
}

void CUtilDlgEx::Layout_MLINPUT()
{
    __sub_0057B230(this, nullptr);
}

void CUtilDlgEx::CheckMousePoint(long rx, long ry)
{
    __sub_0057E5D0(this, nullptr, rx, ry);
}

long CUtilDlgEx::GetWndWidth()
{
    return __sub_0057AD40(this, nullptr);
}

long CUtilDlgEx::GetWndHeight()
{
    return __sub_0057ADA0(this, nullptr);
}

long CUtilDlgEx::GetBasicCTWidth()
{
    return __sub_0057ADD0(this, nullptr);
}

long CUtilDlgEx::GetCTHeight_Max()
{
    return __sub_0057AE40(this, nullptr);
}

long CUtilDlgEx::GetCTHeight_Min()
{
    return __sub_0057AE90(this, nullptr);
}

long CUtilDlgEx::GetBasicCTMargin()
{
    return __sub_0057AEE0(this, nullptr);
}

void CUtilDlgEx::ValidateScroll(CT_INFO* pCti)
{
    __sub_0057B670(this, nullptr, pCti);
}

void CUtilDlgEx::SetAvatar(ZRef<AvatarLook> pAvatarLook)
{
    __sub_0057C290(this, nullptr, CreateNakedParam(pAvatarLook));
}

void CUtilDlgEx::MakeAvatar(ZRef<AvatarLook> pAvatarLook)
{
    __sub_00581E10(this, nullptr, CreateNakedParam(pAvatarLook));
}

void CUtilDlgEx::MakePet()
{
    __sub_0057C330(this, nullptr);
}

void CUtilDlgEx::MakeImage()
{
    __sub_00582280(this, nullptr);
}

void CUtilDlgEx::UpdateImage()
{
    __sub_005852E0(this, nullptr);
}

void CUtilDlgEx::SetNPC()
{
    __sub_0058C9B0(this, nullptr);
}

void CUtilDlgEx::Update()
{
    __sub_0057B3C0(this, nullptr);
}

void CUtilDlgEx::SetKeyFocus(long nIdx)
{
    __sub_0057B7C0(this, nullptr, nIdx);
}

void CUtilDlgEx::SetBackground()
{
    __sub_0057F180(this, nullptr);
}

void CUtilDlgEx::MakeBorder()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUtilDlgEx::MakeInnerBorder(long arg0, long arg1, long arg2, long arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const wchar_t* CUtilDlgEx::MakeUOLByUIType(ZXString<unsigned short>& sOut, const wchar_t* sUOL, const wchar_t* sUOL2)
{
    return __sub_0057DD70(this, nullptr, sOut, sUOL, sUOL2);
}

CUtilDlgEx& CUtilDlgEx::operator=(const CUtilDlgEx& arg0)
{
    return _op_assign_71(this, arg0);
}

CUtilDlgEx& CUtilDlgEx::_op_assign_71(CUtilDlgEx* pThis, const CUtilDlgEx& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUtilDlgEx::PET_INFO::~PET_INFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUtilDlgEx::PET_INFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUtilDlgEx::PET_INFO::PET_INFO(const CUtilDlgEx::PET_INFO& arg0)
{
    _ctor_1(arg0);
}

void CUtilDlgEx::PET_INFO::_ctor_1(const CUtilDlgEx::PET_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUtilDlgEx::PET_INFO::PET_INFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUtilDlgEx::PET_INFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUtilDlgEx::PET_INFO& CUtilDlgEx::PET_INFO::operator=(const CUtilDlgEx::PET_INFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CUtilDlgEx::PET_INFO& CUtilDlgEx::PET_INFO::_op_assign_3(CUtilDlgEx::PET_INFO* pThis, const CUtilDlgEx::PET_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> __cdecl ask_SPW()
{
    return __sub_00583210();
}

int32_t __cdecl ask_guildname(ZXString<char>& sGuildName)
{
    return __sub_0058EC10(sGuildName);
}
