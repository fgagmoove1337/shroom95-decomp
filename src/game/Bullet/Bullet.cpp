// Bullet.cpp
#include "Bullet.hpp"
#include "Bullet_regen.ipp"

 CBullet::~CBullet() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CBullet::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CBullet::CBullet(const CBullet& arg0) {
	_ctor_1( arg0);
}
void CBullet::_ctor_1( const CBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CBullet::CBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget) {
	_ctor_0( tStart, tEnd, ptStart, ptEnd, pVecTarget);
}
void CBullet::_ctor_0( long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget) {
	return __sub_00076F10(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd), CreateNakedParam(pVecTarget));
}
int32_t CBullet::NeedsUpdate(long tCur) {
	return __sub_00076E80(this, nullptr, tCur);
}
int32_t CBullet::Initialize() {
	return __sub_00076F80(this, nullptr);
}
int32_t CBullet::CallUpdate(long tCur) {
	return __sub_00077060(this, nullptr, tCur);
}
_x_com_ptr<IWzVector2D> CBullet::CreateBulletOrigin() {
	return __sub_00077550(this, nullptr);
}
_x_com_ptr<IWzGr2DLayer> CBullet::PrepareBulletLayer(_x_com_ptr<IWzVector2D> arg0, int32_t arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CBullet::Update(long tCur) {
	return __sub_00076E80(this, nullptr, tCur);
}
_x_com_ptr<IWzGr2DLayer> CBullet::GetLayer() {
	return __sub_00076EE0(this, nullptr);
}
_x_com_ptr<IWzVector2D> CBullet::GetOrigin() {
	return __sub_00077550(this, nullptr);
}
int32_t CBullet::IsClockwise() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_x_com_ptr<IWzVector2D> CBullet::GetVecTarget() {
	return __sub_00077550(this, nullptr);
}
long CBullet::GetStartTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CBullet::GetEndTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CBullet& CBullet::operator=(const CBullet& arg0) {
	return _op_assign_15(this, arg0);
}
CBullet& CBullet::_op_assign_15(CBullet* pThis, const CBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}


 CFadeoutBullet::~CFadeoutBullet() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CFadeoutBullet::_dtor_0() {
	return __sub_0023C500(this, nullptr);
}
 CFadeoutBullet::CFadeoutBullet(const CFadeoutBullet& arg0) {
	_ctor_1( arg0);
}
void CFadeoutBullet::_ctor_1( const CFadeoutBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CFadeoutBullet::CFadeoutBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget) {
	_ctor_0( tStart, tEnd, ptStart, ptEnd, pVecTarget);
}
void CFadeoutBullet::_ctor_0( long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget) {
	return __sub_0023C450(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd), CreateNakedParam(pVecTarget));
}
void CFadeoutBullet::OnRemoved() {
	__sub_0023C500(this, nullptr);
}
int32_t CFadeoutBullet::Update(long tCur) {
	return __sub_00077320(this, nullptr, tCur);
}
void CFadeoutBullet::Fadeout(long tEnd) {
	__sub_000770B0(this, nullptr, tEnd);
}
CFadeoutBullet& CFadeoutBullet::operator=(const CFadeoutBullet& arg0) {
	return _op_assign_6(this, arg0);
}
CFadeoutBullet& CFadeoutBullet::_op_assign_6(CFadeoutBullet* pThis, const CFadeoutBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CFadeoutBullet::Container::~Container() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CFadeoutBullet::Container::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CFadeoutBullet::Container::Container(const CFadeoutBullet::Container& arg0) {
	_ctor_1( arg0);
}
void CFadeoutBullet::Container::_ctor_1( const CFadeoutBullet::Container& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CFadeoutBullet::Container::Container() {
	UNIMPLEMENTED; //_ctor_0();
}
void CFadeoutBullet::Container::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CFadeoutBullet::Container::OnRemoved() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CFadeoutBullet::Container& CFadeoutBullet::Container::operator=(const CFadeoutBullet::Container& arg0) {
	return _op_assign_4(this, arg0);
}
CFadeoutBullet::Container& CFadeoutBullet::Container::_op_assign_4(CFadeoutBullet::Container* pThis, const CFadeoutBullet::Container& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CFadeoutBullet::OnRemovedFunc::operator()(CFadeoutBullet& arg0) {
	return _op_call_0(this, arg0);
}
int32_t CFadeoutBullet::OnRemovedFunc::_op_call_0(CFadeoutBullet::OnRemovedFunc* pThis, CFadeoutBullet& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
