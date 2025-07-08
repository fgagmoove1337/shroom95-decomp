#include "ext_field.h"

#include <pcom/xcom_ptr.h>

void Field::SkillInfo::SetFieldType(long _nFieldType)
{
    nFieldType = _nFieldType;
}

void Field::SkillInfo::Parse(_x_com_ptr<IWzProperty> pPropSkill)
{
}