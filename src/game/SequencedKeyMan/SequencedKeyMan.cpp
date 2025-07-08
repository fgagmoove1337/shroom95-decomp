// SequencedKeyMan.cpp
#include "SequencedKeyMan.hpp"
#include "SequencedKeyMan_regen.ipp"

KeySequence::~KeySequence()
{
    UNIMPLEMENTED; // _dtor_0();
}

void KeySequence::_dtor_0()
{
    return __sub_002DFD00(this, nullptr);
}

KeySequence::KeySequence(const KeySequence& arg0)
{
    _ctor_1(arg0);
}

void KeySequence::_ctor_1(const KeySequence& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequence::KeySequence()
{
}

void KeySequence::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequence& KeySequence::operator=(const KeySequence& arg0)
{
    return _op_assign_3(this, arg0);
}

KeySequence& KeySequence::_op_assign_3(KeySequence* pThis, const KeySequence& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSequencedKeyMan::~CSequencedKeyMan()
{
}

void CSequencedKeyMan::_dtor_0()
{
    return __sub_002DF6F0(this, nullptr);
}

CSequencedKeyMan::CSequencedKeyMan(const CSequencedKeyMan& arg0)
{
    _ctor_1(arg0);
}

void CSequencedKeyMan::_ctor_1(const CSequencedKeyMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSequencedKeyMan::CSequencedKeyMan()
{
    ms_pInstance = this;
    m_nLastScancode = -1;
}

void CSequencedKeyMan::_ctor_0()
{
    return __sub_002DF680(this, nullptr);
}

void CSequencedKeyMan::Clear()
{
    __sub_002DEF40(this, nullptr);
}

void CSequencedKeyMan::Restore()
{
    //TODO(game) __sub_002E11F0(this, nullptr);
}

int32_t CSequencedKeyMan::Process(long nScancode, int32_t bDown)
{
    //TODO(game) return __sub_002E3400(this, nullptr, nScancode, bDown);
    return 1;
}

void CSequencedKeyMan::ReserveAction(ZRef<KeySequenceElement> pAction, int32_t bForcedReserve)
{
    __sub_002DFD60(this, nullptr, CreateNakedParam(pAction), bForcedReserve);
}

long CSequencedKeyMan::GetReservedCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CSequencedKeyMan::Update()
{
    //TODO(game) __sub_002DF980(this, nullptr);
}

CSequencedKeyMan& CSequencedKeyMan::operator=(const CSequencedKeyMan& arg0)
{
    return _op_assign_9(this, arg0);
}

CSequencedKeyMan& CSequencedKeyMan::_op_assign_9(CSequencedKeyMan* pThis, const CSequencedKeyMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElement::~KeySequenceElement()
{
    UNIMPLEMENTED; // _dtor_0();
}

void KeySequenceElement::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElement::KeySequenceElement(const KeySequenceElement& arg0)
{
    _ctor_1(arg0);
}

void KeySequenceElement::_ctor_1(const KeySequenceElement& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElement::KeySequenceElement(long scancode, long expire, int32_t down)
{
    _ctor_0(scancode, expire, down);
}

void KeySequenceElement::_ctor_0(long scancode, long expire, int32_t down)
{
    return __sub_002DE400(this, nullptr, scancode, expire, down);
}

int32_t KeySequenceElement::Check(long scancode, int32_t down)
{
    return __sub_002DE470(this, nullptr, scancode, down);
}

int32_t KeySequenceElement::DoAction(int32_t bNoReserve)
{
    return __sub_002DE490(this, nullptr, bNoReserve);
}

int32_t KeySequenceElement::NeedIgnore(long scancode, int32_t down)
{
    return __sub_002DE4A0(this, nullptr, scancode, down);
}

long KeySequenceElement::GetSkillID(int32_t bDummy)
{
    return __sub_002DE4D0(this, nullptr, bDummy);
}

int32_t KeySequenceElement::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE4E0(this, nullptr, nPreSkillID);
}

unsigned long KeySequenceElement::GetCreatedTime()
{
    return __sub_002DE4F0(this, nullptr);
}

unsigned long KeySequenceElement::GetValidDuration()
{
    return __sub_002DE4F0(this, nullptr);
}

KeySequenceElement& KeySequenceElement::operator=(const KeySequenceElement& arg0)
{
    return _op_assign_10(this, arg0);
}

KeySequenceElement& KeySequenceElement::_op_assign_10(KeySequenceElement* pThis, const KeySequenceElement& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCombatStepTrigger::~CCombatStepTrigger()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCombatStepTrigger::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCombatStepTrigger::CCombatStepTrigger(const CCombatStepTrigger& arg0)
{
    _ctor_1(arg0);
}

void CCombatStepTrigger::_ctor_1(const CCombatStepTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCombatStepTrigger::CCombatStepTrigger(long arg0)
{
    _ctor_0(arg0);
}

void CCombatStepTrigger::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CCombatStepTrigger::DoAction(int32_t bNoReserve)
{
    return __sub_002E0C80(this, nullptr, bNoReserve);
}

CCombatStepTrigger& CCombatStepTrigger::operator=(const CCombatStepTrigger& arg0)
{
    return _op_assign_4(this, arg0);
}

CCombatStepTrigger& CCombatStepTrigger::_op_assign_4(CCombatStepTrigger* pThis, const CCombatStepTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalBlow::~CFinalBlow()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CFinalBlow::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalBlow::CFinalBlow(const CFinalBlow& arg0)
{
    _ctor_1(arg0);
}

void CFinalBlow::_ctor_1(const CFinalBlow& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalBlow::CFinalBlow(long scancode)
{
    _ctor_0(scancode);
}

void CFinalBlow::_ctor_0(long scancode)
{
    return __sub_002DE680(this, nullptr, scancode);
}

int32_t CFinalBlow::DoAction(int32_t bNoReserve)
{
    return __sub_002E0420(this, nullptr, bNoReserve);
}

int32_t CFinalBlow::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE6B0(this, nullptr, nPreSkillID);
}

unsigned long CFinalBlow::GetValidDuration()
{
    return __sub_002DE6A0(this, nullptr);
}

CFinalBlow& CFinalBlow::operator=(const CFinalBlow& arg0)
{
    return _op_assign_6(this, arg0);
}

CFinalBlow& CFinalBlow::_op_assign_6(CFinalBlow* pThis, const CFinalBlow& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalToss::~CFinalToss()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CFinalToss::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalToss::CFinalToss(const CFinalToss& arg0)
{
    _ctor_1(arg0);
}

void CFinalToss::_ctor_1(const CFinalToss& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalToss::CFinalToss(long scancode)
{
    _ctor_0(scancode);
}

void CFinalToss::_ctor_0(long scancode)
{
    return __sub_002DE6E0(this, nullptr, scancode);
}

int32_t CFinalToss::DoAction(int32_t bNoReserve)
{
    return __sub_002E05F0(this, nullptr, bNoReserve);
}

int32_t CFinalToss::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE710(this, nullptr, nPreSkillID);
}

unsigned long CFinalToss::GetValidDuration()
{
    return __sub_002DE720(this, nullptr);
}

CFinalToss& CFinalToss::operator=(const CFinalToss& arg0)
{
    return _op_assign_6(this, arg0);
}

CFinalToss& CFinalToss::_op_assign_6(CFinalToss* pThis, const CFinalToss& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElementIgnoreUp::~KeySequenceElementIgnoreUp()
{
    UNIMPLEMENTED; // _dtor_0();
}

void KeySequenceElementIgnoreUp::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElementIgnoreUp::KeySequenceElementIgnoreUp(const KeySequenceElementIgnoreUp& arg0)
{
    _ctor_1(arg0);
}

void KeySequenceElementIgnoreUp::_ctor_1(const KeySequenceElementIgnoreUp& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

KeySequenceElementIgnoreUp::KeySequenceElementIgnoreUp(long arg0, long arg1, int32_t arg2)
{
    _ctor_0(arg0, arg1, arg2);
}

void KeySequenceElementIgnoreUp::_ctor_0(long arg0, long arg1, int32_t arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t KeySequenceElementIgnoreUp::NeedIgnore(long scancode, int32_t down)
{
    return __sub_002DE500(this, nullptr, scancode, down);
}

KeySequenceElementIgnoreUp& KeySequenceElementIgnoreUp::operator=(const KeySequenceElementIgnoreUp& arg0)
{
    return _op_assign_4(this, arg0);
}

KeySequenceElementIgnoreUp& KeySequenceElementIgnoreUp::_op_assign_4(KeySequenceElementIgnoreUp* pThis,
                                                                     const KeySequenceElementIgnoreUp& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinishAttack::~CFinishAttack()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CFinishAttack::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinishAttack::CFinishAttack(const CFinishAttack& arg0)
{
    _ctor_1(arg0);
}

void CFinishAttack::_ctor_1(const CFinishAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinishAttack::CFinishAttack(long scancode, long nAction)
{
    _ctor_0(scancode, nAction);
}

void CFinishAttack::_ctor_0(long scancode, long nAction)
{
    return __sub_002DE730(this, nullptr, scancode, nAction);
}

int32_t CFinishAttack::DoAction(int32_t bNoReserve)
{
    return __sub_002E0F80(this, nullptr, bNoReserve);
}

long CFinishAttack::GetSkillID(int32_t bDummy)
{
    return __sub_002DE760(this, nullptr, bDummy);
}

long CFinishAttack::GetDummySkillID()
{
    return __sub_002DE770(this, nullptr);
}

int32_t CFinishAttack::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE7B0(this, nullptr, nPreSkillID);
}

unsigned long CFinishAttack::GetValidDuration()
{
    return __sub_002DE7C0(this, nullptr);
}

CFinishAttack& CFinishAttack::operator=(const CFinishAttack& arg0)
{
    return _op_assign_8(this, arg0);
}

CFinishAttack& CFinishAttack::_op_assign_8(CFinishAttack* pThis, const CFinishAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalCharge::~CFinalCharge()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CFinalCharge::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalCharge::CFinalCharge(const CFinalCharge& arg0)
{
    _ctor_1(arg0);
}

void CFinalCharge::_ctor_1(const CFinalCharge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFinalCharge::CFinalCharge(long scancode, int32_t bLeft)
{
    _ctor_0(scancode, bLeft);
}

void CFinalCharge::_ctor_0(long scancode, int32_t bLeft)
{
    return __sub_002DE610(this, nullptr, scancode, bLeft);
}

int32_t CFinalCharge::DoAction(int32_t bNoReserve)
{
    return __sub_002E0200(this, nullptr, bNoReserve);
}

int32_t CFinalCharge::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE640(this, nullptr, nPreSkillID);
}

unsigned long CFinalCharge::GetValidDuration()
{
    return __sub_002DE650(this, nullptr);
}

CFinalCharge& CFinalCharge::operator=(const CFinalCharge& arg0)
{
    return _op_assign_6(this, arg0);
}

CFinalCharge& CFinalCharge::_op_assign_6(CFinalCharge* pThis, const CFinalCharge& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTripleAttack::~CTripleAttack()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTripleAttack::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTripleAttack::CTripleAttack(const CTripleAttack& arg0)
{
    _ctor_1(arg0);
}

void CTripleAttack::_ctor_1(const CTripleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTripleAttack::CTripleAttack(long scancode)
{
    _ctor_0(scancode);
}

void CTripleAttack::_ctor_0(long scancode)
{
    return __sub_002DE590(this, nullptr, scancode);
}

int32_t CTripleAttack::DoAction(int32_t bNoReserve)
{
    return __sub_002E0050(this, nullptr, bNoReserve);
}

long CTripleAttack::GetSkillID(int32_t bDummy)
{
    return __sub_002DE5B0(this, nullptr, bDummy);
}

int32_t CTripleAttack::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE5E0(this, nullptr, nPreSkillID);
}

CTripleAttack& CTripleAttack::operator=(const CTripleAttack& arg0)
{
    return _op_assign_6(this, arg0);
}

CTripleAttack& CTripleAttack::_op_assign_6(CTripleAttack* pThis, const CTripleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDoubleAttack::~CDoubleAttack()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CDoubleAttack::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDoubleAttack::CDoubleAttack(const CDoubleAttack& arg0)
{
    _ctor_1(arg0);
}

void CDoubleAttack::_ctor_1(const CDoubleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDoubleAttack::CDoubleAttack(long scancode)
{
    _ctor_0(scancode);
}

void CDoubleAttack::_ctor_0(long scancode)
{
    return __sub_002DE530(this, nullptr, scancode);
}

int32_t CDoubleAttack::DoAction(int32_t bNoReserve)
{
    return __sub_002DFEF0(this, nullptr, bNoReserve);
}

long CDoubleAttack::GetSkillID(int32_t bDummy)
{
    return __sub_002DE560(this, nullptr, bDummy);
}

int32_t CDoubleAttack::CheckPreOrderSkill(long nPreSkillID)
{
    return __sub_002DE550(this, nullptr, nPreSkillID);
}

CDoubleAttack& CDoubleAttack::operator=(const CDoubleAttack& arg0)
{
    return _op_assign_6(this, arg0);
}

CDoubleAttack& CDoubleAttack::_op_assign_6(CDoubleAttack* pThis, const CDoubleAttack& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDashTrigger::~CDashTrigger()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CDashTrigger::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDashTrigger::CDashTrigger(const CDashTrigger& arg0)
{
    _ctor_1(arg0);
}

void CDashTrigger::_ctor_1(const CDashTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDashTrigger::CDashTrigger(long arg0)
{
    _ctor_0(arg0);
}

void CDashTrigger::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CDashTrigger::DoAction(int32_t bNoReserve)
{
    return __sub_002DF5F0(this, nullptr, bNoReserve);
}

CDashTrigger& CDashTrigger::operator=(const CDashTrigger& arg0)
{
    return _op_assign_4(this, arg0);
}

CDashTrigger& CDashTrigger::_op_assign_4(CDashTrigger* pThis, const CDashTrigger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboSmash::~CComboSmash()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CComboSmash::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboSmash::CComboSmash(const CComboSmash& arg0)
{
    _ctor_1(arg0);
}

void CComboSmash::_ctor_1(const CComboSmash& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboSmash::CComboSmash(long arg0, int32_t arg1)
{
    _ctor_0(arg0, arg1);
}

void CComboSmash::_ctor_0(long arg0, int32_t arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CComboSmash::DoAction(int32_t bNoReserve)
{
    return __sub_002E08D0(this, nullptr, bNoReserve);
}

CComboSmash& CComboSmash::operator=(const CComboSmash& arg0)
{
    return _op_assign_4(this, arg0);
}

CComboSmash& CComboSmash::_op_assign_4(CComboSmash* pThis, const CComboSmash& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboDrain::~CComboDrain()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CComboDrain::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboDrain::CComboDrain(const CComboDrain& arg0)
{
    _ctor_1(arg0);
}

void CComboDrain::_ctor_1(const CComboDrain& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CComboDrain::CComboDrain(long arg0)
{
    _ctor_0(arg0);
}

void CComboDrain::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CComboDrain::DoAction(int32_t bNoReserve)
{
    return __sub_002E0B00(this, nullptr, bNoReserve);
}

CComboDrain& CComboDrain::operator=(const CComboDrain& arg0)
{
    return _op_assign_4(this, arg0);
}

CComboDrain& CComboDrain::_op_assign_4(CComboDrain* pThis, const CComboDrain& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWhirlWind::~CWhirlWind()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWhirlWind::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWhirlWind::CWhirlWind(const CWhirlWind& arg0)
{
    _ctor_1(arg0);
}

void CWhirlWind::_ctor_1(const CWhirlWind& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWhirlWind::CWhirlWind(long arg0)
{
    _ctor_0(arg0);
}

void CWhirlWind::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWhirlWind::DoAction(int32_t bNoReserve)
{
    return __sub_002E0780(this, nullptr, bNoReserve);
}

CWhirlWind& CWhirlWind::operator=(const CWhirlWind& arg0)
{
    return _op_assign_4(this, arg0);
}

CWhirlWind& CWhirlWind::_op_assign_4(CWhirlWind* pThis, const CWhirlWind& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMassacre::~CMassacre()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CMassacre::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMassacre::CMassacre(const CMassacre& arg0)
{
    _ctor_1(arg0);
}

void CMassacre::_ctor_1(const CMassacre& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMassacre::CMassacre(long arg0)
{
    _ctor_0(arg0);
}

void CMassacre::_ctor_0(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMassacre::DoAction(int32_t bNoReserve)
{
    return __sub_002E0E70(this, nullptr, bNoReserve);
}

CMassacre& CMassacre::operator=(const CMassacre& arg0)
{
    return _op_assign_4(this, arg0);
}

CMassacre& CMassacre::_op_assign_4(CMassacre* pThis, const CMassacre& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
