// MovePath.cpp
#include "MovePath.hpp"
#include "MovePath_regen.ipp"

 CMovePath::~CMovePath() {
}
void CMovePath::_dtor_0() {
	return __sub_00266CD0(this, nullptr);
}
 CMovePath::CMovePath(const CMovePath& arg0) {
	_ctor_1( arg0);
}
void CMovePath::_ctor_1( const CMovePath& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMovePath::CMovePath() {
}
void CMovePath::_ctor_0() {
	return __sub_00266CA0(this, nullptr);
}
void CMovePath::Decode(CInPacket& iPacket, int32_t bPassive) {
	__sub_00267920(this, nullptr, iPacket, bPassive);
}
void CMovePath::Encode(COutPacket& oPacket, int32_t* pbPassive) {
	__sub_00266E20(this, nullptr, oPacket, pbPassive);
}
long CMovePath::GetStartPositionX() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMovePath::GetStartPositionY() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMovePath::GetEndPositionX() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMovePath::GetEndPositionY() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMovePath::GetHeadPositionX() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMovePath::GetHeadPositionY() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
unsigned char CMovePath::GetLastMoveAction() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short CMovePath::GetLastFoothold() {
 	return m_elemLast.fh;
}
short CMovePath::GetLastFootholdStepOn() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMovePath::IsEmpty() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMovePath::ELEM& CMovePath::GetLastElement() {
	return *m_lElem.GetTailPosition();
}
tagRECT CMovePath::GetMoveRect() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CMovePath::DumpPosition() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMovePath::DumpMovePath() {
	__sub_00266CD0(this, nullptr);
}
void CMovePath::SetForcedFlush() {
	__sub_00266CD0(this, nullptr);
}
short __fastcall CMovePath::_ZtlSecureGet_m_x() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short __fastcall CMovePath::_ZtlSecurePut_m_x(short arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short __fastcall CMovePath::_ZtlSecureGet_m_y() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short __fastcall CMovePath::_ZtlSecurePut_m_y(short arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short __fastcall CMovePath::_ZtlSecureGet_m_vx() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short __fastcall CMovePath::_ZtlSecurePut_m_vx(short arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short __fastcall CMovePath::_ZtlSecureGet_m_vy() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
short __fastcall CMovePath::_ZtlSecurePut_m_vy(short arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMovePath::Init(int32_t bSend, int32_t bShortUpdate, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pfh, CLadderOrRope* pLR) {
	__sub_002668E0(this, nullptr, bSend, bShortUpdate, x, y, vx, vy, nMoveAction, pfh, pLR);
}
void CMovePath::MakeMovePath(long nAttr, const CStaticFoothold* pfh, const CStaticFoothold* pfhStart, const CLadderOrRope* pLR, long x, long y, long vx, long vy, long nMoveAction, long tElapse, long xOffset, long yOffset) {
	__sub_00267C90(this, nullptr, nAttr, pfh, pfhStart, pLR, x, y, vx, vy, nMoveAction, tElapse, xOffset, yOffset);
}
void CMovePath::AddNewElem(long nAttr, const CStaticFoothold* pfh, const CStaticFoothold* pfhFallStart, const CLadderOrRope* pLR, long x, long y, long vx, long vy, long nMoveAction, long xOffset, long yOffset) {
	__sub_00267E70(this, nullptr, nAttr, pfh, pfhFallStart, pLR, x, y, vx, vy, nMoveAction, xOffset, yOffset);
}
void CMovePath::SetStatChangedPoint(unsigned char bStat) {
	__sub_00267F30(this, nullptr, bStat);
}
int32_t CMovePath::IsTimeForFlush(int32_t bFly, int32_t bDynamicFoothold) {
	return __sub_00266870(this, nullptr, bFly, bDynamicFoothold);
}
int32_t CMovePath::Flush(COutPacket& oPacket, int32_t bFly, CMovePath& oPath) {
	return __sub_00268160(this, nullptr, oPacket, bFly, oPath);
}
void CMovePath::SetKeyPadState(int32_t bLeftKeyPressed, int32_t bRightKeyPressed, int32_t bUpKeyPressed, int32_t bDownKeyPressed) {
	__sub_002673C0(this, nullptr, bLeftKeyPressed, bRightKeyPressed, bUpKeyPressed, bDownKeyPressed);
}
void CMovePath::SetKeyPadStateByFoothold(int32_t bLeftKeyPressed, int32_t bRightKeyPressed, int32_t bUpKeyPressed, int32_t bDownKeyPressed) {
	__sub_002673C0(this, nullptr, bLeftKeyPressed, bRightKeyPressed, bUpKeyPressed, bDownKeyPressed);
}
long CMovePath::GetGatherDuration() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMovePath::CalcPassivePos(double& h3, double& h4, double& h1, double& xn, short& h2, long& arg5, int64_t& arg6, double& arg7, double& arg8) {
	return __sub_002673F0(this, nullptr, h3, h4, h1, xn, h2, arg5, arg6, arg7, arg8);
}
void CMovePath::OnMovePacket(CInPacket& iPacket, int32_t bPassive) {
	__sub_002683F0(this, nullptr, iPacket, bPassive);
}
void CMovePath::DiscardByInterrupt(long nMoveType, CVecCtrl* pvc, int32_t bNotForceLanding) {
	__sub_00267F60(this, nullptr, nMoveType, pvc, bNotForceLanding);
}
long CMovePath::GetPassiveRemain() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const CMovePath::ELEM& CMovePath::GetElemLast() {
 	return m_elemLast;
}
uint16_t CMovePath::GetRandCnt() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint16_t CMovePath::GetActualRandCnt() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMovePath::SetRandCnt(uint16_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMovePath::SetActualRandCnt(uint16_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

_ZTL_SEC_GETSETI(long, CMovePath, m_tInterval)
_ZTL_SEC_GETSETI(long, CMovePath, m_tOffset)
_ZTL_SEC_GETSETI(long, CMovePath, m_tReceived)

CMovePath& CMovePath::operator=(const CMovePath& arg0) {
	return _op_assign_52(this, arg0);
}
CMovePath& CMovePath::_op_assign_52(CMovePath* pThis, const CMovePath& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMovePath::ELEM::ELEM() {
}
void CMovePath::ELEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CMovePath::ELEM::ToString() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl CalcHermiteSplineCoeff(long t, long T, double& h1, double& h2, double& h3, double& h4) {
	return __sub_00266400(t, T, h1, h2, h3, h4);
}
