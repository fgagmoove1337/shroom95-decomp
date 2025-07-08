// PortalList.cpp
#include "PortalList.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<PORTAL>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_PORTAL{};

#include "PortalList_regen.ipp"

PORTAL::~PORTAL()
{
    UNIMPLEMENTED; // _dtor_0();
}

void PORTAL::_dtor_0()
{
    return __sub_002AB960(this, nullptr);
}

PORTAL::PORTAL(const PORTAL& arg0)
{
    _ctor_1(arg0);
}

void PORTAL::_ctor_1(const PORTAL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PORTAL::PORTAL()
{
}

void PORTAL::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t PORTAL::IsChangable()
{
    return __sub_00503430(this, nullptr);
}

PORTAL& PORTAL::operator=(const PORTAL& arg0)
{
    return _op_assign_4(this, arg0);
}

PORTAL& PORTAL::_op_assign_4(PORTAL* pThis, const PORTAL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPortalList::~CPortalList()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CPortalList::_dtor_0()
{
    return __sub_002ABB40(this, nullptr);
}

CPortalList::CPortalList(const CPortalList& arg0)
{
    _ctor_1(arg0);
}

void CPortalList::_ctor_1(const CPortalList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPortalList::CPortalList()
{
    //UNIMPLEMENTED; //_ctor_0();
}

void CPortalList::_ctor_0()
{
    return __sub_002ABAE0(this, nullptr);
}

void CPortalList::RestorePortal(CField* pField, _x_com_ptr<IWzProperty> pPropPortal)
{
    __sub_002AD3C0(this, nullptr, pField, CreateNakedParam(pPropPortal));
}

const PORTAL* CPortalList::FindPortal(long x, long y, long nXrange)
{
    return __sub_002AB230(this, nullptr, x, y, nXrange);
}

const PORTAL* CPortalList::FindPortalByName(const char* sName)
{
    return __sub_002AB2C0(this, nullptr, sName);
}

const PORTAL* CPortalList::FindPortal_Collision(long x, long y)
{
    return __sub_002AB310(this, nullptr, x, y);
}

const PORTAL* CPortalList::FindPortal_Visible(long x, long y, long nXrange)
{
    return __sub_002AB3B0(this, nullptr, x, y, nXrange);
}

ZRef<PORTAL> CPortalList::FindPortal_Hidden(long x, long y, long nXrange)
{
    ZRef<PORTAL> ret;
    return *__sub_002AB5D0(this, nullptr, &ret, x, y, nXrange);
}

const PORTAL* CPortalList::GetPortal(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CPortalList::GetPortalCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CPortalList::SetHiddenPortal(ZRef<PORTAL> pPortal)
{
    __sub_002AC860(this, nullptr, CreateNakedParam(pPortal));
}

void CPortalList::UpdateHiddenPortal()
{
    __sub_002AD010(this, nullptr);
}

_x_com_ptr<IWzProperty> CPortalList::GetPropPV()
{
    if (m_pPropPV)
    {
        return m_pPropPV;
    }
    auto& sp = StringPool::GetInstance();
    auto& rm = get_rm();
    auto prop = rm->GetObjectT<IWzProperty>(sp.GetBSTR(0x6da));

    auto subProp = prop->GetItemT<IWzProperty>(sp.GetBSTR(0x5ee));
    auto subProp1 = subProp->GetItemT<IWzProperty>(sp.GetBSTR(0x6db));
    auto subProp2 = subProp1->GetItemT<IWzProperty>(sp.GetBSTR(0x6d9));

    m_pPropPV = subProp2;
    return m_pPropPV;
    //return __sub_002ABC90(this, nullptr);
}

_x_com_ptr<IWzProperty> CPortalList::GetPropPH()
{
    return __sub_002AC080(this, nullptr);
}

_x_com_ptr<IWzProperty> CPortalList::GetPropPSH()
{
    return __sub_002AC470(this, nullptr);
}

unsigned long CPortalList::GetCRC()
{
    return m_dwPortalCrc;
}

CPortalList& CPortalList::operator=(const CPortalList& arg0)
{
    return _op_assign_17(this, arg0);
}

CPortalList& CPortalList::_op_assign_17(CPortalList* pThis, const CPortalList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long __cdecl GETCRC32String(ZXString<char> str, unsigned long dwInit)
{
    return __sub_002AB880(CreateNakedParam(str), dwInit);
}
