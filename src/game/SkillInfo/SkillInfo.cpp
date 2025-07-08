// SkillInfo.cpp
#include "SkillInfo.hpp"

#include "WvsExtra.h"
#include "Crc32/Crc32.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMSKILLENTRY>> FAKE_ZRefCountedAllocHelper_ITEMSKILLENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MOBSKILLENTRY>> FAKE_ZRefCountedAllocHelper_MOBSKILLENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MCGUARDIANENTRY>> FAKE_ZRefCountedAllocHelper_MCGUARDIANENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MCSKILLENTRY>> FAKE_ZRefCountedAllocHelper_MCSKILLENTRY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<ITEMOPTIONSKILLENTRY>> FAKE_ZRefCountedAllocHelper_ITEMOPTIONSKILLENTRY{};

static ZRef<AdditionPsd> FAKE_ZRef_AdditionPsd{};
static ZRef<SKILLROOT> FAKE_ZRef_SKILLROOT{};
static ZRef<ITEMSKILLLEVELDATA> FAKE_ZRef_ITEMSKILLLEVELDATA{};
static ZRef<ITEMOPTIONSKILLLEVELDATA> FAKE_ZRef_ITEMOPTIONSKILLLEVELDATA{};
static ZRef<SKILLENTRY> FAKE_ZRef_SKILLENTRY{};

static _ZtlSecureFuseHelper<unsigned char> FAKE_ZtlSecureFuseHelper_uchar{};
static _ZtlSecureTearHelper<unsigned char> FAKE_ZtlSecureTearHelper_uchar{};

static _ZtlSecureFuseHelper<unsigned long> FAKE_ZtlSecureFuseHelper_ulong{};
static _ZtlSecureTearHelper<unsigned long> FAKE_ZtlSecureTearHelper_ulong{};

static _ZtlSecureTearHelper<long> FAKE_ZtlSecureTearHelper_long{};
static _ZtlSecureFuseHelper<long> FAKE_ZtlSecureFuseHelper_long{};

static _ZtlSecureFuseHelper<short> FAKE_ZtlSecureFuseHelper_short{};

static _ZtlSecureTearHelper<float> FAKE_ZtlSecureTearHelper_float{};
static _ZtlSecureFuseHelper<float> FAKE_ZtlSecureFuseHelper_float{};

static GETCRC32Helper<long, long> FAKE_GETCRC32Helper_long_long{};

#include "SkillInfo_regen.ipp"

SKILLROOT::~SKILLROOT()
{
}
void SKILLROOT::_dtor_0()
{
	return __sub_002F4320(this, nullptr);
}
SKILLROOT::SKILLROOT(const SKILLROOT &arg0)
{
	_ctor_1(arg0);
}
void SKILLROOT::_ctor_1(const SKILLROOT &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
SKILLROOT::SKILLROOT()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void SKILLROOT::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
SKILLROOT &SKILLROOT::operator=(const SKILLROOT &arg0)
{
	return _op_assign_3(this, arg0);
}
SKILLROOT &SKILLROOT::_op_assign_3(SKILLROOT *pThis, const SKILLROOT &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
SKILLLEVELDATACommon::~SKILLLEVELDATACommon()
{
}
void SKILLLEVELDATACommon::_dtor_0()
{
	return __sub_002F3730(this, nullptr);
}
SKILLLEVELDATACommon::SKILLLEVELDATACommon(const SKILLLEVELDATACommon &arg0)
{
	_ctor_1(arg0);
}
void SKILLLEVELDATACommon::_ctor_1(const SKILLLEVELDATACommon &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
SKILLLEVELDATACommon::SKILLLEVELDATACommon()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void SKILLLEVELDATACommon::_ctor_0()
{
	return __sub_002F35A0(this, nullptr);
}
SKILLLEVELDATACommon &SKILLLEVELDATACommon::operator=(const SKILLLEVELDATACommon &arg0)
{
	return _op_assign_3(this, arg0);
}
SKILLLEVELDATACommon &SKILLLEVELDATACommon::_op_assign_3(SKILLLEVELDATACommon *pThis, const SKILLLEVELDATACommon &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MCGUARDIANENTRY::~MCGUARDIANENTRY()
{
}
void MCGUARDIANENTRY::_dtor_0()
{
	return __sub_002F3530(this, nullptr);
}
MCGUARDIANENTRY::MCGUARDIANENTRY(const MCGUARDIANENTRY &arg0)
{
	_ctor_1(arg0);
}
void MCGUARDIANENTRY::_ctor_1(const MCGUARDIANENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MCGUARDIANENTRY::MCGUARDIANENTRY()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void MCGUARDIANENTRY::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MCGUARDIANENTRY &MCGUARDIANENTRY::operator=(const MCGUARDIANENTRY &arg0)
{
	return _op_assign_3(this, arg0);
}
MCGUARDIANENTRY &MCGUARDIANENTRY::_op_assign_3(MCGUARDIANENTRY *pThis, const MCGUARDIANENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
SKILLLEVELDATA::~SKILLLEVELDATA()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void SKILLLEVELDATA::_dtor_0()
{
	return __sub_002FD8C0(this, nullptr);
}
SKILLLEVELDATA::SKILLLEVELDATA(const SKILLLEVELDATA &__that)
{
	_ctor_1(__that);
}
void SKILLLEVELDATA::_ctor_1(const SKILLLEVELDATA &__that)
{
	return __sub_0051DBE0(this, nullptr, __that);
}
SKILLLEVELDATA::SKILLLEVELDATA()
{
	UNIMPLEMENTED; //_ctor_0();
}
void SKILLLEVELDATA::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nHP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPAD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMAD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nACC)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEVA)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCraft)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nSpeed)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nJump)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMorph)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nHPCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMPCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMoneyCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nItemCon)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nItemConNo)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDamage)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nFixDamage)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nSelfDestruction)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, tTime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, tSubTime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nProp)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nSubProp)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nAttackCount)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nBulletCount)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nBulletConsume)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMastery)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMobCount)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nX)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nY)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nZ)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nAction)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEMHP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEMMP)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEPAD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEPDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEMDD)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nRange)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCooltime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMHPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMMPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCDMin)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nCDMax)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nACCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEVAr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nAr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDIPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPDamr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMDamr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPADr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMADr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nEXPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDot)
_ZTL_SEC_GETSETI(unsigned long, SKILLLEVELDATA, unDotInterval)
_ZTL_SEC_GETSETI(unsigned long, SKILLLEVELDATA, unDotTime)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nIMPr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nASRr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nTERr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMESOr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPADx)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nMADx)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nIMDr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPsdJump)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPsdSpeed)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nOCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nDCr)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nReqGL)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nPrice)
_ZTL_SEC_GETSETI(unsigned long, SKILLLEVELDATA, nCRC)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nS)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nU)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nV)
_ZTL_SEC_GETSETI(long, SKILLLEVELDATA, nW)
_ZTL_SEC_GETSETI(float, SKILLLEVELDATA, fT)

const _FILETIME SKILLLEVELDATA::GetSkillLevelDateExpire(ZXString<char> sDateExpire)
{
	return __sub_002F81D0(this, nullptr, CreateNakedParam(sDateExpire));
}
int32_t SKILLLEVELDATA::LoadLevelData(long nSkillID, _x_com_ptr<IWzProperty> pLevelData, const SKILLLEVELDATACommon *pLevelCommon, long nLevel, _x_com_ptr<IWzProperty> pStrSR)
{
	return __sub_00300990(this, nullptr, nSkillID, CreateNakedParam(pLevelData), pLevelCommon, nLevel, CreateNakedParam(pStrSR));
}
int32_t SKILLLEVELDATA::LoadLevelDataByCommon(long nSkillID, const SKILLLEVELDATACommon *pLevelCommon, long nLevel, _x_com_ptr<IWzProperty> pStrSR)
{
	return __sub_002FF7F0(this, nullptr, nSkillID, pLevelCommon, nLevel, CreateNakedParam(pStrSR));
}
ZXString<char> SKILLLEVELDATA::GetCommonHelpString(_x_com_ptr<IWzProperty> pStrSR, ZXString<char> sID)
{
	ZXString<char> ret;
	return *__sub_002F9A40(this, nullptr, &ret, CreateNakedParam(pStrSR), CreateNakedParam(sID));
}
long SKILLLEVELDATA::GetParsedCommonData(ZXString<char> sText, long nLevel)
{
	return __sub_002FE560(this, nullptr, CreateNakedParam(sText), nLevel);
}
long SKILLLEVELDATA::GetArithmeticData(ZXString<char> sExpression, int32_t bCeiling)
{
	return __sub_002F9300(this, nullptr, CreateNakedParam(sExpression), bCeiling);
}
unsigned long SKILLLEVELDATA::GetParsedCommonDataULONG(ZXString<char> sText, long nLevel)
{
	return __sub_002FDF60(this, nullptr, CreateNakedParam(sText), nLevel);
}
unsigned long SKILLLEVELDATA::GetArithmeticDataULONG(ZXString<char> sExpression, int32_t bCeiling)
{
	return __sub_002F8BA0(this, nullptr, CreateNakedParam(sExpression), bCeiling);
}
float SKILLLEVELDATA::GetParsedCommonDataFloat(ZXString<char> sText, long nLevel)
{
	return __sub_002FD950(this, nullptr, CreateNakedParam(sText), nLevel);
}
float SKILLLEVELDATA::GetArithmeticDataFloat(ZXString<char> sExpression, int32_t bCeiling)
{
	return __sub_002F8460(this, nullptr, CreateNakedParam(sExpression), bCeiling);
}
unsigned long SKILLLEVELDATA::GetCrc()
{
	return __sub_002F1C50(this, nullptr);
}
void SKILLLEVELDATA::CalcCrc()
{
	__sub_002F0660(this, nullptr);
}
SKILLLEVELDATA &SKILLLEVELDATA::operator=(const SKILLLEVELDATA &arg0)
{
	return _op_assign_177(this, arg0);
}
SKILLLEVELDATA &SKILLLEVELDATA::_op_assign_177(SKILLLEVELDATA *pThis, const SKILLLEVELDATA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MOBSKILLLEVELDATA::~MOBSKILLLEVELDATA()
{
}
void MOBSKILLLEVELDATA::_dtor_0()
{
	return __sub_002F4700(this, nullptr);
}
MOBSKILLLEVELDATA::MOBSKILLLEVELDATA(const MOBSKILLLEVELDATA &arg0)
{
	_ctor_1(arg0);
}
void MOBSKILLLEVELDATA::_ctor_1(const MOBSKILLLEVELDATA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MOBSKILLLEVELDATA::MOBSKILLLEVELDATA()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void MOBSKILLLEVELDATA::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
Ztl_bstr_t MOBSKILLLEVELDATA::GetEffectUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249FD0(this, nullptr, &ret);
}
Ztl_bstr_t MOBSKILLLEVELDATA::GetHitUOL()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
Ztl_bstr_t MOBSKILLLEVELDATA::GetMobUOL()
{
	Ztl_bstr_t ret;
	return *__sub_0024A000(this, nullptr, &ret);
}
Ztl_bstr_t MOBSKILLLEVELDATA::GetAffectedUOL()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
Ztl_bstr_t MOBSKILLLEVELDATA::GetTileUOL()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MOBSKILLLEVELDATA &MOBSKILLLEVELDATA::operator=(const MOBSKILLLEVELDATA &arg0)
{
	return _op_assign_8(this, arg0);
}
MOBSKILLLEVELDATA &MOBSKILLLEVELDATA::_op_assign_8(MOBSKILLLEVELDATA *pThis, const MOBSKILLLEVELDATA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MCSKILLENTRY::~MCSKILLENTRY()
{
}
void MCSKILLENTRY::_dtor_0()
{
	return __sub_002F34C0(this, nullptr);
}
MCSKILLENTRY::MCSKILLENTRY(const MCSKILLENTRY &arg0)
{
	_ctor_1(arg0);
}
void MCSKILLENTRY::_ctor_1(const MCSKILLENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MCSKILLENTRY::MCSKILLENTRY()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void MCSKILLENTRY::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MCSKILLENTRY &MCSKILLENTRY::operator=(const MCSKILLENTRY &arg0)
{
	return _op_assign_3(this, arg0);
}
MCSKILLENTRY &MCSKILLENTRY::_op_assign_3(MCSKILLENTRY *pThis, const MCSKILLENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CHARLEVELDATA::~CHARLEVELDATA()
{
}
void CHARLEVELDATA::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CHARLEVELDATA::CHARLEVELDATA(const CHARLEVELDATA &arg0)
{
	_ctor_1(arg0);
}
void CHARLEVELDATA::_ctor_1(const CHARLEVELDATA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CHARLEVELDATA::CHARLEVELDATA()
{
	//UNIMPLEMENTED; //_ctor_0();
}
void CHARLEVELDATA::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CHARLEVELDATA::LoadCharLevelData(long nSkillID, _x_com_ptr<IWzProperty> pCharLevelData, long nCharLevel)
{
	return __sub_002FD040(this, nullptr, nSkillID, CreateNakedParam(pCharLevelData), nCharLevel);
}
CHARLEVELDATA &CHARLEVELDATA::operator=(const CHARLEVELDATA &arg0)
{
	return _op_assign_4(this, arg0);
}
CHARLEVELDATA &CHARLEVELDATA::_op_assign_4(CHARLEVELDATA *pThis, const CHARLEVELDATA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
SKILLENTRY::~SKILLENTRY()
{
}
void SKILLENTRY::_dtor_0()
{
	return __sub_00308B80(this, nullptr);
}
SKILLENTRY::SKILLENTRY(const SKILLENTRY &arg0)
{
	_ctor_1(arg0);
}
void SKILLENTRY::_ctor_1(const SKILLENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
SKILLENTRY::SKILLENTRY()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void SKILLENTRY::_ctor_0()
{
	return __sub_00308A50(this, nullptr);
}
long SKILLENTRY::GetMaxLevel()
{
	return __sub_0010A020(this, nullptr);
}
const CHARLEVELDATA *SKILLENTRY::GetCharLevelData(long nCharLevel)
{
	return __sub_00309110(this, nullptr, nCharLevel);
}
long SKILLENTRY::GetCharLevelIndex(long nCharLevel)
{
	return __sub_002EF640(this, nullptr, nCharLevel);
}
const SKILLLEVELDATA &SKILLENTRY::GetLevelData(long nLevel) const
{
	return __sub_00308E10((SKILLENTRY *)this, nullptr, nLevel);
}
int32_t SKILLENTRY::IsFinalAttack()
{
	return __sub_002ECD30(this, nullptr);
}
int32_t SKILLENTRY::IsSerialAttack()
{
	return __sub_002ECD30(this, nullptr);
}
int32_t SKILLENTRY::AdjustDamageDecRate(long nSLV, long nOrder, long *aDamage, int32_t bFinalAfterSlashBlast)
{
	return __sub_0030AEC0(this, nullptr, nSLV, nOrder, aDamage, bFinalAfterSlashBlast);
}
Ztl_bstr_t SKILLENTRY::GetAfterimageUOL(unsigned char nCharLevel)
{
	Ztl_bstr_t ret;
	return *__sub_00037130(this, nullptr, &ret, nCharLevel);
}
Ztl_bstr_t SKILLENTRY::GetAfterimageUOL_()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetSummonedUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
_x_com_ptr<IWzCanvas> SKILLENTRY::GetIconCanvas(long nIconNumber) const
{
	//_x_com_ptr<IWzCanvas> ret;
	//return *__sub_002F7D40((SKILLENTRY*)this, nullptr, &ret, nIconNumber);
	if (!nIconNumber)
	{
		return GetIconCanvas();
	}

	auto str = StringPool::GetInstance().GetStringW(0x9A5u);
	//TODO verify diff
	auto wUol = ZXString<unsigned short>::FromFmt(str.c_str(), nSkillID / 10000, nSkillID, nIconNumber);
	//TODO(game) use get_unknown
	return _x_com_ptr<IWzCanvas>(get_rm()->GetObjectT<IWzCanvas>(Ztl_bstr_t((const wchar_t*)wUol.c_str())));
}
_x_com_ptr<IWzCanvas> SKILLENTRY::GetIconCanvas() const
{
	//return __sub_002EF610((SKILLENTRY*)this, nullptr);
	return this->apCanvas[1];
}
Ztl_bstr_t SKILLENTRY::GetEffectUOL(unsigned char nCharLevel)
{
	Ztl_bstr_t ret;
	return *__sub_00037130(this, nullptr, &ret, nCharLevel);
}
Ztl_bstr_t SKILLENTRY::GetScreenEffectUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetAffectedUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetSpecialAffectedUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetMobUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetTileUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetPrepareUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetSpecialUOL(long nCharLevel)
{
	Ztl_bstr_t ret;
	return *__sub_00017F60(this, nullptr, &ret, nCharLevel);
}
Ztl_bstr_t SKILLENTRY::GetFinishUOL()
{
	Ztl_bstr_t ret;
	return *__sub_00249F20(this, nullptr, &ret);
}
Ztl_bstr_t SKILLENTRY::GetRandomHitUOL(unsigned char nCharLevel, long nSLV)
{
	Ztl_bstr_t ret;
	return *__sub_00115260(this, nullptr, &ret, nCharLevel, nSLV);
}
Ztl_bstr_t SKILLENTRY::GetHitUOLByIndex(unsigned char nCharLevel, long nSLV, long nIndex)
{
	Ztl_bstr_t ret;
	return *__sub_00249F50(this, nullptr, &ret, nCharLevel, nSLV, nIndex);
}
const ZArray<Ztl_bstr_t> &SKILLENTRY::GetHitUOL(unsigned char arg0, long arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
Ztl_bstr_t SKILLENTRY::GetBallUOL(long nSLV, unsigned char nCharLevel, int32_t bFlip)
{
	Ztl_bstr_t ret;
	return *__sub_00169390(this, nullptr, &ret, nSLV, nCharLevel, bFlip);
}
long SKILLENTRY::GetRandomAppointedAction(long nSLV, uint32_t nRandNumber)
{
	return __sub_0030AD40(this, nullptr, nSLV, nRandNumber);
}
int32_t SKILLENTRY::IsActionAppointed(long nSLV)
{
	return __sub_0030ADD0(this, nullptr, nSLV);
}
int32_t SKILLENTRY::IsCorrectAppointedAction(long nSLV, long nAction)
{
	return __sub_0030AE20(this, nullptr, nSLV, nAction);
}
int32_t SKILLENTRY::IsCorrectWeaponType(long nWT, long nSubWT)
{
	return __sub_002ECD40(this, nullptr, nWT, nSubWT);
}
unsigned long SKILLENTRY::GetCrc()
{
	return __sub_002ED3F0(this, nullptr);
}
void SKILLENTRY::InitCrc()
{
	__sub_002ED400(this, nullptr);
}
void SKILLENTRY::AddCrc(unsigned long nAddCrc)
{
	__sub_002ED450(this, nullptr, nAddCrc);
}
SKILLENTRY &SKILLENTRY::operator=(const SKILLENTRY &arg0)
{
	return _op_assign_35(this, arg0);
}
SKILLENTRY &SKILLENTRY::_op_assign_35(SKILLENTRY *pThis, const SKILLENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSkillInfo::~CSkillInfo()
{
}
void CSkillInfo::_dtor_0()
{
	return __sub_005C49A0(this, nullptr);
}
CSkillInfo::CSkillInfo(const CSkillInfo &arg0)
{
	_ctor_1(arg0);
}
void CSkillInfo::_ctor_1(const CSkillInfo &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSkillInfo::CSkillInfo()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void CSkillInfo::_ctor_0()
{
	return __sub_005C48A0(this, nullptr);
}
int32_t CSkillInfo::IterateSkillInfo()
{
	return __sub_00310390(this, nullptr);
}
int32_t CSkillInfo::LoadMobSkill()
{
	return __sub_0030BBD0(this, nullptr);
}
int32_t CSkillInfo::LoadMCSkill()
{
	return __sub_002FEB20(this, nullptr);
}
int32_t CSkillInfo::LoadMCGuardian()
{
	return __sub_002FF0D0(this, nullptr);
}
int32_t CSkillInfo::LoadItemSkill()
{
	return __sub_00307E70(this, nullptr);
}
int32_t CSkillInfo::LoadItemOptionSkill()
{
	return __sub_003083D0(this, nullptr);
}
int32_t CSkillInfo::LoadBFSkill()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const SKILLROOT *CSkillInfo::GetSkillRoot(long nSkillRootID)
{
	return __sub_002F1B10(this, nullptr, nSkillRootID);
}
const SKILLENTRY *CSkillInfo::GetSkill(long nSkillID)
{
	return __sub_002F1BB0(this, nullptr, nSkillID);
}
void CSkillInfo::GetGuildSkill(long arg0, const SKILLENTRY **arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSkillInfo::GetSkillRootVisible(long nSkillRootID, const CharacterData &cd, SKILLROOT &SkillRootVisible)
{
	__sub_002F4050(this, nullptr, nSkillRootID, cd, SkillRootVisible);
}
long CSkillInfo::GetPureSkillLevel(const CharacterData &c, long nSkillID, const SKILLENTRY **ppSkillEntry)
{
	return __sub_002F1C80(this, nullptr, c, nSkillID, ppSkillEntry);
}
long CSkillInfo::GetSkillLevel(const CharacterData &c, const SecondaryStat &ss, long nSkillID, const SKILLENTRY **ppSkillEntry)
{
	return __sub_002F2000(this, nullptr, c, ss, nSkillID, ppSkillEntry);
}
long CSkillInfo::GetSkillLevel(const CharacterData &c, long nSkillID, const SKILLENTRY **ppSkillEntry)
{
	return __sub_002F1D10(this, nullptr, c, nSkillID, ppSkillEntry);
}
long CSkillInfo::GetShootSkillRange(const CharacterData &cd, long nSkillID, long nWT)
{
	return __sub_00309650(this, nullptr, cd, nSkillID, nWT);
}
int32_t CSkillInfo::IsSkillVisible(const CharacterData &c, long nSkillID, const SKILLENTRY **ppSkillEntry)
{
	return __sub_002F20D0(this, nullptr, c, nSkillID, ppSkillEntry);
}
long CSkillInfo::GetMobTossSkillID(const CharacterData &c)
{
	return __sub_002F4410(this, nullptr, c);
}
const MOBSKILLENTRY *CSkillInfo::GetMobSkill(long nSkillID)
{
	return __sub_002F30C0(this, nullptr, nSkillID);
}
const MCSKILLENTRY *CSkillInfo::GetMCSkill(long nSkillID)
{
	return __sub_002F3160(this, nullptr, nSkillID);
}
const MCSKILLENTRY *CSkillInfo::GetMCRandomSkill()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const MCGUARDIANENTRY *CSkillInfo::GetMCGuardian(long nSkillID)
{
	return __sub_002F3340(this, nullptr, nSkillID);
}
const ITEMSKILLENTRY *CSkillInfo::GetItemSkill(long nSkillID)
{
	return __sub_002F3200(this, nullptr, nSkillID);
}
const ITEMOPTIONSKILLENTRY *CSkillInfo::GetItemOptionSkill(long nSkillID)
{
	return __sub_002F32A0(this, nullptr, nSkillID);
}
const BFSKILLENTRY *CSkillInfo::GetBFSkill(long arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CSkillInfo::CheckConsumeForActiveSkill(CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss, long nSkillID, long *pHPCon, long *pMPCon)
{
	return __sub_0030B010(this, nullptr, cd, bs, ss, nSkillID, pHPCon, pMPCon);
}
int32_t __cdecl CSkillInfo::IsMobChaseAttack(const SKILLENTRY *pSkill, long nSLV)
{
	return __sub_00503190(pSkill, nSLV);
}
int32_t CSkillInfo::LoadSkillRoot(long nSkillRootID, _x_com_ptr<IWzProperty> pSkillRoot, _x_com_ptr<IWzProperty> pStrSR)
{
	return __sub_0030FC00(this, nullptr, nSkillRootID, CreateNakedParam(pSkillRoot), CreateNakedParam(pStrSR));
}
ZRef<SKILLENTRY> CSkillInfo::LoadSkill(long arg0, _x_com_ptr<IWzProperty> arg1, _x_com_ptr<IWzProperty> arg2)
{
	ZRef<SKILLENTRY> ret;
	return *__sub_0030C190(this, nullptr, &ret, arg0, CreateNakedParam(arg1), CreateNakedParam(arg2));
}
int32_t CSkillInfo::LoadFinalAttack(ZArray<ZArray<long>> &a1, _x_com_ptr<IWzProperty> p1)
{
	return __sub_002F7680(this, nullptr, a1, CreateNakedParam(p1));
}
int32_t CSkillInfo::LoadReqSkill(ZList<GW_SkillRecord> &l, _x_com_ptr<IWzProperty> p)
{
	return __sub_002F7AA0(this, nullptr, l, CreateNakedParam(p));
}
int32_t CSkillInfo::LoadLevelData(long arg0, int32_t arg1, ZArray<SKILLLEVELDATA> &arg2, _x_com_ptr<IWzProperty> arg3, _x_com_ptr<IWzProperty> arg4, long arg5, const SKILLLEVELDATACommon *arg6)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CSkillInfo::LoadCharLevelData(long nSkillID, ZArray<CHARLEVELDATA> &a, _x_com_ptr<IWzProperty> p)
{
	return __sub_003093A0(this, nullptr, nSkillID, a, CreateNakedParam(p));
}
int32_t CSkillInfo::LoadLevelDataCommon(long nSkillID, _x_com_ptr<IWzProperty> pCommon, _x_com_ptr<IWzProperty> pStrSR, SKILLLEVELDATACommon &common, long &nMaxLevel)
{
	return __sub_002F47A0(this, nullptr, nSkillID, CreateNakedParam(pCommon), CreateNakedParam(pStrSR), common, nMaxLevel);
}
int32_t CSkillInfo::LoadMobSkillLevelData(long arg0, ZArray<MOBSKILLLEVELDATA> &arg1, _x_com_ptr<IWzProperty> arg2)
{
	return __sub_00306D30(this, nullptr, arg0, arg1, CreateNakedParam(arg2));
}
int32_t CSkillInfo::LoadItemSkillLevelData(long arg0, ZArray<ZRef<ITEMSKILLLEVELDATA>> &arg1, _x_com_ptr<IWzProperty> arg2)
{
	return __sub_00306150(this, nullptr, arg0, arg1, CreateNakedParam(arg2));
}
int32_t CSkillInfo::LoadItemOptionSkillLevelData(long arg0, ZArray<ZRef<ITEMOPTIONSKILLLEVELDATA>> &arg1, _x_com_ptr<IWzProperty> arg2)
{
	return __sub_00306710(this, nullptr, arg0, arg1, CreateNakedParam(arg2));
}
void CSkillInfo::DrawSkillIconForSlot(_x_com_ptr<IWzCanvas> arg0, long arg1, long arg2, long arg3, int32_t arg4)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSkillInfo &CSkillInfo::operator=(const CSkillInfo &arg0)
{
	return _op_assign_40(this, arg0);
}
CSkillInfo &CSkillInfo::_op_assign_40(CSkillInfo *pThis, const CSkillInfo &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}

uint32_t __fastcall _ZtlSecureTear_float_(float t, float *arg1)
{
	return __sub_002EF6A0(t, arg1);
}
long __cdecl get_random_melee_attack_action(long nAttackActionType, long nWT, const SKILLENTRY *pSkill, long nSLV, uint32_t nRandNumber)
{
	return __sub_0030B700(nAttackActionType, nWT, pSkill, nSLV, nRandNumber);
}
char __cdecl _anon_get_char(Ztl_variant_t &v, char cDefault)
{
	return __sub_002F4510(v, cDefault);
}
long __cdecl get_novice_skill_point(const CharacterData &cd)
{
	return __sub_002F0C20(cd);
}
int32_t __cdecl is_correct_melee_attack(long nAttackActionType, long nWT, long nAction, const SKILLENTRY *pSkill, long nSLV)
{
	return __sub_0030B8E0(nAttackActionType, nWT, nAction, pSkill, nSLV);
}
long __cdecl get_amplification(const CharacterData &cd, long nSkillID, long *pnIncMPCon)
{
	return __sub_0030A5E0(cd, nSkillID, pnIncMPCon);
}
int32_t __cdecl is_not_depend_on_weapon_skill(const SKILLENTRY *pSkill, long nSLV, long nJobCode)
{
	return __sub_002EEAA0(pSkill, nSLV, nJobCode);
}
long __cdecl get_weapon_mastery(const CharacterData &cd, const SecondaryStat &ss, long nWeaponItemID, long nAttackType, long nSkillID, long *pnACCInc, long *pnPADInc)
{
	return __sub_00309950(cd, ss, nWeaponItemID, nAttackType, nSkillID, pnACCInc, pnPADInc);
}
long __cdecl get_magic_mastery(const CharacterData &cd, long *pnMADInc, long nWeaponItemID)
{
	return __sub_00309F30(cd, pnMADInc, nWeaponItemID);
}
long __cdecl _anon_char2elem_attr(char chr)
{
	return __sub_002ED4F0(chr);
}
long __cdecl get_mastery_from_skill(const CharacterData &cd, const long nSkillID, long *pnInc)
{
	return __sub_003098C0(cd, nSkillID, pnInc);
}
int32_t __cdecl is_shoot_skill_not_showing_bullet(const SKILLENTRY *pSkill)
{
	return __sub_002EDC50(pSkill);
}
long __cdecl get_critical_skill_level(const CharacterData &cd, long nWeaponItemID, long nAttackType, long *pnProp, long *pnParam)
{
	return __sub_0030A240(cd, nWeaponItemID, nAttackType, pnProp, pnParam);
}
float __cdecl _ZtlSecureFuse_float_(const float *at, uint32_t uCS)
{
	return __sub_002EE3E0(at, uCS);
}
long __cdecl get_combo_damage_param(const CharacterData &cd, long nSkillID, long nComboCounter)
{
	return __sub_0030A410(cd, nSkillID, nComboCounter);
}
long __cdecl get_max_durability_of_vehicle(long nSkillID, long nSLV, long nCharLevel)
{
	return __sub_002ED700(nSkillID, nSLV, nCharLevel);
}
long __cdecl get_summon_skill_id_from_idx(const CharacterData &cd, long nIdx)
{
	return __sub_002EE930(cd, nIdx);
}
long __cdecl get_summoned_attack_damage(long nAIType, long nSkillID, long nDamage, const CharacterData &cd)
{
	return __sub_0030A110(nAIType, nSkillID, nDamage, cd);
}
long __cdecl get_resistance(const CharacterData &cd, const SecondaryStat &ss, long nElement)
{
	return __sub_0030A910(cd, ss, nElement);
}


bool get_element_attribute_from_char(wchar_t c, long& attr) {

	switch (c)
	{
	//TODO case 0:
	case L'P':
	case L'p':
		attr = 0;
		return 1;
	case L'D':
	case L'd':
		attr = 6;
		return 1;
	case L'F':
	case L'f':
		attr = 2;
		return 1;
	case L'H':
	case L'h':
		attr = 5;
		return 1;
	case L'I':
	case L'i':
		attr = 1;
		return 1;
	case 'L':
	case 'l':
		attr = 3;
		return 1;
	case 'S':
	case 's':
		attr = 4;
		return 1;
	case 'U':
	case 'u':
		attr = 7;
		return 1;
	default:
		attr = 0;
		return 0;
	}
}

int32_t __cdecl get_element_attribute(const wchar_t *sAttr, long &ret)
{
	switch (sAttr[0])
	{
	case 0:
	case L'P':
	case L'p':
		ret = 0;
		return 1;
	case L'D':
	case L'd':
		ret = 6;
		return 1;
	case L'F':
	case L'f':
		ret = 2;
		return 1;
	case L'H':
	case L'h':
		ret = 5;
		return 1;
	case L'I':
	case L'i':
		ret = 1;
		return 1;
	case 'L':
	case 'l':
		ret = 3;
		return 1;
	case 'S':
	case 's':
		ret = 4;
		return 1;
	case 'U':
	case 'u':
		ret = 7;
		return 1;
	default:
		ret = 0;
		return 0;
	}
	// return __sub_002ED2D0(arg0, arg1);
}

// Special calling convention
NAKED int32_t __cdecl __get_element_attribute() {
	__asm {
		// ret is in eax
		push eax
		// sAttr is in ecx
		push ecx
		call get_element_attribute
		add esp, 8
		ret
	}
}

int32_t __cdecl get_element_attribute_list(const wchar_t *sAttr, long * p) {
	memset(p, 0, sizeof(long) * 8);
	if(!sAttr) {
		return 1;
	}

	while(*sAttr) {
		auto attrChr = *sAttr;
		++sAttr;

		auto value = 0;
		if(*sAttr) {
			while(*sAttr >= L'0' && *sAttr <= L'9') {
				value = value * 10 + *sAttr - L'0';
				++sAttr;
			}
		}
		long elem = 0;
		if(!get_element_attribute_from_char(attrChr, elem)) {
			return 0;
		}
		p[elem] = value;

	}

	return 1;
}

// Special calling convention
NAKED int32_t __cdecl __get_element_attribute_list() {
	__asm {
		// ret is in eax
		push esi
		// sAttr is in ecx
		push edx
		call get_element_attribute_list
		add esp, 8
		ret
	}
}