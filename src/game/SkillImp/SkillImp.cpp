// SkillImp.cpp
#include "SkillImp.hpp"
#include "SkillImp_regen.ipp"

 CSkill_HitAni::~CSkill_HitAni() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSkill_HitAni::_dtor_0() {
	return __sub_002ECBC0(this, nullptr);
}
 CSkill_HitAni::CSkill_HitAni(const CSkill_HitAni& arg0) {
	_ctor_1( arg0);
}
void CSkill_HitAni::_ctor_1( const CSkill_HitAni& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSkill_HitAni::CSkill_HitAni(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID, long nAction, long nMobCount, const ATTACKINFO* aAttackInfo, long nBulletItemID) {
	_ctor_0( pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, aAttackInfo, nBulletItemID);
}
void CSkill_HitAni::_ctor_0( const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID, long nAction, long nMobCount, const ATTACKINFO* aAttackInfo, long nBulletItemID) {
	return __sub_002ECA00(this, nullptr, pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, aAttackInfo, nBulletItemID);
}
Ztl_bstr_t CSkill_HitAni::operator()(long nOrder) {
	return _op_call_3(this, nOrder);
}
Ztl_bstr_t CSkill_HitAni::_op_call_3(CSkill_HitAni* pThis, long nOrder) {
	Ztl_bstr_t ret;
	return *__sub_0034FC50(pThis, nullptr, &ret, nOrder);
}
Ztl_bstr_t CSkill_HitAni::GetSubHitAni(long nOrder) {
	Ztl_bstr_t ret;
	return *__sub_0034FC50(this, nullptr, &ret, nOrder);
}
void CSkill_HitAni::CreateDefault(const SKILLENTRY* pSkill, unsigned char nCharLevel, long nSLV, long nWeaponItemID, long nAction, long nMobCount, long nBulletItemID) {
	__sub_002EC010(this, nullptr, pSkill, nCharLevel, nSLV, nWeaponItemID, nAction, nMobCount, nBulletItemID);
}
void CSkill_HitAni::CreateFirst(const SKILLENTRY* pSkill, long nMobCount) {
	__sub_002EBD80(this, nullptr, pSkill, nMobCount);
}
void CSkill_HitAni::CreateShuffle(const SKILLENTRY* pSkill, long nSLV, long nMobCount, const ATTACKINFO* aAttackInfo) {
	__sub_002EBE20(this, nullptr, pSkill, nSLV, nMobCount, aAttackInfo);
}
void CSkill_HitAni::CreateMultipleLayer(const SKILLENTRY* pSkill, long nIdx) {
	__sub_002EC7D0(this, nullptr, pSkill, nIdx);
}
void CSkill_HitAni::CreateForFlashRain(const SKILLENTRY* pSkill, long nMobCount) {
	__sub_002EBEF0(this, nullptr, pSkill, nMobCount);
}
CSkill_HitAni& CSkill_HitAni::operator=(const CSkill_HitAni& arg0) {
	return _op_assign_10(this, arg0);
}
CSkill_HitAni& CSkill_HitAni::_op_assign_10(CSkill_HitAni* pThis, const CSkill_HitAni& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

int32_t __cdecl is_correct_bullet_cashitem(long nWeaponItemID, long nItemID) {
	return __sub_002EBCF0(nWeaponItemID, nItemID);
}
