// StringPolicy.cpp
#include "StringPolicy.hpp"
#include "StringPolicy_regen.ipp"

 CCurseProcess::~CCurseProcess() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCurseProcess::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCurseProcess::CCurseProcess() {
	UNIMPLEMENTED; //_ctor_1();
}
void CCurseProcess::_ctor_1() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CCurseProcess::ProcessString(char* sString, int32_t* pbFiltered, int32_t bIgnoreNewLine) {
	return __sub_003477F0(sString, pbFiltered, bIgnoreNewLine);
}
int32_t __cdecl CCurseProcess::GetSwindleWarning(char* arg0, ZXString<char>& arg1) {
	return __sub_00347BC0(arg0, arg1);
}
char* __cdecl CCurseProcess::GetField(const char* arg0, int32_t arg1, char* arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
char* __cdecl CCurseProcess::SearchSubstring(char* sString, const char* sWord) {
	return __sub_003469E0(sString, sWord);
}
void __cdecl CCurseProcess::FilterChar(const char* sSrc, char* sDst, const char* sChars, int32_t bIgnoreNewLine) {
	__sub_00346A50(sSrc, sDst, sChars, bIgnoreNewLine);
}
void __cdecl CCurseProcess::MergeByInsertion(const char* sSrc, char* sDst, const char* sSkip) {
	__sub_00346AB0(sSrc, sDst, sSkip);
}
int32_t __cdecl CCurseProcess::IsGood(char* sString, int32_t bIgnoreNewLine) {
	return __sub_00346B80(sString, bIgnoreNewLine);
}
char* __cdecl CCurseProcess::ConvertString(char* sString, int32_t bIgnoreNewLine) {
	return __sub_00346C50(sString, bIgnoreNewLine);
}
int32_t __cdecl CCurseProcess::IsCharEqual(char chr1, char chr2) {
	return __sub_00346980(chr1, chr2);
}
const char* __cdecl CCurseProcess::Strchr(const char* str, char chr) {
	return __sub_003469B0(str, chr);
}

int32_t __cdecl is_valid_character_name(const ZXString<char>& arg0, int32_t arg1) {
	//TODO(crash) broken fix this return __sub_00346F20(arg0, arg1);
 	return 1;
}
