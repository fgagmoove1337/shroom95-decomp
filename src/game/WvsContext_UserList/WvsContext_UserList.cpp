// WvsContext_UserList.cpp
#include "WvsContext_UserList.hpp"
#include "WvsContext_UserList_regen.ipp"

 PARTYSERACH_SETTING::PARTYSERACH_SETTING() {
	//TODO UNIMPLEMENTED; //_ctor_0();
}
void PARTYSERACH_SETTING::_ctor_0() {
	return __sub_0060FDE0(this, nullptr);
}
void PARTYSERACH_SETTING::Clear() {
	__sub_0060FD60(this, nullptr);
}

void __cdecl InsertionSort_ZXString_char__Friend_GroupAscComp_S_(ZArray<ZXString<char> >& a, int32_t nFrom, int32_t nTo, Friend_GroupAscComp_S& comp) {
	return __sub_006109E0(a, nFrom, nTo, comp);
}
int32_t __cdecl is_online(const GW_Friend& f, int32_t bListenBlocked) {
	return __sub_0060FD30(f, bListenBlocked);
}
