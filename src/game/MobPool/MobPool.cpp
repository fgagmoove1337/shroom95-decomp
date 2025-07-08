// MobPool.cpp
#include "MobPool.hpp"

#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZArray<ZRef<CMob>> FAKE_ZArray_CMob{};
static  ZArray<CMob *> FAKE_ZArray_CMobPtr{};

#include "MobPool_regen.ipp"

 CMobPool::~CMobPool() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMobPool::_dtor_0() {
	return __sub_00256C50(this, nullptr);
}
 CMobPool::CMobPool(const CMobPool& arg0) {
	_ctor_1( arg0);
}
void CMobPool::_ctor_1( const CMobPool& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMobPool::CMobPool() {
}
void CMobPool::_ctor_0() {
	return __sub_00256BD0(this, nullptr);
}
long CMobPool::FindHitMobInRect(const tagRECT& rc, CMob** apMob, long nMaxCount, CMob* pExcept, long nWishMobID, long rPoison, unsigned long dwWishTemplateID, int32_t bIncludeDazzledMob, int32_t bIncludeEscortMob) {
	return __sub_00257530(this, nullptr, rc, apMob, nMaxCount, pExcept, nWishMobID, rPoison, dwWishTemplateID, bIncludeDazzledMob, bIncludeEscortMob);
}
long CMobPool::FindHitMobInManyRects(const ZArray<tagRECT>& arc, CMob** apMob, unsigned long* adwDropFlag, long nMaxCount, long& nMaxAttackCount) {
	return __sub_00256230(this, nullptr, arc, apMob, adwDropFlag, nMaxCount, nMaxAttackCount);
}
long CMobPool::FindHitUndeadMobInRect(const tagRECT& rc, CMob** apMob, long nMaxCount) {
	return __sub_002563B0(this, nullptr, rc, apMob, nMaxCount);
}
long CMobPool::FindHitMobByChainlightning(CMob* nCount, CMob** apMobNear, long nMobCount, int32_t pt, long rc) {
	return __sub_00257770(this, nullptr, nCount, apMobNear, nMobCount, pt, rc);
}
long CMobPool::FindHitMobInTrapezoid_Plural(long pos1, long pMob, long nInsertIndex, long nSquareDistance, long pos2, ZArray<ZRef<CMob> >& arg5, long arg6, int32_t arg7) {
	return __sub_00257AA0(this, nullptr, pos1, pMob, nInsertIndex, nSquareDistance, pos2, arg5, arg6, arg7);
}
long CMobPool::FindHitMobInTriangle(ZRef<Triangle> pTriangle, CMob** apMob, long nMaxCount, int32_t bIncludeDazzledMob, int32_t bIncludeEscortMob) {
	return __sub_00257DC0(this, nullptr, CreateNakedParam(pTriangle), apMob, nMaxCount, bIncludeDazzledMob, bIncludeEscortMob);
}
long CMobPool::FindHitDazzledMobInRect(const tagRECT& rc, CMob** apMob, long nMaxCount) {
	return __sub_002581B0(this, nullptr, rc, apMob, nMaxCount);
}
CMob* CMobPool::FindHitMobInTrapezoid(long x0, long x1, long x2, long y, long r, int32_t bGuidedMob) {
	return __sub_00257930(this, nullptr, x0, x1, x2, y, r, bGuidedMob);
}
CMob* CMobPool::FindBodyAttackMob(const tagRECT& rc, int32_t bUserIsDarkSight) {
	return __sub_00256DB0(this, nullptr, rc, bUserIsDarkSight);
}
CMob* CMobPool::FindNearestMob(tagPOINT pt, int32_t bDazzled) {
	return __sub_00258320(this, nullptr, CreateNakedParam(pt), bDazzled);
}
CMob* CMobPool::FindMob(tagPOINT pt) {
	return __sub_002564D0(this, nullptr, CreateNakedParam(pt));
}
CMob* CMobPool::FindBossMob() {
	return __sub_00256570(this, nullptr);
}
int32_t CMobPool::CheckMobInTrapezoid(long x0, long x1, long x2, long y, long r, CMob* pMob) {
	return __sub_00255F80(this, nullptr, x0, x1, x2, y, r, pMob);
}
CMob* CMobPool::GetMob(unsigned long dwMobID) {
	return __sub_000413F0(this, nullptr, dwMobID);
}
CMob* CMobPool::GetMobDamagedByMob() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CMobPool::GetTimeLastHitMobDamagedByMob() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMobPool::SetTimeLastHitMobDamagedByMob(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMobPool::ResetGuidedMob(long nSkillID, unsigned long dwGuidedMobID) {
	__sub_002572E0(this, nullptr, nSkillID, dwGuidedMobID);
}
void CMobPool::Update() {
	__sub_00258610(this, nullptr);
}
void CMobPool::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00258E00(this, nullptr, nType, iPacket);
}
void CMobPool::LetMobChasePuppet(int32_t bChase, IVecCtrlOwner* pTarget) {
	__sub_00256670(this, nullptr, bChase, pTarget);
}
void CMobPool::CancelChaseTarget(CMob* pTarget) {
	__sub_002565E0(this, nullptr, pTarget);
}
unsigned long CMobPool::GetMobCrcKey() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CMobPool::OnMobPacket(long nType, CInPacket& iPacket) {
	__sub_002570B0(this, nullptr, nType, iPacket);
}
void CMobPool::OnMobEnterField(CInPacket& iPacket) {
	__sub_002589E0(this, nullptr, iPacket);
}
void CMobPool::OnMobLeaveField(CInPacket& iPacket) {
	__sub_00258B90(this, nullptr, iPacket);
}
void CMobPool::OnMobChangeController(CInPacket& iPacket) {
	__sub_00258D10(this, nullptr, iPacket);
}
void CMobPool::OnMobCrcKeyChanged(CInPacket& iPacket) {
	__sub_00257230(this, nullptr, iPacket);
}
void CMobPool::SetLocalMob(long nLevel, unsigned long dwMobId, long nCalcDamageIndex, CInPacket& iPacket) {
	__sub_00258490(this, nullptr, nLevel, dwMobId, nCalcDamageIndex, iPacket);
}
void CMobPool::SetRemoteMob(unsigned long dwMobId) {
	__sub_00256D20(this, nullptr, dwMobId);
}
void CMobPool::RemoveAllMob() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMobPool& CMobPool::operator=(const CMobPool& arg0) {
	return _op_assign_34(this, arg0);
}
CMobPool& CMobPool::_op_assign_34(CMobPool* pThis, const CMobPool& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

int32_t __cdecl in_triangle_1(tagPOINT& p, ZRef<Triangle> pTriangle) {
	return __sub_00256B80(p, CreateNakedParam(pTriangle));
}

int32_t __cdecl in_triangle_0(struct tagPOINT *p, struct tagPOINT *a, struct tagPOINT *b, struct tagPOINT *c) {
	//TODO
	return 0;
}
