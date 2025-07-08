// NpcPool.cpp
#include "NpcPool.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "NpcPool_regen.ipp"

CNpcPool::~CNpcPool()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CNpcPool::_dtor_0()
{
    //return __sub_00279110(this, nullptr);
    this->~CNpcPool();

}

CNpcPool::CNpcPool(const CNpcPool& arg0)
{
    _ctor_1(arg0);
}

void CNpcPool::_ctor_1(const CNpcPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcPool::CNpcPool()
{
    ms_pInstance = this;
}

void CNpcPool::_ctor_0()
{
    new(this) CNpcPool();
    //return __sub_00279090(this, nullptr);
}

CNpc* CNpcPool::FindNpc(const tagPOINT& pt, long nRadius)
{
    return __sub_00278900(this, nullptr, pt, nRadius);
}

CNpc* CNpcPool::FindNpc(const tagPOINT& pt)
{
    return __sub_002787F0(this, nullptr, pt);
}

void CNpcPool::Update()
{
    __sub_00278AF0(this, nullptr);
}

void CNpcPool::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00279770(this, nullptr, nType, iPacket);
}

void CNpcPool::OnNpcPacket(long nType, CInPacket& iPacket)
{
    __sub_00279260(this, nullptr, nType, iPacket);
}

void CNpcPool::OnNpcTemplatePacket(long nType, CInPacket& iPacket)
{
    __sub_00278610(this, nullptr, nType, iPacket);
}

void CNpcPool::OnNpcEnterField(CInPacket& iPacket)
{
    //TODO(npcgame)
    __sub_00279680(this, nullptr, iPacket);
   /* auto id = iPacket.Decode4();
    uint32_t npc = 0;
    if (m_mNpc.GetAt(id, &))*/
}

void CNpcPool::OnNpcLeaveField(CInPacket& iPacket)
{
    __sub_002792C0(this, nullptr, iPacket);
}

void CNpcPool::OnNpcChangeController(CInPacket& iPacket)
{
    //TODO(pkt) __sub_00279730(this, nullptr, iPacket);
}

void CNpcPool::OnNpcImitateData(CInPacket& iPacket)
{
    __sub_00279500(this, nullptr, iPacket);
}

void CNpcPool::OnUpdateLimitedDisableInfo(CInPacket& iPacket)
{
    __sub_00279210(this, nullptr, iPacket);
}

void CNpcPool::SetLocalNpc(unsigned long dwNpcId, CInPacket& iPacket)
{
    __sub_00279440(this, nullptr, dwNpcId, iPacket);
}

void CNpcPool::SetRemoteNpc(unsigned long dwNpcId)
{
    __sub_002791A0(this, nullptr, dwNpcId);
}

void CNpcPool::RemoveAllNpc()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpc* CNpcPool::GetNpc(unsigned long dwNpcId)
{
    return __sub_00279020(this, nullptr, dwNpcId);
}

CNpcPool::NPCENTRY* CNpcPool::GetNpcEntry(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpc* CNpcPool::FindNpcByTemplateID(unsigned long dwTemplateID)
{
    return __sub_00278BD0(this, nullptr, dwTemplateID);
}

int32_t CNpcPool::IsNpcEnabled(unsigned long dwTemplateID)
{
    return __sub_00278C10(this, nullptr, dwTemplateID);
}

CNpcPool& CNpcPool::operator=(const CNpcPool& arg0)
{
    return _op_assign_21(this, arg0);
}

CNpcPool& CNpcPool::_op_assign_21(CNpcPool* pThis, const CNpcPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcPool::NPCENTRY::~NPCENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CNpcPool::NPCENTRY::_dtor_0()
{
    return __sub_00278FB0(this, nullptr);
}

CNpcPool::NPCENTRY::NPCENTRY(const CNpcPool::NPCENTRY& arg0)
{
    _ctor_1(arg0);
}

void CNpcPool::NPCENTRY::_ctor_1(const CNpcPool::NPCENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcPool::NPCENTRY::NPCENTRY()
{
}

void CNpcPool::NPCENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcPool::NPCENTRY& CNpcPool::NPCENTRY::operator=(const CNpcPool::NPCENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CNpcPool::NPCENTRY& CNpcPool::NPCENTRY::_op_assign_3(CNpcPool::NPCENTRY* pThis, const CNpcPool::NPCENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
