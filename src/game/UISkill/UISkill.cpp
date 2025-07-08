// UISkill.cpp
#include "UISkill.hpp"
static ZSortHelperDefault<CUISkill::RecommSkillPair> __ZSortHelper_CUISkill__RecommSkillPair;
static IntroSortLoopHelperDefault<CUISkill::RecommSkillPair, int> __IntroSortLoopHelper_CUISkill__RecommSkillPair;
static InsertionSortHelperDefault<CUISkill::RecommSkillPair> __InsertionSortHelper_CUISkill__RecommSkillPair;

#include "UISkill_regen.ipp"

CUISkill::~CUISkill()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUISkill::_dtor_0()
{
    return __sub_0044E480(this, nullptr);
}

CUISkill::CUISkill(const CUISkill& arg0)
{
    _ctor_1(arg0);
}

void CUISkill::_ctor_1(const CUISkill& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkill::CUISkill(int32_t bTip, long nTabOption): CUIWnd(3, 5, 153, 6, 1, 0, 0)
{
    //_ctor_0(bTip, nTabOption);
    ms_pInstance = this;

    m_pFont = get_basic_font(FONT_SMALL_GRAY);
    m_pFontBonus = get_basic_font(FONT_SMALL_GRAY);
    m_pFontBookName = get_basic_font(FONT_SMALL_WHITE);
    m_pFontNo = get_basic_font(FONT_NO_BLACK);
    m_nTabOption = nTabOption;
    m_bTip = bTip;
    CreateUIWndPosSaved(174, 281, 10);
}

void CUISkill::_ctor_0(int32_t bTip, long nTabOption)
{
    //return __sub_00450690(this, nullptr, bTip, nTabOption);
    new(this) CUISkill(bTip, nTabOption);
}

void CUISkill::OnCreate(void* pData)
{
    __sub_00451520(this, nullptr, pData);
}

void CUISkill::OnDestroy()
{
    __sub_0044A660(this, nullptr);
}

void CUISkill::OnMoveWnd(long l, long t)
{
    __sub_0044A350(this, nullptr, l, t);
}

int32_t CUISkill::OnMouseMove(long rx, long ry)
{
    return __sub_0044B660(this, nullptr, rx, ry);
}

void CUISkill::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_0044B710(this, nullptr, msg, wParam, rx, ry);
}

void CUISkill::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_00452160(this, nullptr, nId, param1, param2);
}

void CUISkill::OnButtonClicked(uint32_t nId)
{
    __sub_00451480(this, nullptr, nId);
}

void CUISkill::Draw(const tagRECT* arg0)
{
    __sub_0044ED90(this, nullptr, arg0);
}

int32_t CUISkill::IsMyAddon(CWnd* pWnd)
{
    return __sub_0044E6C0(this, nullptr, pWnd);
}

void CUISkill::ResetInfo()
{
    __sub_004514F0(this, nullptr);
}

void CUISkill::ToggleTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkill::ShiftMacroUIState()
{
    __sub_0044A040(this, nullptr);
}

long CUISkill::GetMacroUIState()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUISkill::GetRecommendSKill(const SKILLROOT* arg0)
{
    return __sub_0044E710(this, nullptr, arg0);
}

void CUISkill::OnTabChanged(long nTab)
{
    __sub_0044BFA0(this, nullptr, nTab);
}

void CUISkill::OnSkillLevelUpButton(long nIdx)
{
    __sub_0044D660(this, nullptr, nIdx);
}

void CUISkill::SetSkillRootList()
{
    __sub_0044BFE0(this, nullptr);
}

void CUISkill::SetTabItems()
{
    __sub_00450990(this, nullptr);
}

void CUISkill::SetScrollBar()
{
    __sub_0044B1C0(this, nullptr);
}

void CUISkill::SetButtons()
{
    __sub_0044B220(this, nullptr);
}

void CUISkill::SetButton(long nIdx, int32_t bShow, int32_t bEnable)
{
    __sub_0044A0A0(this, nullptr, nIdx, bShow, bEnable);
}

long CUISkill::GetSkillIndexFromPoint(long rx, long ry, int32_t bIcon)
{
    return __sub_0044B390(this, nullptr, rx, ry, bIcon);
}

const SKILLROOT* CUISkill::GetSkillRootVisible(int32_t bReload)
{
    return __sub_0044A6F0(this, nullptr, bReload);
}

void CUISkill::CreateTip()
{
    __sub_0044FDD0(this, nullptr);
}

long CUISkill::GetMySkillDegreeSP(long nSkillDegree)
{
    return __sub_0044A790(this, nullptr, nSkillDegree);
}

long CUISkill::GetMaxSkillDegreeSP(long nSkillDegree)
{
    return __sub_0044A870(this, nullptr, nSkillDegree);
}

int32_t CUISkill::CanSkillUp(const SKILLENTRY* pSkillEntry)
{
    return __sub_0044A930(this, nullptr, pSkillEntry);
}

long CUISkill::GetMySkillDegreeSPDualJob(long nDualJobSkillDegree)
{
    return __sub_0044AAC0(this, nullptr, nDualJobSkillDegree);
}

void CUISkill::GetMaxSkillDegreeSPDualJob(long nDualJobSkillDegree, long& nMaxSP, long& nJobSP, long& nSpecialSP)
{
    __sub_0044AC10(this, nullptr, nDualJobSkillDegree, nMaxSP, nJobSP, nSpecialSP);
}

int32_t CUISkill::CanSkillUpDualJob(const SKILLENTRY* pSkillEntry)
{
    return __sub_0044AE10(this, nullptr, pSkillEntry);
}

void CUISkill::OpenSkillGuide(long nGrade)
{
    __sub_004513D0(this, nullptr, nGrade);
}

void CUISkill::OpenCurSkillGuide()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkill::CloseSkillGuide()
{
    __sub_0044A5B0(this, nullptr);
}

CUISkill& CUISkill::operator=(const CUISkill& arg0)
{
    return _op_assign_39(this, arg0);
}

CUISkill& CUISkill::_op_assign_39(CUISkill* pThis, const CUISkill& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkill::RecommSkillPair::RecommSkillPair(long arg0, long arg1)
{
    _ctor_0(arg0, arg1);
}

void CUISkill::RecommSkillPair::_ctor_0(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkill::RecommSkillPair::RecommSkillPair()
{
    UNIMPLEMENTED; //_ctor_1();
}

void CUISkill::RecommSkillPair::_ctor_1()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool CUISkill::RecommSkillPair::operator<(const CUISkill::RecommSkillPair& arg0) const
{
    return _op_lt_2((CUISkill::RecommSkillPair*)this, arg0);
}

bool CUISkill::RecommSkillPair::_op_lt_2(CUISkill::RecommSkillPair* pThis, const CUISkill::RecommSkillPair& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndSkillGuide::~CWndSkillGuide()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWndSkillGuide::_dtor_0()
{
    return __sub_00450630(this, nullptr);
}

CWndSkillGuide::CWndSkillGuide(const CWndSkillGuide& arg0)
{
    _ctor_1(arg0);
}

void CWndSkillGuide::_ctor_1(const CWndSkillGuide& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndSkillGuide::CWndSkillGuide(long nGrade)
{
    _ctor_0(nGrade);
}

void CWndSkillGuide::_ctor_0(long nGrade)
{
    return __sub_00450310(this, nullptr, nGrade);
}

void CWndSkillGuide::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_0044A5E0(this, nullptr, msg, wParam, rx, ry);
}

void CWndSkillGuide::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_0044A630(this, nullptr, wParam, lParam);
}

void CWndSkillGuide::OnMoveWnd()
{
    __sub_00450630(this, nullptr);
}

CWndSkillGuide& CWndSkillGuide::operator=(const CWndSkillGuide& arg0)
{
    return _op_assign_6(this, arg0);
}

CWndSkillGuide& CWndSkillGuide::_op_assign_6(CWndSkillGuide* pThis, const CWndSkillGuide& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMacroSys::~CUIMacroSys()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIMacroSys::_dtor_0()
{
    return __sub_0044C310(this, nullptr);
}

CUIMacroSys::CUIMacroSys(const CUIMacroSys& arg0)
{
    _ctor_1(arg0);
}

void CUIMacroSys::_ctor_1(const CUIMacroSys& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMacroSys::CUIMacroSys(long nLeft, long nTop)
{
    m_bShow = true;
    m_bEnable = true;

    CreateWnd(nLeft, nTop, 195, 281, 10, 1, 0, 1, Origin_LT);
}

void CUIMacroSys::_ctor_0(long nLeft, long nTop)
{
    //return __sub_0044C0D0(this, nullptr, nLeft, nTop);
    new (this) CUIMacroSys(nLeft, nTop);
}

void CUIMacroSys::OnCreate(void* pData)
{
    __sub_0044DF20(this, nullptr, pData);
}

void CUIMacroSys::OnDestroy()
{
    __sub_0044C1D0(this, nullptr);
}

int32_t CUIMacroSys::OnSetFocus(int32_t bFocus)
{
    return __sub_0044C1E0(this, nullptr, bFocus);
}

void CUIMacroSys::OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3)
{
    __sub_0044CCE0(this, nullptr, arg0, arg1, arg2, arg3);
}

int32_t CUIMacroSys::OnMouseMove(long rx, long ry)
{
    return __sub_0044B470(this, nullptr, rx, ry);
}

void CUIMacroSys::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_0044A310(this, nullptr, nId, param1, param2);
}

void CUIMacroSys::OnKey(uint32_t wParam, uint32_t lParam)
{
    __sub_0044A010(this, nullptr, wParam, lParam);
}

void CUIMacroSys::OnButtonClicked(uint32_t nId)
{
    __sub_0044D530(this, nullptr, nId);
}

int32_t CUIMacroSys::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_00449D60(this, nullptr, rx, ry, ppCtrl);
}

void CUIMacroSys::SetEnable(int32_t bEnable)
{
    __sub_0044C1F0(this, nullptr, bEnable);
}

int32_t CUIMacroSys::IsEnabled()
{
    return __sub_0044C200(this, nullptr);
}

void CUIMacroSys::SetShow(int32_t bShow)
{
    __sub_0044C270(this, nullptr, bShow);
}

int32_t CUIMacroSys::IsShown()
{
    return __sub_0044C210(this, nullptr);
}

void CUIMacroSys::Draw(const tagRECT* pRect)
{
    __sub_0044C430(this, nullptr, pRect);
}

int32_t CUIMacroSys::GetIndexByPos(long rx, long ry, int32_t bIncludeCombinationSkill, long& nMacroIdx, long& nSkillIdx)
{
    return __sub_00449F70(this, nullptr, rx, ry, bIncludeCombinationSkill, nMacroIdx, nSkillIdx);
}

void CUIMacroSys::ResetInfo()
{
    __sub_00449F00(this, nullptr);
}

void CUIMacroSys::OnSelected(long nMacroIdx)
{
    __sub_0044B0F0(this, nullptr, nMacroIdx);
}

CUIMacroSys& CUIMacroSys::operator=(const CUIMacroSys& arg0)
{
    return _op_assign_23(this, arg0);
}

CUIMacroSys& CUIMacroSys::_op_assign_23(CUIMacroSys* pThis, const CUIMacroSys& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl DownHeap_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nIdx, int32_t nLen,
                                                 int32_t nFrom)
{
    return __sub_00449E50(a, nIdx, nLen, nFrom);
}

void __cdecl ZSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, __POSITION* posFrom,
                                              __POSITION* posTo)
{
    return __sub_0044A550(a, posFrom, posTo);
}

long __cdecl get_job_change_level(long nJob, short nSubJob, int32_t nStep)
{
    return __sub_00449C00(nJob, nSubJob, nStep);
}

int32_t __cdecl Partition_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nFrom, int32_t nTo,
                                                     const CUISkill::RecommSkillPair& pivot)
{
    return __sub_0044A270(a, nFrom, nTo, pivot);
}

void __cdecl ZSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a)
{
    return __sub_0044B0C0(a);
}

void __cdecl InsertionSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nFrom, int32_t nTo)
{
    return __sub_00449DE0(a, nFrom, nTo);
}
