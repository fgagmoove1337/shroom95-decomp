// AnimationDisplayer.cpp
#include "AnimationDisplayer.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZRef_CStage{};

static ZRef<CAnimationDisplayer::PREPAREINFO> FAKE_ZRef_CAnimationDisplayer_PREPAREINFO{};
static ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>
FAKE_ZRef_CAnimationDisplayer_TAnimation_CAnimationDisplayer_CHAINLIGHTNINGINFO{};

#include "AnimationDisplayer_regen.ipp"

CAfterImageBullet::~CAfterImageBullet()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAfterImageBullet::_dtor_0()
{
    return __sub_0003B470(this, nullptr);
}

CAfterImageBullet::CAfterImageBullet(const CAfterImageBullet& arg0)
{
    _ctor_1(arg0);
}

void CAfterImageBullet::_ctor_1(const CAfterImageBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAfterImageBullet::CAfterImageBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                     _x_com_ptr<IWzVector2D> pVecTarget, int32_t bAfterImage, unsigned long tInterval,
                                     long nAlpha_Start)
{
    _ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget, bAfterImage, tInterval, nAlpha_Start);
}

void CAfterImageBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                _x_com_ptr<IWzVector2D> pVecTarget, int32_t bAfterImage, unsigned long tInterval,
                                long nAlpha_Start)
{
    return __sub_0003B3B0(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget), bAfterImage, tInterval, nAlpha_Start);
}

int32_t CAfterImageBullet::Update(long tCur)
{
    return __sub_00077AA0(this, nullptr, tCur);
}

CAfterImageBullet& CAfterImageBullet::operator=(const CAfterImageBullet& arg0)
{
    return _op_assign_4(this, arg0);
}

CAfterImageBullet& CAfterImageBullet::_op_assign_4(CAfterImageBullet* pThis, const CAfterImageBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::~CAnimationDisplayer()
{
}

void CAnimationDisplayer::_dtor_0()
{
    return __sub_000425C0(this, nullptr);
}

CAnimationDisplayer::CAnimationDisplayer(const CAnimationDisplayer& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::_ctor_1(const CAnimationDisplayer& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::CAnimationDisplayer()
{
    //TODO UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::_ctor_0()
{
    return __sub_00049010(this, nullptr);
}

_x_com_ptr<IWzGr2DLayer> __cdecl CAnimationDisplayer::LoadLayer(_x_com_ptr<IWzProperty> pProp, int32_t bFlip,
                                                                _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry,
                                                                _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha,
                                                                long magLevel)
{
    return __sub_0004A8F0(CreateNakedParam(pProp), bFlip, CreateNakedParam(pOrigin), rx, ry, CreateNakedParam(pOverlay),
                          z, alpha, magLevel);
}

_x_com_ptr<IWzGr2DLayer> __cdecl CAnimationDisplayer::LoadLayer(const wchar_t* sLayerUOL, int32_t bFlip,
                                                                _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry,
                                                                _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha,
                                                                long magLevel)
{
    return __sub_00051B10(sLayerUOL, bFlip, CreateNakedParam(pOrigin), rx, ry, CreateNakedParam(pOverlay), z, alpha,
                          magLevel);
}

_x_com_ptr<IWzGr2DLayer> __cdecl CAnimationDisplayer::LoadRandomLayer(const wchar_t* sLayerUOL, int32_t bFlip,
                                                                      _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry,
                                                                      _x_com_ptr<IWzGr2DLayer> pOverlay, long z,
                                                                      long alpha, long magLevel)
{
    return __sub_00051E50(sLayerUOL, bFlip, CreateNakedParam(pOrigin), rx, ry, CreateNakedParam(pOverlay), z, alpha,
                          magLevel);
}

_x_com_ptr<IWzGr2DLayer> __cdecl CAnimationDisplayer::LoadRotateLayer(_x_com_ptr<IWzProperty> pProp, int32_t bFlip,
                                                                      _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry,
                                                                      _x_com_ptr<IWzGr2DLayer> pOverlay, long z,
                                                                      long alpha, long magLevel, long nRotate,
                                                                      int32_t bRotateSelf)
{
    return __sub_0004AFB0(CreateNakedParam(pProp), bFlip, CreateNakedParam(pOrigin), rx, ry, CreateNakedParam(pOverlay),
                          z, alpha, magLevel, nRotate, bRotateSelf);
}

_x_com_ptr<IWzGr2DLayer> __cdecl CAnimationDisplayer::LoadSingleLayer(const wchar_t* sLayerUOL, int32_t bFlip,
                                                                      _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry,
                                                                      _x_com_ptr<IWzGr2DLayer> pOverlay, long z,
                                                                      long alpha, long magLevel)
{
    return __sub_0004C0C0(sLayerUOL, bFlip, CreateNakedParam(pOrigin), rx, ry, CreateNakedParam(pOverlay), z, alpha,
                          magLevel);
}

_x_com_ptr<IWzGr2DLayer> __cdecl CAnimationDisplayer::LoadSingleLayer(_x_com_ptr<IWzCanvas> pCanvas, int32_t bFlip,
                                                                      _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry,
                                                                      _x_com_ptr<IWzGr2DLayer> pOverlay, long z,
                                                                      long alpha, long magLevel)
{
    return __sub_0004BC10(CreateNakedParam(pCanvas), bFlip, CreateNakedParam(pOrigin), rx, ry,
                          CreateNakedParam(pOverlay), z, alpha, magLevel);
}

void __cdecl CAnimationDisplayer::LoadCanvas(_x_com_ptr<IWzGr2DLayer> pLayer, _x_com_ptr<IWzCanvas> pCanvas)
{
    __sub_00046E60(CreateNakedParam(pLayer), CreateNakedParam(pCanvas));
}

unsigned long __cdecl CAnimationDisplayer::CalcTotalDelay(_x_com_ptr<IWzGr2DLayer> pLayer)
{
    return __sub_000474B0(CreateNakedParam(pLayer));
}

void CAnimationDisplayer::RegisterOneTimeAnimation(_x_com_ptr<IWzGr2DLayer> pLayer, long tDelayBeforeStart,
                                                   _x_com_ptr<IWzGr2DLayer> pFlipOrigin)
{
    __sub_00044410(this, nullptr, CreateNakedParam(pLayer), tDelayBeforeStart, CreateNakedParam(pFlipOrigin));
}

void CAnimationDisplayer::RegisterRepeatAnimation(_x_com_ptr<IWzGr2DLayer> pLayer, long tDelay)
{
    __sub_00044620(this, nullptr, CreateNakedParam(pLayer), tDelay);
}

void CAnimationDisplayer::RegisterBulletAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2,
                                                  _x_com_ptr<IWzVector2D> pVecTarget, long z,
                                                  Ztl_bstr_t sBulletEffectUOL, long nWeaponItemID, long nBulletItemID)
{
    __sub_00055410(this, nullptr, tStart, tEnd, CreateNakedParam(pt1), CreateNakedParam(pt2),
                   CreateNakedParam(pVecTarget), z, CreateNakedParam(sBulletEffectUOL), nWeaponItemID, nBulletItemID);
}

void CAnimationDisplayer::RegisterMagicBulletAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2,
                                                       _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL,
                                                       int32_t bAfterImage)
{
    __sub_00055570(this, nullptr, tStart, tEnd, CreateNakedParam(pt1), CreateNakedParam(pt2),
                   CreateNakedParam(pVecTarget), z, CreateNakedParam(sBallUOL), bAfterImage);
}

void CAnimationDisplayer::RegisterAbsorbItemAnimation(unsigned long dwCharacterID, unsigned long dwMobID, tagPOINT pt,
                                                      _x_com_ptr<IWzGr2DLayer> pLayer, long nPetIndex)
{
    __sub_000446B0(this, nullptr, dwCharacterID, dwMobID, CreateNakedParam(pt), CreateNakedParam(pLayer), nPetIndex);
}

void CAnimationDisplayer::RegisterFallingAnimation(const wchar_t* sUOL, int32_t b, const tagRECT& rcStart, long tStart)
{
    __sub_00059B40(this, nullptr, sUOL, b, rcStart, tStart);
}

void CAnimationDisplayer::RegisterExplosionAnimation(const wchar_t* sUOL, const tagRECT& rcArea)
{
    __sub_0005A1D0(this, nullptr, sUOL, rcArea);
}

void CAnimationDisplayer::RegisterFireCrackerAnimation(const wchar_t* sUOL, const tagRECT& rcArea, long tUpdateInterval,
                                                       long nUpdateCount, long tUpdateNext, long tDuration)
{
    __sub_0005A6E0(this, nullptr, sUOL, rcArea, tUpdateInterval, nUpdateCount, tUpdateNext, tDuration);
}

void CAnimationDisplayer::RemoveFireCrackerAnimation()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::IsFireCrackerRunning()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CAnimationDisplayer::RemoveNewYearAnimation()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CAnimationDisplayer::RegisterNewYearAnimation(const wchar_t* sUOL, ZXString<unsigned short> sSoundUOL,
                                                   const tagRECT& rcArea, long tUpdateInterval, long nUpdateCount,
                                                   long tUpdateNext, long tDuration)
{
    __sub_000556F0(this, nullptr, sUOL, CreateNakedParam(sSoundUOL), rcArea, tUpdateInterval, nUpdateCount, tUpdateNext,
                   tDuration);
}

void CAnimationDisplayer::RegisterFootHoldAnimation(const wchar_t* sUOL, const tagRECT& rcArea, long tStartDelay,
                                                    long tDuration, long a0, long a1, int32_t bRandomPos)
{
    __sub_0005A990(this, nullptr, sUOL, rcArea, tStartDelay, tDuration, a0, a1, bRandomPos);
}

ZRef<AnimationState> CAnimationDisplayer::RegisterFollowAnimation(const CAnimationDisplayer::FOLLOWINFO& fi)
{
    ZRef<AnimationState> ret;
    return *__sub_0005AC50(this, nullptr, &ret, fi);
}

ZRef<AnimationState> CAnimationDisplayer::RegisterMotionBlurAnimation(_x_com_ptr<IWzGr2DLayer> pOverlay,
                                                                      ZArray<_x_com_ptr<IWzGr2DLayer>>& apLayer,
                                                                      long tDelay, long tInterval, unsigned char nAlpha)
{
    ZRef<AnimationState> ret;
    return *__sub_0005AD00(this, nullptr, &ret, CreateNakedParam(pOverlay), apLayer, tDelay, tInterval, nAlpha);
}

void CAnimationDisplayer::RegisterFadeInOutAnimation(long tFadeIn, long tDelay, long tFadeOut, long z, long nAlpha)
{
    __sub_00044770(this, nullptr, tFadeIn, tDelay, tFadeOut, z, nAlpha);
}

void CAnimationDisplayer::RemoveAllFadeInAnimation(long tFadeOut)
{
    __sub_00041550(this, nullptr, tFadeOut);
}

void CAnimationDisplayer::SetLocalFadeLayer(long z, long nAlpha)
{
    __sub_00042870(this, nullptr, z, nAlpha);
}

void CAnimationDisplayer::ResetLocalFadeLayer()
{
    __sub_0003B6F0(this, nullptr);
}

void CAnimationDisplayer::RegisterMobSwallowAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2,
                                                      _x_com_ptr<IWzVector2D> pVecTarget, long z,
                                                      _x_com_ptr<IWzCanvas> pCanvas, int32_t bAfterImage)
{
    __sub_000559B0(this, nullptr, tStart, tEnd, CreateNakedParam(pt1), CreateNakedParam(pt2),
                   CreateNakedParam(pVecTarget), z, CreateNakedParam(pCanvas), bAfterImage);
}

void CAnimationDisplayer::RegisterMobBulletAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2,
                                                     _x_com_ptr<IWzVector2D> pVecTarget, long z,
                                                     unsigned long dwMobTemplateID, Ztl_bstr_t sBallUOL,
                                                     int32_t bAfterImage)
{
    __sub_00055B10(this, nullptr, tStart, tEnd, CreateNakedParam(pt1), CreateNakedParam(pt2),
                   CreateNakedParam(pVecTarget), z, dwMobTemplateID, CreateNakedParam(sBallUOL), bAfterImage);
}

void CAnimationDisplayer::RemoveAll()
{
    __sub_000415A0(this, nullptr);
}

void CAnimationDisplayer::RegisterPrepareAnimation(unsigned long dwCharacterID,
                                                   ZArray<_x_com_ptr<IWzGr2DLayer>>& apLayer,
                                                   _x_com_ptr<IWzGr2DLayer> pFlipLayer)
{
    __sub_0005B420(this, nullptr, dwCharacterID, apLayer, CreateNakedParam(pFlipLayer));
}

void CAnimationDisplayer::RemovePrepareAnimation(unsigned long dwCharacterID)
{
    __sub_00041B50(this, nullptr, dwCharacterID);
}

void CAnimationDisplayer::RegisterHookingChainAnimation(long tAttack, unsigned long dwCharacterID,
                                                        unsigned long dwMobID, int32_t bLeft, long z,
                                                        Ztl_bstr_t sImageUOL)
{
    __sub_0005CBD0(this, nullptr, tAttack, dwCharacterID, dwMobID, bLeft, z, CreateNakedParam(sImageUOL));
}

void CAnimationDisplayer::RegisterChainlightningAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, long z,
                                                          Ztl_bstr_t sBallUOL, int32_t bOrdered)
{
    __sub_0005D1B0(this, nullptr, tStart, tEnd, CreateNakedParam(pt1), CreateNakedParam(pt2), z,
                   CreateNakedParam(sBallUOL), bOrdered);
}

void CAnimationDisplayer::RegisterTeslacoilAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, long z,
                                                     Ztl_bstr_t sBallUOL, unsigned long dwKey)
{
    __sub_0005D650(this, nullptr, tStart, tEnd, CreateNakedParam(pt1), CreateNakedParam(pt2), z,
                   CreateNakedParam(sBallUOL), dwKey);
}

void CAnimationDisplayer::RemoveTeslacoilAnimation(unsigned long dwKey)
{
    __sub_00041C00(this, nullptr, dwKey);
}

void CAnimationDisplayer::RegisterUserStateAnimation(_x_com_ptr<IWzGr2DLayer> pStartLayer,
                                                     _x_com_ptr<IWzGr2DLayer> pRepeatLayer,
                                                     _x_com_ptr<IWzGr2DLayer> pEndLayer, unsigned long dwCharacterID)
{
    __sub_00044D30(this, nullptr, CreateNakedParam(pStartLayer), CreateNakedParam(pRepeatLayer),
                   CreateNakedParam(pEndLayer), dwCharacterID);
}

void CAnimationDisplayer::Update()
{
    __sub_000498C0(this, nullptr);
}

void CAnimationDisplayer::NonFieldUpdate(long tCur)
{
    __sub_0005B6C0(this, nullptr, tCur);
}

void CAnimationDisplayer::UpdateBeforeUserUpdate()
{
    __sub_000498C0(this, nullptr);
}

void CAnimationDisplayer::SetCenterOrigin(_x_com_ptr<IWzVector2D> pOrigin)
{
    __sub_00042E10(this, nullptr, CreateNakedParam(pOrigin));
}

void CAnimationDisplayer::Effect_HP(long arg0, long arg1, long arg2, long arg3, int32_t arg4)
{
    __sub_00044EB0(this, nullptr, arg0, arg1, arg2, arg3, arg4);
}

void CAnimationDisplayer::Effect_Guard(long lCenterLeft, long lCenterTop, long lColorType)
{
    __sub_000498E0(this, nullptr, lCenterLeft, lCenterTop, lColorType);
}

void CAnimationDisplayer::Effect_Miss(long lCenterLeft, long lCenterTop, long lColorType)
{
    __sub_00049A50(this, nullptr, lCenterLeft, lCenterTop, lColorType);
}

void CAnimationDisplayer::Effect_Catch(long lCenterLeft, long lCenterTop, int32_t bSuccess, long tDelay)
{
    __sub_0004FDB0(this, nullptr, lCenterLeft, lCenterTop, bSuccess, tDelay);
}

void CAnimationDisplayer::Effect_General(const wchar_t* sEffect, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                         long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z)
{
    __sub_00055D10(this, nullptr, sEffect, bFlip, CreateNakedParam(pOrigin), rx, ry, CreateNakedParam(pOverlay), z);
}

void CAnimationDisplayer::Effect_ApplyStartDelay(const wchar_t* arg0, int32_t arg1, _x_com_ptr<IWzVector2D> arg2,
                                                 long arg3, long arg4, _x_com_ptr<IWzGr2DLayer> arg5, long arg6,
                                                 long arg7)
{
    __sub_00049BC0(this, nullptr, arg0, arg1, CreateNakedParam(arg2), arg3, arg4, CreateNakedParam(arg5), arg6, arg7);
}

void CAnimationDisplayer::Effect_Reserved(const wchar_t* arg0, long arg1, long arg2, long arg3)
{
    __sub_0005BF90(this, nullptr, arg0, arg1, arg2, arg3);
}

void CAnimationDisplayer::Effect_Squib(_x_com_ptr<IWzProperty> pVisual, double dX, double dY, long width, long height,
                                       ZXString<unsigned short> sSound, long duration, double probability, long z)
{
    __sub_00055F30(this, nullptr, CreateNakedParam(pVisual), dX, dY, width, height, CreateNakedParam(sSound), duration,
                   probability, z);
}

void CAnimationDisplayer::Effect_SkillUse(const wchar_t* sEffect, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                          _x_com_ptr<IWzGr2DLayer> pOverlay, long nDelayRate, long nLast, long z,
                                          long x, long y, int32_t bAutoFlip)
{
    __sub_00059100(this, nullptr, sEffect, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), nDelayRate,
                   nLast, z, x, y, bAutoFlip);
}

void CAnimationDisplayer::Effect_Quest(long nEffect, _x_com_ptr<IWzVector2D> pOrigin)
{
    __sub_00059410(this, nullptr, nEffect, CreateNakedParam(pOrigin));
}

void CAnimationDisplayer::Effect_Tremble(double dTrembleForce, int32_t bHeavyNShortTremble, long tDelay,
                                         long tAddEffectTime, int32_t bEnforceTremble)
{
    __sub_00039A70(this, nullptr, dTrembleForce, bHeavyNShortTremble, tDelay, tAddEffectTime, bEnforceTremble);
}

void CAnimationDisplayer::Effect_SkillPrepare(unsigned long dwCharacterID, const wchar_t* sEffect, int32_t bFlip,
                                              _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay,
                                              long nDelayRate, long nLast, int32_t bRepeat, long x, long y)
{
    __sub_0005B840(this, nullptr, dwCharacterID, sEffect, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay),
                   nDelayRate, nLast, bRepeat, x, y);
}

void CAnimationDisplayer::Effect_ItemUnrelease(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                               _x_com_ptr<IWzGr2DLayer> pOverlay)
{
    __sub_00056360(this, nullptr, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay));
}

void CAnimationDisplayer::Effect_ItemUpgrade(int32_t arg0, _x_com_ptr<IWzVector2D> arg1, _x_com_ptr<IWzGr2DLayer> arg2,
                                             int32_t arg3, int32_t arg4)
{
    __sub_000567F0(this, nullptr, arg0, CreateNakedParam(arg1), CreateNakedParam(arg2), arg3, arg4);
}

void CAnimationDisplayer::Effect_ItemMake(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                          _x_com_ptr<IWzGr2DLayer> pOverlay, long nResult)
{
    __sub_00056F80(this, nullptr, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), nResult);
}

void CAnimationDisplayer::Effect_BuffItemUse(const wchar_t* sEffect, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                             long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z)
{
    __sub_00056020(this, nullptr, sEffect, bFlip, CreateNakedParam(pOrigin), rx, ry, CreateNakedParam(pOverlay), z);
}

void CAnimationDisplayer::Effect_ByItem(long lCenterLeft, long lCenterTop, long nItemID, int32_t bSuccess)
{
    __sub_0004F330(this, nullptr, lCenterLeft, lCenterTop, nItemID, bSuccess);
}

void CAnimationDisplayer::Effect_EnchantItemUpgrade(const wchar_t* arg0, int32_t arg1, _x_com_ptr<IWzVector2D> arg2,
                                                    _x_com_ptr<IWzGr2DLayer> arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CAnimationDisplayer::Effect_SkillBookUsed(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                               _x_com_ptr<IWzGr2DLayer> pOverlay, int32_t bSuccess)
{
    __sub_000581B0(this, nullptr, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), bSuccess);
}

void CAnimationDisplayer::Effect_RewardRullet(long arg0, long arg1, long arg2, _x_com_ptr<IWzVector2D> arg3)
{
    __sub_00058820(this, nullptr, arg0, arg1, arg2, CreateNakedParam(arg3));
}

void CAnimationDisplayer::Effect_Cool(long lCenterLeft, long lCenterTop)
{
    __sub_0004A700(this, nullptr, lCenterLeft, lCenterTop);
}

void CAnimationDisplayer::Effect_BasicFloat(long lCenterLeft, long lCenterTop, _x_com_ptr<IWzCanvas> pCanvas)
{
    __sub_00046530(this, nullptr, lCenterLeft, lCenterTop, CreateNakedParam(pCanvas));
}

void CAnimationDisplayer::Effect_ViciousHammer(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                               _x_com_ptr<IWzGr2DLayer> pOverlay, long nFinished)
{
    __sub_00057210(this, nullptr, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), nFinished);
}

void CAnimationDisplayer::Effect_Vega(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay,
                                      unsigned long dwMode)
{
    __sub_00057600(this, nullptr, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), dwMode);
}

void CAnimationDisplayer::Effect_CashItemGachapon(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin,
                                                  _x_com_ptr<IWzGr2DLayer> pOverlay, int32_t bJackpotAni)
{
    __sub_00057F30(this, nullptr, bFlip, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), bJackpotAni);
}

void CAnimationDisplayer::Effect_FullChargedAngerGauge(ZXString<unsigned short> sUOL, _x_com_ptr<IWzVector2D> pOrigin,
                                                       _x_com_ptr<IWzGr2DLayer> pOverlay)
{
    __sub_00057D00(this, nullptr, CreateNakedParam(sUOL), CreateNakedParam(pOrigin), CreateNakedParam(pOverlay));
}

_x_com_ptr<IWzGr2DLayer> CAnimationDisplayer::Effect_Transformed(_x_com_ptr<IWzProperty> pEffect, double x, double y,
                                                                 _x_com_ptr<IWzGr2DLayer> pOverlay, long z,
                                                                 double scale, double angle)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_00050BA0(this, nullptr, &ret, CreateNakedParam(pEffect), x, y, CreateNakedParam(pOverlay), z, scale,
                           angle);
}

void CAnimationDisplayer::Effect_GoldHammer(int32_t arg0, _x_com_ptr<IWzVector2D> arg1, _x_com_ptr<IWzGr2DLayer> arg2,
                                            long arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CAnimationDisplayer::Effect_QuestDeliveryItemUse(long nItemID, _x_com_ptr<IWzVector2D> pOrigin,
                                                      _x_com_ptr<IWzGr2DLayer> pOverlay, unsigned long dwCharacterID)
{
    __sub_00059530(this, nullptr, nItemID, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), dwCharacterID);
}

void CAnimationDisplayer::MakeLayer_FootHold(const wchar_t* sEffect, const tagRECT& rcArea,
                                             ZArray<_x_com_ptr<IWzGr2DLayer>>& apLayer, long nEffectDistance,
                                             int32_t bRandomPos)
{
    __sub_000515F0(this, nullptr, sEffect, rcArea, apLayer, nEffectDistance, bRandomPos);
}

CAnimationDisplayer& CAnimationDisplayer::operator=(const CAnimationDisplayer& arg0)
{
    return _op_assign_74(this, arg0);
}

CAnimationDisplayer& CAnimationDisplayer::_op_assign_74(CAnimationDisplayer* pThis, const CAnimationDisplayer& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FOLLOWINFO::~FOLLOWINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::FOLLOWINFO::_dtor_0()
{
    return __sub_000439A0(this, nullptr);
}

CAnimationDisplayer::FOLLOWINFO::FOLLOWINFO(const CAnimationDisplayer::FOLLOWINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::FOLLOWINFO::_ctor_1(const CAnimationDisplayer::FOLLOWINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FOLLOWINFO::FOLLOWINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::FOLLOWINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::FOLLOWINFO::Update(long tCur)
{
    return __sub_0004E4F0(this, nullptr, tCur);
}

CAnimationDisplayer::FOLLOWINFO& CAnimationDisplayer::FOLLOWINFO::operator=(
    const CAnimationDisplayer::FOLLOWINFO& __that)
{
    return _op_assign_4(this, __that);
}

CAnimationDisplayer::FOLLOWINFO& CAnimationDisplayer::FOLLOWINFO::_op_assign_4(
    CAnimationDisplayer::FOLLOWINFO* pThis, const CAnimationDisplayer::FOLLOWINFO& __that)
{
    return __sub_00043B80(pThis, nullptr, __that);
}

CAnimationDisplayer::ONETIMEINFO::~ONETIMEINFO()
{
}

void CAnimationDisplayer::ONETIMEINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::ONETIMEINFO::ONETIMEINFO(const CAnimationDisplayer::ONETIMEINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::ONETIMEINFO::_ctor_1(const CAnimationDisplayer::ONETIMEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::ONETIMEINFO::ONETIMEINFO()
{
}

void CAnimationDisplayer::ONETIMEINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::ONETIMEINFO::Update(long tCur)
{
    return __sub_00039370(this, nullptr, tCur);
}

CAnimationDisplayer::ONETIMEINFO& CAnimationDisplayer::ONETIMEINFO::operator=(
    const CAnimationDisplayer::ONETIMEINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::ONETIMEINFO& CAnimationDisplayer::ONETIMEINFO::_op_assign_4(
    CAnimationDisplayer::ONETIMEINFO* pThis, const CAnimationDisplayer::ONETIMEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::REPEATINFO::~REPEATINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::REPEATINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::REPEATINFO::REPEATINFO(const CAnimationDisplayer::REPEATINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::REPEATINFO::_ctor_1(const CAnimationDisplayer::REPEATINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::REPEATINFO::REPEATINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::REPEATINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::REPEATINFO::Update(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::REPEATINFO& CAnimationDisplayer::REPEATINFO::operator=(const CAnimationDisplayer::REPEATINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::REPEATINFO& CAnimationDisplayer::REPEATINFO::_op_assign_4(
    CAnimationDisplayer::REPEATINFO* pThis, const CAnimationDisplayer::REPEATINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::USERSTATEINFO::~USERSTATEINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::USERSTATEINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::USERSTATEINFO::USERSTATEINFO(const CAnimationDisplayer::USERSTATEINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::USERSTATEINFO::_ctor_1(const CAnimationDisplayer::USERSTATEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::USERSTATEINFO::USERSTATEINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::USERSTATEINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::USERSTATEINFO::Update(long tCur)
{
    return __sub_00039600(this, nullptr, tCur);
}

CAnimationDisplayer::USERSTATEINFO& CAnimationDisplayer::USERSTATEINFO::operator=(
    const CAnimationDisplayer::USERSTATEINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::USERSTATEINFO& CAnimationDisplayer::USERSTATEINFO::_op_assign_4(
    CAnimationDisplayer::USERSTATEINFO* pThis, const CAnimationDisplayer::USERSTATEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::NormalBullet::~NormalBullet()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::NormalBullet::_dtor_0()
{
    return __sub_00047840(this, nullptr);
}

CAnimationDisplayer::NormalBullet::NormalBullet(const CAnimationDisplayer::NormalBullet& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::NormalBullet::_ctor_1(const CAnimationDisplayer::NormalBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::NormalBullet::NormalBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                                _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBulletEffectUOL,
                                                long nWeaponItemID, long nBulletItemID)
{
    _ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget, z, sBulletEffectUOL, nWeaponItemID, nBulletItemID);
}

void CAnimationDisplayer::NormalBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                                _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBulletEffectUOL,
                                                long nWeaponItemID, long nBulletItemID)
{
    return __sub_00047760(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget), z, CreateNakedParam(sBulletEffectUOL), nWeaponItemID,
                          nBulletItemID);
}

_x_com_ptr<IWzGr2DLayer> CAnimationDisplayer::NormalBullet::PrepareBulletLayer(
    _x_com_ptr<IWzVector2D> arg0, int32_t arg1)
{
    return __sub_0004C380(this, nullptr, CreateNakedParam(arg0), arg1);
}

CAnimationDisplayer::NormalBullet& CAnimationDisplayer::NormalBullet::operator=(
    const CAnimationDisplayer::NormalBullet& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::NormalBullet& CAnimationDisplayer::NormalBullet::_op_assign_4(
    CAnimationDisplayer::NormalBullet* pThis, const CAnimationDisplayer::NormalBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MagicBullet::~MagicBullet()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::MagicBullet::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MagicBullet::MagicBullet(const CAnimationDisplayer::MagicBullet& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::MagicBullet::_ctor_1(const CAnimationDisplayer::MagicBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MagicBullet::MagicBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                              _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL,
                                              int32_t bAfterImage)
{
    _ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget, z, sBallUOL, bAfterImage);
}

void CAnimationDisplayer::MagicBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                               _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL,
                                               int32_t bAfterImage)
{
    return __sub_00047910(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget), z, CreateNakedParam(sBallUOL), bAfterImage);
}

_x_com_ptr<IWzGr2DLayer> CAnimationDisplayer::MagicBullet::PrepareBulletLayer(
    _x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise)
{
    return __sub_00052290(this, nullptr, CreateNakedParam(pOrigin), bClockwise);
}

CAnimationDisplayer::MagicBullet& CAnimationDisplayer::MagicBullet::operator=(
    const CAnimationDisplayer::MagicBullet& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::MagicBullet& CAnimationDisplayer::MagicBullet::_op_assign_4(
    CAnimationDisplayer::MagicBullet* pThis, const CAnimationDisplayer::MagicBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::ABSORBITEM::~ABSORBITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::ABSORBITEM::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::ABSORBITEM::ABSORBITEM(const CAnimationDisplayer::ABSORBITEM& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::ABSORBITEM::_ctor_1(const CAnimationDisplayer::ABSORBITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::ABSORBITEM::ABSORBITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::ABSORBITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::ABSORBITEM::Update(long tCur)
{
    return __sub_00041650(this, nullptr, tCur);
}

CAnimationDisplayer::ABSORBITEM& CAnimationDisplayer::ABSORBITEM::operator=(const CAnimationDisplayer::ABSORBITEM& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::ABSORBITEM& CAnimationDisplayer::ABSORBITEM::_op_assign_4(
    CAnimationDisplayer::ABSORBITEM* pThis, const CAnimationDisplayer::ABSORBITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FALLINGINFO::~FALLINGINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::FALLINGINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FALLINGINFO::FALLINGINFO(const CAnimationDisplayer::FALLINGINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::FALLINGINFO::_ctor_1(const CAnimationDisplayer::FALLINGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FALLINGINFO::FALLINGINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::FALLINGINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::FALLINGINFO::Update(long tCur)
{
    return __sub_0004D8B0(this, nullptr, tCur);
}

CAnimationDisplayer::FALLINGINFO& CAnimationDisplayer::FALLINGINFO::operator=(
    const CAnimationDisplayer::FALLINGINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::FALLINGINFO& CAnimationDisplayer::FALLINGINFO::_op_assign_4(
    CAnimationDisplayer::FALLINGINFO* pThis, const CAnimationDisplayer::FALLINGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::EXPLOSIONINFO::~EXPLOSIONINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::EXPLOSIONINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::EXPLOSIONINFO::EXPLOSIONINFO(const CAnimationDisplayer::EXPLOSIONINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::EXPLOSIONINFO::_ctor_1(const CAnimationDisplayer::EXPLOSIONINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::EXPLOSIONINFO::EXPLOSIONINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::EXPLOSIONINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::EXPLOSIONINFO::Update(long tCur)
{
    return __sub_0004DDF0(this, nullptr, tCur);
}

CAnimationDisplayer::EXPLOSIONINFO& CAnimationDisplayer::EXPLOSIONINFO::operator=(
    const CAnimationDisplayer::EXPLOSIONINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::EXPLOSIONINFO& CAnimationDisplayer::EXPLOSIONINFO::_op_assign_4(
    CAnimationDisplayer::EXPLOSIONINFO* pThis, const CAnimationDisplayer::EXPLOSIONINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FIRECRACKER::~FIRECRACKER()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::FIRECRACKER::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FIRECRACKER::FIRECRACKER(const CAnimationDisplayer::FIRECRACKER& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::FIRECRACKER::_ctor_1(const CAnimationDisplayer::FIRECRACKER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FIRECRACKER::FIRECRACKER()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::FIRECRACKER::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::FIRECRACKER::Update(long tCur)
{
    return __sub_0004E0F0(this, nullptr, tCur);
}

CAnimationDisplayer::FIRECRACKER& CAnimationDisplayer::FIRECRACKER::operator=(
    const CAnimationDisplayer::FIRECRACKER& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::FIRECRACKER& CAnimationDisplayer::FIRECRACKER::_op_assign_4(
    CAnimationDisplayer::FIRECRACKER* pThis, const CAnimationDisplayer::FIRECRACKER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::NEWYEARINFO::~NEWYEARINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::NEWYEARINFO::_dtor_0()
{
    return __sub_000432E0(this, nullptr);
}

CAnimationDisplayer::NEWYEARINFO::NEWYEARINFO(const CAnimationDisplayer::NEWYEARINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::NEWYEARINFO::_ctor_1(const CAnimationDisplayer::NEWYEARINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::NEWYEARINFO::NEWYEARINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::NEWYEARINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::NEWYEARINFO::Update(long tCur)
{
    return __sub_00052850(this, nullptr, tCur);
}

CAnimationDisplayer::NEWYEARINFO& CAnimationDisplayer::NEWYEARINFO::operator=(
    const CAnimationDisplayer::NEWYEARINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::NEWYEARINFO& CAnimationDisplayer::NEWYEARINFO::_op_assign_4(
    CAnimationDisplayer::NEWYEARINFO* pThis, const CAnimationDisplayer::NEWYEARINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::RESERVEDINFO::~RESERVEDINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::RESERVEDINFO::_dtor_0()
{
    return __sub_00048F70(this, nullptr);
}

CAnimationDisplayer::RESERVEDINFO::RESERVEDINFO(const CAnimationDisplayer::RESERVEDINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::RESERVEDINFO::_ctor_1(const CAnimationDisplayer::RESERVEDINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::RESERVEDINFO::RESERVEDINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::RESERVEDINFO::_ctor_0()
{
    return __sub_00048F00(this, nullptr);
}

int32_t CAnimationDisplayer::RESERVEDINFO::Update(long arg0)
{
    return __sub_0005ADF0(this, nullptr, arg0);
}

CAnimationDisplayer::RESERVEDINFO& CAnimationDisplayer::RESERVEDINFO::operator=(
    const CAnimationDisplayer::RESERVEDINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::RESERVEDINFO& CAnimationDisplayer::RESERVEDINFO::_op_assign_4(
    CAnimationDisplayer::RESERVEDINFO* pThis, const CAnimationDisplayer::RESERVEDINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::SQUIBINFO::~SQUIBINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::SQUIBINFO::_dtor_0()
{
    return __sub_00042510(this, nullptr);
}

CAnimationDisplayer::SQUIBINFO::SQUIBINFO(const CAnimationDisplayer::SQUIBINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::SQUIBINFO::_ctor_1(const CAnimationDisplayer::SQUIBINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::SQUIBINFO::SQUIBINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::SQUIBINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::SQUIBINFO::Update(long tCur)
{
    return __sub_00051300(this, nullptr, tCur);
}

CAnimationDisplayer::SQUIBINFO& CAnimationDisplayer::SQUIBINFO::operator=(const CAnimationDisplayer::SQUIBINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::SQUIBINFO& CAnimationDisplayer::SQUIBINFO::_op_assign_4(
    CAnimationDisplayer::SQUIBINFO* pThis, const CAnimationDisplayer::SQUIBINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FOOTHOLDINFO::~FOOTHOLDINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::FOOTHOLDINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FOOTHOLDINFO::FOOTHOLDINFO(const CAnimationDisplayer::FOOTHOLDINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::FOOTHOLDINFO::_ctor_1(const CAnimationDisplayer::FOOTHOLDINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FOOTHOLDINFO::FOOTHOLDINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::FOOTHOLDINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::FOOTHOLDINFO::Update(long tCur)
{
    return __sub_00047A30(this, nullptr, tCur);
}

CAnimationDisplayer::FOOTHOLDINFO& CAnimationDisplayer::FOOTHOLDINFO::operator=(
    const CAnimationDisplayer::FOOTHOLDINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::FOOTHOLDINFO& CAnimationDisplayer::FOOTHOLDINFO::_op_assign_4(
    CAnimationDisplayer::FOOTHOLDINFO* pThis, const CAnimationDisplayer::FOOTHOLDINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::PREPAREINFO::~PREPAREINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::PREPAREINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::PREPAREINFO::PREPAREINFO(const CAnimationDisplayer::PREPAREINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::PREPAREINFO::_ctor_1(const CAnimationDisplayer::PREPAREINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::PREPAREINFO::PREPAREINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::PREPAREINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::PREPAREINFO::Update(long tCur)
{
    return __sub_0003C5D0(this, nullptr, tCur);
}

CAnimationDisplayer::PREPAREINFO& CAnimationDisplayer::PREPAREINFO::operator=(
    const CAnimationDisplayer::PREPAREINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::PREPAREINFO& CAnimationDisplayer::PREPAREINFO::_op_assign_4(
    CAnimationDisplayer::PREPAREINFO* pThis, const CAnimationDisplayer::PREPAREINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::CHAINLIGHTNINGINFO::~CHAINLIGHTNINGINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::CHAINLIGHTNINGINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::CHAINLIGHTNINGINFO::CHAINLIGHTNINGINFO(const CAnimationDisplayer::CHAINLIGHTNINGINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::CHAINLIGHTNINGINFO::_ctor_1(const CAnimationDisplayer::CHAINLIGHTNINGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::CHAINLIGHTNINGINFO::CHAINLIGHTNINGINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::CHAINLIGHTNINGINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::CHAINLIGHTNINGINFO::Update(long tCur)
{
    return __sub_00054BB0(this, nullptr, tCur);
}

CAnimationDisplayer::CHAINLIGHTNINGINFO& CAnimationDisplayer::CHAINLIGHTNINGINFO::operator=(
    const CAnimationDisplayer::CHAINLIGHTNINGINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::CHAINLIGHTNINGINFO& CAnimationDisplayer::CHAINLIGHTNINGINFO::_op_assign_4(
    CAnimationDisplayer::CHAINLIGHTNINGINFO* pThis, const CAnimationDisplayer::CHAINLIGHTNINGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::HOOKING_CHAIN_INFO::~HOOKING_CHAIN_INFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::HOOKING_CHAIN_INFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::HOOKING_CHAIN_INFO::HOOKING_CHAIN_INFO(const CAnimationDisplayer::HOOKING_CHAIN_INFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::HOOKING_CHAIN_INFO::_ctor_1(const CAnimationDisplayer::HOOKING_CHAIN_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::HOOKING_CHAIN_INFO::HOOKING_CHAIN_INFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::HOOKING_CHAIN_INFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::HOOKING_CHAIN_INFO::Update(long tCur)
{
    return __sub_00053EB0(this, nullptr, tCur);
}

CAnimationDisplayer::HOOKING_CHAIN_INFO& CAnimationDisplayer::HOOKING_CHAIN_INFO::operator=(
    const CAnimationDisplayer::HOOKING_CHAIN_INFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::HOOKING_CHAIN_INFO& CAnimationDisplayer::HOOKING_CHAIN_INFO::_op_assign_4(
    CAnimationDisplayer::HOOKING_CHAIN_INFO* pThis, const CAnimationDisplayer::HOOKING_CHAIN_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MOTIONBLURINFO::~MOTIONBLURINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::MOTIONBLURINFO::_dtor_0()
{
    return __sub_00043A60(this, nullptr);
}

CAnimationDisplayer::MOTIONBLURINFO::MOTIONBLURINFO(const CAnimationDisplayer::MOTIONBLURINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::MOTIONBLURINFO::_ctor_1(const CAnimationDisplayer::MOTIONBLURINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MOTIONBLURINFO::MOTIONBLURINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CAnimationDisplayer::MOTIONBLURINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAnimationDisplayer::MOTIONBLURINFO::Update(long tCur)
{
    return __sub_00047EF0(this, nullptr, tCur);
}

CAnimationDisplayer::MOTIONBLURINFO& CAnimationDisplayer::MOTIONBLURINFO::operator=(
    const CAnimationDisplayer::MOTIONBLURINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::MOTIONBLURINFO& CAnimationDisplayer::MOTIONBLURINFO::_op_assign_4(
    CAnimationDisplayer::MOTIONBLURINFO* pThis, const CAnimationDisplayer::MOTIONBLURINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FADEINFO::~FADEINFO()
{
    //_dtor_0();
}

void CAnimationDisplayer::FADEINFO::_dtor_0()
{
    this->~FADEINFO();
}

CAnimationDisplayer::FADEINFO::FADEINFO(const CAnimationDisplayer::FADEINFO& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::FADEINFO::_ctor_1(const CAnimationDisplayer::FADEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::FADEINFO::FADEINFO()
{
}

void CAnimationDisplayer::FADEINFO::_ctor_0()
{
    new(this) CAnimationDisplayer::FADEINFO();
}

int32_t CAnimationDisplayer::FADEINFO::Update(long tCur)
{
    return __sub_0003B780(this, nullptr, tCur);
}

CAnimationDisplayer::FADEINFO& CAnimationDisplayer::FADEINFO::operator=(const CAnimationDisplayer::FADEINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAnimationDisplayer::FADEINFO& CAnimationDisplayer::FADEINFO::_op_assign_4(
    CAnimationDisplayer::FADEINFO* pThis, const CAnimationDisplayer::FADEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MobSwallowedBullet::~MobSwallowedBullet()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::MobSwallowedBullet::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MobSwallowedBullet::MobSwallowedBullet(const CAnimationDisplayer::MobSwallowedBullet& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::MobSwallowedBullet::_ctor_1(const CAnimationDisplayer::MobSwallowedBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MobSwallowedBullet::MobSwallowedBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                                            _x_com_ptr<IWzVector2D> pVecTarget, long z,
                                                            int32_t bAfterImage, _x_com_ptr<IWzCanvas> pCanvas)
{
    _ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget, z, bAfterImage, pCanvas);
}

void CAnimationDisplayer::MobSwallowedBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                                      _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bAfterImage,
                                                      _x_com_ptr<IWzCanvas> pCanvas)
{
    return __sub_0003B930(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget), z, bAfterImage, CreateNakedParam(pCanvas));
}

_x_com_ptr<IWzGr2DLayer> CAnimationDisplayer::MobSwallowedBullet::PrepareBulletLayer(
    _x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise)
{
    return __sub_0003BAA0(this, nullptr, CreateNakedParam(pOrigin), bClockwise);
}

int32_t CAnimationDisplayer::MobSwallowedBullet::Update(long tCur)
{
    return __sub_0003C430(this, nullptr, tCur);
}

CAnimationDisplayer::MobSwallowedBullet& CAnimationDisplayer::MobSwallowedBullet::operator=(
    const CAnimationDisplayer::MobSwallowedBullet& arg0)
{
    return _op_assign_5(this, arg0);
}

CAnimationDisplayer::MobSwallowedBullet& CAnimationDisplayer::MobSwallowedBullet::_op_assign_5(
    CAnimationDisplayer::MobSwallowedBullet* pThis, const CAnimationDisplayer::MobSwallowedBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MobBullet::~MobBullet()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimationDisplayer::MobBullet::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MobBullet::MobBullet(const CAnimationDisplayer::MobBullet& arg0)
{
    _ctor_1(arg0);
}

void CAnimationDisplayer::MobBullet::_ctor_1(const CAnimationDisplayer::MobBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MobBullet::MobBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                          _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bAfterImage,
                                          _x_com_ptr<IWzCanvas> pCanvas, Ztl_bstr_t sBallUOL)
{
    _ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget, z, bAfterImage, pCanvas, sBallUOL);
}

void CAnimationDisplayer::MobBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                                             _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bAfterImage,
                                             _x_com_ptr<IWzCanvas> pCanvas, Ztl_bstr_t sBallUOL)
{
    return __sub_000489F0(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget), z, bAfterImage, CreateNakedParam(pCanvas),
                          CreateNakedParam(sBallUOL));
}

_x_com_ptr<IWzGr2DLayer> CAnimationDisplayer::MobBullet::PrepareBulletLayer(
    _x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise)
{
    return __sub_00052CD0(this, nullptr, CreateNakedParam(pOrigin), bClockwise);
}

int32_t CAnimationDisplayer::MobBullet::Update(long tCur)
{
    return __sub_0003C500(this, nullptr, tCur);
}

_x_com_ptr<IWzGr2DLayer> CAnimationDisplayer::MobBullet::GetBallLayer()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CAnimationDisplayer::MobBullet::SetBallLayer(_x_com_ptr<IWzGr2DLayer> arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimationDisplayer::MobBullet& CAnimationDisplayer::MobBullet::operator=(const CAnimationDisplayer::MobBullet& arg0)
{
    return _op_assign_7(this, arg0);
}

CAnimationDisplayer::MobBullet& CAnimationDisplayer::MobBullet::_op_assign_7(
    CAnimationDisplayer::MobBullet* pThis, const CAnimationDisplayer::MobBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}


CField* __cdecl get_field()
{
    //return __sub_00039320();
    auto& stage = get_stage();
    if (!stage)
    {
        return nullptr;
    }
    return dynamic_cast<CField*>(stage.op_arrow());
}

double __cdecl get_double(Ztl_variant_t& v, double dDefault)
{
    //return __sub_00038BB0(v, dDefault);
    const auto vt = v.vt;
    Ztl_variant_t vReal;
    if ( !vt || vt == VT_ERROR || ZComAPI::ZComVariantChangeType(&vReal, &v, 0, VT_R8) < 0 )
        return dDefault;
    else
        return vReal.dblVal;
}

int32_t __cdecl _ZtlSecureFuse_int_(const int32_t* at, uint32_t uCS)
{
    return __sub_00038F80(at, uCS);
}

uint32_t __cdecl get_rand_range(uint32_t nRange, uint32_t nStart)
{
    //return __sub_0003B6C0(nRange, nStart);
    if ( nRange )
        return nStart + _D_G_RAND.Random() % nRange;
    else
        return nStart;
}

HRESULT __cdecl _com_util__UIntAdd(uint32_t uAugend, uint32_t uAddend, uint32_t* puResult)
{
    auto v3 = uAddend + uAugend;
    if ( v3 < uAddend )
        return -1;
    *puResult = v3;
    return 0;
}

const wchar_t* __cdecl get_string(Ztl_variant_t& v, const wchar_t* sDefault)
{
    //return __sub_00038C80(v, sDefault);
    if ( v.vt == VT_BSTR )
        return v.bstrVal;
    else
        return sDefault;
}





//TODO(game) flyorigin
HRESULT __cdecl raw_InvokeFly(IWzVector2D* pVector, int32_t nOriginCount, FLYORIGIN* aOrigins)
{
    return __sub_000388D0(pVector, nOriginCount, (none*)aOrigins);
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzVector2D___GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4___(
    const wchar_t* sUOL, _x_com_ptr<IWzVector2D>& pObj, IUnknown* pUnkOuter)
{
    return __sub_00039E20(sUOL, pObj, pUnkOuter);
}
