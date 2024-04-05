namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;
}

namespace CBaseEntity
{
	constexpr uint32_t m_CBodyComponent = 0x38;
	constexpr uint32_t m_NetworkTransmitComponent = 0x40;
	constexpr uint32_t m_aThinkFunctions = 0x230;
	constexpr uint32_t m_iCurrentThinkContext = 0x248;
	constexpr uint32_t m_nLastThinkTick = 0x24C;
	constexpr uint32_t m_nDisableContextThinkStartTick = 0x250;
	constexpr uint32_t m_isSteadyState = 0x260;
	constexpr uint32_t m_lastNetworkChange = 0x268;
	constexpr uint32_t m_ResponseContexts = 0x278;
	constexpr uint32_t m_iszResponseContext = 0x290;
	constexpr uint32_t m_iHealth = 0x2B8;
	constexpr uint32_t m_iMaxHealth = 0x2BC;
	constexpr uint32_t m_lifeState = 0x2C0;
	constexpr uint32_t m_flDamageAccumulator = 0x2C4;
	constexpr uint32_t m_bTakesDamage = 0x2C8;
	constexpr uint32_t m_nTakeDamageFlags = 0x2CC;
	constexpr uint32_t m_bIsPlatform = 0x2D0;
	constexpr uint32_t m_MoveCollide = 0x2D2;
	constexpr uint32_t m_MoveType = 0x2D3;
	constexpr uint32_t m_nActualMoveType = 0x2D4;
	constexpr uint32_t m_nWaterTouch = 0x2D5;
	constexpr uint32_t m_nSlimeTouch = 0x2D6;
	constexpr uint32_t m_bRestoreInHierarchy = 0x2D7;
	constexpr uint32_t m_target = 0x2D8;
	constexpr uint32_t m_hDamageFilter = 0x2E0;
	constexpr uint32_t m_iszDamageFilterName = 0x2E8;
	constexpr uint32_t m_flMoveDoneTime = 0x2F0;
	constexpr uint32_t m_nSubclassID = 0x2F4;
	constexpr uint32_t m_flAnimTime = 0x300;
	constexpr uint32_t m_flSimulationTime = 0x304;
	constexpr uint32_t m_flCreateTime = 0x308;
	constexpr uint32_t m_bClientSideRagdoll = 0x30C;
	constexpr uint32_t m_ubInterpolationFrame = 0x30D;
	constexpr uint32_t m_vPrevVPhysicsUpdatePos = 0x310;
	constexpr uint32_t m_iTeamNum = 0x31C;
	constexpr uint32_t m_iGlobalname = 0x320;
	constexpr uint32_t m_iSentToClients = 0x328;
	constexpr uint32_t m_flSpeed = 0x32C;
	constexpr uint32_t m_sUniqueHammerID = 0x330;
	constexpr uint32_t m_spawnflags = 0x338;
	constexpr uint32_t m_nNextThinkTick = 0x33C;
	constexpr uint32_t m_nSimulationTick = 0x340;
	constexpr uint32_t m_OnKilled = 0x348;
	constexpr uint32_t m_fFlags = 0x370;
	constexpr uint32_t m_vecAbsVelocity = 0x374;
	constexpr uint32_t m_vecVelocity = 0x380;
	constexpr uint32_t m_vecBaseVelocity = 0x3B0;
	constexpr uint32_t m_nPushEnumCount = 0x3BC;
	constexpr uint32_t m_pCollision = 0x3C0;
	constexpr uint32_t m_hEffectEntity = 0x3C8;
	constexpr uint32_t m_hOwnerEntity = 0x3CC;
	constexpr uint32_t m_fEffects = 0x3D0;
	constexpr uint32_t m_hGroundEntity = 0x3D4;
	constexpr uint32_t m_flFriction = 0x3D8;
	constexpr uint32_t m_flElasticity = 0x3DC;
	constexpr uint32_t m_flGravityScale = 0x3E0;
	constexpr uint32_t m_flTimeScale = 0x3E4;
	constexpr uint32_t m_flWaterLevel = 0x3E8;
	constexpr uint32_t m_bAnimatedEveryTick = 0x3EC;
	constexpr uint32_t m_bDisableLowViolence = 0x3ED;
	constexpr uint32_t m_nWaterType = 0x3EE;
	constexpr uint32_t m_iEFlags = 0x3F0;
	constexpr uint32_t m_OnUser1 = 0x3F8;
	constexpr uint32_t m_OnUser2 = 0x420;
	constexpr uint32_t m_OnUser3 = 0x448;
	constexpr uint32_t m_OnUser4 = 0x470;
	constexpr uint32_t m_iInitialTeamNum = 0x498;
	constexpr uint32_t m_flNavIgnoreUntilTime = 0x49C;
	constexpr uint32_t m_vecAngVelocity = 0x4A0;
	constexpr uint32_t m_bNetworkQuantizeOriginAndAngles = 0x4AC;
	constexpr uint32_t m_bLagCompensate = 0x4AD;
	constexpr uint32_t m_flOverriddenFriction = 0x4B0;
	constexpr uint32_t m_pBlocker = 0x4B4;
	constexpr uint32_t m_flLocalTime = 0x4B8;
	constexpr uint32_t m_flVPhysicsUpdateLocalTime = 0x4BC;
}

namespace ParticleIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CountdownTimer
{
	constexpr uint32_t m_duration = 0x8;
	constexpr uint32_t m_timestamp = 0xC;
	constexpr uint32_t m_timescale = 0x10;
	constexpr uint32_t m_nWorldGroupId = 0x14;
}

namespace CSkillFloat
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace CRangeInt
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace Extent
{
	constexpr uint32_t lo = 0x0;
	constexpr uint32_t hi = 0xC;
}

namespace NavGravity_t
{
	constexpr uint32_t m_vGravity = 0x0;
	constexpr uint32_t m_bDefault = 0xC;
}

namespace CNavVolume
{
}

namespace CNavVolumeVector
{
	constexpr uint32_t m_bHasBeenPreFiltered = 0x78;
}

namespace CNavVolumeAll
{
}

namespace CNavVolumeSphere
{
	constexpr uint32_t m_vCenter = 0x70;
	constexpr uint32_t m_flRadius = 0x7C;
}

namespace CNavVolumeSphericalShell
{
	constexpr uint32_t m_flRadiusInner = 0x80;
}

namespace CNavHullVData
{
	constexpr uint32_t m_bAgentEnabled = 0x0;
	constexpr uint32_t m_agentRadius = 0x4;
	constexpr uint32_t m_agentHeight = 0x8;
	constexpr uint32_t m_agentShortHeightEnabled = 0xC;
	constexpr uint32_t m_agentShortHeight = 0x10;
	constexpr uint32_t m_agentMaxClimb = 0x14;
	constexpr uint32_t m_agentMaxSlope = 0x18;
	constexpr uint32_t m_agentMaxJumpDownDist = 0x1C;
	constexpr uint32_t m_agentMaxJumpHorizDistBase = 0x20;
	constexpr uint32_t m_agentMaxJumpUpDist = 0x24;
	constexpr uint32_t m_agentBorderErosion = 0x28;
}

namespace CNavHullPresetVData
{
	constexpr uint32_t m_vecNavHulls = 0x0;
}

namespace CEntityComponent
{
}

namespace CEntityIdentity
{
	constexpr uint32_t m_nameStringableIndex = 0x14;
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_designerName = 0x20;
	constexpr uint32_t m_flags = 0x30;
	constexpr uint32_t m_worldGroupId = 0x38;
	constexpr uint32_t m_fDataObjectTypes = 0x3C;
	constexpr uint32_t m_PathIndex = 0x40;
	constexpr uint32_t m_pPrev = 0x58;
	constexpr uint32_t m_pNext = 0x60;
	constexpr uint32_t m_pPrevByClass = 0x68;
	constexpr uint32_t m_pNextByClass = 0x70;
}

namespace CEntityInstance
{
	constexpr uint32_t m_iszPrivateVScripts = 0x8;
	constexpr uint32_t m_pEntity = 0x10;
	constexpr uint32_t m_CScriptComponent = 0x28;
	constexpr uint32_t m_bVisibleinPVS = 0x30;
}

namespace CGameSceneNode
{
	constexpr uint32_t m_nodeToWorld = 0x10;
	constexpr uint32_t m_pOwner = 0x30;
	constexpr uint32_t m_pParent = 0x38;
	constexpr uint32_t m_pChild = 0x40;
	constexpr uint32_t m_pNextSibling = 0x48;
	constexpr uint32_t m_hParent = 0x70;
	constexpr uint32_t m_vecOrigin = 0x80;
	constexpr uint32_t m_angRotation = 0xB8;
	constexpr uint32_t m_flScale = 0xC4;
	constexpr uint32_t m_vecAbsOrigin = 0xC8;
	constexpr uint32_t m_angAbsRotation = 0xD4;
	constexpr uint32_t m_flAbsScale = 0xE0;
	constexpr uint32_t m_nParentAttachmentOrBone = 0xE4;
	constexpr uint32_t m_bDebugAbsOriginChanges = 0xE6;
	constexpr uint32_t m_bDormant = 0xE7;
	constexpr uint32_t m_bForceParentToBeNetworked = 0xE8;
	constexpr uint32_t m_bDirtyHierarchy = 0x0;
	constexpr uint32_t m_bDirtyBoneMergeInfo = 0x0;
	constexpr uint32_t m_bNetworkedPositionChanged = 0x0;
	constexpr uint32_t m_bNetworkedAnglesChanged = 0x0;
	constexpr uint32_t m_bNetworkedScaleChanged = 0x0;
	constexpr uint32_t m_bWillBeCallingPostDataUpdate = 0x0;
	constexpr uint32_t m_bBoneMergeFlex = 0x0;
	constexpr uint32_t m_nLatchAbsOrigin = 0x0;
	constexpr uint32_t m_bDirtyBoneMergeBoneToRoot = 0x0;
	constexpr uint32_t m_nHierarchicalDepth = 0xEB;
	constexpr uint32_t m_nHierarchyType = 0xEC;
	constexpr uint32_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED;
	constexpr uint32_t m_name = 0xF0;
	constexpr uint32_t m_hierarchyAttachName = 0x130;
	constexpr uint32_t m_flZOffset = 0x134;
	constexpr uint32_t m_vRenderOrigin = 0x138;
}

namespace CBodyComponent
{
	constexpr uint32_t m_pSceneNode = 0x8;
	constexpr uint32_t __m_pChainEntity = 0x20;
}

namespace CBodyComponentPoint
{
	constexpr uint32_t m_sceneNode = 0x50;
	constexpr uint32_t __m_pChainEntity = 0x1A0;
}

namespace CSkeletonInstance
{
	constexpr uint32_t m_modelState = 0x160;
	constexpr uint32_t m_bIsAnimationEnabled = 0x370;
	constexpr uint32_t m_bUseParentRenderBounds = 0x371;
	constexpr uint32_t m_bDisableSolidCollisionsForHierarchy = 0x372;
	constexpr uint32_t m_bDirtyMotionType = 0x0;
	constexpr uint32_t m_bIsGeneratingLatchedParentSpaceState = 0x0;
	constexpr uint32_t m_materialGroup = 0x374;
	constexpr uint32_t m_nHitboxSet = 0x378;
}

namespace CBodyComponentSkeletonInstance
{
	constexpr uint32_t m_skeletonInstance = 0x50;
	constexpr uint32_t __m_pChainEntity = 0x430;
}

namespace CHitboxComponent
{
	constexpr uint32_t m_bvDisabledHitGroups = 0x24;
}

namespace GameTime_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CLightComponent
{
	constexpr uint32_t __m_pChainEntity = 0x48;
	constexpr uint32_t m_Color = 0x85;
	constexpr uint32_t m_SecondaryColor = 0x89;
	constexpr uint32_t m_flBrightness = 0x90;
	constexpr uint32_t m_flBrightnessScale = 0x94;
	constexpr uint32_t m_flBrightnessMult = 0x98;
	constexpr uint32_t m_flRange = 0x9C;
	constexpr uint32_t m_flFalloff = 0xA0;
	constexpr uint32_t m_flAttenuation0 = 0xA4;
	constexpr uint32_t m_flAttenuation1 = 0xA8;
	constexpr uint32_t m_flAttenuation2 = 0xAC;
	constexpr uint32_t m_flTheta = 0xB0;
	constexpr uint32_t m_flPhi = 0xB4;
	constexpr uint32_t m_hLightCookie = 0xB8;
	constexpr uint32_t m_nCascades = 0xC0;
	constexpr uint32_t m_nCastShadows = 0xC4;
	constexpr uint32_t m_nShadowWidth = 0xC8;
	constexpr uint32_t m_nShadowHeight = 0xCC;
	constexpr uint32_t m_bRenderDiffuse = 0xD0;
	constexpr uint32_t m_nRenderSpecular = 0xD4;
	constexpr uint32_t m_bRenderTransmissive = 0xD8;
	constexpr uint32_t m_flOrthoLightWidth = 0xDC;
	constexpr uint32_t m_flOrthoLightHeight = 0xE0;
	constexpr uint32_t m_nStyle = 0xE4;
	constexpr uint32_t m_Pattern = 0xE8;
	constexpr uint32_t m_nCascadeRenderStaticObjects = 0xF0;
	constexpr uint32_t m_flShadowCascadeCrossFade = 0xF4;
	constexpr uint32_t m_flShadowCascadeDistanceFade = 0xF8;
	constexpr uint32_t m_flShadowCascadeDistance0 = 0xFC;
	constexpr uint32_t m_flShadowCascadeDistance1 = 0x100;
	constexpr uint32_t m_flShadowCascadeDistance2 = 0x104;
	constexpr uint32_t m_flShadowCascadeDistance3 = 0x108;
	constexpr uint32_t m_nShadowCascadeResolution0 = 0x10C;
	constexpr uint32_t m_nShadowCascadeResolution1 = 0x110;
	constexpr uint32_t m_nShadowCascadeResolution2 = 0x114;
	constexpr uint32_t m_nShadowCascadeResolution3 = 0x118;
	constexpr uint32_t m_bUsesBakedShadowing = 0x11C;
	constexpr uint32_t m_nShadowPriority = 0x120;
	constexpr uint32_t m_nBakedShadowIndex = 0x124;
	constexpr uint32_t m_bRenderToCubemaps = 0x128;
	constexpr uint32_t m_nDirectLight = 0x12C;
	constexpr uint32_t m_nIndirectLight = 0x130;
	constexpr uint32_t m_flFadeMinDist = 0x134;
	constexpr uint32_t m_flFadeMaxDist = 0x138;
	constexpr uint32_t m_flShadowFadeMinDist = 0x13C;
	constexpr uint32_t m_flShadowFadeMaxDist = 0x140;
	constexpr uint32_t m_bEnabled = 0x144;
	constexpr uint32_t m_bFlicker = 0x145;
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x146;
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x148;
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x154;
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0x160;
	constexpr uint32_t m_vPrecomputedOBBAngles = 0x16C;
	constexpr uint32_t m_vPrecomputedOBBExtent = 0x178;
	constexpr uint32_t m_flPrecomputedMaxRange = 0x184;
	constexpr uint32_t m_nFogLightingMode = 0x188;
	constexpr uint32_t m_flFogContributionStength = 0x18C;
	constexpr uint32_t m_flNearClipPlane = 0x190;
	constexpr uint32_t m_SkyColor = 0x194;
	constexpr uint32_t m_flSkyIntensity = 0x198;
	constexpr uint32_t m_SkyAmbientBounce = 0x19C;
	constexpr uint32_t m_bUseSecondaryColor = 0x1A0;
	constexpr uint32_t m_bMixedShadows = 0x1A1;
	constexpr uint32_t m_flLightStyleStartTime = 0x1A4;
	constexpr uint32_t m_flCapsuleLength = 0x1A8;
	constexpr uint32_t m_flMinRoughness = 0x1AC;
	constexpr uint32_t m_bPvsModifyEntity = 0x1C0;
}

namespace CNetworkTransmitComponent
{
	constexpr uint32_t m_nTransmitStateOwnedCounter = 0x16C;
}

namespace CRenderComponent
{
	constexpr uint32_t __m_pChainEntity = 0x10;
	constexpr uint32_t m_bIsRenderingWithViewModels = 0x50;
	constexpr uint32_t m_nSplitscreenFlags = 0x54;
	constexpr uint32_t m_bEnableRendering = 0x60;
	constexpr uint32_t m_bInterpolationReadyToDraw = 0xB0;
}

namespace CAnimEventListenerBase
{
}

namespace CAnimEventListener
{
}

namespace CAnimEventQueueListener
{
}

namespace CBuoyancyHelper
{
	constexpr uint32_t m_flFluidDensity = 0x18;
}

namespace CSkillInt
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace CSkillDamage
{
	constexpr uint32_t m_flDamage = 0x0;
	constexpr uint32_t m_flPhysicsForceDamage = 0x10;
}

namespace CRemapFloat
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace CScriptUniformRandomStream
{
	constexpr uint32_t m_hScriptScope = 0x8;
	constexpr uint32_t m_nInitialSeed = 0x9C;
}

namespace CBasePlayerControllerAPI
{
}

namespace ViewAngleServerChange_t
{
	constexpr uint32_t nType = 0x30;
	constexpr uint32_t qAngle = 0x34;
	constexpr uint32_t nIndex = 0x40;
}

namespace CBreakableStageHelper
{
	constexpr uint32_t m_nCurrentStage = 0x8;
	constexpr uint32_t m_nStageCount = 0xC;
}

namespace CommandToolCommand_t
{
	constexpr uint32_t m_bEnabled = 0x0;
	constexpr uint32_t m_bOpened = 0x1;
	constexpr uint32_t m_InternalId = 0x4;
	constexpr uint32_t m_ShortName = 0x8;
	constexpr uint32_t m_ExecMode = 0x10;
	constexpr uint32_t m_SpawnGroup = 0x18;
	constexpr uint32_t m_PeriodicExecDelay = 0x20;
	constexpr uint32_t m_SpecType = 0x24;
	constexpr uint32_t m_EntitySpec = 0x28;
	constexpr uint32_t m_Commands = 0x30;
	constexpr uint32_t m_SetDebugBits = 0x38;
	constexpr uint32_t m_ClearDebugBits = 0x40;
}

namespace CDynamicPropAPI
{
}

namespace CPlayerPawnComponent
{
	constexpr uint32_t __m_pChainEntity = 0x8;
}

namespace CPlayerControllerComponent
{
	constexpr uint32_t __m_pChainEntity = 0x8;
}

namespace CPlayer_AutoaimServices
{
}

namespace audioparams_t
{
	constexpr uint32_t localSound = 0x8;
	constexpr uint32_t soundscapeIndex = 0x68;
	constexpr uint32_t localBits = 0x6C;
	constexpr uint32_t soundscapeEntityListIndex = 0x70;
	constexpr uint32_t soundEventHash = 0x74;
}

namespace GameTick_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace fogplayerparams_t
{
	constexpr uint32_t m_hCtrl = 0x8;
	constexpr uint32_t m_flTransitionTime = 0xC;
	constexpr uint32_t m_OldColor = 0x10;
	constexpr uint32_t m_flOldStart = 0x14;
	constexpr uint32_t m_flOldEnd = 0x18;
	constexpr uint32_t m_flOldMaxDensity = 0x1C;
	constexpr uint32_t m_flOldHDRColorScale = 0x20;
	constexpr uint32_t m_flOldFarZ = 0x24;
	constexpr uint32_t m_NewColor = 0x28;
	constexpr uint32_t m_flNewStart = 0x2C;
	constexpr uint32_t m_flNewEnd = 0x30;
	constexpr uint32_t m_flNewMaxDensity = 0x34;
	constexpr uint32_t m_flNewHDRColorScale = 0x38;
	constexpr uint32_t m_flNewFarZ = 0x3C;
}

namespace CColorCorrection
{
	constexpr uint32_t m_flFadeInDuration = 0x4C0;
	constexpr uint32_t m_flFadeOutDuration = 0x4C4;
	constexpr uint32_t m_flStartFadeInWeight = 0x4C8;
	constexpr uint32_t m_flStartFadeOutWeight = 0x4CC;
	constexpr uint32_t m_flTimeStartFadeIn = 0x4D0;
	constexpr uint32_t m_flTimeStartFadeOut = 0x4D4;
	constexpr uint32_t m_flMaxWeight = 0x4D8;
	constexpr uint32_t m_bStartDisabled = 0x4DC;
	constexpr uint32_t m_bEnabled = 0x4DD;
	constexpr uint32_t m_bMaster = 0x4DE;
	constexpr uint32_t m_bClientSide = 0x4DF;
	constexpr uint32_t m_bExclusive = 0x4E0;
	constexpr uint32_t m_MinFalloff = 0x4E4;
	constexpr uint32_t m_MaxFalloff = 0x4E8;
	constexpr uint32_t m_flCurWeight = 0x4EC;
	constexpr uint32_t m_netlookupFilename = 0x4F0;
	constexpr uint32_t m_lookupFilename = 0x6F0;
}

namespace CTonemapController2
{
	constexpr uint32_t m_flAutoExposureMin = 0x4C0;
	constexpr uint32_t m_flAutoExposureMax = 0x4C4;
	constexpr uint32_t m_flTonemapPercentTarget = 0x4C8;
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0x4CC;
	constexpr uint32_t m_flTonemapMinAvgLum = 0x4D0;
	constexpr uint32_t m_flExposureAdaptationSpeedUp = 0x4D4;
	constexpr uint32_t m_flExposureAdaptationSpeedDown = 0x4D8;
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0x4DC;
}

namespace CPostProcessingVolume
{
	constexpr uint32_t m_hPostSettings = 0x8C8;
	constexpr uint32_t m_flFadeDuration = 0x8D0;
	constexpr uint32_t m_flMinLogExposure = 0x8D4;
	constexpr uint32_t m_flMaxLogExposure = 0x8D8;
	constexpr uint32_t m_flMinExposure = 0x8DC;
	constexpr uint32_t m_flMaxExposure = 0x8E0;
	constexpr uint32_t m_flExposureCompensation = 0x8E4;
	constexpr uint32_t m_flExposureFadeSpeedUp = 0x8E8;
	constexpr uint32_t m_flExposureFadeSpeedDown = 0x8EC;
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0x8F0;
	constexpr uint32_t m_bMaster = 0x8F4;
	constexpr uint32_t m_bExposureControl = 0x8F5;
	constexpr uint32_t m_flRate = 0x8F8;
	constexpr uint32_t m_flTonemapPercentTarget = 0x8FC;
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0x900;
	constexpr uint32_t m_flTonemapMinAvgLum = 0x904;
}

namespace CEnvSoundscapeTriggerable
{
}

namespace CPlayer_CameraServices
{
	constexpr uint32_t m_vecCsViewPunchAngle = 0x40;
	constexpr uint32_t m_nCsViewPunchAngleTick = 0x4C;
	constexpr uint32_t m_flCsViewPunchAngleTickRatio = 0x50;
	constexpr uint32_t m_PlayerFog = 0x58;
	constexpr uint32_t m_hColorCorrectionCtrl = 0x98;
	constexpr uint32_t m_hViewEntity = 0x9C;
	constexpr uint32_t m_hTonemapController = 0xA0;
	constexpr uint32_t m_audio = 0xA8;
	constexpr uint32_t m_PostProcessingVolumes = 0x120;
	constexpr uint32_t m_flOldPlayerZ = 0x138;
	constexpr uint32_t m_flOldPlayerViewOffsetZ = 0x13C;
	constexpr uint32_t m_hTriggerSoundscapeList = 0x158;
}

namespace CPlayer_FlashlightServices
{
}

namespace CPlayer_ItemServices
{
}

namespace CInButtonState
{
	constexpr uint32_t m_pButtonStates = 0x8;
}

namespace CPlayer_MovementServices
{
	constexpr uint32_t m_nImpulse = 0x40;
	constexpr uint32_t m_nButtons = 0x48;
	constexpr uint32_t m_nQueuedButtonDownMask = 0x68;
	constexpr uint32_t m_nQueuedButtonChangeMask = 0x70;
	constexpr uint32_t m_nButtonDoublePressed = 0x78;
	constexpr uint32_t m_pButtonPressedCmdNumber = 0x80;
	constexpr uint32_t m_nLastCommandNumberProcessed = 0x180;
	constexpr uint32_t m_nToggleButtonDownMask = 0x188;
	constexpr uint32_t m_flMaxspeed = 0x198;
	constexpr uint32_t m_arrForceSubtickMoveWhen = 0x19C;
	constexpr uint32_t m_flForwardMove = 0x1AC;
	constexpr uint32_t m_flLeftMove = 0x1B0;
	constexpr uint32_t m_flUpMove = 0x1B4;
	constexpr uint32_t m_vecLastMovementImpulses = 0x1B8;
	constexpr uint32_t m_vecOldViewAngles = 0x1C4;
}

namespace CPlayer_MovementServices_Humanoid
{
	constexpr uint32_t m_flStepSoundTime = 0x1D8;
	constexpr uint32_t m_flFallVelocity = 0x1DC;
	constexpr uint32_t m_bInCrouch = 0x1E0;
	constexpr uint32_t m_nCrouchState = 0x1E4;
	constexpr uint32_t m_flCrouchTransitionStartTime = 0x1E8;
	constexpr uint32_t m_bDucked = 0x1EC;
	constexpr uint32_t m_bDucking = 0x1ED;
	constexpr uint32_t m_bInDuckJump = 0x1EE;
	constexpr uint32_t m_groundNormal = 0x1F0;
	constexpr uint32_t m_flSurfaceFriction = 0x1FC;
	constexpr uint32_t m_surfaceProps = 0x200;
	constexpr uint32_t m_nStepside = 0x210;
	constexpr uint32_t m_iTargetVolume = 0x214;
	constexpr uint32_t m_vecSmoothedVelocity = 0x218;
}

namespace CPlayer_ObserverServices
{
	constexpr uint32_t m_iObserverMode = 0x40;
	constexpr uint32_t m_hObserverTarget = 0x44;
	constexpr uint32_t m_iObserverLastMode = 0x48;
	constexpr uint32_t m_bForcedObserverMode = 0x4C;
}

namespace CPlayer_UseServices
{
}

namespace CPlayer_WaterServices
{
}

namespace CBasePlayerWeapon
{
	constexpr uint32_t m_nNextPrimaryAttackTick = 0xC70;
	constexpr uint32_t m_flNextPrimaryAttackTickRatio = 0xC74;
	constexpr uint32_t m_nNextSecondaryAttackTick = 0xC78;
	constexpr uint32_t m_flNextSecondaryAttackTickRatio = 0xC7C;
	constexpr uint32_t m_iClip1 = 0xC80;
	constexpr uint32_t m_iClip2 = 0xC84;
	constexpr uint32_t m_pReserveAmmo = 0xC88;
	constexpr uint32_t m_OnPlayerUse = 0xC90;
}

namespace CPlayer_WeaponServices
{
	constexpr uint32_t m_hMyWeapons = 0x40;
	constexpr uint32_t m_hActiveWeapon = 0x58;
	constexpr uint32_t m_hLastWeapon = 0x5C;
	constexpr uint32_t m_iAmmo = 0x60;
	constexpr uint32_t m_bPreventWeaponPickup = 0xA0;
}

namespace AmmoTypeInfo_t
{
	constexpr uint32_t m_nMaxCarry = 0x10;
	constexpr uint32_t m_nSplashSize = 0x1C;
	constexpr uint32_t m_nFlags = 0x24;
	constexpr uint32_t m_flMass = 0x28;
	constexpr uint32_t m_flSpeed = 0x2C;
}

namespace CAnimGraphControllerBase
{
}

namespace CBaseAnimGraphController
{
	constexpr uint32_t m_animGraphNetworkedVars = 0x18;
	constexpr uint32_t m_bSequenceFinished = 0x220;
	constexpr uint32_t m_flSoundSyncTime = 0x224;
	constexpr uint32_t m_hSequence = 0x228;
	constexpr uint32_t m_flSeqStartTime = 0x22C;
	constexpr uint32_t m_flSeqFixedCycle = 0x230;
	constexpr uint32_t m_nAnimLoopMode = 0x234;
	constexpr uint32_t m_flPlaybackRate = 0x238;
	constexpr uint32_t m_nNotifyState = 0x244;
	constexpr uint32_t m_bNetworkedAnimationInputsChanged = 0x246;
	constexpr uint32_t m_bNetworkedSequenceChanged = 0x247;
	constexpr uint32_t m_bLastUpdateSkipped = 0x248;
	constexpr uint32_t m_flPrevAnimUpdateTime = 0x24C;
}

namespace CBodyComponentBaseAnimGraph
{
	constexpr uint32_t m_animationController = 0x460;
	constexpr uint32_t __m_pChainEntity = 0x950;
}

namespace EntityRenderAttribute_t
{
	constexpr uint32_t m_ID = 0x30;
	constexpr uint32_t m_Values = 0x34;
}

namespace ModelConfigHandle_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CBaseModelEntity
{
	constexpr uint32_t m_CRenderComponent = 0x4C0;
	constexpr uint32_t m_CHitboxComponent = 0x4C8;
	constexpr uint32_t m_flDissolveStartTime = 0x4F0;
	constexpr uint32_t m_OnIgnite = 0x4F8;
	constexpr uint32_t m_nRenderMode = 0x520;
	constexpr uint32_t m_nRenderFX = 0x521;
	constexpr uint32_t m_bAllowFadeInView = 0x522;
	constexpr uint32_t m_clrRender = 0x523;
	constexpr uint32_t m_vecRenderAttributes = 0x528;
	constexpr uint32_t m_bRenderToCubemaps = 0x578;
	constexpr uint32_t m_Collision = 0x580;
	constexpr uint32_t m_Glow = 0x630;
	constexpr uint32_t m_flGlowBackfaceMult = 0x688;
	constexpr uint32_t m_fadeMinDist = 0x68C;
	constexpr uint32_t m_fadeMaxDist = 0x690;
	constexpr uint32_t m_flFadeScale = 0x694;
	constexpr uint32_t m_flShadowStrength = 0x698;
	constexpr uint32_t m_nObjectCulling = 0x69C;
	constexpr uint32_t m_nAddDecal = 0x6A0;
	constexpr uint32_t m_vDecalPosition = 0x6A4;
	constexpr uint32_t m_vDecalForwardAxis = 0x6B0;
	constexpr uint32_t m_flDecalHealBloodRate = 0x6BC;
	constexpr uint32_t m_flDecalHealHeightRate = 0x6C0;
	constexpr uint32_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6C8;
	constexpr uint32_t m_vecViewOffset = 0x6E0;
}

namespace ActiveModelConfig_t
{
	constexpr uint32_t m_Handle = 0x28;
	constexpr uint32_t m_Name = 0x30;
	constexpr uint32_t m_AssociatedEntities = 0x38;
	constexpr uint32_t m_AssociatedEntityNames = 0x50;
}

namespace CBodyComponentBaseModelEntity
{
	constexpr uint32_t __m_pChainEntity = 0x460;
}

namespace CNetworkOriginCellCoordQuantizedVector
{
	constexpr uint32_t m_cellX = 0x10;
	constexpr uint32_t m_cellY = 0x12;
	constexpr uint32_t m_cellZ = 0x14;
	constexpr uint32_t m_nOutsideWorld = 0x16;
	constexpr uint32_t m_vecX = 0x18;
	constexpr uint32_t m_vecY = 0x20;
	constexpr uint32_t m_vecZ = 0x28;
}

namespace CNetworkOriginQuantizedVector
{
	constexpr uint32_t m_vecX = 0x10;
	constexpr uint32_t m_vecY = 0x18;
	constexpr uint32_t m_vecZ = 0x20;
}

namespace CNetworkVelocityVector
{
	constexpr uint32_t m_vecX = 0x10;
	constexpr uint32_t m_vecY = 0x18;
	constexpr uint32_t m_vecZ = 0x20;
}

namespace CNetworkViewOffsetVector
{
	constexpr uint32_t m_vecX = 0x10;
	constexpr uint32_t m_vecY = 0x18;
	constexpr uint32_t m_vecZ = 0x20;
}

namespace CRopeOverlapHit
{
	constexpr uint32_t m_hEntity = 0x0;
	constexpr uint32_t m_vecOverlappingLinks = 0x8;
}

namespace CGameSceneNodeHandle
{
	constexpr uint32_t m_hOwner = 0x8;
	constexpr uint32_t m_name = 0xC;
}

namespace IChoreoServices
{
}

namespace SequenceHistory_t
{
	constexpr uint32_t m_hSequence = 0x0;
	constexpr uint32_t m_flSeqStartTime = 0x4;
	constexpr uint32_t m_flSeqFixedCycle = 0x8;
	constexpr uint32_t m_nSeqLoopMode = 0xC;
	constexpr uint32_t m_flPlaybackRate = 0x10;
	constexpr uint32_t m_flCyclesPerSecond = 0x14;
}

namespace ISkeletonAnimationController
{
}

namespace CSkeletonAnimationController
{
	constexpr uint32_t m_pSkeletonInstance = 0x8;
}

namespace CNetworkedSequenceOperation
{
	constexpr uint32_t m_hSequence = 0x8;
	constexpr uint32_t m_flPrevCycle = 0xC;
	constexpr uint32_t m_flCycle = 0x10;
	constexpr uint32_t m_flWeight = 0x14;
	constexpr uint32_t m_bSequenceChangeNetworked = 0x1C;
	constexpr uint32_t m_bDiscontinuity = 0x1D;
	constexpr uint32_t m_flPrevCycleFromDiscontinuity = 0x20;
	constexpr uint32_t m_flPrevCycleForAnimEventDetection = 0x24;
}

namespace CModelState
{
	constexpr uint32_t m_hModel = 0xA0;
	constexpr uint32_t m_ModelName = 0xA8;
	constexpr uint32_t m_bClientClothCreationSuppressed = 0xE8;
	constexpr uint32_t m_MeshGroupMask = 0x180;
	constexpr uint32_t m_nIdealMotionType = 0x202;
	constexpr uint32_t m_nForceLOD = 0x203;
	constexpr uint32_t m_nClothUpdateFlags = 0x204;
}

namespace IntervalTimer
{
	constexpr uint32_t m_timestamp = 0x8;
	constexpr uint32_t m_nWorldGroupId = 0xC;
}

namespace EngineCountdownTimer
{
	constexpr uint32_t m_duration = 0x8;
	constexpr uint32_t m_timestamp = 0xC;
	constexpr uint32_t m_timescale = 0x10;
}

namespace CTimeline
{
	constexpr uint32_t m_flValues = 0x10;
	constexpr uint32_t m_nValueCounts = 0x110;
	constexpr uint32_t m_nBucketCount = 0x210;
	constexpr uint32_t m_flInterval = 0x214;
	constexpr uint32_t m_flFinalValue = 0x218;
	constexpr uint32_t m_nCompressionType = 0x21C;
	constexpr uint32_t m_bStopped = 0x220;
}

namespace CAnimGraphNetworkedVariables
{
	constexpr uint32_t m_PredNetBoolVariables = 0x8;
	constexpr uint32_t m_PredNetByteVariables = 0x20;
	constexpr uint32_t m_PredNetUInt16Variables = 0x38;
	constexpr uint32_t m_PredNetIntVariables = 0x50;
	constexpr uint32_t m_PredNetUInt32Variables = 0x68;
	constexpr uint32_t m_PredNetUInt64Variables = 0x80;
	constexpr uint32_t m_PredNetFloatVariables = 0x98;
	constexpr uint32_t m_PredNetVectorVariables = 0xB0;
	constexpr uint32_t m_PredNetQuaternionVariables = 0xC8;
	constexpr uint32_t m_PredNetGlobalSymbolVariables = 0xE0;
	constexpr uint32_t m_OwnerOnlyPredNetBoolVariables = 0xF8;
	constexpr uint32_t m_OwnerOnlyPredNetByteVariables = 0x110;
	constexpr uint32_t m_OwnerOnlyPredNetUInt16Variables = 0x128;
	constexpr uint32_t m_OwnerOnlyPredNetIntVariables = 0x140;
	constexpr uint32_t m_OwnerOnlyPredNetUInt32Variables = 0x158;
	constexpr uint32_t m_OwnerOnlyPredNetUInt64Variables = 0x170;
	constexpr uint32_t m_OwnerOnlyPredNetFloatVariables = 0x188;
	constexpr uint32_t m_OwnerOnlyPredNetVectorVariables = 0x1A0;
	constexpr uint32_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8;
	constexpr uint32_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0;
	constexpr uint32_t m_nBoolVariablesCount = 0x1E8;
	constexpr uint32_t m_nOwnerOnlyBoolVariablesCount = 0x1EC;
	constexpr uint32_t m_nRandomSeedOffset = 0x1F0;
	constexpr uint32_t m_flLastTeleportTime = 0x1F4;
}

namespace CFootstepTableHandle
{
}

namespace ResponseFollowup
{
	constexpr uint32_t followup_concept = 0x0;
	constexpr uint32_t followup_contexts = 0x8;
	constexpr uint32_t followup_delay = 0x10;
	constexpr uint32_t followup_target = 0x14;
	constexpr uint32_t followup_entityiotarget = 0x1C;
	constexpr uint32_t followup_entityioinput = 0x24;
	constexpr uint32_t followup_entityiodelay = 0x2C;
	constexpr uint32_t bFired = 0x30;
}

namespace ResponseParams
{
	constexpr uint32_t odds = 0x10;
	constexpr uint32_t flags = 0x12;
	constexpr uint32_t m_pFollowup = 0x18;
}

namespace CResponseCriteriaSet
{
	constexpr uint32_t m_nNumPrefixedContexts = 0x28;
	constexpr uint32_t m_bOverrideOnAppend = 0x2C;
}

namespace CRR_Response
{
	constexpr uint32_t m_Type = 0x0;
	constexpr uint32_t m_szResponseName = 0x1;
	constexpr uint32_t m_szMatchingRule = 0xC1;
	constexpr uint32_t m_Params = 0x148;
	constexpr uint32_t m_fMatchScore = 0x168;
	constexpr uint32_t m_szSpeakerContext = 0x170;
	constexpr uint32_t m_szWorldContext = 0x178;
	constexpr uint32_t m_Followup = 0x180;
	constexpr uint32_t m_pchCriteriaNames = 0x1B8;
	constexpr uint32_t m_pchCriteriaValues = 0x1D0;
}

namespace ConceptHistory_t
{
	constexpr uint32_t timeSpoken = 0x0;
	constexpr uint32_t m_response = 0x8;
}

namespace CAI_Expresser
{
	constexpr uint32_t m_flStopTalkTime = 0x38;
	constexpr uint32_t m_flStopTalkTimeWithoutDelay = 0x3C;
	constexpr uint32_t m_flBlockedTalkTime = 0x40;
	constexpr uint32_t m_voicePitch = 0x44;
	constexpr uint32_t m_flLastTimeAcceptedSpeak = 0x48;
	constexpr uint32_t m_bAllowSpeakingInterrupts = 0x4C;
	constexpr uint32_t m_bConsiderSceneInvolvementAsSpeech = 0x4D;
	constexpr uint32_t m_nLastSpokenPriority = 0x50;
	constexpr uint32_t m_pOuter = 0x58;
}

namespace CBaseFlex
{
	constexpr uint32_t m_flexWeight = 0x8E8;
	constexpr uint32_t m_vLookTargetPosition = 0x900;
	constexpr uint32_t m_blinktoggle = 0x90C;
	constexpr uint32_t m_flAllowResponsesEndTime = 0x960;
	constexpr uint32_t m_flLastFlexAnimationTime = 0x964;
	constexpr uint32_t m_nNextSceneEventId = 0x968;
	constexpr uint32_t m_bUpdateLayerPriorities = 0x96C;
}

namespace CResponseQueue
{
	constexpr uint32_t m_ExpresserTargets = 0x48;
}

namespace CResponseQueue::CDeferredResponse
{
	constexpr uint32_t m_contexts = 0x8;
	constexpr uint32_t m_fDispatchTime = 0x38;
	constexpr uint32_t m_hIssuer = 0x3C;
	constexpr uint32_t m_response = 0x48;
	constexpr uint32_t m_bResponseValid = 0x230;
}

namespace CAI_ExpresserWithFollowup
{
	constexpr uint32_t m_pPostponedFollowup = 0x60;
}

namespace CMultiplayer_Expresser
{
	constexpr uint32_t m_bAllowMultipleScenes = 0x70;
}

namespace CBaseEntityAPI
{
}

namespace CCommentarySystem
{
	constexpr uint32_t m_bCommentaryConvarsChanging = 0x11;
	constexpr uint32_t m_bCommentaryEnabledMidGame = 0x12;
	constexpr uint32_t m_flNextTeleportTime = 0x14;
	constexpr uint32_t m_iTeleportStage = 0x18;
	constexpr uint32_t m_bCheatState = 0x1C;
	constexpr uint32_t m_bIsFirstSpawnGroupToLoad = 0x1D;
	constexpr uint32_t m_hCurrentNode = 0x38;
	constexpr uint32_t m_hActiveCommentaryNode = 0x3C;
	constexpr uint32_t m_hLastCommentaryNode = 0x40;
	constexpr uint32_t m_vecNodes = 0x48;
}

namespace CPointCommentaryNode
{
	constexpr uint32_t m_iszPreCommands = 0x8E8;
	constexpr uint32_t m_iszPostCommands = 0x8F0;
	constexpr uint32_t m_iszCommentaryFile = 0x8F8;
	constexpr uint32_t m_iszViewTarget = 0x900;
	constexpr uint32_t m_hViewTarget = 0x908;
	constexpr uint32_t m_hViewTargetAngles = 0x90C;
	constexpr uint32_t m_iszViewPosition = 0x910;
	constexpr uint32_t m_hViewPosition = 0x918;
	constexpr uint32_t m_hViewPositionMover = 0x91C;
	constexpr uint32_t m_bPreventMovement = 0x920;
	constexpr uint32_t m_bUnderCrosshair = 0x921;
	constexpr uint32_t m_bUnstoppable = 0x922;
	constexpr uint32_t m_flFinishedTime = 0x924;
	constexpr uint32_t m_vecFinishOrigin = 0x928;
	constexpr uint32_t m_vecOriginalAngles = 0x934;
	constexpr uint32_t m_vecFinishAngles = 0x940;
	constexpr uint32_t m_bPreventChangesWhileMoving = 0x94C;
	constexpr uint32_t m_bDisabled = 0x94D;
	constexpr uint32_t m_vecTeleportOrigin = 0x950;
	constexpr uint32_t m_flAbortedPlaybackAt = 0x95C;
	constexpr uint32_t m_pOnCommentaryStarted = 0x960;
	constexpr uint32_t m_pOnCommentaryStopped = 0x988;
	constexpr uint32_t m_bActive = 0x9B0;
	constexpr uint32_t m_flStartTime = 0x9B4;
	constexpr uint32_t m_flStartTimeInCommentary = 0x9B8;
	constexpr uint32_t m_iszTitle = 0x9C0;
	constexpr uint32_t m_iszSpeakers = 0x9C8;
	constexpr uint32_t m_iNodeNumber = 0x9D0;
	constexpr uint32_t m_iNodeNumberMax = 0x9D4;
	constexpr uint32_t m_bListenedTo = 0x9D8;
}

namespace CPhysicsShake
{
	constexpr uint32_t m_force = 0x8;
}

namespace CGameScriptedMoveData
{
	constexpr uint32_t m_vAccumulatedRootMotion = 0x0;
	constexpr uint32_t m_vDest = 0xC;
	constexpr uint32_t m_vSrc = 0x18;
	constexpr uint32_t m_angSrc = 0x24;
	constexpr uint32_t m_angDst = 0x30;
	constexpr uint32_t m_angCurrent = 0x3C;
	constexpr uint32_t m_flAngRate = 0x48;
	constexpr uint32_t m_flDuration = 0x4C;
	constexpr uint32_t m_flStartTime = 0x50;
	constexpr uint32_t m_bActive = 0x54;
	constexpr uint32_t m_bTeleportOnEnd = 0x55;
	constexpr uint32_t m_bIgnoreRotation = 0x56;
	constexpr uint32_t m_nType = 0x58;
	constexpr uint32_t m_bSuccess = 0x5C;
	constexpr uint32_t m_nForcedCrouchState = 0x60;
	constexpr uint32_t m_bIgnoreCollisions = 0x64;
}

namespace CGameChoreoServices
{
	constexpr uint32_t m_hOwner = 0x8;
	constexpr uint32_t m_hScriptedSequence = 0xC;
	constexpr uint32_t m_scriptState = 0x10;
	constexpr uint32_t m_choreoState = 0x14;
	constexpr uint32_t m_flTimeStartedState = 0x18;
}

namespace CBaseAnimGraph
{
	constexpr uint32_t m_bInitiallyPopulateInterpHistory = 0x788;
	constexpr uint32_t m_pChoreoServices = 0x790;
	constexpr uint32_t m_bAnimGraphUpdateEnabled = 0x798;
	constexpr uint32_t m_flMaxSlopeDistance = 0x79C;
	constexpr uint32_t m_vLastSlopeCheckPos = 0x7A0;
	constexpr uint32_t m_bAnimationUpdateScheduled = 0x7AC;
	constexpr uint32_t m_vecForce = 0x7B0;
	constexpr uint32_t m_nForceBone = 0x7BC;
	constexpr uint32_t m_pRagdollPose = 0x7D0;
	constexpr uint32_t m_bClientRagdoll = 0x7D8;
}

namespace CScriptedSequence
{
	constexpr uint32_t m_iszEntry = 0x4C0;
	constexpr uint32_t m_iszPreIdle = 0x4C8;
	constexpr uint32_t m_iszPlay = 0x4D0;
	constexpr uint32_t m_iszPostIdle = 0x4D8;
	constexpr uint32_t m_iszModifierToAddOnPlay = 0x4E0;
	constexpr uint32_t m_iszNextScript = 0x4E8;
	constexpr uint32_t m_iszEntity = 0x4F0;
	constexpr uint32_t m_iszSyncGroup = 0x4F8;
	constexpr uint32_t m_nMoveTo = 0x500;
	constexpr uint32_t m_bIsPlayingPreIdle = 0x504;
	constexpr uint32_t m_bIsPlayingEntry = 0x505;
	constexpr uint32_t m_bIsPlayingAction = 0x506;
	constexpr uint32_t m_bIsPlayingPostIdle = 0x507;
	constexpr uint32_t m_bLoopPreIdleSequence = 0x508;
	constexpr uint32_t m_bLoopActionSequence = 0x509;
	constexpr uint32_t m_bLoopPostIdleSequence = 0x50A;
	constexpr uint32_t m_bSynchPostIdles = 0x50B;
	constexpr uint32_t m_bIgnoreLookAt = 0x50C;
	constexpr uint32_t m_bIgnoreGravity = 0x50D;
	constexpr uint32_t m_bDisableNPCCollisions = 0x50E;
	constexpr uint32_t m_bKeepAnimgraphLockedPost = 0x50F;
	constexpr uint32_t m_bDontAddModifiers = 0x510;
	constexpr uint32_t m_flRadius = 0x514;
	constexpr uint32_t m_flRepeat = 0x518;
	constexpr uint32_t m_flPlayAnimFadeInTime = 0x51C;
	constexpr uint32_t m_flMoveInterpTime = 0x520;
	constexpr uint32_t m_flAngRate = 0x524;
	constexpr uint32_t m_nNotReadySequenceCount = 0x528;
	constexpr uint32_t m_startTime = 0x52C;
	constexpr uint32_t m_bWaitForBeginSequence = 0x530;
	constexpr uint32_t m_saved_effects = 0x534;
	constexpr uint32_t m_savedFlags = 0x538;
	constexpr uint32_t m_savedCollisionGroup = 0x53C;
	constexpr uint32_t m_interruptable = 0x540;
	constexpr uint32_t m_sequenceStarted = 0x541;
	constexpr uint32_t m_bPositionRelativeToOtherEntity = 0x542;
	constexpr uint32_t m_hTargetEnt = 0x544;
	constexpr uint32_t m_hNextCine = 0x548;
	constexpr uint32_t m_bThinking = 0x54C;
	constexpr uint32_t m_bInitiatedSelfDelete = 0x54D;
	constexpr uint32_t m_bIsTeleportingDueToMoveTo = 0x54E;
	constexpr uint32_t m_bAllowCustomInterruptConditions = 0x54F;
	constexpr uint32_t m_hLastFoundEntity = 0x550;
	constexpr uint32_t m_hForcedTarget = 0x554;
	constexpr uint32_t m_bDontCancelOtherSequences = 0x558;
	constexpr uint32_t m_bForceSynch = 0x559;
	constexpr uint32_t m_bPreventUpdateYawOnFinish = 0x55A;
	constexpr uint32_t m_bEnsureOnNavmeshOnFinish = 0x55B;
	constexpr uint32_t m_onDeathBehavior = 0x55C;
	constexpr uint32_t m_ConflictResponse = 0x560;
	constexpr uint32_t m_OnBeginSequence = 0x568;
	constexpr uint32_t m_OnActionStartOrLoop = 0x590;
	constexpr uint32_t m_OnEndSequence = 0x5B8;
	constexpr uint32_t m_OnPostIdleEndSequence = 0x5E0;
	constexpr uint32_t m_OnCancelSequence = 0x608;
	constexpr uint32_t m_OnCancelFailedSequence = 0x630;
	constexpr uint32_t m_OnScriptEvent = 0x658;
	constexpr uint32_t m_matOtherToMain = 0x7A0;
	constexpr uint32_t m_hInteractionMainEntity = 0x7C0;
	constexpr uint32_t m_iPlayerDeathBehavior = 0x7C4;
}

namespace HullFlags_t
{
	constexpr uint32_t m_bHull_Human = 0x0;
	constexpr uint32_t m_bHull_SmallCentered = 0x1;
	constexpr uint32_t m_bHull_WideHuman = 0x2;
	constexpr uint32_t m_bHull_Tiny = 0x3;
	constexpr uint32_t m_bHull_Medium = 0x4;
	constexpr uint32_t m_bHull_TinyCentered = 0x5;
	constexpr uint32_t m_bHull_Large = 0x6;
	constexpr uint32_t m_bHull_LargeCentered = 0x7;
	constexpr uint32_t m_bHull_MediumTall = 0x8;
	constexpr uint32_t m_bHull_Small = 0x9;
}

namespace CConstantForceController
{
	constexpr uint32_t m_linear = 0xC;
	constexpr uint32_t m_angular = 0x18;
	constexpr uint32_t m_linearSave = 0x24;
	constexpr uint32_t m_angularSave = 0x30;
}

namespace CMotorController
{
	constexpr uint32_t m_speed = 0x8;
	constexpr uint32_t m_maxTorque = 0xC;
	constexpr uint32_t m_axis = 0x10;
	constexpr uint32_t m_inertiaFactor = 0x1C;
}

namespace CSoundEnvelope
{
	constexpr uint32_t m_current = 0x0;
	constexpr uint32_t m_target = 0x4;
	constexpr uint32_t m_rate = 0x8;
	constexpr uint32_t m_forceupdate = 0xC;
}

namespace CCopyRecipientFilter
{
	constexpr uint32_t m_Flags = 0x8;
	constexpr uint32_t m_Recipients = 0x10;
}

namespace CSoundPatch
{
	constexpr uint32_t m_pitch = 0x8;
	constexpr uint32_t m_volume = 0x18;
	constexpr uint32_t m_shutdownTime = 0x30;
	constexpr uint32_t m_flLastTime = 0x34;
	constexpr uint32_t m_iszSoundScriptName = 0x38;
	constexpr uint32_t m_hEnt = 0x40;
	constexpr uint32_t m_soundEntityIndex = 0x44;
	constexpr uint32_t m_soundOrigin = 0x48;
	constexpr uint32_t m_isPlaying = 0x54;
	constexpr uint32_t m_Filter = 0x58;
	constexpr uint32_t m_flCloseCaptionDuration = 0x80;
	constexpr uint32_t m_bUpdatedSoundOrigin = 0x84;
	constexpr uint32_t m_iszClassName = 0x88;
}

namespace CTakeDamageInfoAPI
{
}

namespace CPulseServerCursor
{
}

namespace CPulseGraphComponentBase
{
	constexpr uint32_t m_hOwner = 0x8;
	constexpr uint32_t m_sNameFixupStaticPrefix = 0x10;
	constexpr uint32_t m_sNameFixupParent = 0x18;
	constexpr uint32_t m_sNameFixupLocal = 0x20;
}

namespace CPulseGraphInstance_ServerEntity
{
	constexpr uint32_t m_pComponent = 0xD8;
}

namespace CPulseGraphInstance_ServerPointEntity
{
}

namespace CPulseGraphComponentPointServer
{
}

namespace CPulseCell_Value_FindEntByClassNameWithin
{
	constexpr uint32_t m_EntityType = 0x48;
}

namespace CPulseCell_Value_FindEntByName
{
	constexpr uint32_t m_EntityType = 0x48;
}

namespace CPulseCell_Step_FollowEntity
{
	constexpr uint32_t m_ParamBoneOrAttachName = 0x48;
	constexpr uint32_t m_ParamBoneOrAttachNameChild = 0x50;
}

namespace CPulseCell_Step_EntFire
{
	constexpr uint32_t m_Input = 0x48;
}

namespace CPulseCell_Inflow_GameEvent
{
	constexpr uint32_t m_EventName = 0x70;
}

namespace CPulseServerFuncs
{
}

namespace CPulseCell_SoundEventStart
{
	constexpr uint32_t m_Type = 0x48;
}

namespace CPulseServerFuncs_Sounds
{
}

namespace CPulseCell_Outflow_PlaySceneBase
{
	constexpr uint32_t m_OnFinished = 0x48;
	constexpr uint32_t m_OnCanceled = 0x58;
	constexpr uint32_t m_Triggers = 0x68;
}

namespace CPulseCell_Outflow_PlaySceneBase::CursorState_t
{
	constexpr uint32_t m_sceneInstance = 0x0;
}

namespace CPulseCell_Outflow_PlayVCD
{
	constexpr uint32_t m_vcdFilename = 0x80;
}

namespace CPulseCell_Outflow_PlaySequence
{
	constexpr uint32_t m_ParamSequenceName = 0x80;
}

namespace PulseScriptedSequenceData_t
{
	constexpr uint32_t m_nActorID = 0x0;
	constexpr uint32_t m_szPreIdleSequence = 0x8;
	constexpr uint32_t m_szEntrySequence = 0x10;
	constexpr uint32_t m_szSequence = 0x18;
	constexpr uint32_t m_szExitSequence = 0x20;
	constexpr uint32_t m_bLoopPreIdleSequence = 0x28;
	constexpr uint32_t m_bLoopActionSequence = 0x29;
	constexpr uint32_t m_bLoopPostIdleSequence = 0x2A;
	constexpr uint32_t m_bIgnoreLookAt = 0x2B;
}

namespace CPulseCell_Outflow_ScriptedSequence
{
	constexpr uint32_t m_scriptedSequenceDataMain = 0x48;
	constexpr uint32_t m_vecAdditionalActors = 0x78;
	constexpr uint32_t m_OnFinished = 0x90;
	constexpr uint32_t m_OnCanceled = 0xA0;
	constexpr uint32_t m_Triggers = 0xB0;
}

namespace CPulseCell_Outflow_ScriptedSequence::CursorState_t
{
	constexpr uint32_t m_scriptedSequence = 0x0;
}

namespace CTouchExpansionComponent
{
}

namespace dynpitchvol_base_t
{
	constexpr uint32_t preset = 0x0;
	constexpr uint32_t pitchrun = 0x4;
	constexpr uint32_t pitchstart = 0x8;
	constexpr uint32_t spinup = 0xC;
	constexpr uint32_t spindown = 0x10;
	constexpr uint32_t volrun = 0x14;
	constexpr uint32_t volstart = 0x18;
	constexpr uint32_t fadein = 0x1C;
	constexpr uint32_t fadeout = 0x20;
	constexpr uint32_t lfotype = 0x24;
	constexpr uint32_t lforate = 0x28;
	constexpr uint32_t lfomodpitch = 0x2C;
	constexpr uint32_t lfomodvol = 0x30;
	constexpr uint32_t cspinup = 0x34;
	constexpr uint32_t cspincount = 0x38;
	constexpr uint32_t pitch = 0x3C;
	constexpr uint32_t spinupsav = 0x40;
	constexpr uint32_t spindownsav = 0x44;
	constexpr uint32_t pitchfrac = 0x48;
	constexpr uint32_t vol = 0x4C;
	constexpr uint32_t fadeinsav = 0x50;
	constexpr uint32_t fadeoutsav = 0x54;
	constexpr uint32_t volfrac = 0x58;
	constexpr uint32_t lfofrac = 0x5C;
	constexpr uint32_t lfomult = 0x60;
}

namespace dynpitchvol_t
{
}

namespace ResponseContext_t
{
	constexpr uint32_t m_iszName = 0x0;
	constexpr uint32_t m_iszValue = 0x8;
	constexpr uint32_t m_fExpirationTime = 0x10;
}

namespace Relationship_t
{
	constexpr uint32_t disposition = 0x0;
	constexpr uint32_t priority = 0x4;
}

namespace thinkfunc_t
{
	constexpr uint32_t m_hFn = 0x8;
	constexpr uint32_t m_nContext = 0x10;
	constexpr uint32_t m_nNextThinkTick = 0x14;
	constexpr uint32_t m_nLastThinkTick = 0x18;
}

namespace CBaseFilter
{
	constexpr uint32_t m_bNegated = 0x4C0;
	constexpr uint32_t m_OnPass = 0x4C8;
	constexpr uint32_t m_OnFail = 0x4F0;
}

namespace CCollisionProperty
{
	constexpr uint32_t m_collisionAttribute = 0x10;
	constexpr uint32_t m_vecMins = 0x40;
	constexpr uint32_t m_vecMaxs = 0x4C;
	constexpr uint32_t m_usSolidFlags = 0x5A;
	constexpr uint32_t m_nSolidType = 0x5B;
	constexpr uint32_t m_triggerBloat = 0x5C;
	constexpr uint32_t m_nSurroundType = 0x5D;
	constexpr uint32_t m_CollisionGroup = 0x5E;
	constexpr uint32_t m_nEnablePhysics = 0x5F;
	constexpr uint32_t m_flBoundingRadius = 0x60;
	constexpr uint32_t m_vecSpecifiedSurroundingMins = 0x64;
	constexpr uint32_t m_vecSpecifiedSurroundingMaxs = 0x70;
	constexpr uint32_t m_vecSurroundingMaxs = 0x7C;
	constexpr uint32_t m_vecSurroundingMins = 0x88;
	constexpr uint32_t m_vCapsuleCenter1 = 0x94;
	constexpr uint32_t m_vCapsuleCenter2 = 0xA0;
	constexpr uint32_t m_flCapsuleRadius = 0xAC;
}

namespace CBasePlayerController
{
	constexpr uint32_t m_nInButtonsWhichAreToggles = 0x4C8;
	constexpr uint32_t m_nTickBase = 0x4D0;
	constexpr uint32_t m_hPawn = 0x500;
	constexpr uint32_t m_nSplitScreenSlot = 0x504;
	constexpr uint32_t m_hSplitOwner = 0x508;
	constexpr uint32_t m_hSplitScreenPlayers = 0x510;
	constexpr uint32_t m_bIsHLTV = 0x528;
	constexpr uint32_t m_iConnected = 0x52C;
	constexpr uint32_t m_iszPlayerName = 0x530;
	constexpr uint32_t m_szNetworkIDString = 0x5B0;
	constexpr uint32_t m_fLerpTime = 0x5B8;
	constexpr uint32_t m_bLagCompensation = 0x5BC;
	constexpr uint32_t m_bPredict = 0x5BD;
	constexpr uint32_t m_bAutoKickDisabled = 0x5BE;
	constexpr uint32_t m_bIsLowViolence = 0x5BF;
	constexpr uint32_t m_bGamePaused = 0x5C0;
	constexpr uint32_t m_nLastRealCommandNumberExecuted = 0x654;
	constexpr uint32_t m_nLastLateCommandExecuted = 0x658;
	constexpr uint32_t m_iIgnoreGlobalChat = 0x670;
	constexpr uint32_t m_flLastPlayerTalkTime = 0x674;
	constexpr uint32_t m_flLastEntitySteadyState = 0x678;
	constexpr uint32_t m_nAvailableEntitySteadyState = 0x67C;
	constexpr uint32_t m_bHasAnySteadyStateEnts = 0x680;
	constexpr uint32_t m_steamID = 0x690;
	constexpr uint32_t m_iDesiredFOV = 0x698;
}

namespace CServerOnlyEntity
{
}

namespace CServerOnlyPointEntity
{
}

namespace CLogicalEntity
{
}

namespace CEntityFlame
{
	constexpr uint32_t m_hEntAttached = 0x4C0;
	constexpr uint32_t m_bCheapEffect = 0x4C4;
	constexpr uint32_t m_flSize = 0x4C8;
	constexpr uint32_t m_bUseHitboxes = 0x4CC;
	constexpr uint32_t m_iNumHitboxFires = 0x4D0;
	constexpr uint32_t m_flHitboxFireScale = 0x4D4;
	constexpr uint32_t m_flLifetime = 0x4D8;
	constexpr uint32_t m_hAttacker = 0x4DC;
	constexpr uint32_t m_iDangerSound = 0x4E0;
	constexpr uint32_t m_flDirectDamagePerSecond = 0x4E4;
	constexpr uint32_t m_iCustomDamageType = 0x4E8;
}

namespace CFilterMultiple
{
	constexpr uint32_t m_nFilterType = 0x518;
	constexpr uint32_t m_iFilterName = 0x520;
	constexpr uint32_t m_hFilter = 0x570;
	constexpr uint32_t m_nFilterCount = 0x598;
}

namespace CFilterProximity
{
	constexpr uint32_t m_flRadius = 0x518;
}

namespace CFilterLOS
{
}

namespace CFilterClass
{
	constexpr uint32_t m_iFilterClass = 0x518;
}

namespace CBaseFire
{
	constexpr uint32_t m_flScale = 0x4C0;
	constexpr uint32_t m_flStartScale = 0x4C4;
	constexpr uint32_t m_flScaleTime = 0x4C8;
	constexpr uint32_t m_nFlags = 0x4CC;
}

namespace CFireSmoke
{
	constexpr uint32_t m_nFlameModelIndex = 0x4D0;
	constexpr uint32_t m_nFlameFromAboveModelIndex = 0x4D4;
}

namespace CFish
{
	constexpr uint32_t m_pool = 0x8E8;
	constexpr uint32_t m_id = 0x8EC;
	constexpr uint32_t m_x = 0x8F0;
	constexpr uint32_t m_y = 0x8F4;
	constexpr uint32_t m_z = 0x8F8;
	constexpr uint32_t m_angle = 0x8FC;
	constexpr uint32_t m_angleChange = 0x900;
	constexpr uint32_t m_forward = 0x904;
	constexpr uint32_t m_perp = 0x910;
	constexpr uint32_t m_poolOrigin = 0x91C;
	constexpr uint32_t m_waterLevel = 0x928;
	constexpr uint32_t m_speed = 0x92C;
	constexpr uint32_t m_desiredSpeed = 0x930;
	constexpr uint32_t m_calmSpeed = 0x934;
	constexpr uint32_t m_panicSpeed = 0x938;
	constexpr uint32_t m_avoidRange = 0x93C;
	constexpr uint32_t m_turnTimer = 0x940;
	constexpr uint32_t m_turnClockwise = 0x958;
	constexpr uint32_t m_goTimer = 0x960;
	constexpr uint32_t m_moveTimer = 0x978;
	constexpr uint32_t m_panicTimer = 0x990;
	constexpr uint32_t m_disperseTimer = 0x9A8;
	constexpr uint32_t m_proximityTimer = 0x9C0;
	constexpr uint32_t m_visible = 0x9D8;
}

namespace CFishPool
{
	constexpr uint32_t m_fishCount = 0x4D0;
	constexpr uint32_t m_maxRange = 0x4D4;
	constexpr uint32_t m_swimDepth = 0x4D8;
	constexpr uint32_t m_waterLevel = 0x4DC;
	constexpr uint32_t m_isDormant = 0x4E0;
	constexpr uint32_t m_fishes = 0x4E8;
	constexpr uint32_t m_visTimer = 0x500;
}

namespace CInfoData
{
}

namespace locksound_t
{
	constexpr uint32_t sLockedSound = 0x8;
	constexpr uint32_t sUnlockedSound = 0x10;
	constexpr uint32_t flwaitSound = 0x18;
}

namespace CLogicBranch
{
	constexpr uint32_t m_bInValue = 0x4C0;
	constexpr uint32_t m_Listeners = 0x4C8;
	constexpr uint32_t m_OnTrue = 0x4E0;
	constexpr uint32_t m_OnFalse = 0x508;
}

namespace CLogicDistanceCheck
{
	constexpr uint32_t m_iszEntityA = 0x4C0;
	constexpr uint32_t m_iszEntityB = 0x4C8;
	constexpr uint32_t m_flZone1Distance = 0x4D0;
	constexpr uint32_t m_flZone2Distance = 0x4D4;
	constexpr uint32_t m_InZone1 = 0x4D8;
	constexpr uint32_t m_InZone2 = 0x500;
	constexpr uint32_t m_InZone3 = 0x528;
}

namespace VelocitySampler
{
	constexpr uint32_t m_prevSample = 0x0;
	constexpr uint32_t m_fPrevSampleTime = 0xC;
	constexpr uint32_t m_fIdealSampleRate = 0x10;
}

namespace SimpleConstraintSoundProfile
{
	constexpr uint32_t eKeypoints = 0x8;
	constexpr uint32_t m_keyPoints = 0xC;
	constexpr uint32_t m_reversalSoundThresholds = 0x14;
}

namespace ConstraintSoundInfo
{
	constexpr uint32_t m_vSampler = 0x8;
	constexpr uint32_t m_soundProfile = 0x20;
	constexpr uint32_t m_forwardAxis = 0x40;
	constexpr uint32_t m_iszTravelSoundFwd = 0x50;
	constexpr uint32_t m_iszTravelSoundBack = 0x58;
	constexpr uint32_t m_iszReversalSounds = 0x68;
	constexpr uint32_t m_bPlayTravelSound = 0x80;
	constexpr uint32_t m_bPlayReversalSound = 0x81;
}

namespace CSmoothFunc
{
	constexpr uint32_t m_flSmoothAmplitude = 0x8;
	constexpr uint32_t m_flSmoothBias = 0xC;
	constexpr uint32_t m_flSmoothDuration = 0x10;
	constexpr uint32_t m_flSmoothRemainingTime = 0x14;
	constexpr uint32_t m_nSmoothDir = 0x18;
}

namespace magnetted_objects_t
{
	constexpr uint32_t hEntity = 0x8;
}

namespace CPointPrefab
{
	constexpr uint32_t m_targetMapName = 0x4C0;
	constexpr uint32_t m_forceWorldGroupID = 0x4C8;
	constexpr uint32_t m_associatedRelayTargetName = 0x4D0;
	constexpr uint32_t m_fixupNames = 0x4D8;
	constexpr uint32_t m_bLoadDynamic = 0x4D9;
	constexpr uint32_t m_associatedRelayEntity = 0x4DC;
}

namespace CSkyCamera
{
	constexpr uint32_t m_skyboxData = 0x4C0;
	constexpr uint32_t m_skyboxSlotToken = 0x550;
	constexpr uint32_t m_bUseAngles = 0x554;
	constexpr uint32_t m_pNext = 0x558;
}

namespace CSkyboxReference
{
	constexpr uint32_t m_worldGroupId = 0x4C0;
	constexpr uint32_t m_hSkyCamera = 0x4C4;
}

namespace sky3dparams_t
{
	constexpr uint32_t scale = 0x8;
	constexpr uint32_t origin = 0xC;
	constexpr uint32_t bClip3DSkyBoxNearToWorldFar = 0x18;
	constexpr uint32_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C;
	constexpr uint32_t fog = 0x20;
	constexpr uint32_t m_nWorldGroupID = 0x88;
}

namespace CSound
{
	constexpr uint32_t m_hOwner = 0x0;
	constexpr uint32_t m_hTarget = 0x4;
	constexpr uint32_t m_iVolume = 0x8;
	constexpr uint32_t m_flOcclusionScale = 0xC;
	constexpr uint32_t m_iType = 0x10;
	constexpr uint32_t m_iNextAudible = 0x14;
	constexpr uint32_t m_flExpireTime = 0x18;
	constexpr uint32_t m_iNext = 0x1C;
	constexpr uint32_t m_bNoExpirationTime = 0x1E;
	constexpr uint32_t m_ownerChannelIndex = 0x20;
	constexpr uint32_t m_vecOrigin = 0x24;
	constexpr uint32_t m_bHasOwner = 0x30;
}

namespace CEnvSoundscape
{
	constexpr uint32_t m_OnPlay = 0x4C0;
	constexpr uint32_t m_flRadius = 0x4E8;
	constexpr uint32_t m_soundscapeName = 0x4F0;
	constexpr uint32_t m_soundEventName = 0x4F8;
	constexpr uint32_t m_bOverrideWithEvent = 0x500;
	constexpr uint32_t m_soundscapeIndex = 0x504;
	constexpr uint32_t m_soundscapeEntityListId = 0x508;
	constexpr uint32_t m_soundEventHash = 0x50C;
	constexpr uint32_t m_positionNames = 0x510;
	constexpr uint32_t m_hProxySoundscape = 0x550;
	constexpr uint32_t m_bDisabled = 0x554;
}

namespace CEnvSoundscapeProxy
{
	constexpr uint32_t m_MainSoundscapeName = 0x558;
}

namespace lerpdata_t
{
	constexpr uint32_t m_hEnt = 0x0;
	constexpr uint32_t m_MoveType = 0x4;
	constexpr uint32_t m_flStartTime = 0x8;
	constexpr uint32_t m_vecStartOrigin = 0xC;
	constexpr uint32_t m_qStartRot = 0x20;
	constexpr uint32_t m_nFXIndex = 0x30;
}

namespace CNavLinkAnimgraphVar
{
	constexpr uint32_t m_strAnimgraphVar = 0x0;
	constexpr uint32_t m_unAlignmentDegrees = 0x8;
}

namespace CNavLinkMovementVData
{
	constexpr uint32_t m_bIsInterpolated = 0x0;
	constexpr uint32_t m_unRecommendedDistance = 0x4;
	constexpr uint32_t m_vecAnimgraphVars = 0x8;
}

namespace CNavVolumeMarkupVolume
{
}

namespace CNavVolumeCalculatedVector
{
}

namespace CNavVolumeBreadthFirstSearch
{
	constexpr uint32_t m_vStartPos = 0xA0;
	constexpr uint32_t m_flSearchDist = 0xAC;
}

namespace VPhysicsCollisionAttribute_t
{
	constexpr uint32_t m_nInteractsAs = 0x8;
	constexpr uint32_t m_nInteractsWith = 0x10;
	constexpr uint32_t m_nInteractsExclude = 0x18;
	constexpr uint32_t m_nEntityId = 0x20;
	constexpr uint32_t m_nOwnerId = 0x24;
	constexpr uint32_t m_nHierarchyId = 0x28;
	constexpr uint32_t m_nCollisionGroup = 0x2A;
	constexpr uint32_t m_nCollisionFunctionMask = 0x2B;
}

namespace CEffectData
{
	constexpr uint32_t m_vOrigin = 0x8;
	constexpr uint32_t m_vStart = 0x14;
	constexpr uint32_t m_vNormal = 0x20;
	constexpr uint32_t m_vAngles = 0x2C;
	constexpr uint32_t m_hEntity = 0x38;
	constexpr uint32_t m_hOtherEntity = 0x3C;
	constexpr uint32_t m_flScale = 0x40;
	constexpr uint32_t m_flMagnitude = 0x44;
	constexpr uint32_t m_flRadius = 0x48;
	constexpr uint32_t m_nSurfaceProp = 0x4C;
	constexpr uint32_t m_nEffectIndex = 0x50;
	constexpr uint32_t m_nDamageType = 0x58;
	constexpr uint32_t m_nPenetrate = 0x5C;
	constexpr uint32_t m_nMaterial = 0x5E;
	constexpr uint32_t m_nHitBox = 0x60;
	constexpr uint32_t m_nColor = 0x62;
	constexpr uint32_t m_fFlags = 0x63;
	constexpr uint32_t m_nAttachmentIndex = 0x64;
	constexpr uint32_t m_nAttachmentName = 0x68;
	constexpr uint32_t m_iEffectName = 0x6C;
	constexpr uint32_t m_nExplosionType = 0x6E;
}

namespace CEnvDetailController
{
	constexpr uint32_t m_flFadeStartDist = 0x4C0;
	constexpr uint32_t m_flFadeEndDist = 0x4C4;
}

namespace CEnvWindShared
{
	constexpr uint32_t m_flStartTime = 0x8;
	constexpr uint32_t m_iWindSeed = 0xC;
	constexpr uint32_t m_iMinWind = 0x10;
	constexpr uint32_t m_iMaxWind = 0x12;
	constexpr uint32_t m_windRadius = 0x14;
	constexpr uint32_t m_iMinGust = 0x18;
	constexpr uint32_t m_iMaxGust = 0x1A;
	constexpr uint32_t m_flMinGustDelay = 0x1C;
	constexpr uint32_t m_flMaxGustDelay = 0x20;
	constexpr uint32_t m_flGustDuration = 0x24;
	constexpr uint32_t m_iGustDirChange = 0x28;
	constexpr uint32_t m_location = 0x2C;
	constexpr uint32_t m_iszGustSound = 0x38;
	constexpr uint32_t m_iWindDir = 0x3C;
	constexpr uint32_t m_flWindSpeed = 0x40;
	constexpr uint32_t m_currentWindVector = 0x44;
	constexpr uint32_t m_CurrentSwayVector = 0x50;
	constexpr uint32_t m_PrevSwayVector = 0x5C;
	constexpr uint32_t m_iInitialWindDir = 0x68;
	constexpr uint32_t m_flInitialWindSpeed = 0x6C;
	constexpr uint32_t m_OnGustStart = 0x70;
	constexpr uint32_t m_OnGustEnd = 0x98;
	constexpr uint32_t m_flVariationTime = 0xC0;
	constexpr uint32_t m_flSwayTime = 0xC4;
	constexpr uint32_t m_flSimTime = 0xC8;
	constexpr uint32_t m_flSwitchTime = 0xCC;
	constexpr uint32_t m_flAveWindSpeed = 0xD0;
	constexpr uint32_t m_bGusting = 0xD4;
	constexpr uint32_t m_flWindAngleVariation = 0xD8;
	constexpr uint32_t m_flWindSpeedVariation = 0xDC;
	constexpr uint32_t m_iEntIndex = 0xE0;
}

namespace CEnvWindShared::WindAveEvent_t
{
	constexpr uint32_t m_flStartWindSpeed = 0x0;
	constexpr uint32_t m_flAveWindSpeed = 0x4;
}

namespace CEnvWindShared::WindVariationEvent_t
{
	constexpr uint32_t m_flWindAngleVariation = 0x0;
	constexpr uint32_t m_flWindSpeedVariation = 0x4;
}

namespace CInfoLadderDismount
{
}

namespace shard_model_desc_t
{
	constexpr uint32_t m_nModelID = 0x8;
	constexpr uint32_t m_hMaterial = 0x10;
	constexpr uint32_t m_solid = 0x18;
	constexpr uint32_t m_ShatterPanelMode = 0x19;
	constexpr uint32_t m_vecPanelSize = 0x1C;
	constexpr uint32_t m_vecStressPositionA = 0x24;
	constexpr uint32_t m_vecStressPositionB = 0x2C;
	constexpr uint32_t m_vecPanelVertices = 0x38;
	constexpr uint32_t m_flGlassHalfThickness = 0x50;
	constexpr uint32_t m_bHasParent = 0x54;
	constexpr uint32_t m_bParentFrozen = 0x55;
	constexpr uint32_t m_SurfacePropStringToken = 0x58;
}

namespace CShatterGlassShard
{
	constexpr uint32_t m_hShardHandle = 0x8;
	constexpr uint32_t m_vecPanelVertices = 0x10;
	constexpr uint32_t m_vLocalPanelSpaceOrigin = 0x28;
	constexpr uint32_t m_hModel = 0x30;
	constexpr uint32_t m_hPhysicsEntity = 0x38;
	constexpr uint32_t m_hParentPanel = 0x3C;
	constexpr uint32_t m_hParentShard = 0x40;
	constexpr uint32_t m_ShatterStressType = 0x44;
	constexpr uint32_t m_vecStressVelocity = 0x48;
	constexpr uint32_t m_bCreatedModel = 0x54;
	constexpr uint32_t m_flLongestEdge = 0x58;
	constexpr uint32_t m_flShortestEdge = 0x5C;
	constexpr uint32_t m_flLongestAcross = 0x60;
	constexpr uint32_t m_flShortestAcross = 0x64;
	constexpr uint32_t m_flSumOfAllEdges = 0x68;
	constexpr uint32_t m_flArea = 0x6C;
	constexpr uint32_t m_nOnFrameEdge = 0x70;
	constexpr uint32_t m_nParentPanelsNthShard = 0x74;
	constexpr uint32_t m_nSubShardGeneration = 0x78;
	constexpr uint32_t m_vecAverageVertPosition = 0x7C;
	constexpr uint32_t m_bAverageVertPositionIsValid = 0x84;
	constexpr uint32_t m_vecPanelSpaceStressPositionA = 0x88;
	constexpr uint32_t m_vecPanelSpaceStressPositionB = 0x90;
	constexpr uint32_t m_bStressPositionAIsValid = 0x98;
	constexpr uint32_t m_bStressPositionBIsValid = 0x99;
	constexpr uint32_t m_bFlaggedForRemoval = 0x9A;
	constexpr uint32_t m_flPhysicsEntitySpawnedAtTime = 0x9C;
	constexpr uint32_t m_bShatterRateLimited = 0xA0;
	constexpr uint32_t m_hEntityHittingMe = 0xA4;
	constexpr uint32_t m_vecNeighbors = 0xA8;
}

namespace CShatterGlassShardPhysics
{
	constexpr uint32_t m_bDebris = 0xBD0;
	constexpr uint32_t m_hParentShard = 0xBD4;
	constexpr uint32_t m_ShardDesc = 0xBD8;
}

namespace CFuncShatterglass
{
	constexpr uint32_t m_hGlassMaterialDamaged = 0x710;
	constexpr uint32_t m_hGlassMaterialUndamaged = 0x718;
	constexpr uint32_t m_hConcreteMaterialEdgeFace = 0x720;
	constexpr uint32_t m_hConcreteMaterialEdgeCaps = 0x728;
	constexpr uint32_t m_hConcreteMaterialEdgeFins = 0x730;
	constexpr uint32_t m_matPanelTransform = 0x738;
	constexpr uint32_t m_matPanelTransformWsTemp = 0x768;
	constexpr uint32_t m_vecShatterGlassShards = 0x798;
	constexpr uint32_t m_PanelSize = 0x7B0;
	constexpr uint32_t m_vecPanelNormalWs = 0x7B8;
	constexpr uint32_t m_nNumShardsEverCreated = 0x7C4;
	constexpr uint32_t m_flLastShatterSoundEmitTime = 0x7C8;
	constexpr uint32_t m_flLastCleanupTime = 0x7CC;
	constexpr uint32_t m_flInitAtTime = 0x7D0;
	constexpr uint32_t m_flGlassThickness = 0x7D4;
	constexpr uint32_t m_flSpawnInvulnerability = 0x7D8;
	constexpr uint32_t m_bBreakSilent = 0x7DC;
	constexpr uint32_t m_bBreakShardless = 0x7DD;
	constexpr uint32_t m_bBroken = 0x7DE;
	constexpr uint32_t m_bHasRateLimitedShards = 0x7DF;
	constexpr uint32_t m_bGlassNavIgnore = 0x7E0;
	constexpr uint32_t m_bGlassInFrame = 0x7E1;
	constexpr uint32_t m_bStartBroken = 0x7E2;
	constexpr uint32_t m_iInitialDamageType = 0x7E3;
	constexpr uint32_t m_szDamagePositioningEntityName01 = 0x7E8;
	constexpr uint32_t m_szDamagePositioningEntityName02 = 0x7F0;
	constexpr uint32_t m_szDamagePositioningEntityName03 = 0x7F8;
	constexpr uint32_t m_szDamagePositioningEntityName04 = 0x800;
	constexpr uint32_t m_vInitialDamagePositions = 0x808;
	constexpr uint32_t m_vExtraDamagePositions = 0x820;
	constexpr uint32_t m_OnBroken = 0x838;
	constexpr uint32_t m_iSurfaceType = 0x861;
}

namespace CGameRulesProxy
{
}

namespace CGameRules
{
	constexpr uint32_t m_szQuestName = 0x8;
	constexpr uint32_t m_nQuestPhase = 0x88;
}

namespace CGlowProperty
{
	constexpr uint32_t m_fGlowColor = 0x8;
	constexpr uint32_t m_iGlowType = 0x30;
	constexpr uint32_t m_iGlowTeam = 0x34;
	constexpr uint32_t m_nGlowRange = 0x38;
	constexpr uint32_t m_nGlowRangeMin = 0x3C;
	constexpr uint32_t m_glowColorOverride = 0x40;
	constexpr uint32_t m_bFlashing = 0x44;
	constexpr uint32_t m_flGlowTime = 0x48;
	constexpr uint32_t m_flGlowStartTime = 0x4C;
	constexpr uint32_t m_bEligibleForScreenHighlight = 0x50;
	constexpr uint32_t m_bGlowing = 0x51;
}

namespace CMultiplayRules
{
}

namespace fogparams_t
{
	constexpr uint32_t dirPrimary = 0x8;
	constexpr uint32_t colorPrimary = 0x14;
	constexpr uint32_t colorSecondary = 0x18;
	constexpr uint32_t colorPrimaryLerpTo = 0x1C;
	constexpr uint32_t colorSecondaryLerpTo = 0x20;
	constexpr uint32_t start = 0x24;
	constexpr uint32_t end = 0x28;
	constexpr uint32_t farz = 0x2C;
	constexpr uint32_t maxdensity = 0x30;
	constexpr uint32_t exponent = 0x34;
	constexpr uint32_t HDRColorScale = 0x38;
	constexpr uint32_t skyboxFogFactor = 0x3C;
	constexpr uint32_t skyboxFogFactorLerpTo = 0x40;
	constexpr uint32_t startLerpTo = 0x44;
	constexpr uint32_t endLerpTo = 0x48;
	constexpr uint32_t maxdensityLerpTo = 0x4C;
	constexpr uint32_t lerptime = 0x50;
	constexpr uint32_t duration = 0x54;
	constexpr uint32_t blendtobackground = 0x58;
	constexpr uint32_t scattering = 0x5C;
	constexpr uint32_t locallightscale = 0x60;
	constexpr uint32_t enable = 0x64;
	constexpr uint32_t blend = 0x65;
	constexpr uint32_t m_bNoReflectionFog = 0x66;
	constexpr uint32_t m_bPadding = 0x67;
}

namespace CFogController
{
	constexpr uint32_t m_fog = 0x4C0;
	constexpr uint32_t m_bUseAngles = 0x528;
	constexpr uint32_t m_iChangedVariables = 0x52C;
}

namespace sndopvarlatchdata_t
{
	constexpr uint32_t m_iszStack = 0x8;
	constexpr uint32_t m_iszOperator = 0x10;
	constexpr uint32_t m_iszOpvar = 0x18;
	constexpr uint32_t m_flVal = 0x20;
	constexpr uint32_t m_vPos = 0x24;
}

namespace IRagdoll
{
}

namespace ragdollelement_t
{
	constexpr uint32_t originParentSpace = 0x0;
	constexpr uint32_t parentIndex = 0x20;
	constexpr uint32_t m_flRadius = 0x24;
}

namespace ragdoll_t
{
	constexpr uint32_t list = 0x0;
	constexpr uint32_t boneIndex = 0x18;
	constexpr uint32_t allowStretch = 0x30;
	constexpr uint32_t unused = 0x31;
}

namespace PhysicsRagdollPose_t
{
	constexpr uint32_t __m_pChainEntity = 0x8;
	constexpr uint32_t m_Transforms = 0x30;
	constexpr uint32_t m_hOwner = 0x48;
}

namespace CSceneEventInfo
{
	constexpr uint32_t m_iLayer = 0x0;
	constexpr uint32_t m_iPriority = 0x4;
	constexpr uint32_t m_hSequence = 0x8;
	constexpr uint32_t m_flWeight = 0xC;
	constexpr uint32_t m_bHasArrived = 0x10;
	constexpr uint32_t m_nType = 0x14;
	constexpr uint32_t m_flNext = 0x18;
	constexpr uint32_t m_bIsGesture = 0x1C;
	constexpr uint32_t m_bShouldRemove = 0x1D;
	constexpr uint32_t m_hTarget = 0x44;
	constexpr uint32_t m_nSceneEventId = 0x48;
	constexpr uint32_t m_bClientSide = 0x4C;
	constexpr uint32_t m_bStarted = 0x4D;
}

namespace AmmoIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CEntitySubclassVDataBase
{
}

namespace RagdollCreationParams_t
{
	constexpr uint32_t m_vForce = 0x0;
	constexpr uint32_t m_nForceBone = 0xC;
}

namespace hudtextparms_t
{
	constexpr uint32_t color1 = 0x0;
	constexpr uint32_t color2 = 0x4;
	constexpr uint32_t effect = 0x8;
	constexpr uint32_t channel = 0x9;
	constexpr uint32_t x = 0xC;
	constexpr uint32_t y = 0x10;
}

namespace CSimpleSimTimer
{
	constexpr uint32_t m_next = 0x0;
	constexpr uint32_t m_nWorldGroupId = 0x4;
}

namespace CSimTimer
{
	constexpr uint32_t m_interval = 0x8;
}

namespace CRandSimTimer
{
	constexpr uint32_t m_minInterval = 0x8;
	constexpr uint32_t m_maxInterval = 0xC;
}

namespace CStopwatchBase
{
	constexpr uint32_t m_fIsRunning = 0x8;
}

namespace CSimpleStopwatch
{
}

namespace CStopwatch
{
	constexpr uint32_t m_interval = 0xC;
}

namespace CRandStopwatch
{
	constexpr uint32_t m_minInterval = 0xC;
	constexpr uint32_t m_maxInterval = 0x10;
}

namespace CSingleplayRules
{
	constexpr uint32_t m_bSinglePlayerGameEnding = 0x90;
}

namespace CSoundOpvarSetPointBase
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_hSource = 0x4C4;
	constexpr uint32_t m_iszSourceEntityName = 0x4D0;
	constexpr uint32_t m_vLastPosition = 0x528;
	constexpr uint32_t m_iszStackName = 0x538;
	constexpr uint32_t m_iszOperatorName = 0x540;
	constexpr uint32_t m_iszOpvarName = 0x548;
	constexpr uint32_t m_iOpvarIndex = 0x550;
	constexpr uint32_t m_bUseAutoCompare = 0x554;
}

namespace CSoundOpvarSetPointEntity
{
	constexpr uint32_t m_OnEnter = 0x558;
	constexpr uint32_t m_OnExit = 0x580;
	constexpr uint32_t m_bAutoDisable = 0x5A8;
	constexpr uint32_t m_flDistanceMin = 0x5EC;
	constexpr uint32_t m_flDistanceMax = 0x5F0;
	constexpr uint32_t m_flDistanceMapMin = 0x5F4;
	constexpr uint32_t m_flDistanceMapMax = 0x5F8;
	constexpr uint32_t m_flOcclusionRadius = 0x5FC;
	constexpr uint32_t m_flOcclusionMin = 0x600;
	constexpr uint32_t m_flOcclusionMax = 0x604;
	constexpr uint32_t m_flValSetOnDisable = 0x608;
	constexpr uint32_t m_bSetValueOnDisable = 0x60C;
	constexpr uint32_t m_nSimulationMode = 0x610;
	constexpr uint32_t m_nVisibilitySamples = 0x614;
	constexpr uint32_t m_vDynamicProxyPoint = 0x618;
	constexpr uint32_t m_flDynamicMaximumOcclusion = 0x624;
	constexpr uint32_t m_hDynamicEntity = 0x628;
	constexpr uint32_t m_iszDynamicEntityName = 0x630;
	constexpr uint32_t m_flPathingDistanceNormFactor = 0x638;
	constexpr uint32_t m_vPathingSourcePos = 0x63C;
	constexpr uint32_t m_vPathingListenerPos = 0x648;
	constexpr uint32_t m_vPathingDirection = 0x654;
	constexpr uint32_t m_nPathingSourceIndex = 0x660;
}

namespace CSoundOpvarSetAABBEntity
{
	constexpr uint32_t m_vDistanceInnerMins = 0x668;
	constexpr uint32_t m_vDistanceInnerMaxs = 0x674;
	constexpr uint32_t m_vDistanceOuterMins = 0x680;
	constexpr uint32_t m_vDistanceOuterMaxs = 0x68C;
	constexpr uint32_t m_nAABBDirection = 0x698;
	constexpr uint32_t m_vInnerMins = 0x69C;
	constexpr uint32_t m_vInnerMaxs = 0x6A8;
	constexpr uint32_t m_vOuterMins = 0x6B4;
	constexpr uint32_t m_vOuterMaxs = 0x6C0;
}

namespace CSoundOpvarSetOBBEntity
{
}

namespace CSoundOpvarSetPathCornerEntity
{
	constexpr uint32_t m_flDistMinSqr = 0x680;
	constexpr uint32_t m_flDistMaxSqr = 0x684;
	constexpr uint32_t m_iszPathCornerEntityName = 0x688;
}

namespace SoundOpvarTraceResult_t
{
	constexpr uint32_t vPos = 0x0;
	constexpr uint32_t bDidHit = 0xC;
	constexpr uint32_t flDistSqrToCenter = 0x10;
}

namespace CSoundOpvarSetAutoRoomEntity
{
	constexpr uint32_t m_traceResults = 0x668;
	constexpr uint32_t m_flSize = 0x698;
	constexpr uint32_t m_flHeightTolerance = 0x69C;
	constexpr uint32_t m_flSizeSqr = 0x6A0;
}

namespace CSoundOpvarSetOBBWindEntity
{
	constexpr uint32_t m_vMins = 0x558;
	constexpr uint32_t m_vMaxs = 0x564;
	constexpr uint32_t m_vDistanceMins = 0x570;
	constexpr uint32_t m_vDistanceMaxs = 0x57C;
	constexpr uint32_t m_flWindMin = 0x588;
	constexpr uint32_t m_flWindMax = 0x58C;
	constexpr uint32_t m_flWindMapMin = 0x590;
	constexpr uint32_t m_flWindMapMax = 0x594;
}

namespace CTakeDamageInfo
{
	constexpr uint32_t m_vecDamageForce = 0x8;
	constexpr uint32_t m_vecDamagePosition = 0x14;
	constexpr uint32_t m_vecReportedPosition = 0x20;
	constexpr uint32_t m_vecDamageDirection = 0x2C;
	constexpr uint32_t m_hInflictor = 0x38;
	constexpr uint32_t m_hAttacker = 0x3C;
	constexpr uint32_t m_hAbility = 0x40;
	constexpr uint32_t m_flDamage = 0x44;
	constexpr uint32_t m_bitsDamageType = 0x48;
	constexpr uint32_t m_iDamageCustom = 0x4C;
	constexpr uint32_t m_iAmmoType = 0x50;
	constexpr uint32_t m_flOriginalDamage = 0x60;
	constexpr uint32_t m_bShouldBleed = 0x64;
	constexpr uint32_t m_bShouldSpark = 0x65;
	constexpr uint32_t m_nDamageFlags = 0x70;
	constexpr uint32_t m_nNumObjectsPenetrated = 0x74;
	constexpr uint32_t m_hScriptInstance = 0x78;
	constexpr uint32_t m_bInTakeDamageFlow = 0x94;
}

namespace CTakeDamageResult
{
	constexpr uint32_t m_nHealthLost = 0x0;
	constexpr uint32_t m_nDamageTaken = 0x4;
}

namespace SummaryTakeDamageInfo_t
{
	constexpr uint32_t nSummarisedCount = 0x0;
	constexpr uint32_t info = 0x8;
	constexpr uint32_t result = 0xA0;
	constexpr uint32_t hTarget = 0xA8;
}

namespace CTakeDamageSummaryScopeGuard
{
	constexpr uint32_t m_vecSummaries = 0x8;
}

namespace CTeamplayRules
{
}

namespace CEconItemAttribute
{
	constexpr uint32_t m_iAttributeDefinitionIndex = 0x30;
	constexpr uint32_t m_flValue = 0x34;
	constexpr uint32_t m_flInitialValue = 0x38;
	constexpr uint32_t m_nRefundableCurrency = 0x3C;
	constexpr uint32_t m_bSetBonus = 0x40;
}

namespace CAttributeManager
{
	constexpr uint32_t m_Providers = 0x8;
	constexpr uint32_t m_iReapplyProvisionParity = 0x20;
	constexpr uint32_t m_hOuter = 0x24;
	constexpr uint32_t m_bPreventLoopback = 0x28;
	constexpr uint32_t m_ProviderType = 0x2C;
	constexpr uint32_t m_CachedResults = 0x30;
}

namespace CAttributeList
{
	constexpr uint32_t m_Attributes = 0x8;
	constexpr uint32_t m_pManager = 0x58;
}

namespace IEconItemInterface
{
}

namespace CAttributeManager::cached_attribute_float_t
{
	constexpr uint32_t flIn = 0x0;
	constexpr uint32_t iAttribHook = 0x8;
	constexpr uint32_t flOut = 0x10;
}

namespace CEconItemView
{
	constexpr uint32_t m_iItemDefinitionIndex = 0x38;
	constexpr uint32_t m_iEntityQuality = 0x3C;
	constexpr uint32_t m_iEntityLevel = 0x40;
	constexpr uint32_t m_iItemID = 0x48;
	constexpr uint32_t m_iItemIDHigh = 0x50;
	constexpr uint32_t m_iItemIDLow = 0x54;
	constexpr uint32_t m_iAccountID = 0x58;
	constexpr uint32_t m_iInventoryPosition = 0x5C;
	constexpr uint32_t m_bInitialized = 0x68;
	constexpr uint32_t m_AttributeList = 0x70;
	constexpr uint32_t m_NetworkedDynamicAttributes = 0xD0;
	constexpr uint32_t m_szCustomName = 0x130;
	constexpr uint32_t m_szCustomNameOverride = 0x1D1;
}

namespace CAttributeContainer
{
	constexpr uint32_t m_Item = 0x50;
}

namespace IHasAttributes
{
}

namespace GameAmmoTypeInfo_t
{
	constexpr uint32_t m_nBuySize = 0x38;
	constexpr uint32_t m_nCost = 0x3C;
}

namespace EntitySpottedState_t
{
	constexpr uint32_t m_bSpotted = 0x8;
	constexpr uint32_t m_bSpottedByMask = 0xC;
}

namespace SpawnPoint
{
	constexpr uint32_t m_iPriority = 0x4C0;
	constexpr uint32_t m_bEnabled = 0x4C4;
	constexpr uint32_t m_nType = 0x4C8;
}

namespace SpawnPointCoopEnemy
{
	constexpr uint32_t m_szWeaponsToGive = 0x4D0;
	constexpr uint32_t m_szPlayerModelToUse = 0x4D8;
	constexpr uint32_t m_nArmorToSpawnWith = 0x4E0;
	constexpr uint32_t m_nDefaultBehavior = 0x4E4;
	constexpr uint32_t m_nBotDifficulty = 0x4E8;
	constexpr uint32_t m_bIsAgressive = 0x4EC;
	constexpr uint32_t m_bStartAsleep = 0x4ED;
	constexpr uint32_t m_flHideRadius = 0x4F0;
	constexpr uint32_t m_szBehaviorTreeFile = 0x500;
}

namespace CCSGameRules
{
	constexpr uint32_t __m_pChainEntity = 0x98;
	constexpr uint32_t m_coopMissionManager = 0xC0;
	constexpr uint32_t m_bFreezePeriod = 0xC4;
	constexpr uint32_t m_bWarmupPeriod = 0xC5;
	constexpr uint32_t m_fWarmupPeriodEnd = 0xC8;
	constexpr uint32_t m_fWarmupPeriodStart = 0xCC;
	constexpr uint32_t m_nTotalPausedTicks = 0xD0;
	constexpr uint32_t m_nPauseStartTick = 0xD4;
	constexpr uint32_t m_bServerPaused = 0xD8;
	constexpr uint32_t m_bGamePaused = 0xD9;
	constexpr uint32_t m_bTerroristTimeOutActive = 0xDA;
	constexpr uint32_t m_bCTTimeOutActive = 0xDB;
	constexpr uint32_t m_flTerroristTimeOutRemaining = 0xDC;
	constexpr uint32_t m_flCTTimeOutRemaining = 0xE0;
	constexpr uint32_t m_nTerroristTimeOuts = 0xE4;
	constexpr uint32_t m_nCTTimeOuts = 0xE8;
	constexpr uint32_t m_bTechnicalTimeOut = 0xEC;
	constexpr uint32_t m_bMatchWaitingForResume = 0xED;
	constexpr uint32_t m_iRoundTime = 0xF0;
	constexpr uint32_t m_fMatchStartTime = 0xF4;
	constexpr uint32_t m_fRoundStartTime = 0xF8;
	constexpr uint32_t m_flRestartRoundTime = 0xFC;
	constexpr uint32_t m_bGameRestart = 0x100;
	constexpr uint32_t m_flGameStartTime = 0x104;
	constexpr uint32_t m_timeUntilNextPhaseStarts = 0x108;
	constexpr uint32_t m_gamePhase = 0x10C;
	constexpr uint32_t m_totalRoundsPlayed = 0x110;
	constexpr uint32_t m_nRoundsPlayedThisPhase = 0x114;
	constexpr uint32_t m_nOvertimePlaying = 0x118;
	constexpr uint32_t m_iHostagesRemaining = 0x11C;
	constexpr uint32_t m_bAnyHostageReached = 0x120;
	constexpr uint32_t m_bMapHasBombTarget = 0x121;
	constexpr uint32_t m_bMapHasRescueZone = 0x122;
	constexpr uint32_t m_bMapHasBuyZone = 0x123;
	constexpr uint32_t m_bIsQueuedMatchmaking = 0x124;
	constexpr uint32_t m_nQueuedMatchmakingMode = 0x128;
	constexpr uint32_t m_bIsValveDS = 0x12C;
	constexpr uint32_t m_bLogoMap = 0x12D;
	constexpr uint32_t m_bPlayAllStepSoundsOnServer = 0x12E;
	constexpr uint32_t m_iSpectatorSlotCount = 0x130;
	constexpr uint32_t m_MatchDevice = 0x134;
	constexpr uint32_t m_bHasMatchStarted = 0x138;
	constexpr uint32_t m_nNextMapInMapgroup = 0x13C;
	constexpr uint32_t m_szTournamentEventName = 0x140;
	constexpr uint32_t m_szTournamentEventStage = 0x340;
	constexpr uint32_t m_szMatchStatTxt = 0x540;
	constexpr uint32_t m_szTournamentPredictionsTxt = 0x740;
	constexpr uint32_t m_nTournamentPredictionsPct = 0x940;
	constexpr uint32_t m_flCMMItemDropRevealStartTime = 0x944;
	constexpr uint32_t m_flCMMItemDropRevealEndTime = 0x948;
	constexpr uint32_t m_bIsDroppingItems = 0x94C;
	constexpr uint32_t m_bIsQuestEligible = 0x94D;
	constexpr uint32_t m_bIsHltvActive = 0x94E;
	constexpr uint32_t m_nGuardianModeWaveNumber = 0x950;
	constexpr uint32_t m_nGuardianModeSpecialKillsRemaining = 0x954;
	constexpr uint32_t m_nGuardianModeSpecialWeaponNeeded = 0x958;
	constexpr uint32_t m_nGuardianGrenadesToGiveBots = 0x95C;
	constexpr uint32_t m_nNumHeaviesToSpawn = 0x960;
	constexpr uint32_t m_numGlobalGiftsGiven = 0x964;
	constexpr uint32_t m_numGlobalGifters = 0x968;
	constexpr uint32_t m_numGlobalGiftsPeriodSeconds = 0x96C;
	constexpr uint32_t m_arrFeaturedGiftersAccounts = 0x970;
	constexpr uint32_t m_arrFeaturedGiftersGifts = 0x980;
	constexpr uint32_t m_arrProhibitedItemIndices = 0x990;
	constexpr uint32_t m_arrTournamentActiveCasterAccounts = 0xA58;
	constexpr uint32_t m_numBestOfMaps = 0xA68;
	constexpr uint32_t m_nHalloweenMaskListSeed = 0xA6C;
	constexpr uint32_t m_bBombDropped = 0xA70;
	constexpr uint32_t m_bBombPlanted = 0xA71;
	constexpr uint32_t m_iRoundWinStatus = 0xA74;
	constexpr uint32_t m_eRoundWinReason = 0xA78;
	constexpr uint32_t m_bTCantBuy = 0xA7C;
	constexpr uint32_t m_bCTCantBuy = 0xA7D;
	constexpr uint32_t m_flGuardianBuyUntilTime = 0xA80;
	constexpr uint32_t m_iMatchStats_RoundResults = 0xA84;
	constexpr uint32_t m_iMatchStats_PlayersAlive_CT = 0xAFC;
	constexpr uint32_t m_iMatchStats_PlayersAlive_T = 0xB74;
	constexpr uint32_t m_TeamRespawnWaveTimes = 0xBEC;
	constexpr uint32_t m_flNextRespawnWave = 0xC6C;
	constexpr uint32_t m_nServerQuestID = 0xCEC;
	constexpr uint32_t m_vMinimapMins = 0xCF0;
	constexpr uint32_t m_vMinimapMaxs = 0xCFC;
	constexpr uint32_t m_MinimapVerticalSectionHeights = 0xD08;
	constexpr uint32_t m_bDontIncrementCoopWave = 0xD28;
	constexpr uint32_t m_bSpawnedTerrorHuntHeavy = 0xD29;
	constexpr uint32_t m_nEndMatchMapGroupVoteTypes = 0xD2C;
	constexpr uint32_t m_nEndMatchMapGroupVoteOptions = 0xD54;
	constexpr uint32_t m_nEndMatchMapVoteWinner = 0xD7C;
	constexpr uint32_t m_iNumConsecutiveCTLoses = 0xD80;
	constexpr uint32_t m_iNumConsecutiveTerroristLoses = 0xD84;
	constexpr uint32_t m_bHasHostageBeenTouched = 0xDA0;
	constexpr uint32_t m_flIntermissionStartTime = 0xDA4;
	constexpr uint32_t m_flIntermissionEndTime = 0xDA8;
	constexpr uint32_t m_bLevelInitialized = 0xDAC;
	constexpr uint32_t m_iTotalRoundsPlayed = 0xDB0;
	constexpr uint32_t m_iUnBalancedRounds = 0xDB4;
	constexpr uint32_t m_endMatchOnRoundReset = 0xDB8;
	constexpr uint32_t m_endMatchOnThink = 0xDB9;
	constexpr uint32_t m_iFreezeTime = 0xDBC;
	constexpr uint32_t m_iNumTerrorist = 0xDC0;
	constexpr uint32_t m_iNumCT = 0xDC4;
	constexpr uint32_t m_iNumSpawnableTerrorist = 0xDC8;
	constexpr uint32_t m_iNumSpawnableCT = 0xDCC;
	constexpr uint32_t m_arrSelectedHostageSpawnIndices = 0xDD0;
	constexpr uint32_t m_nSpawnPointsRandomSeed = 0xDE8;
	constexpr uint32_t m_bFirstConnected = 0xDEC;
	constexpr uint32_t m_bCompleteReset = 0xDED;
	constexpr uint32_t m_bPickNewTeamsOnReset = 0xDEE;
	constexpr uint32_t m_bScrambleTeamsOnRestart = 0xDEF;
	constexpr uint32_t m_bSwapTeamsOnRestart = 0xDF0;
	constexpr uint32_t m_nEndMatchTiedVotes = 0xDF8;
	constexpr uint32_t m_bNeedToAskPlayersForContinueVote = 0xE14;
	constexpr uint32_t m_numQueuedMatchmakingAccounts = 0xE18;
	constexpr uint32_t m_pQueuedMatchmakingReservationString = 0xE20;
	constexpr uint32_t m_numTotalTournamentDrops = 0xE28;
	constexpr uint32_t m_numSpectatorsCountMax = 0xE2C;
	constexpr uint32_t m_numSpectatorsCountMaxTV = 0xE30;
	constexpr uint32_t m_numSpectatorsCountMaxLnk = 0xE34;
	constexpr uint32_t m_bForceTeamChangeSilent = 0xE40;
	constexpr uint32_t m_bLoadingRoundBackupData = 0xE41;
	constexpr uint32_t m_nMatchInfoShowType = 0xE78;
	constexpr uint32_t m_flMatchInfoDecidedTime = 0xE7C;
	constexpr uint32_t m_flCoopRespawnAndHealTime = 0xE98;
	constexpr uint32_t m_coopBonusCoinsFound = 0xE9C;
	constexpr uint32_t m_coopBonusPistolsOnly = 0xEA0;
	constexpr uint32_t m_coopPlayersInDeploymentZone = 0xEA1;
	constexpr uint32_t m_coopMissionDeadPlayerRespawnEnabled = 0xEA2;
	constexpr uint32_t mTeamDMLastWinningTeamNumber = 0xEA4;
	constexpr uint32_t mTeamDMLastThinkTime = 0xEA8;
	constexpr uint32_t m_flTeamDMLastAnnouncementTime = 0xEAC;
	constexpr uint32_t m_iAccountTerrorist = 0xEB0;
	constexpr uint32_t m_iAccountCT = 0xEB4;
	constexpr uint32_t m_iSpawnPointCount_Terrorist = 0xEB8;
	constexpr uint32_t m_iSpawnPointCount_CT = 0xEBC;
	constexpr uint32_t m_iMaxNumTerrorists = 0xEC0;
	constexpr uint32_t m_iMaxNumCTs = 0xEC4;
	constexpr uint32_t m_iLoserBonus = 0xEC8;
	constexpr uint32_t m_iLoserBonusMostRecentTeam = 0xECC;
	constexpr uint32_t m_tmNextPeriodicThink = 0xED0;
	constexpr uint32_t m_bVoiceWonMatchBragFired = 0xED4;
	constexpr uint32_t m_fWarmupNextChatNoticeTime = 0xED8;
	constexpr uint32_t m_iHostagesRescued = 0xEE0;
	constexpr uint32_t m_iHostagesTouched = 0xEE4;
	constexpr uint32_t m_flNextHostageAnnouncement = 0xEE8;
	constexpr uint32_t m_bNoTerroristsKilled = 0xEEC;
	constexpr uint32_t m_bNoCTsKilled = 0xEED;
	constexpr uint32_t m_bNoEnemiesKilled = 0xEEE;
	constexpr uint32_t m_bCanDonateWeapons = 0xEEF;
	constexpr uint32_t m_firstKillTime = 0xEF4;
	constexpr uint32_t m_firstBloodTime = 0xEFC;
	constexpr uint32_t m_hostageWasInjured = 0xF18;
	constexpr uint32_t m_hostageWasKilled = 0xF19;
	constexpr uint32_t m_bVoteCalled = 0xF28;
	constexpr uint32_t m_bServerVoteOnReset = 0xF29;
	constexpr uint32_t m_flVoteCheckThrottle = 0xF2C;
	constexpr uint32_t m_bBuyTimeEnded = 0xF30;
	constexpr uint32_t m_nLastFreezeEndBeep = 0xF34;
	constexpr uint32_t m_bTargetBombed = 0xF38;
	constexpr uint32_t m_bBombDefused = 0xF39;
	constexpr uint32_t m_bMapHasBombZone = 0xF3A;
	constexpr uint32_t m_vecMainCTSpawnPos = 0xF58;
	constexpr uint32_t m_CTSpawnPointsMasterList = 0xF68;
	constexpr uint32_t m_TerroristSpawnPointsMasterList = 0xF80;
	constexpr uint32_t m_bRespawningAllRespawnablePlayers = 0xF98;
	constexpr uint32_t m_iNextCTSpawnPoint = 0xF9C;
	constexpr uint32_t m_flCTSpawnPointUsedTime = 0xFA0;
	constexpr uint32_t m_iNextTerroristSpawnPoint = 0xFA4;
	constexpr uint32_t m_flTerroristSpawnPointUsedTime = 0xFA8;
	constexpr uint32_t m_CTSpawnPoints = 0xFB0;
	constexpr uint32_t m_TerroristSpawnPoints = 0xFC8;
	constexpr uint32_t m_bIsUnreservedGameServer = 0xFE0;
	constexpr uint32_t m_fAutobalanceDisplayTime = 0xFE4;
	constexpr uint32_t m_bAllowWeaponSwitch = 0x1250;
	constexpr uint32_t m_bRoundTimeWarningTriggered = 0x1251;
	constexpr uint32_t m_phaseChangeAnnouncementTime = 0x1254;
	constexpr uint32_t m_fNextUpdateTeamClanNamesTime = 0x1258;
	constexpr uint32_t m_flLastThinkTime = 0x125C;
	constexpr uint32_t m_fAccumulatedRoundOffDamage = 0x1260;
	constexpr uint32_t m_nShorthandedBonusLastEvalRound = 0x1264;
	constexpr uint32_t m_nMatchAbortedEarlyReason = 0x14E0;
	constexpr uint32_t m_bHasTriggeredRoundStartMusic = 0x14E4;
	constexpr uint32_t m_bHasTriggeredCoopSpawnReset = 0x14E5;
	constexpr uint32_t m_bSwitchingTeamsAtRoundReset = 0x14E6;
	constexpr uint32_t m_pGameModeRules = 0x1500;
	constexpr uint32_t m_BtGlobalBlackboard = 0x1508;
	constexpr uint32_t m_hPlayerResource = 0x1570;
	constexpr uint32_t m_RetakeRules = 0x1578;
	constexpr uint32_t m_GuardianBotSkillLevelMax = 0x175C;
	constexpr uint32_t m_GuardianBotSkillLevelMin = 0x1760;
	constexpr uint32_t m_arrTeamUniqueKillWeaponsMatch = 0x1768;
	constexpr uint32_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C8;
	constexpr uint32_t m_nMatchEndCount = 0x17F0;
	constexpr uint32_t m_nTTeamIntroVariant = 0x17F4;
	constexpr uint32_t m_nCTTeamIntroVariant = 0x17F8;
	constexpr uint32_t m_bTeamIntroPeriod = 0x17FC;
	constexpr uint32_t m_fTeamIntroPeriodEnd = 0x1800;
	constexpr uint32_t m_bPlayedTeamIntroVO = 0x1804;
	constexpr uint32_t m_iRoundEndWinnerTeam = 0x1808;
	constexpr uint32_t m_eRoundEndReason = 0x180C;
	constexpr uint32_t m_bRoundEndShowTimerDefend = 0x1810;
	constexpr uint32_t m_iRoundEndTimerTime = 0x1814;
	constexpr uint32_t m_sRoundEndFunFactToken = 0x1818;
	constexpr uint32_t m_iRoundEndFunFactPlayerSlot = 0x1820;
	constexpr uint32_t m_iRoundEndFunFactData1 = 0x1824;
	constexpr uint32_t m_iRoundEndFunFactData2 = 0x1828;
	constexpr uint32_t m_iRoundEndFunFactData3 = 0x182C;
	constexpr uint32_t m_sRoundEndMessage = 0x1830;
	constexpr uint32_t m_iRoundEndPlayerCount = 0x1838;
	constexpr uint32_t m_bRoundEndNoMusic = 0x183C;
	constexpr uint32_t m_iRoundEndLegacy = 0x1840;
	constexpr uint32_t m_nRoundEndCount = 0x1844;
	constexpr uint32_t m_iRoundStartRoundNumber = 0x1848;
	constexpr uint32_t m_nRoundStartCount = 0x184C;
	constexpr uint32_t m_flLastPerfSampleTime = 0x5858;
	constexpr uint32_t m_bSkipNextServerPerfSample = 0x5860;
}

namespace CCSGameRulesProxy
{
	constexpr uint32_t m_pGameRules = 0x4C0;
}

namespace CCSGameModeRules
{
	constexpr uint32_t __m_pChainEntity = 0x8;
}

namespace CRetakeGameRules
{
	constexpr uint32_t m_nMatchSeed = 0xF8;
	constexpr uint32_t m_bBlockersPresent = 0xFC;
	constexpr uint32_t m_bRoundInProgress = 0xFD;
	constexpr uint32_t m_iFirstSecondHalfRound = 0x100;
	constexpr uint32_t m_iBombSite = 0x104;
}

namespace CCSTakeDamageInfoAPI
{
}

namespace CCSGameModeRules_Noop
{
}

namespace CCSGameModeScript
{
}

namespace CCSGameModeScript_ConVars
{
}

namespace CCSGameModeRules_ArmsRace
{
	constexpr uint32_t m_WeaponSequence = 0x38;
}

namespace CCSArmsRaceScript
{
	constexpr uint32_t m_pOuter = 0xD8;
}

namespace CCSGameModeRules_Deathmatch
{
	constexpr uint32_t m_flDMBonusStartTime = 0x38;
	constexpr uint32_t m_flDMBonusTimeLength = 0x3C;
	constexpr uint32_t m_nDMBonusWeaponLoadoutSlot = 0x40;
}

namespace CCSDeathmatchScript
{
	constexpr uint32_t m_pOuter = 0xD8;
}

namespace CCSDeathmatchScript_ConVars
{
}

namespace QuestProgress
{
}

namespace CSPerRoundStats_t
{
	constexpr uint32_t m_iKills = 0x30;
	constexpr uint32_t m_iDeaths = 0x34;
	constexpr uint32_t m_iAssists = 0x38;
	constexpr uint32_t m_iDamage = 0x3C;
	constexpr uint32_t m_iEquipmentValue = 0x40;
	constexpr uint32_t m_iMoneySaved = 0x44;
	constexpr uint32_t m_iKillReward = 0x48;
	constexpr uint32_t m_iLiveTime = 0x4C;
	constexpr uint32_t m_iHeadShotKills = 0x50;
	constexpr uint32_t m_iObjective = 0x54;
	constexpr uint32_t m_iCashEarned = 0x58;
	constexpr uint32_t m_iUtilityDamage = 0x5C;
	constexpr uint32_t m_iEnemiesFlashed = 0x60;
}

namespace CSMatchStats_t
{
	constexpr uint32_t m_iEnemy5Ks = 0x68;
	constexpr uint32_t m_iEnemy4Ks = 0x6C;
	constexpr uint32_t m_iEnemy3Ks = 0x70;
	constexpr uint32_t m_iEnemyKnifeKills = 0x74;
	constexpr uint32_t m_iEnemyTaserKills = 0x78;
	constexpr uint32_t m_iEnemy2Ks = 0x7C;
	constexpr uint32_t m_iUtility_Count = 0x80;
	constexpr uint32_t m_iUtility_Successes = 0x84;
	constexpr uint32_t m_iUtility_Enemies = 0x88;
	constexpr uint32_t m_iFlash_Count = 0x8C;
	constexpr uint32_t m_iFlash_Successes = 0x90;
	constexpr uint32_t m_nHealthPointsRemovedTotal = 0x94;
	constexpr uint32_t m_nHealthPointsDealtTotal = 0x98;
	constexpr uint32_t m_nShotsFiredTotal = 0x9C;
	constexpr uint32_t m_nShotsOnTargetTotal = 0xA0;
	constexpr uint32_t m_i1v1Count = 0xA4;
	constexpr uint32_t m_i1v1Wins = 0xA8;
	constexpr uint32_t m_i1v2Count = 0xAC;
	constexpr uint32_t m_i1v2Wins = 0xB0;
	constexpr uint32_t m_iEntryCount = 0xB4;
	constexpr uint32_t m_iEntryWins = 0xB8;
}

namespace CCSGO_TeamPreviewCharacterPosition
{
	constexpr uint32_t m_nVariant = 0x4C0;
	constexpr uint32_t m_nRandom = 0x4C4;
	constexpr uint32_t m_nOrdinal = 0x4C8;
	constexpr uint32_t m_sWeaponName = 0x4D0;
	constexpr uint32_t m_xuid = 0x4D8;
	constexpr uint32_t m_agentItem = 0x4E0;
	constexpr uint32_t m_glovesItem = 0x758;
	constexpr uint32_t m_weaponItem = 0x9D0;
}

namespace CCSGO_TeamSelectCharacterPosition
{
}

namespace CCSGO_TeamSelectTerroristPosition
{
}

namespace CCSGO_TeamSelectCounterTerroristPosition
{
}

namespace CCSGO_TeamIntroCharacterPosition
{
}

namespace CCSGO_TeamIntroTerroristPosition
{
}

namespace CCSGO_TeamIntroCounterTerroristPosition
{
}

namespace CCSGO_WingmanIntroCharacterPosition
{
}

namespace CCSGO_WingmanIntroTerroristPosition
{
}

namespace CCSGO_WingmanIntroCounterTerroristPosition
{
}

namespace CCSMinimapBoundary
{
}

namespace CCSGOPlayerAnimGraphState
{
}

namespace CCSPlayerPawn
{
	constexpr uint32_t m_pBulletServices = 0x15A8;
	constexpr uint32_t m_pHostageServices = 0x15B0;
	constexpr uint32_t m_pBuyServices = 0x15B8;
	constexpr uint32_t m_pActionTrackingServices = 0x15C0;
	constexpr uint32_t m_pRadioServices = 0x15C8;
	constexpr uint32_t m_pDamageReactServices = 0x15D0;
	constexpr uint32_t m_nCharacterDefIndex = 0x15D8;
	constexpr uint32_t m_hPreviousModel = 0x15E0;
	constexpr uint32_t m_bHasFemaleVoice = 0x15E8;
	constexpr uint32_t m_strVOPrefix = 0x15F0;
	constexpr uint32_t m_szLastPlaceName = 0x15F8;
	constexpr uint32_t m_bInHostageResetZone = 0x16B8;
	constexpr uint32_t m_bInBuyZone = 0x16B9;
	constexpr uint32_t m_bWasInBuyZone = 0x16BA;
	constexpr uint32_t m_bInHostageRescueZone = 0x16BB;
	constexpr uint32_t m_bInBombZone = 0x16BC;
	constexpr uint32_t m_bWasInHostageRescueZone = 0x16BD;
	constexpr uint32_t m_iRetakesOffering = 0x16C0;
	constexpr uint32_t m_iRetakesOfferingCard = 0x16C4;
	constexpr uint32_t m_bRetakesHasDefuseKit = 0x16C8;
	constexpr uint32_t m_bRetakesMVPLastRound = 0x16C9;
	constexpr uint32_t m_iRetakesMVPBoostItem = 0x16CC;
	constexpr uint32_t m_RetakesMVPBoostExtraUtility = 0x16D0;
	constexpr uint32_t m_flHealthShotBoostExpirationTime = 0x16D4;
	constexpr uint32_t m_flLandseconds = 0x16D8;
	constexpr uint32_t m_aimPunchAngle = 0x16DC;
	constexpr uint32_t m_aimPunchAngleVel = 0x16E8;
	constexpr uint32_t m_aimPunchTickBase = 0x16F4;
	constexpr uint32_t m_aimPunchTickFraction = 0x16F8;
	constexpr uint32_t m_aimPunchCache = 0x1700;
	constexpr uint32_t m_bIsBuyMenuOpen = 0x1718;
	constexpr uint32_t m_xLastHeadBoneTransform = 0x1D60;
	constexpr uint32_t m_bLastHeadBoneTransformIsValid = 0x1D80;
	constexpr uint32_t m_lastLandTime = 0x1D84;
	constexpr uint32_t m_bOnGroundLastTick = 0x1D88;
	constexpr uint32_t m_iPlayerLocked = 0x1D8C;
	constexpr uint32_t m_flTimeOfLastInjury = 0x1D94;
	constexpr uint32_t m_flNextSprayDecalTime = 0x1D98;
	constexpr uint32_t m_bNextSprayDecalTimeExpedited = 0x1D9C;
	constexpr uint32_t m_nRagdollDamageBone = 0x1DA0;
	constexpr uint32_t m_vRagdollDamageForce = 0x1DA4;
	constexpr uint32_t m_vRagdollDamagePosition = 0x1DB0;
	constexpr uint32_t m_szRagdollDamageWeaponName = 0x1DBC;
	constexpr uint32_t m_bRagdollDamageHeadshot = 0x1DFC;
	constexpr uint32_t m_vRagdollServerOrigin = 0x1E00;
	constexpr uint32_t m_EconGloves = 0x1E10;
	constexpr uint32_t m_nEconGlovesChanged = 0x2088;
	constexpr uint32_t m_qDeathEyeAngles = 0x208C;
	constexpr uint32_t m_bSkipOneHeadConstraintUpdate = 0x2098;
}

namespace CPlayerPing
{
	constexpr uint32_t m_hPlayer = 0x4C8;
	constexpr uint32_t m_hPingedEntity = 0x4CC;
	constexpr uint32_t m_iType = 0x4D0;
	constexpr uint32_t m_bUrgent = 0x4D4;
	constexpr uint32_t m_szPlaceName = 0x4D5;
}

namespace CCSPlayer_PingServices
{
	constexpr uint32_t m_flPlayerPingTokens = 0x40;
	constexpr uint32_t m_hPlayerPing = 0x54;
}

namespace CCSPlayerResource
{
	constexpr uint32_t m_bHostageAlive = 0x4C0;
	constexpr uint32_t m_isHostageFollowingSomeone = 0x4CC;
	constexpr uint32_t m_iHostageEntityIDs = 0x4D8;
	constexpr uint32_t m_bombsiteCenterA = 0x508;
	constexpr uint32_t m_bombsiteCenterB = 0x514;
	constexpr uint32_t m_hostageRescueX = 0x520;
	constexpr uint32_t m_hostageRescueY = 0x530;
	constexpr uint32_t m_hostageRescueZ = 0x540;
	constexpr uint32_t m_bEndMatchNextMapAllVoted = 0x550;
	constexpr uint32_t m_foundGoalPositions = 0x551;
}

namespace CCSPlayerControllerAPI
{
}

namespace CPlayer_ViewModelServices
{
}

namespace CCSPlayerBase_CameraServices
{
	constexpr uint32_t m_iFOV = 0x170;
	constexpr uint32_t m_iFOVStart = 0x174;
	constexpr uint32_t m_flFOVTime = 0x178;
	constexpr uint32_t m_flFOVRate = 0x17C;
	constexpr uint32_t m_hZoomOwner = 0x180;
	constexpr uint32_t m_hTriggerFogList = 0x188;
	constexpr uint32_t m_hLastFogTrigger = 0x1A0;
}

namespace WeaponPurchaseCount_t
{
	constexpr uint32_t m_nItemDefIndex = 0x30;
	constexpr uint32_t m_nCount = 0x32;
}

namespace WeaponPurchaseTracker_t
{
	constexpr uint32_t m_weaponPurchases = 0x8;
}

namespace CCSPlayer_ActionTrackingServices
{
	constexpr uint32_t m_hLastWeaponBeforeC4AutoSwitch = 0x208;
	constexpr uint32_t m_bIsRescuing = 0x23C;
	constexpr uint32_t m_weaponPurchasesThisMatch = 0x240;
	constexpr uint32_t m_weaponPurchasesThisRound = 0x298;
}

namespace CCSPlayer_BulletServices
{
	constexpr uint32_t m_totalHitsOnServer = 0x40;
}

namespace SellbackPurchaseEntry_t
{
	constexpr uint32_t m_unDefIdx = 0x30;
	constexpr uint32_t m_nCost = 0x34;
	constexpr uint32_t m_nPrevArmor = 0x38;
	constexpr uint32_t m_bPrevHelmet = 0x3C;
	constexpr uint32_t m_hItem = 0x40;
}

namespace CCSPlayer_BuyServices
{
	constexpr uint32_t m_vecSellbackPurchaseEntries = 0xC8;
}

namespace CCSPlayer_CameraServices
{
}

namespace CCSPlayer_HostageServices
{
	constexpr uint32_t m_hCarriedHostage = 0x40;
	constexpr uint32_t m_hCarriedHostageProp = 0x44;
}

namespace CCSPlayer_ItemServices
{
	constexpr uint32_t m_bHasDefuser = 0x40;
	constexpr uint32_t m_bHasHelmet = 0x41;
	constexpr uint32_t m_bHasHeavyArmor = 0x42;
}

namespace CCSPlayer_MovementServices
{
	constexpr uint32_t m_flMaxFallVelocity = 0x228;
	constexpr uint32_t m_vecLadderNormal = 0x22C;
	constexpr uint32_t m_nLadderSurfacePropIndex = 0x238;
	constexpr uint32_t m_flDuckAmount = 0x23C;
	constexpr uint32_t m_flDuckSpeed = 0x240;
	constexpr uint32_t m_bDuckOverride = 0x244;
	constexpr uint32_t m_bDesiresDuck = 0x245;
	constexpr uint32_t m_flDuckOffset = 0x248;
	constexpr uint32_t m_nDuckTimeMsecs = 0x24C;
	constexpr uint32_t m_nDuckJumpTimeMsecs = 0x250;
	constexpr uint32_t m_nJumpTimeMsecs = 0x254;
	constexpr uint32_t m_flLastDuckTime = 0x258;
	constexpr uint32_t m_vecLastPositionAtFullCrouchSpeed = 0x268;
	constexpr uint32_t m_duckUntilOnGround = 0x270;
	constexpr uint32_t m_bHasWalkMovedSinceLastJump = 0x271;
	constexpr uint32_t m_bInStuckTest = 0x272;
	constexpr uint32_t m_flStuckCheckTime = 0x280;
	constexpr uint32_t m_nTraceCount = 0x480;
	constexpr uint32_t m_StuckLast = 0x484;
	constexpr uint32_t m_bSpeedCropped = 0x488;
	constexpr uint32_t m_nOldWaterLevel = 0x48C;
	constexpr uint32_t m_flWaterEntryTime = 0x490;
	constexpr uint32_t m_vecForward = 0x494;
	constexpr uint32_t m_vecLeft = 0x4A0;
	constexpr uint32_t m_vecUp = 0x4AC;
	constexpr uint32_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4B8;
	constexpr uint32_t m_bMadeFootstepNoise = 0x4BC;
	constexpr uint32_t m_iFootsteps = 0x4C0;
	constexpr uint32_t m_bOldJumpPressed = 0x4C4;
	constexpr uint32_t m_flJumpPressedTime = 0x4C8;
	constexpr uint32_t m_flJumpUntil = 0x4CC;
	constexpr uint32_t m_flJumpVel = 0x4D0;
	constexpr uint32_t m_fStashGrenadeParameterWhen = 0x4D4;
	constexpr uint32_t m_nButtonDownMaskPrev = 0x4D8;
	constexpr uint32_t m_flOffsetTickCompleteTime = 0x4E0;
	constexpr uint32_t m_flOffsetTickStashedSpeed = 0x4E4;
	constexpr uint32_t m_flStamina = 0x4E8;
	constexpr uint32_t m_flHeightAtJumpStart = 0x4EC;
	constexpr uint32_t m_flMaxJumpHeightThisJump = 0x4F0;
}

namespace CCSPlayer_UseServices
{
	constexpr uint32_t m_hLastKnownUseEntity = 0x40;
	constexpr uint32_t m_flLastUseTimeStamp = 0x44;
	constexpr uint32_t m_flTimeStartedHoldingUse = 0x48;
	constexpr uint32_t m_flTimeLastUsedWindow = 0x4C;
}

namespace CBaseViewModel
{
	constexpr uint32_t m_vecLastFacing = 0x8F0;
	constexpr uint32_t m_nViewModelIndex = 0x8FC;
	constexpr uint32_t m_nAnimationParity = 0x900;
	constexpr uint32_t m_flAnimationStartTime = 0x904;
	constexpr uint32_t m_hWeapon = 0x908;
	constexpr uint32_t m_sVMName = 0x910;
	constexpr uint32_t m_sAnimationPrefix = 0x918;
	constexpr uint32_t m_hOldLayerSequence = 0x920;
	constexpr uint32_t m_oldLayer = 0x924;
	constexpr uint32_t m_oldLayerStartTime = 0x928;
	constexpr uint32_t m_hControlPanel = 0x92C;
}

namespace CCSPlayer_ViewModelServices
{
	constexpr uint32_t m_hViewModel = 0x40;
}

namespace CCSPlayer_WaterServices
{
	constexpr uint32_t m_NextDrownDamageTime = 0x40;
	constexpr uint32_t m_nDrownDmgRate = 0x44;
	constexpr uint32_t m_AirFinishedTime = 0x48;
	constexpr uint32_t m_flWaterJumpTime = 0x4C;
	constexpr uint32_t m_vecWaterJumpVel = 0x50;
	constexpr uint32_t m_flSwimSoundTime = 0x5C;
}

namespace CCSPlayer_WeaponServices
{
	constexpr uint32_t m_flNextAttack = 0xA8;
	constexpr uint32_t m_bIsLookingAtWeapon = 0xAC;
	constexpr uint32_t m_bIsHoldingLookAtWeapon = 0xAD;
	constexpr uint32_t m_hSavedWeapon = 0xB0;
	constexpr uint32_t m_nTimeToMelee = 0xB4;
	constexpr uint32_t m_nTimeToSecondary = 0xB8;
	constexpr uint32_t m_nTimeToPrimary = 0xBC;
	constexpr uint32_t m_nTimeToSniperRifle = 0xC0;
	constexpr uint32_t m_bIsBeingGivenItem = 0xC4;
	constexpr uint32_t m_bIsPickingUpItemWithUse = 0xC5;
	constexpr uint32_t m_bPickedUpWeapon = 0xC6;
	constexpr uint32_t m_bDisableAutoDeploy = 0xC7;
	constexpr uint32_t m_nOldShootPositionHistoryCount = 0xC8;
	constexpr uint32_t m_nOldInputHistoryCount = 0x460;
}

namespace CCSObserver_ObserverServices
{
}

namespace CCSObserver_CameraServices
{
}

namespace CCSObserver_MovementServices
{
}

namespace CCSObserver_UseServices
{
}

namespace CCSObserver_ViewModelServices
{
}

namespace CSAdditionalPerRoundStats_t
{
	constexpr uint32_t m_numChickensKilled = 0x0;
	constexpr uint32_t m_killsWhileBlind = 0x4;
	constexpr uint32_t m_bombCarrierkills = 0x8;
	constexpr uint32_t m_iBurnDamageInflicted = 0xC;
	constexpr uint32_t m_iDinks = 0x10;
}

namespace CSAdditionalMatchStats_t
{
	constexpr uint32_t m_numRoundsSurvived = 0x14;
	constexpr uint32_t m_maxNumRoundsSurvived = 0x18;
	constexpr uint32_t m_numRoundsSurvivedTotal = 0x1C;
	constexpr uint32_t m_iRoundsWonWithoutPurchase = 0x20;
	constexpr uint32_t m_iRoundsWonWithoutPurchaseTotal = 0x24;
	constexpr uint32_t m_numFirstKills = 0x28;
	constexpr uint32_t m_numClutchKills = 0x2C;
	constexpr uint32_t m_numPistolKills = 0x30;
	constexpr uint32_t m_numSniperKills = 0x34;
	constexpr uint32_t m_iNumSuicides = 0x38;
	constexpr uint32_t m_iNumTeamKills = 0x3C;
	constexpr uint32_t m_iTeamDamage = 0x40;
}

namespace CCSPlayerController_ActionTrackingServices
{
	constexpr uint32_t m_perRoundStats = 0x40;
	constexpr uint32_t m_matchStats = 0x90;
	constexpr uint32_t m_iNumRoundKills = 0x150;
	constexpr uint32_t m_iNumRoundKillsHeadshots = 0x154;
	constexpr uint32_t m_unTotalRoundDamageDealt = 0x158;
}

namespace CCSPlayerPawnBase
{
	constexpr uint32_t m_CTouchExpansionComponent = 0xBC0;
	constexpr uint32_t m_pPingServices = 0xC10;
	constexpr uint32_t m_pViewModelServices = 0xC18;
	constexpr uint32_t m_iDisplayHistoryBits = 0xC20;
	constexpr uint32_t m_flLastAttackedTeammate = 0xC24;
	constexpr uint32_t m_hOriginalController = 0xC28;
	constexpr uint32_t m_blindUntilTime = 0xC2C;
	constexpr uint32_t m_blindStartTime = 0xC30;
	constexpr uint32_t m_allowAutoFollowTime = 0xC34;
	constexpr uint32_t m_entitySpottedState = 0xC38;
	constexpr uint32_t m_nSpotRules = 0xC50;
	constexpr uint32_t m_iPlayerState = 0xC54;
	constexpr uint32_t m_chickenIdleSoundTimer = 0xC60;
	constexpr uint32_t m_chickenJumpSoundTimer = 0xC78;
	constexpr uint32_t m_vecLastBookmarkedPosition = 0xD30;
	constexpr uint32_t m_flLastDistanceTraveledNotice = 0xD3C;
	constexpr uint32_t m_flAccumulatedDistanceTraveled = 0xD40;
	constexpr uint32_t m_flLastFriendlyFireDamageReductionRatio = 0xD44;
	constexpr uint32_t m_bRespawning = 0xD48;
	constexpr uint32_t m_nLastPickupPriority = 0xD4C;
	constexpr uint32_t m_flLastPickupPriorityTime = 0xD50;
	constexpr uint32_t m_bIsScoped = 0xD54;
	constexpr uint32_t m_bIsWalking = 0xD55;
	constexpr uint32_t m_bResumeZoom = 0xD56;
	constexpr uint32_t m_bIsDefusing = 0xD57;
	constexpr uint32_t m_bIsGrabbingHostage = 0xD58;
	constexpr uint32_t m_iBlockingUseActionInProgress = 0xD5C;
	constexpr uint32_t m_fImmuneToGunGameDamageTime = 0xD60;
	constexpr uint32_t m_bGunGameImmunity = 0xD64;
	constexpr uint32_t m_GunGameImmunityColor = 0xD65;
	constexpr uint32_t m_fMolotovDamageTime = 0xD6C;
	constexpr uint32_t m_bHasMovedSinceSpawn = 0xD70;
	constexpr uint32_t m_bCanMoveDuringFreezePeriod = 0xD71;
	constexpr uint32_t m_flGuardianTooFarDistFrac = 0xD74;
	constexpr uint32_t m_flNextGuardianTooFarHurtTime = 0xD78;
	constexpr uint32_t m_flDetectedByEnemySensorTime = 0xD7C;
	constexpr uint32_t m_flDealtDamageToEnemyMostRecentTimestamp = 0xD80;
	constexpr uint32_t m_flLastEquippedHelmetTime = 0xD84;
	constexpr uint32_t m_flLastEquippedArmorTime = 0xD88;
	constexpr uint32_t m_nHeavyAssaultSuitCooldownRemaining = 0xD8C;
	constexpr uint32_t m_bResetArmorNextSpawn = 0xD90;
	constexpr uint32_t m_flLastBumpMineBumpTime = 0xD94;
	constexpr uint32_t m_flEmitSoundTime = 0xD98;
	constexpr uint32_t m_iNumSpawns = 0xD9C;
	constexpr uint32_t m_iShouldHaveCash = 0xDA0;
	constexpr uint32_t m_flIdleTimeSinceLastAction = 0xDA8;
	constexpr uint32_t m_flNameChangeHistory = 0xDAC;
	constexpr uint32_t m_fLastGivenDefuserTime = 0xDC0;
	constexpr uint32_t m_fLastGivenBombTime = 0xDC4;
	constexpr uint32_t m_bHasNightVision = 0xDC8;
	constexpr uint32_t m_bNightVisionOn = 0xDC9;
	constexpr uint32_t m_fNextRadarUpdateTime = 0xDCC;
	constexpr uint32_t m_flLastMoneyUpdateTime = 0xDD0;
	constexpr uint32_t m_MenuStringBuffer = 0xDD4;
	constexpr uint32_t m_fIntroCamTime = 0x11D4;
	constexpr uint32_t m_nMyCollisionGroup = 0x11D8;
	constexpr uint32_t m_bInNoDefuseArea = 0x11DC;
	constexpr uint32_t m_bKilledByTaser = 0x11DD;
	constexpr uint32_t m_iMoveState = 0x11E0;
	constexpr uint32_t m_grenadeParameterStashTime = 0x11E4;
	constexpr uint32_t m_bGrenadeParametersStashed = 0x11E8;
	constexpr uint32_t m_angStashedShootAngles = 0x11EC;
	constexpr uint32_t m_vecStashedGrenadeThrowPosition = 0x11F8;
	constexpr uint32_t m_vecStashedVelocity = 0x1204;
	constexpr uint32_t m_angShootAngleHistory = 0x1210;
	constexpr uint32_t m_vecThrowPositionHistory = 0x1228;
	constexpr uint32_t m_vecVelocityHistory = 0x1240;
	constexpr uint32_t m_bDiedAirborne = 0x1258;
	constexpr uint32_t m_iBombSiteIndex = 0x125C;
	constexpr uint32_t m_nWhichBombZone = 0x1260;
	constexpr uint32_t m_bInBombZoneTrigger = 0x1264;
	constexpr uint32_t m_bWasInBombZoneTrigger = 0x1265;
	constexpr uint32_t m_iDirection = 0x1268;
	constexpr uint32_t m_iShotsFired = 0x126C;
	constexpr uint32_t m_ArmorValue = 0x1270;
	constexpr uint32_t m_flFlinchStack = 0x1274;
	constexpr uint32_t m_flVelocityModifier = 0x1278;
	constexpr uint32_t m_flHitHeading = 0x127C;
	constexpr uint32_t m_nHitBodyPart = 0x1280;
	constexpr uint32_t m_iHostagesKilled = 0x1284;
	constexpr uint32_t m_vecTotalBulletForce = 0x1288;
	constexpr uint32_t m_flFlashDuration = 0x1294;
	constexpr uint32_t m_flFlashMaxAlpha = 0x1298;
	constexpr uint32_t m_flProgressBarStartTime = 0x129C;
	constexpr uint32_t m_iProgressBarDuration = 0x12A0;
	constexpr uint32_t m_bWaitForNoAttack = 0x12A4;
	constexpr uint32_t m_flLowerBodyYawTarget = 0x12A8;
	constexpr uint32_t m_bStrafing = 0x12AC;
	constexpr uint32_t m_lastStandingPos = 0x12B0;
	constexpr uint32_t m_ignoreLadderJumpTime = 0x12BC;
	constexpr uint32_t m_ladderSurpressionTimer = 0x12C0;
	constexpr uint32_t m_lastLadderNormal = 0x12D8;
	constexpr uint32_t m_lastLadderPos = 0x12E4;
	constexpr uint32_t m_thirdPersonHeading = 0x12F0;
	constexpr uint32_t m_flSlopeDropOffset = 0x12FC;
	constexpr uint32_t m_flSlopeDropHeight = 0x1300;
	constexpr uint32_t m_vHeadConstraintOffset = 0x1304;
	constexpr uint32_t m_iLastWeaponFireUsercmd = 0x1318;
	constexpr uint32_t m_angEyeAngles = 0x131C;
	constexpr uint32_t m_bVCollisionInitted = 0x1328;
	constexpr uint32_t m_storedSpawnPosition = 0x132C;
	constexpr uint32_t m_storedSpawnAngle = 0x1338;
	constexpr uint32_t m_bIsSpawning = 0x1344;
	constexpr uint32_t m_bHideTargetID = 0x1345;
	constexpr uint32_t m_nNumDangerZoneDamageHits = 0x1348;
	constexpr uint32_t m_bHud_MiniScoreHidden = 0x134C;
	constexpr uint32_t m_bHud_RadarHidden = 0x134D;
	constexpr uint32_t m_nLastKillerIndex = 0x1350;
	constexpr uint32_t m_nLastConcurrentKilled = 0x1354;
	constexpr uint32_t m_nDeathCamMusic = 0x1358;
	constexpr uint32_t m_iAddonBits = 0x135C;
	constexpr uint32_t m_iPrimaryAddon = 0x1360;
	constexpr uint32_t m_iSecondaryAddon = 0x1364;
	constexpr uint32_t m_currentDeafnessFilter = 0x1368;
	constexpr uint32_t m_NumEnemiesKilledThisSpawn = 0x136C;
	constexpr uint32_t m_NumEnemiesKilledThisRound = 0x1370;
	constexpr uint32_t m_NumEnemiesAtRoundStart = 0x1374;
	constexpr uint32_t m_wasNotKilledNaturally = 0x1378;
	constexpr uint32_t m_vecPlayerPatchEconIndices = 0x137C;
	constexpr uint32_t m_iDeathFlags = 0x1390;
	constexpr uint32_t m_hPet = 0x1394;
	constexpr uint32_t m_unCurrentEquipmentValue = 0x1560;
	constexpr uint32_t m_unRoundStartEquipmentValue = 0x1562;
	constexpr uint32_t m_unFreezetimeEndEquipmentValue = 0x1564;
	constexpr uint32_t m_nSurvivalTeamNumber = 0x1568;
	constexpr uint32_t m_bHasDeathInfo = 0x156C;
	constexpr uint32_t m_flDeathInfoTime = 0x1570;
	constexpr uint32_t m_vecDeathInfoOrigin = 0x1574;
	constexpr uint32_t m_bKilledByHeadshot = 0x1580;
	constexpr uint32_t m_LastHitBox = 0x1584;
	constexpr uint32_t m_LastHealth = 0x1588;
	constexpr uint32_t m_flLastCollisionCeiling = 0x158C;
	constexpr uint32_t m_flLastCollisionCeilingChangeTime = 0x1590;
	constexpr uint32_t m_pBot = 0x1598;
	constexpr uint32_t m_bBotAllowActive = 0x15A0;
	constexpr uint32_t m_bCommittingSuicideOnTeamChange = 0x15A1;
}

namespace CCSPlayerController
{
	constexpr uint32_t m_pInGameMoneyServices = 0x6C8;
	constexpr uint32_t m_pInventoryServices = 0x6D0;
	constexpr uint32_t m_pActionTrackingServices = 0x6D8;
	constexpr uint32_t m_pDamageServices = 0x6E0;
	constexpr uint32_t m_iPing = 0x6E8;
	constexpr uint32_t m_bHasCommunicationAbuseMute = 0x6EC;
	constexpr uint32_t m_szCrosshairCodes = 0x6F0;
	constexpr uint32_t m_iPendingTeamNum = 0x6F8;
	constexpr uint32_t m_flForceTeamTime = 0x6FC;
	constexpr uint32_t m_iCompTeammateColor = 0x700;
	constexpr uint32_t m_bEverPlayedOnTeam = 0x704;
	constexpr uint32_t m_bAttemptedToGetColor = 0x705;
	constexpr uint32_t m_iTeammatePreferredColor = 0x708;
	constexpr uint32_t m_bTeamChanged = 0x70C;
	constexpr uint32_t m_bInSwitchTeam = 0x70D;
	constexpr uint32_t m_bHasSeenJoinGame = 0x70E;
	constexpr uint32_t m_bJustBecameSpectator = 0x70F;
	constexpr uint32_t m_bSwitchTeamsOnNextRoundReset = 0x710;
	constexpr uint32_t m_bRemoveAllItemsOnNextRoundReset = 0x711;
	constexpr uint32_t m_szClan = 0x718;
	constexpr uint32_t m_szClanName = 0x720;
	constexpr uint32_t m_iCoachingTeam = 0x740;
	constexpr uint32_t m_nPlayerDominated = 0x748;
	constexpr uint32_t m_nPlayerDominatingMe = 0x750;
	constexpr uint32_t m_iCompetitiveRanking = 0x758;
	constexpr uint32_t m_iCompetitiveWins = 0x75C;
	constexpr uint32_t m_iCompetitiveRankType = 0x760;
	constexpr uint32_t m_iCompetitiveRankingPredicted_Win = 0x764;
	constexpr uint32_t m_iCompetitiveRankingPredicted_Loss = 0x768;
	constexpr uint32_t m_iCompetitiveRankingPredicted_Tie = 0x76C;
	constexpr uint32_t m_nEndMatchNextMapVote = 0x770;
	constexpr uint32_t m_unActiveQuestId = 0x774;
	constexpr uint32_t m_nQuestProgressReason = 0x778;
	constexpr uint32_t m_unPlayerTvControlFlags = 0x77C;
	constexpr uint32_t m_iDraftIndex = 0x7A8;
	constexpr uint32_t m_msQueuedModeDisconnectionTimestamp = 0x7AC;
	constexpr uint32_t m_uiAbandonRecordedReason = 0x7B0;
	constexpr uint32_t m_bCannotBeKicked = 0x7B4;
	constexpr uint32_t m_bEverFullyConnected = 0x7B5;
	constexpr uint32_t m_bAbandonAllowsSurrender = 0x7B6;
	constexpr uint32_t m_bAbandonOffersInstantSurrender = 0x7B7;
	constexpr uint32_t m_bDisconnection1MinWarningPrinted = 0x7B8;
	constexpr uint32_t m_bScoreReported = 0x7B9;
	constexpr uint32_t m_nDisconnectionTick = 0x7BC;
	constexpr uint32_t m_bControllingBot = 0x7C8;
	constexpr uint32_t m_bHasControlledBotThisRound = 0x7C9;
	constexpr uint32_t m_bHasBeenControlledByPlayerThisRound = 0x7CA;
	constexpr uint32_t m_nBotsControlledThisRound = 0x7CC;
	constexpr uint32_t m_bCanControlObservedBot = 0x7D0;
	constexpr uint32_t m_hPlayerPawn = 0x7D4;
	constexpr uint32_t m_hObserverPawn = 0x7D8;
	constexpr uint32_t m_DesiredObserverMode = 0x7DC;
	constexpr uint32_t m_hDesiredObserverTarget = 0x7E0;
	constexpr uint32_t m_bPawnIsAlive = 0x7E4;
	constexpr uint32_t m_iPawnHealth = 0x7E8;
	constexpr uint32_t m_iPawnArmor = 0x7EC;
	constexpr uint32_t m_bPawnHasDefuser = 0x7F0;
	constexpr uint32_t m_bPawnHasHelmet = 0x7F1;
	constexpr uint32_t m_nPawnCharacterDefIndex = 0x7F2;
	constexpr uint32_t m_iPawnLifetimeStart = 0x7F4;
	constexpr uint32_t m_iPawnLifetimeEnd = 0x7F8;
	constexpr uint32_t m_iPawnBotDifficulty = 0x7FC;
	constexpr uint32_t m_hOriginalControllerOfCurrentPawn = 0x800;
	constexpr uint32_t m_iScore = 0x804;
	constexpr uint32_t m_iRoundScore = 0x808;
	constexpr uint32_t m_iRoundsWon = 0x80C;
	constexpr uint32_t m_vecKills = 0x810;
	constexpr uint32_t m_bMvpNoMusic = 0x828;
	constexpr uint32_t m_eMvpReason = 0x82C;
	constexpr uint32_t m_iMusicKitID = 0x830;
	constexpr uint32_t m_iMusicKitMVPs = 0x834;
	constexpr uint32_t m_iMVPs = 0x838;
	constexpr uint32_t m_nUpdateCounter = 0x83C;
	constexpr uint32_t m_flSmoothedPing = 0x840;
	constexpr uint32_t m_lastHeldVoteTimer = 0xF8E8;
	constexpr uint32_t m_bShowHints = 0xF900;
	constexpr uint32_t m_iNextTimeCheck = 0xF904;
	constexpr uint32_t m_bJustDidTeamKill = 0xF908;
	constexpr uint32_t m_bPunishForTeamKill = 0xF909;
	constexpr uint32_t m_bGaveTeamDamageWarning = 0xF90A;
	constexpr uint32_t m_bGaveTeamDamageWarningThisRound = 0xF90B;
	constexpr uint32_t m_dblLastReceivedPacketPlatFloatTime = 0xF910;
	constexpr uint32_t m_LastTeamDamageWarningTime = 0xF918;
	constexpr uint32_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF91C;
	constexpr uint32_t m_nSuspiciousHitCount = 0xF920;
	constexpr uint32_t m_nNonSuspiciousHitStreak = 0xF924;
}

namespace CDamageRecord
{
	constexpr uint32_t m_PlayerDamager = 0x28;
	constexpr uint32_t m_PlayerRecipient = 0x2C;
	constexpr uint32_t m_hPlayerControllerDamager = 0x30;
	constexpr uint32_t m_hPlayerControllerRecipient = 0x34;
	constexpr uint32_t m_szPlayerDamagerName = 0x38;
	constexpr uint32_t m_szPlayerRecipientName = 0x40;
	constexpr uint32_t m_DamagerXuid = 0x48;
	constexpr uint32_t m_RecipientXuid = 0x50;
	constexpr uint32_t m_iDamage = 0x58;
	constexpr uint32_t m_iActualHealthRemoved = 0x5C;
	constexpr uint32_t m_iNumHits = 0x60;
	constexpr uint32_t m_iLastBulletUpdate = 0x64;
	constexpr uint32_t m_bIsOtherEnemy = 0x68;
	constexpr uint32_t m_killType = 0x69;
}

namespace CCSPlayerController_DamageServices
{
	constexpr uint32_t m_nSendUpdate = 0x40;
	constexpr uint32_t m_DamageList = 0x48;
}

namespace CCSPlayerController_InGameMoneyServices
{
	constexpr uint32_t m_bReceivesMoneyNextRound = 0x40;
	constexpr uint32_t m_iAccountMoneyEarnedForNextRound = 0x44;
	constexpr uint32_t m_iAccount = 0x48;
	constexpr uint32_t m_iStartAccount = 0x4C;
	constexpr uint32_t m_iTotalCashSpent = 0x50;
	constexpr uint32_t m_iCashSpentThisRound = 0x54;
}

namespace ServerAuthoritativeWeaponSlot_t
{
	constexpr uint32_t unClass = 0x28;
	constexpr uint32_t unSlot = 0x2A;
	constexpr uint32_t unItemDefIdx = 0x2C;
}

namespace CCSPlayerController_InventoryServices
{
	constexpr uint32_t m_unMusicID = 0x40;
	constexpr uint32_t m_rank = 0x44;
	constexpr uint32_t m_nPersonaDataPublicLevel = 0x5C;
	constexpr uint32_t m_nPersonaDataPublicCommendsLeader = 0x60;
	constexpr uint32_t m_nPersonaDataPublicCommendsTeacher = 0x64;
	constexpr uint32_t m_nPersonaDataPublicCommendsFriendly = 0x68;
	constexpr uint32_t m_nPersonaDataXpTrailLevel = 0x6C;
	constexpr uint32_t m_unEquippedPlayerSprayIDs = 0xF48;
	constexpr uint32_t m_vecServerAuthoritativeWeaponSlots = 0xF50;
}

namespace CCSWeaponBaseVDataAPI
{
}

namespace CCSWeaponBaseAPI
{
}

namespace CFiringModeFloat
{
	constexpr uint32_t m_flValues = 0x0;
}

namespace CFiringModeInt
{
	constexpr uint32_t m_nValues = 0x0;
}

namespace CIronSightController
{
	constexpr uint32_t m_bIronSightAvailable = 0x8;
	constexpr uint32_t m_flIronSightAmount = 0xC;
	constexpr uint32_t m_flIronSightAmountGained = 0x10;
	constexpr uint32_t m_flIronSightAmountBiased = 0x14;
}

namespace CHintMessage
{
	constexpr uint32_t m_hintString = 0x0;
	constexpr uint32_t m_args = 0x8;
	constexpr uint32_t m_duration = 0x20;
}

namespace CHintMessageQueue
{
	constexpr uint32_t m_tmMessageEnd = 0x0;
	constexpr uint32_t m_messages = 0x8;
	constexpr uint32_t m_pPlayerController = 0x20;
}

namespace CCSObserverPawnAPI
{
}

namespace CCSPlayerPawnAPI
{
}

namespace CCSPlayer_DamageReactServices
{
}

namespace CCSPlayer_RadioServices
{
	constexpr uint32_t m_flGotHostageTalkTimer = 0x40;
	constexpr uint32_t m_flDefusingTalkTimer = 0x44;
	constexpr uint32_t m_flC4PlantTalkTimer = 0x48;
	constexpr uint32_t m_flRadioTokenSlots = 0x4C;
	constexpr uint32_t m_bIgnoreRadio = 0x58;
}

namespace CBaseIssue
{
	constexpr uint32_t m_szTypeString = 0x20;
	constexpr uint32_t m_szDetailsString = 0x60;
	constexpr uint32_t m_iNumYesVotes = 0x164;
	constexpr uint32_t m_iNumNoVotes = 0x168;
	constexpr uint32_t m_iNumPotentialVotes = 0x16C;
	constexpr uint32_t m_pVoteController = 0x170;
}

namespace CVoteController
{
	constexpr uint32_t m_iActiveIssueIndex = 0x4C0;
	constexpr uint32_t m_iOnlyTeamToVote = 0x4C4;
	constexpr uint32_t m_nVoteOptionCount = 0x4C8;
	constexpr uint32_t m_nPotentialVotes = 0x4DC;
	constexpr uint32_t m_bIsYesNoVote = 0x4E0;
	constexpr uint32_t m_acceptingVotesTimer = 0x4E8;
	constexpr uint32_t m_executeCommandTimer = 0x500;
	constexpr uint32_t m_resetVoteTimer = 0x518;
	constexpr uint32_t m_nVotesCast = 0x530;
	constexpr uint32_t m_playerHoldingVote = 0x630;
	constexpr uint32_t m_playerOverrideForVote = 0x634;
	constexpr uint32_t m_nHighestCountIndex = 0x638;
	constexpr uint32_t m_potentialIssues = 0x640;
	constexpr uint32_t m_VoteOptions = 0x658;
}

namespace CMapVetoPickController
{
	constexpr uint32_t m_bPlayedIntroVcd = 0x4C0;
	constexpr uint32_t m_bNeedToPlayFiveSecondsRemaining = 0x4C1;
	constexpr uint32_t m_dblPreMatchDraftSequenceTime = 0x4E0;
	constexpr uint32_t m_bPreMatchDraftStateChanged = 0x4E8;
	constexpr uint32_t m_nDraftType = 0x4EC;
	constexpr uint32_t m_nTeamWinningCoinToss = 0x4F0;
	constexpr uint32_t m_nTeamWithFirstChoice = 0x4F4;
	constexpr uint32_t m_nVoteMapIdsList = 0x5F4;
	constexpr uint32_t m_nAccountIDs = 0x610;
	constexpr uint32_t m_nMapId0 = 0x710;
	constexpr uint32_t m_nMapId1 = 0x810;
	constexpr uint32_t m_nMapId2 = 0x910;
	constexpr uint32_t m_nMapId3 = 0xA10;
	constexpr uint32_t m_nMapId4 = 0xB10;
	constexpr uint32_t m_nMapId5 = 0xC10;
	constexpr uint32_t m_nStartingSide0 = 0xD10;
	constexpr uint32_t m_nCurrentPhase = 0xE10;
	constexpr uint32_t m_nPhaseStartTick = 0xE14;
	constexpr uint32_t m_nPhaseDurationTicks = 0xE18;
	constexpr uint32_t m_OnMapVetoed = 0xE20;
	constexpr uint32_t m_OnMapPicked = 0xE48;
	constexpr uint32_t m_OnSidesPicked = 0xE70;
	constexpr uint32_t m_OnNewPhaseStarted = 0xE98;
	constexpr uint32_t m_OnLevelTransition = 0xEC0;
}

namespace CCSPulseServerFuncs_Globals
{
}

namespace CLogicEventListener
{
	constexpr uint32_t m_strEventName = 0x4D0;
	constexpr uint32_t m_bIsEnabled = 0x4D8;
	constexpr uint32_t m_nTeam = 0x4DC;
	constexpr uint32_t m_OnEventFired = 0x4E0;
}

namespace CChicken_GraphController
{
	constexpr uint32_t m_pszActivity = 0x18;
}

namespace CBot
{
	constexpr uint32_t m_pController = 0x10;
	constexpr uint32_t m_pPlayer = 0x18;
	constexpr uint32_t m_bHasSpawned = 0x20;
	constexpr uint32_t m_id = 0x24;
	constexpr uint32_t m_isRunning = 0xB0;
	constexpr uint32_t m_isCrouching = 0xB1;
	constexpr uint32_t m_forwardSpeed = 0xB4;
	constexpr uint32_t m_leftSpeed = 0xB8;
	constexpr uint32_t m_verticalSpeed = 0xBC;
	constexpr uint32_t m_buttonFlags = 0xC0;
	constexpr uint32_t m_jumpTimestamp = 0xC8;
	constexpr uint32_t m_viewForward = 0xCC;
	constexpr uint32_t m_postureStackIndex = 0xE8;
}

namespace CBtNode
{
}

namespace CBtNodeDecorator
{
}

namespace CBtNodeComposite
{
}

namespace CBtActionAim
{
	constexpr uint32_t m_szSensorInputKey = 0x68;
	constexpr uint32_t m_szAimReadyKey = 0x80;
	constexpr uint32_t m_flZoomCooldownTimestamp = 0x88;
	constexpr uint32_t m_bDoneAiming = 0x8C;
	constexpr uint32_t m_flLerpStartTime = 0x90;
	constexpr uint32_t m_flNextLookTargetLerpTime = 0x94;
	constexpr uint32_t m_flPenaltyReductionRatio = 0x98;
	constexpr uint32_t m_NextLookTarget = 0x9C;
	constexpr uint32_t m_AimTimer = 0xA8;
	constexpr uint32_t m_SniperHoldTimer = 0xC0;
	constexpr uint32_t m_FocusIntervalTimer = 0xD8;
	constexpr uint32_t m_bAcquired = 0xF0;
}

namespace CBtActionCombatPositioning
{
	constexpr uint32_t m_szSensorInputKey = 0x68;
	constexpr uint32_t m_szIsAttackingKey = 0x80;
	constexpr uint32_t m_ActionTimer = 0x88;
	constexpr uint32_t m_bCrouching = 0xA0;
}

namespace CBtActionMoveTo
{
	constexpr uint32_t m_szDestinationInputKey = 0x60;
	constexpr uint32_t m_szHidingSpotInputKey = 0x68;
	constexpr uint32_t m_szThreatInputKey = 0x70;
	constexpr uint32_t m_vecDestination = 0x78;
	constexpr uint32_t m_bAutoLookAdjust = 0x84;
	constexpr uint32_t m_bComputePath = 0x85;
	constexpr uint32_t m_flDamagingAreasPenaltyCost = 0x88;
	constexpr uint32_t m_CheckApproximateCornersTimer = 0x90;
	constexpr uint32_t m_CheckHighPriorityItem = 0xA8;
	constexpr uint32_t m_RepathTimer = 0xC0;
	constexpr uint32_t m_flArrivalEpsilon = 0xD8;
	constexpr uint32_t m_flAdditionalArrivalEpsilon2D = 0xDC;
	constexpr uint32_t m_flHidingSpotCheckDistanceThreshold = 0xE0;
	constexpr uint32_t m_flNearestAreaDistanceThreshold = 0xE4;
}

namespace CBtActionParachutePositioning
{
	constexpr uint32_t m_ActionTimer = 0x58;
}

namespace CBtNodeCondition
{
	constexpr uint32_t m_bNegated = 0x58;
}

namespace CBtNodeConditionInactive
{
	constexpr uint32_t m_flRoundStartThresholdSeconds = 0x78;
	constexpr uint32_t m_flSensorInactivityThresholdSeconds = 0x7C;
	constexpr uint32_t m_SensorInactivityTimer = 0x80;
}

namespace CPointEntity
{
}

namespace CEnvCombinedLightProbeVolume
{
	constexpr uint32_t m_Color = 0x1518;
	constexpr uint32_t m_flBrightness = 0x151C;
	constexpr uint32_t m_hCubemapTexture = 0x1520;
	constexpr uint32_t m_bCustomCubemapTexture = 0x1528;
	constexpr uint32_t m_hLightProbeTexture = 0x1530;
	constexpr uint32_t m_hLightProbeDirectLightIndicesTexture = 0x1538;
	constexpr uint32_t m_hLightProbeDirectLightScalarsTexture = 0x1540;
	constexpr uint32_t m_hLightProbeDirectLightShadowsTexture = 0x1548;
	constexpr uint32_t m_vBoxMins = 0x1550;
	constexpr uint32_t m_vBoxMaxs = 0x155C;
	constexpr uint32_t m_bMoveable = 0x1568;
	constexpr uint32_t m_nHandshake = 0x156C;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x1570;
	constexpr uint32_t m_nPriority = 0x1574;
	constexpr uint32_t m_bStartDisabled = 0x1578;
	constexpr uint32_t m_flEdgeFadeDist = 0x157C;
	constexpr uint32_t m_vEdgeFadeDists = 0x1580;
	constexpr uint32_t m_nLightProbeSizeX = 0x158C;
	constexpr uint32_t m_nLightProbeSizeY = 0x1590;
	constexpr uint32_t m_nLightProbeSizeZ = 0x1594;
	constexpr uint32_t m_nLightProbeAtlasX = 0x1598;
	constexpr uint32_t m_nLightProbeAtlasY = 0x159C;
	constexpr uint32_t m_nLightProbeAtlasZ = 0x15A0;
	constexpr uint32_t m_bEnabled = 0x15B9;
}

namespace CEnvCubemap
{
	constexpr uint32_t m_hCubemapTexture = 0x540;
	constexpr uint32_t m_bCustomCubemapTexture = 0x548;
	constexpr uint32_t m_flInfluenceRadius = 0x54C;
	constexpr uint32_t m_vBoxProjectMins = 0x550;
	constexpr uint32_t m_vBoxProjectMaxs = 0x55C;
	constexpr uint32_t m_bMoveable = 0x568;
	constexpr uint32_t m_nHandshake = 0x56C;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x570;
	constexpr uint32_t m_nPriority = 0x574;
	constexpr uint32_t m_flEdgeFadeDist = 0x578;
	constexpr uint32_t m_vEdgeFadeDists = 0x57C;
	constexpr uint32_t m_flDiffuseScale = 0x588;
	constexpr uint32_t m_bStartDisabled = 0x58C;
	constexpr uint32_t m_bDefaultEnvMap = 0x58D;
	constexpr uint32_t m_bDefaultSpecEnvMap = 0x58E;
	constexpr uint32_t m_bIndoorCubeMap = 0x58F;
	constexpr uint32_t m_bCopyDiffuseFromDefaultCubemap = 0x590;
	constexpr uint32_t m_bEnabled = 0x5A0;
}

namespace CEnvCubemapBox
{
}

namespace CEnvCubemapFog
{
	constexpr uint32_t m_flEndDistance = 0x4C0;
	constexpr uint32_t m_flStartDistance = 0x4C4;
	constexpr uint32_t m_flFogFalloffExponent = 0x4C8;
	constexpr uint32_t m_bHeightFogEnabled = 0x4CC;
	constexpr uint32_t m_flFogHeightWidth = 0x4D0;
	constexpr uint32_t m_flFogHeightEnd = 0x4D4;
	constexpr uint32_t m_flFogHeightStart = 0x4D8;
	constexpr uint32_t m_flFogHeightExponent = 0x4DC;
	constexpr uint32_t m_flLODBias = 0x4E0;
	constexpr uint32_t m_bActive = 0x4E4;
	constexpr uint32_t m_bStartDisabled = 0x4E5;
	constexpr uint32_t m_flFogMaxOpacity = 0x4E8;
	constexpr uint32_t m_nCubemapSourceType = 0x4EC;
	constexpr uint32_t m_hSkyMaterial = 0x4F0;
	constexpr uint32_t m_iszSkyEntity = 0x4F8;
	constexpr uint32_t m_hFogCubemapTexture = 0x500;
	constexpr uint32_t m_bHasHeightFogEnd = 0x508;
	constexpr uint32_t m_bFirstTime = 0x509;
}

namespace CGradientFog
{
	constexpr uint32_t m_hGradientFogTexture = 0x4C0;
	constexpr uint32_t m_flFogStartDistance = 0x4C8;
	constexpr uint32_t m_flFogEndDistance = 0x4CC;
	constexpr uint32_t m_bHeightFogEnabled = 0x4D0;
	constexpr uint32_t m_flFogStartHeight = 0x4D4;
	constexpr uint32_t m_flFogEndHeight = 0x4D8;
	constexpr uint32_t m_flFarZ = 0x4DC;
	constexpr uint32_t m_flFogMaxOpacity = 0x4E0;
	constexpr uint32_t m_flFogFalloffExponent = 0x4E4;
	constexpr uint32_t m_flFogVerticalExponent = 0x4E8;
	constexpr uint32_t m_fogColor = 0x4EC;
	constexpr uint32_t m_flFogStrength = 0x4F0;
	constexpr uint32_t m_flFadeTime = 0x4F4;
	constexpr uint32_t m_bStartDisabled = 0x4F8;
	constexpr uint32_t m_bIsEnabled = 0x4F9;
	constexpr uint32_t m_bGradientFogNeedsTextures = 0x4FA;
}

namespace CEnvLightProbeVolume
{
	constexpr uint32_t m_hLightProbeTexture = 0x1498;
	constexpr uint32_t m_hLightProbeDirectLightIndicesTexture = 0x14A0;
	constexpr uint32_t m_hLightProbeDirectLightScalarsTexture = 0x14A8;
	constexpr uint32_t m_hLightProbeDirectLightShadowsTexture = 0x14B0;
	constexpr uint32_t m_vBoxMins = 0x14B8;
	constexpr uint32_t m_vBoxMaxs = 0x14C4;
	constexpr uint32_t m_bMoveable = 0x14D0;
	constexpr uint32_t m_nHandshake = 0x14D4;
	constexpr uint32_t m_nPriority = 0x14D8;
	constexpr uint32_t m_bStartDisabled = 0x14DC;
	constexpr uint32_t m_nLightProbeSizeX = 0x14E0;
	constexpr uint32_t m_nLightProbeSizeY = 0x14E4;
	constexpr uint32_t m_nLightProbeSizeZ = 0x14E8;
	constexpr uint32_t m_nLightProbeAtlasX = 0x14EC;
	constexpr uint32_t m_nLightProbeAtlasY = 0x14F0;
	constexpr uint32_t m_nLightProbeAtlasZ = 0x14F4;
	constexpr uint32_t m_bEnabled = 0x1501;
}

namespace CPlayerVisibility
{
	constexpr uint32_t m_flVisibilityStrength = 0x4C0;
	constexpr uint32_t m_flFogDistanceMultiplier = 0x4C4;
	constexpr uint32_t m_flFogMaxDensityMultiplier = 0x4C8;
	constexpr uint32_t m_flFadeTime = 0x4CC;
	constexpr uint32_t m_bStartDisabled = 0x4D0;
	constexpr uint32_t m_bIsEnabled = 0x4D1;
}

namespace CEnvVolumetricFogController
{
	constexpr uint32_t m_flScattering = 0x4C0;
	constexpr uint32_t m_flAnisotropy = 0x4C4;
	constexpr uint32_t m_flFadeSpeed = 0x4C8;
	constexpr uint32_t m_flDrawDistance = 0x4CC;
	constexpr uint32_t m_flFadeInStart = 0x4D0;
	constexpr uint32_t m_flFadeInEnd = 0x4D4;
	constexpr uint32_t m_flIndirectStrength = 0x4D8;
	constexpr uint32_t m_nIndirectTextureDimX = 0x4DC;
	constexpr uint32_t m_nIndirectTextureDimY = 0x4E0;
	constexpr uint32_t m_nIndirectTextureDimZ = 0x4E4;
	constexpr uint32_t m_vBoxMins = 0x4E8;
	constexpr uint32_t m_vBoxMaxs = 0x4F4;
	constexpr uint32_t m_bActive = 0x500;
	constexpr uint32_t m_flStartAnisoTime = 0x504;
	constexpr uint32_t m_flStartScatterTime = 0x508;
	constexpr uint32_t m_flStartDrawDistanceTime = 0x50C;
	constexpr uint32_t m_flStartAnisotropy = 0x510;
	constexpr uint32_t m_flStartScattering = 0x514;
	constexpr uint32_t m_flStartDrawDistance = 0x518;
	constexpr uint32_t m_flDefaultAnisotropy = 0x51C;
	constexpr uint32_t m_flDefaultScattering = 0x520;
	constexpr uint32_t m_flDefaultDrawDistance = 0x524;
	constexpr uint32_t m_bStartDisabled = 0x528;
	constexpr uint32_t m_bEnableIndirect = 0x529;
	constexpr uint32_t m_bIsMaster = 0x52A;
	constexpr uint32_t m_hFogIndirectTexture = 0x530;
	constexpr uint32_t m_nForceRefreshCount = 0x538;
	constexpr uint32_t m_bFirstTime = 0x53C;
}

namespace CEnvVolumetricFogVolume
{
	constexpr uint32_t m_bActive = 0x4C0;
	constexpr uint32_t m_vBoxMins = 0x4C4;
	constexpr uint32_t m_vBoxMaxs = 0x4D0;
	constexpr uint32_t m_bStartDisabled = 0x4DC;
	constexpr uint32_t m_flStrength = 0x4E0;
	constexpr uint32_t m_nFalloffShape = 0x4E4;
	constexpr uint32_t m_flFalloffExponent = 0x4E8;
}

namespace CInfoTarget
{
}

namespace CInfoTargetServerOnly
{
}

namespace CInfoParticleTarget
{
}

namespace CInfoVisibilityBox
{
	constexpr uint32_t m_nMode = 0x4C4;
	constexpr uint32_t m_vBoxSize = 0x4C8;
	constexpr uint32_t m_bEnabled = 0x4D4;
}

namespace CInfoWorldLayer
{
	constexpr uint32_t m_pOutputOnEntitiesSpawned = 0x4C0;
	constexpr uint32_t m_worldName = 0x4E8;
	constexpr uint32_t m_layerName = 0x4F0;
	constexpr uint32_t m_bWorldLayerVisible = 0x4F8;
	constexpr uint32_t m_bEntitiesSpawned = 0x4F9;
	constexpr uint32_t m_bCreateAsChildSpawnGroup = 0x4FA;
	constexpr uint32_t m_hLayerSpawnGroup = 0x4FC;
}

namespace CLightEntity
{
	constexpr uint32_t m_CLightComponent = 0x710;
}

namespace CMultiLightProxy
{
	constexpr uint32_t m_iszLightNameFilter = 0x4C0;
	constexpr uint32_t m_iszLightClassFilter = 0x4C8;
	constexpr uint32_t m_flLightRadiusFilter = 0x4D0;
	constexpr uint32_t m_flBrightnessDelta = 0x4D4;
	constexpr uint32_t m_bPerformScreenFade = 0x4D8;
	constexpr uint32_t m_flTargetBrightnessMultiplier = 0x4DC;
	constexpr uint32_t m_flCurrentBrightnessMultiplier = 0x4E0;
	constexpr uint32_t m_vecLights = 0x4E8;
}

namespace CPointCamera
{
	constexpr uint32_t m_FOV = 0x4C0;
	constexpr uint32_t m_Resolution = 0x4C4;
	constexpr uint32_t m_bFogEnable = 0x4C8;
	constexpr uint32_t m_FogColor = 0x4C9;
	constexpr uint32_t m_flFogStart = 0x4D0;
	constexpr uint32_t m_flFogEnd = 0x4D4;
	constexpr uint32_t m_flFogMaxDensity = 0x4D8;
	constexpr uint32_t m_bActive = 0x4DC;
	constexpr uint32_t m_bUseScreenAspectRatio = 0x4DD;
	constexpr uint32_t m_flAspectRatio = 0x4E0;
	constexpr uint32_t m_bNoSky = 0x4E4;
	constexpr uint32_t m_fBrightness = 0x4E8;
	constexpr uint32_t m_flZFar = 0x4EC;
	constexpr uint32_t m_flZNear = 0x4F0;
	constexpr uint32_t m_bCanHLTVUse = 0x4F4;
	constexpr uint32_t m_bDofEnabled = 0x4F5;
	constexpr uint32_t m_flDofNearBlurry = 0x4F8;
	constexpr uint32_t m_flDofNearCrisp = 0x4FC;
	constexpr uint32_t m_flDofFarCrisp = 0x500;
	constexpr uint32_t m_flDofFarBlurry = 0x504;
	constexpr uint32_t m_flDofTiltToGround = 0x508;
	constexpr uint32_t m_TargetFOV = 0x50C;
	constexpr uint32_t m_DegreesPerSecond = 0x510;
	constexpr uint32_t m_bIsOn = 0x514;
	constexpr uint32_t m_pNext = 0x518;
}

namespace CPointCameraVFOV
{
	constexpr uint32_t m_flVerticalFOV = 0x520;
}

namespace CPointTemplate
{
	constexpr uint32_t m_iszWorldName = 0x4C0;
	constexpr uint32_t m_iszSource2EntityLumpName = 0x4C8;
	constexpr uint32_t m_iszEntityFilterName = 0x4D0;
	constexpr uint32_t m_flTimeoutInterval = 0x4D8;
	constexpr uint32_t m_bAsynchronouslySpawnEntities = 0x4DC;
	constexpr uint32_t m_pOutputOnSpawned = 0x4E0;
	constexpr uint32_t m_clientOnlyEntityBehavior = 0x508;
	constexpr uint32_t m_ownerSpawnGroupType = 0x50C;
	constexpr uint32_t m_createdSpawnGroupHandles = 0x510;
	constexpr uint32_t m_SpawnedEntityHandles = 0x528;
	constexpr uint32_t m_ScriptSpawnCallback = 0x540;
	constexpr uint32_t m_ScriptCallbackScope = 0x548;
}

namespace CGameGibManager
{
	constexpr uint32_t m_bAllowNewGibs = 0x4E0;
	constexpr uint32_t m_iCurrentMaxPieces = 0x4E4;
	constexpr uint32_t m_iMaxPieces = 0x4E8;
	constexpr uint32_t m_iLastFrame = 0x4EC;
}

namespace CSoundAreaEntityBase
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_iszSoundAreaType = 0x4C8;
	constexpr uint32_t m_vPos = 0x4D0;
}

namespace CSoundAreaEntitySphere
{
	constexpr uint32_t m_flRadius = 0x4E0;
}

namespace CSoundAreaEntityOrientedBox
{
	constexpr uint32_t m_vMin = 0x4E0;
	constexpr uint32_t m_vMax = 0x4EC;
}

namespace CBasePlayerPawn
{
	constexpr uint32_t m_pWeaponServices = 0xA10;
	constexpr uint32_t m_pItemServices = 0xA18;
	constexpr uint32_t m_pAutoaimServices = 0xA20;
	constexpr uint32_t m_pObserverServices = 0xA28;
	constexpr uint32_t m_pWaterServices = 0xA30;
	constexpr uint32_t m_pUseServices = 0xA38;
	constexpr uint32_t m_pFlashlightServices = 0xA40;
	constexpr uint32_t m_pCameraServices = 0xA48;
	constexpr uint32_t m_pMovementServices = 0xA50;
	constexpr uint32_t m_ServerViewAngleChanges = 0xA60;
	constexpr uint32_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xAB0;
	constexpr uint32_t v_angle = 0xAB4;
	constexpr uint32_t v_anglePrevious = 0xAC0;
	constexpr uint32_t m_iHideHUD = 0xACC;
	constexpr uint32_t m_skybox3d = 0xAD0;
	constexpr uint32_t m_fTimeLastHurt = 0xB60;
	constexpr uint32_t m_flDeathTime = 0xB64;
	constexpr uint32_t m_fNextSuicideTime = 0xB68;
	constexpr uint32_t m_fInitHUD = 0xB6C;
	constexpr uint32_t m_pExpresser = 0xB70;
	constexpr uint32_t m_hController = 0xB78;
	constexpr uint32_t m_fHltvReplayDelay = 0xB80;
	constexpr uint32_t m_fHltvReplayEnd = 0xB84;
	constexpr uint32_t m_iHltvReplayEntity = 0xB88;
	constexpr uint32_t m_sndOpvarLatchData = 0xB90;
}

namespace CTeam
{
	constexpr uint32_t m_aPlayerControllers = 0x4C0;
	constexpr uint32_t m_aPlayers = 0x4D8;
	constexpr uint32_t m_iScore = 0x4F0;
	constexpr uint32_t m_szTeamname = 0x4F4;
}

namespace CBasePlayerVData
{
	constexpr uint32_t m_sModelName = 0x28;
	constexpr uint32_t m_flHeadDamageMultiplier = 0x108;
	constexpr uint32_t m_flChestDamageMultiplier = 0x118;
	constexpr uint32_t m_flStomachDamageMultiplier = 0x128;
	constexpr uint32_t m_flArmDamageMultiplier = 0x138;
	constexpr uint32_t m_flLegDamageMultiplier = 0x148;
	constexpr uint32_t m_flHoldBreathTime = 0x158;
	constexpr uint32_t m_flDrowningDamageInterval = 0x15C;
	constexpr uint32_t m_nDrowningDamageInitial = 0x160;
	constexpr uint32_t m_nDrowningDamageMax = 0x164;
	constexpr uint32_t m_nWaterSpeed = 0x168;
	constexpr uint32_t m_flUseRange = 0x16C;
	constexpr uint32_t m_flUseAngleTolerance = 0x170;
	constexpr uint32_t m_flCrouchTime = 0x174;
}

namespace CBasePlayerWeaponVData
{
	constexpr uint32_t m_szWorldModel = 0x28;
	constexpr uint32_t m_bBuiltRightHanded = 0x108;
	constexpr uint32_t m_bAllowFlipping = 0x109;
	constexpr uint32_t m_sMuzzleAttachment = 0x110;
	constexpr uint32_t m_szMuzzleFlashParticle = 0x118;
	constexpr uint32_t m_iFlags = 0x1F8;
	constexpr uint32_t m_nPrimaryAmmoType = 0x1F9;
	constexpr uint32_t m_nSecondaryAmmoType = 0x1FA;
	constexpr uint32_t m_iMaxClip1 = 0x1FC;
	constexpr uint32_t m_iMaxClip2 = 0x200;
	constexpr uint32_t m_iDefaultClip1 = 0x204;
	constexpr uint32_t m_iDefaultClip2 = 0x208;
	constexpr uint32_t m_iWeight = 0x20C;
	constexpr uint32_t m_bAutoSwitchTo = 0x210;
	constexpr uint32_t m_bAutoSwitchFrom = 0x211;
	constexpr uint32_t m_iRumbleEffect = 0x214;
	constexpr uint32_t m_bLinkedCooldowns = 0x218;
	constexpr uint32_t m_aShootSounds = 0x220;
	constexpr uint32_t m_iSlot = 0x240;
	constexpr uint32_t m_iPosition = 0x244;
}

namespace CInfoGameEventProxy
{
	constexpr uint32_t m_iszEventName = 0x4C0;
	constexpr uint32_t m_flRange = 0x4C8;
}

namespace CProjectedDecal
{
	constexpr uint32_t m_nTexture = 0x4C0;
	constexpr uint32_t m_flDistance = 0x4C4;
}

namespace CServerOnlyModelEntity
{
}

namespace CModelPointEntity
{
}

namespace CLogicRelay
{
	constexpr uint32_t m_OnTrigger = 0x4C0;
	constexpr uint32_t m_OnSpawn = 0x4E8;
	constexpr uint32_t m_bDisabled = 0x510;
	constexpr uint32_t m_bWaitForRefire = 0x511;
	constexpr uint32_t m_bTriggerOnce = 0x512;
	constexpr uint32_t m_bFastRetrigger = 0x513;
	constexpr uint32_t m_bPassthoughCaller = 0x514;
}

namespace CParticleSystem
{
	constexpr uint32_t m_szSnapshotFileName = 0x710;
	constexpr uint32_t m_bActive = 0x910;
	constexpr uint32_t m_bFrozen = 0x911;
	constexpr uint32_t m_flFreezeTransitionDuration = 0x914;
	constexpr uint32_t m_nStopType = 0x918;
	constexpr uint32_t m_bAnimateDuringGameplayPause = 0x91C;
	constexpr uint32_t m_iEffectIndex = 0x920;
	constexpr uint32_t m_flStartTime = 0x928;
	constexpr uint32_t m_flPreSimTime = 0x92C;
	constexpr uint32_t m_vServerControlPoints = 0x930;
	constexpr uint32_t m_iServerControlPointAssignments = 0x960;
	constexpr uint32_t m_hControlPointEnts = 0x964;
	constexpr uint32_t m_bNoSave = 0xA64;
	constexpr uint32_t m_bNoFreeze = 0xA65;
	constexpr uint32_t m_bNoRamp = 0xA66;
	constexpr uint32_t m_bStartActive = 0xA67;
	constexpr uint32_t m_iszEffectName = 0xA68;
	constexpr uint32_t m_iszControlPointNames = 0xA70;
	constexpr uint32_t m_nDataCP = 0xC70;
	constexpr uint32_t m_vecDataCPValue = 0xC74;
	constexpr uint32_t m_nTintCP = 0xC80;
	constexpr uint32_t m_clrTint = 0xC84;
}

namespace CPathParticleRope
{
	constexpr uint32_t m_bStartActive = 0x4C0;
	constexpr uint32_t m_flMaxSimulationTime = 0x4C4;
	constexpr uint32_t m_iszEffectName = 0x4C8;
	constexpr uint32_t m_PathNodes_Name = 0x4D0;
	constexpr uint32_t m_flParticleSpacing = 0x4E8;
	constexpr uint32_t m_flSlack = 0x4EC;
	constexpr uint32_t m_flRadius = 0x4F0;
	constexpr uint32_t m_ColorTint = 0x4F4;
	constexpr uint32_t m_nEffectState = 0x4F8;
	constexpr uint32_t m_iEffectIndex = 0x500;
	constexpr uint32_t m_PathNodes_Position = 0x508;
	constexpr uint32_t m_PathNodes_TangentIn = 0x520;
	constexpr uint32_t m_PathNodes_TangentOut = 0x538;
	constexpr uint32_t m_PathNodes_Color = 0x550;
	constexpr uint32_t m_PathNodes_PinEnabled = 0x568;
	constexpr uint32_t m_PathNodes_RadiusScale = 0x580;
}

namespace CPathParticleRopeAlias_path_particle_rope_clientside
{
}

namespace CFuncWall
{
	constexpr uint32_t m_nState = 0x710;
}

namespace CFuncWallToggle
{
}

namespace CFuncVehicleClip
{
}

namespace CFuncIllusionary
{
}

namespace CFuncVPhysicsClip
{
	constexpr uint32_t m_bDisabled = 0x710;
}

namespace CFuncInteractionLayerClip
{
	constexpr uint32_t m_bDisabled = 0x710;
	constexpr uint32_t m_iszInteractsAs = 0x718;
	constexpr uint32_t m_iszInteractsWith = 0x720;
}

namespace CPointClientCommand
{
}

namespace CPointServerCommand
{
}

namespace CPointBroadcastClientCommand
{
}

namespace CCommentaryAuto
{
	constexpr uint32_t m_OnCommentaryNewGame = 0x4C0;
	constexpr uint32_t m_OnCommentaryMidGame = 0x4E8;
	constexpr uint32_t m_OnCommentaryMultiplayerSpawn = 0x510;
}

namespace CDynamicLight
{
	constexpr uint32_t m_ActualFlags = 0x710;
	constexpr uint32_t m_Flags = 0x711;
	constexpr uint32_t m_LightStyle = 0x712;
	constexpr uint32_t m_On = 0x713;
	constexpr uint32_t m_Radius = 0x714;
	constexpr uint32_t m_Exponent = 0x718;
	constexpr uint32_t m_InnerAngle = 0x71C;
	constexpr uint32_t m_OuterAngle = 0x720;
	constexpr uint32_t m_SpotRadius = 0x724;
}

namespace CBubbling
{
	constexpr uint32_t m_density = 0x710;
	constexpr uint32_t m_frequency = 0x714;
	constexpr uint32_t m_state = 0x718;
}

namespace CEnvTracer
{
	constexpr uint32_t m_vecEnd = 0x4C0;
	constexpr uint32_t m_flDelay = 0x4CC;
}

namespace CBeam
{
	constexpr uint32_t m_flFrameRate = 0x710;
	constexpr uint32_t m_flHDRColorScale = 0x714;
	constexpr uint32_t m_flFireTime = 0x718;
	constexpr uint32_t m_flDamage = 0x71C;
	constexpr uint32_t m_nNumBeamEnts = 0x720;
	constexpr uint32_t m_hBaseMaterial = 0x728;
	constexpr uint32_t m_nHaloIndex = 0x730;
	constexpr uint32_t m_nBeamType = 0x738;
	constexpr uint32_t m_nBeamFlags = 0x73C;
	constexpr uint32_t m_hAttachEntity = 0x740;
	constexpr uint32_t m_nAttachIndex = 0x768;
	constexpr uint32_t m_fWidth = 0x774;
	constexpr uint32_t m_fEndWidth = 0x778;
	constexpr uint32_t m_fFadeLength = 0x77C;
	constexpr uint32_t m_fHaloScale = 0x780;
	constexpr uint32_t m_fAmplitude = 0x784;
	constexpr uint32_t m_fStartFrame = 0x788;
	constexpr uint32_t m_fSpeed = 0x78C;
	constexpr uint32_t m_flFrame = 0x790;
	constexpr uint32_t m_nClipStyle = 0x794;
	constexpr uint32_t m_bTurnedOff = 0x798;
	constexpr uint32_t m_vecEndPos = 0x79C;
	constexpr uint32_t m_hEndEntity = 0x7A8;
	constexpr uint32_t m_nDissolveType = 0x7AC;
}

namespace CTestEffect
{
	constexpr uint32_t m_iLoop = 0x4C0;
	constexpr uint32_t m_iBeam = 0x4C4;
	constexpr uint32_t m_pBeam = 0x4C8;
	constexpr uint32_t m_flBeamTime = 0x588;
	constexpr uint32_t m_flStartTime = 0x5E8;
}

namespace CBlood
{
	constexpr uint32_t m_vecSprayAngles = 0x4C0;
	constexpr uint32_t m_vecSprayDir = 0x4CC;
	constexpr uint32_t m_flAmount = 0x4D8;
	constexpr uint32_t m_Color = 0x4DC;
}

namespace CEnvFunnel
{
}

namespace CEnvBeverage
{
	constexpr uint32_t m_CanInDispenser = 0x4C0;
	constexpr uint32_t m_nBeverageType = 0x4C4;
}

namespace CPrecipitationBlocker
{
}

namespace CEnvWind
{
	constexpr uint32_t m_EnvWindShared = 0x4C0;
}

namespace CPhysicsWire
{
	constexpr uint32_t m_nDensity = 0x4C0;
}

namespace CEnvMuzzleFlash
{
	constexpr uint32_t m_flScale = 0x4C0;
	constexpr uint32_t m_iszParentAttachment = 0x4C8;
}

namespace CEnvSplash
{
	constexpr uint32_t m_flScale = 0x4C0;
}

namespace CEnvViewPunch
{
	constexpr uint32_t m_flRadius = 0x4C0;
	constexpr uint32_t m_angViewPunch = 0x4C4;
}

namespace CEnvEntityIgniter
{
	constexpr uint32_t m_flLifetime = 0x4C0;
}

namespace CDebugHistory
{
	constexpr uint32_t m_nNpcEvents = 0x1F4500;
}

namespace CEnvEntityMaker
{
	constexpr uint32_t m_vecEntityMins = 0x4C0;
	constexpr uint32_t m_vecEntityMaxs = 0x4CC;
	constexpr uint32_t m_hCurrentInstance = 0x4D8;
	constexpr uint32_t m_hCurrentBlocker = 0x4DC;
	constexpr uint32_t m_vecBlockerOrigin = 0x4E0;
	constexpr uint32_t m_angPostSpawnDirection = 0x4EC;
	constexpr uint32_t m_flPostSpawnDirectionVariance = 0x4F8;
	constexpr uint32_t m_flPostSpawnSpeed = 0x4FC;
	constexpr uint32_t m_bPostSpawnUseAngles = 0x500;
	constexpr uint32_t m_iszTemplate = 0x508;
	constexpr uint32_t m_pOutputOnSpawned = 0x510;
	constexpr uint32_t m_pOutputOnFailedSpawn = 0x538;
}

namespace CInfoInstructorHintTarget
{
}

namespace CEnvInstructorHint
{
	constexpr uint32_t m_iszName = 0x4C0;
	constexpr uint32_t m_iszReplace_Key = 0x4C8;
	constexpr uint32_t m_iszHintTargetEntity = 0x4D0;
	constexpr uint32_t m_iTimeout = 0x4D8;
	constexpr uint32_t m_iDisplayLimit = 0x4DC;
	constexpr uint32_t m_iszIcon_Onscreen = 0x4E0;
	constexpr uint32_t m_iszIcon_Offscreen = 0x4E8;
	constexpr uint32_t m_iszCaption = 0x4F0;
	constexpr uint32_t m_iszActivatorCaption = 0x4F8;
	constexpr uint32_t m_Color = 0x500;
	constexpr uint32_t m_fIconOffset = 0x504;
	constexpr uint32_t m_fRange = 0x508;
	constexpr uint32_t m_iPulseOption = 0x50C;
	constexpr uint32_t m_iAlphaOption = 0x50D;
	constexpr uint32_t m_iShakeOption = 0x50E;
	constexpr uint32_t m_bStatic = 0x50F;
	constexpr uint32_t m_bNoOffscreen = 0x510;
	constexpr uint32_t m_bForceCaption = 0x511;
	constexpr uint32_t m_iInstanceType = 0x514;
	constexpr uint32_t m_bSuppressRest = 0x518;
	constexpr uint32_t m_iszBinding = 0x520;
	constexpr uint32_t m_bAllowNoDrawTarget = 0x528;
	constexpr uint32_t m_bAutoStart = 0x529;
	constexpr uint32_t m_bLocalPlayerOnly = 0x52A;
}

namespace CEnvInstructorVRHint
{
	constexpr uint32_t m_iszName = 0x4C0;
	constexpr uint32_t m_iszHintTargetEntity = 0x4C8;
	constexpr uint32_t m_iTimeout = 0x4D0;
	constexpr uint32_t m_iszCaption = 0x4D8;
	constexpr uint32_t m_iszStartSound = 0x4E0;
	constexpr uint32_t m_iLayoutFileType = 0x4E8;
	constexpr uint32_t m_iszCustomLayoutFile = 0x4F0;
	constexpr uint32_t m_iAttachType = 0x4F8;
	constexpr uint32_t m_flHeightOffset = 0x4FC;
}

namespace CInstructorEventEntity
{
	constexpr uint32_t m_iszName = 0x4C0;
	constexpr uint32_t m_iszHintTargetEntity = 0x4C8;
	constexpr uint32_t m_hTargetPlayer = 0x4D0;
}

namespace CEnvScreenOverlay
{
	constexpr uint32_t m_iszOverlayNames = 0x4C0;
	constexpr uint32_t m_flOverlayTimes = 0x510;
	constexpr uint32_t m_flStartTime = 0x538;
	constexpr uint32_t m_iDesiredOverlay = 0x53C;
	constexpr uint32_t m_bIsActive = 0x540;
}

namespace CEnvFade
{
	constexpr uint32_t m_fadeColor = 0x4C0;
	constexpr uint32_t m_Duration = 0x4C4;
	constexpr uint32_t m_HoldDuration = 0x4C8;
	constexpr uint32_t m_OnBeginFade = 0x4D0;
}

namespace CCredits
{
	constexpr uint32_t m_OnCreditsDone = 0x4C0;
	constexpr uint32_t m_bRolledOutroCredits = 0x4E8;
	constexpr uint32_t m_flLogoLength = 0x4EC;
}

namespace CEnvShake
{
	constexpr uint32_t m_limitToEntity = 0x4C0;
	constexpr uint32_t m_Amplitude = 0x4C8;
	constexpr uint32_t m_Frequency = 0x4CC;
	constexpr uint32_t m_Duration = 0x4D0;
	constexpr uint32_t m_Radius = 0x4D4;
	constexpr uint32_t m_stopTime = 0x4D8;
	constexpr uint32_t m_nextShake = 0x4DC;
	constexpr uint32_t m_currentAmp = 0x4E0;
	constexpr uint32_t m_maxForce = 0x4E4;
	constexpr uint32_t m_shakeCallback = 0x4F8;
}

namespace CEnvTilt
{
	constexpr uint32_t m_Duration = 0x4C0;
	constexpr uint32_t m_Radius = 0x4C4;
	constexpr uint32_t m_TiltTime = 0x4C8;
	constexpr uint32_t m_stopTime = 0x4CC;
}

namespace CEnvSpark
{
	constexpr uint32_t m_flDelay = 0x4C0;
	constexpr uint32_t m_nMagnitude = 0x4C4;
	constexpr uint32_t m_nTrailLength = 0x4C8;
	constexpr uint32_t m_nType = 0x4CC;
	constexpr uint32_t m_OnSpark = 0x4D0;
}

namespace CShower
{
}

namespace CEnvExplosion
{
	constexpr uint32_t m_iMagnitude = 0x710;
	constexpr uint32_t m_flPlayerDamage = 0x714;
	constexpr uint32_t m_iRadiusOverride = 0x718;
	constexpr uint32_t m_flInnerRadius = 0x71C;
	constexpr uint32_t m_spriteScale = 0x720;
	constexpr uint32_t m_flDamageForce = 0x724;
	constexpr uint32_t m_hInflictor = 0x728;
	constexpr uint32_t m_iCustomDamageType = 0x72C;
	constexpr uint32_t m_iszExplosionType = 0x738;
	constexpr uint32_t m_iszCustomEffectName = 0x740;
	constexpr uint32_t m_iszCustomSoundName = 0x748;
	constexpr uint32_t m_iClassIgnore = 0x750;
	constexpr uint32_t m_iClassIgnore2 = 0x754;
	constexpr uint32_t m_iszEntityIgnoreName = 0x758;
	constexpr uint32_t m_hEntityIgnore = 0x760;
}

namespace CFilterName
{
	constexpr uint32_t m_iFilterName = 0x518;
}

namespace CFilterModel
{
	constexpr uint32_t m_iFilterModel = 0x518;
}

namespace CFilterContext
{
	constexpr uint32_t m_iFilterContext = 0x518;
}

namespace FilterTeam
{
	constexpr uint32_t m_iFilterTeam = 0x518;
}

namespace CFilterMassGreater
{
	constexpr uint32_t m_fFilterMass = 0x518;
}

namespace FilterDamageType
{
	constexpr uint32_t m_iDamageType = 0x518;
}

namespace FilterHealth
{
	constexpr uint32_t m_bAdrenalineActive = 0x518;
	constexpr uint32_t m_iHealthMin = 0x51C;
	constexpr uint32_t m_iHealthMax = 0x520;
}

namespace CFilterEnemy
{
	constexpr uint32_t m_iszEnemyName = 0x518;
	constexpr uint32_t m_flRadius = 0x520;
	constexpr uint32_t m_flOuterRadius = 0x524;
	constexpr uint32_t m_nMaxSquadmatesPerEnemy = 0x528;
	constexpr uint32_t m_iszPlayerName = 0x530;
}

namespace CFilterAttributeInt
{
	constexpr uint32_t m_sAttributeName = 0x518;
}

namespace CFire
{
	constexpr uint32_t m_hEffect = 0x710;
	constexpr uint32_t m_hOwner = 0x714;
	constexpr uint32_t m_nFireType = 0x718;
	constexpr uint32_t m_flFuel = 0x71C;
	constexpr uint32_t m_flDamageTime = 0x720;
	constexpr uint32_t m_lastDamage = 0x724;
	constexpr uint32_t m_flFireSize = 0x728;
	constexpr uint32_t m_flLastNavUpdateTime = 0x72C;
	constexpr uint32_t m_flHeatLevel = 0x730;
	constexpr uint32_t m_flHeatAbsorb = 0x734;
	constexpr uint32_t m_flDamageScale = 0x738;
	constexpr uint32_t m_flMaxHeat = 0x73C;
	constexpr uint32_t m_flLastHeatLevel = 0x740;
	constexpr uint32_t m_flAttackTime = 0x744;
	constexpr uint32_t m_bEnabled = 0x748;
	constexpr uint32_t m_bStartDisabled = 0x749;
	constexpr uint32_t m_bDidActivate = 0x74A;
	constexpr uint32_t m_OnIgnited = 0x750;
	constexpr uint32_t m_OnExtinguished = 0x778;
}

namespace CEnvFireSource
{
	constexpr uint32_t m_bEnabled = 0x4C0;
	constexpr uint32_t m_radius = 0x4C4;
	constexpr uint32_t m_damage = 0x4C8;
}

namespace CEnvFireSensor
{
	constexpr uint32_t m_bEnabled = 0x4C0;
	constexpr uint32_t m_bHeatAtLevel = 0x4C1;
	constexpr uint32_t m_radius = 0x4C4;
	constexpr uint32_t m_targetLevel = 0x4C8;
	constexpr uint32_t m_targetTime = 0x4CC;
	constexpr uint32_t m_levelTime = 0x4D0;
	constexpr uint32_t m_OnHeatLevelStart = 0x4D8;
	constexpr uint32_t m_OnHeatLevelEnd = 0x500;
}

namespace CFuncTimescale
{
	constexpr uint32_t m_flDesiredTimescale = 0x4C0;
	constexpr uint32_t m_flAcceleration = 0x4C4;
	constexpr uint32_t m_flMinBlendRate = 0x4C8;
	constexpr uint32_t m_flBlendDeltaMultiplier = 0x4CC;
	constexpr uint32_t m_isStarted = 0x4D0;
}

namespace CLightGlow
{
	constexpr uint32_t m_nHorizontalSize = 0x710;
	constexpr uint32_t m_nVerticalSize = 0x714;
	constexpr uint32_t m_nMinDist = 0x718;
	constexpr uint32_t m_nMaxDist = 0x71C;
	constexpr uint32_t m_nOuterMaxDist = 0x720;
	constexpr uint32_t m_flGlowProxySize = 0x724;
	constexpr uint32_t m_flHDRColorScale = 0x728;
}

namespace CLogicAchievement
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_iszAchievementEventID = 0x4C8;
	constexpr uint32_t m_OnFired = 0x4D0;
}

namespace CLogicGameEventListener
{
	constexpr uint32_t m_OnEventFired = 0x4D0;
	constexpr uint32_t m_iszGameEventName = 0x4F8;
	constexpr uint32_t m_iszGameEventItem = 0x500;
	constexpr uint32_t m_bEnabled = 0x508;
	constexpr uint32_t m_bStartDisabled = 0x509;
}

namespace CLogicMeasureMovement
{
	constexpr uint32_t m_strMeasureTarget = 0x4C0;
	constexpr uint32_t m_strMeasureReference = 0x4C8;
	constexpr uint32_t m_strTargetReference = 0x4D0;
	constexpr uint32_t m_hMeasureTarget = 0x4D8;
	constexpr uint32_t m_hMeasureReference = 0x4DC;
	constexpr uint32_t m_hTarget = 0x4E0;
	constexpr uint32_t m_hTargetReference = 0x4E4;
	constexpr uint32_t m_flScale = 0x4E8;
	constexpr uint32_t m_nMeasureType = 0x4EC;
}

namespace CLogicNavigation
{
	constexpr uint32_t m_isOn = 0x4C8;
	constexpr uint32_t m_navProperty = 0x4CC;
}

namespace CLogicNPCCounter
{
	constexpr uint32_t m_OnMinCountAll = 0x4C0;
	constexpr uint32_t m_OnMaxCountAll = 0x4E8;
	constexpr uint32_t m_OnFactorAll = 0x510;
	constexpr uint32_t m_OnMinPlayerDistAll = 0x538;
	constexpr uint32_t m_OnMinCount_1 = 0x560;
	constexpr uint32_t m_OnMaxCount_1 = 0x588;
	constexpr uint32_t m_OnFactor_1 = 0x5B0;
	constexpr uint32_t m_OnMinPlayerDist_1 = 0x5D8;
	constexpr uint32_t m_OnMinCount_2 = 0x600;
	constexpr uint32_t m_OnMaxCount_2 = 0x628;
	constexpr uint32_t m_OnFactor_2 = 0x650;
	constexpr uint32_t m_OnMinPlayerDist_2 = 0x678;
	constexpr uint32_t m_OnMinCount_3 = 0x6A0;
	constexpr uint32_t m_OnMaxCount_3 = 0x6C8;
	constexpr uint32_t m_OnFactor_3 = 0x6F0;
	constexpr uint32_t m_OnMinPlayerDist_3 = 0x718;
	constexpr uint32_t m_hSource = 0x740;
	constexpr uint32_t m_iszSourceEntityName = 0x748;
	constexpr uint32_t m_flDistanceMax = 0x750;
	constexpr uint32_t m_bDisabled = 0x754;
	constexpr uint32_t m_nMinCountAll = 0x758;
	constexpr uint32_t m_nMaxCountAll = 0x75C;
	constexpr uint32_t m_nMinFactorAll = 0x760;
	constexpr uint32_t m_nMaxFactorAll = 0x764;
	constexpr uint32_t m_iszNPCClassname_1 = 0x770;
	constexpr uint32_t m_nNPCState_1 = 0x778;
	constexpr uint32_t m_bInvertState_1 = 0x77C;
	constexpr uint32_t m_nMinCount_1 = 0x780;
	constexpr uint32_t m_nMaxCount_1 = 0x784;
	constexpr uint32_t m_nMinFactor_1 = 0x788;
	constexpr uint32_t m_nMaxFactor_1 = 0x78C;
	constexpr uint32_t m_flDefaultDist_1 = 0x794;
	constexpr uint32_t m_iszNPCClassname_2 = 0x798;
	constexpr uint32_t m_nNPCState_2 = 0x7A0;
	constexpr uint32_t m_bInvertState_2 = 0x7A4;
	constexpr uint32_t m_nMinCount_2 = 0x7A8;
	constexpr uint32_t m_nMaxCount_2 = 0x7AC;
	constexpr uint32_t m_nMinFactor_2 = 0x7B0;
	constexpr uint32_t m_nMaxFactor_2 = 0x7B4;
	constexpr uint32_t m_flDefaultDist_2 = 0x7BC;
	constexpr uint32_t m_iszNPCClassname_3 = 0x7C0;
	constexpr uint32_t m_nNPCState_3 = 0x7C8;
	constexpr uint32_t m_bInvertState_3 = 0x7CC;
	constexpr uint32_t m_nMinCount_3 = 0x7D0;
	constexpr uint32_t m_nMaxCount_3 = 0x7D4;
	constexpr uint32_t m_nMinFactor_3 = 0x7D8;
	constexpr uint32_t m_nMaxFactor_3 = 0x7DC;
	constexpr uint32_t m_flDefaultDist_3 = 0x7E4;
}

namespace CLogicNPCCounterAABB
{
	constexpr uint32_t m_vDistanceOuterMins = 0x800;
	constexpr uint32_t m_vDistanceOuterMaxs = 0x80C;
	constexpr uint32_t m_vOuterMins = 0x818;
	constexpr uint32_t m_vOuterMaxs = 0x824;
}

namespace CLogicNPCCounterOBB
{
}

namespace CLogicPlayerProxy
{
	constexpr uint32_t m_hPlayer = 0x4C0;
	constexpr uint32_t m_PlayerHasAmmo = 0x4C8;
	constexpr uint32_t m_PlayerHasNoAmmo = 0x4F0;
	constexpr uint32_t m_PlayerDied = 0x518;
	constexpr uint32_t m_RequestedPlayerHealth = 0x540;
}

namespace CLogicAuto
{
	constexpr uint32_t m_OnMapSpawn = 0x4C0;
	constexpr uint32_t m_OnDemoMapSpawn = 0x4E8;
	constexpr uint32_t m_OnNewGame = 0x510;
	constexpr uint32_t m_OnLoadGame = 0x538;
	constexpr uint32_t m_OnMapTransition = 0x560;
	constexpr uint32_t m_OnBackgroundMap = 0x588;
	constexpr uint32_t m_OnMultiNewMap = 0x5B0;
	constexpr uint32_t m_OnMultiNewRound = 0x5D8;
	constexpr uint32_t m_OnVREnabled = 0x600;
	constexpr uint32_t m_OnVRNotEnabled = 0x628;
	constexpr uint32_t m_globalstate = 0x650;
}

namespace CLogicScript
{
}

namespace CTimerEntity
{
	constexpr uint32_t m_OnTimer = 0x4C0;
	constexpr uint32_t m_OnTimerHigh = 0x4E8;
	constexpr uint32_t m_OnTimerLow = 0x510;
	constexpr uint32_t m_iDisabled = 0x538;
	constexpr uint32_t m_flInitialDelay = 0x53C;
	constexpr uint32_t m_flRefireTime = 0x540;
	constexpr uint32_t m_bUpDownState = 0x544;
	constexpr uint32_t m_iUseRandomTime = 0x548;
	constexpr uint32_t m_bPauseAfterFiring = 0x54C;
	constexpr uint32_t m_flLowerRandomBound = 0x550;
	constexpr uint32_t m_flUpperRandomBound = 0x554;
	constexpr uint32_t m_flRemainingTime = 0x558;
	constexpr uint32_t m_bPaused = 0x55C;
}

namespace CLogicLineToEntity
{
	constexpr uint32_t m_Line = 0x4C0;
	constexpr uint32_t m_SourceName = 0x4E8;
	constexpr uint32_t m_StartEntity = 0x4F0;
	constexpr uint32_t m_EndEntity = 0x4F4;
}

namespace CMathRemap
{
	constexpr uint32_t m_flInMin = 0x4C0;
	constexpr uint32_t m_flInMax = 0x4C4;
	constexpr uint32_t m_flOut1 = 0x4C8;
	constexpr uint32_t m_flOut2 = 0x4CC;
	constexpr uint32_t m_flOldInValue = 0x4D0;
	constexpr uint32_t m_bEnabled = 0x4D4;
	constexpr uint32_t m_OutValue = 0x4D8;
	constexpr uint32_t m_OnRoseAboveMin = 0x500;
	constexpr uint32_t m_OnRoseAboveMax = 0x528;
	constexpr uint32_t m_OnFellBelowMin = 0x550;
	constexpr uint32_t m_OnFellBelowMax = 0x578;
}

namespace CMathColorBlend
{
	constexpr uint32_t m_flInMin = 0x4C0;
	constexpr uint32_t m_flInMax = 0x4C4;
	constexpr uint32_t m_OutColor1 = 0x4C8;
	constexpr uint32_t m_OutColor2 = 0x4CC;
	constexpr uint32_t m_OutValue = 0x4D0;
}

namespace CEnvGlobal
{
	constexpr uint32_t m_outCounter = 0x4C0;
	constexpr uint32_t m_globalstate = 0x4E8;
	constexpr uint32_t m_triggermode = 0x4F0;
	constexpr uint32_t m_initialstate = 0x4F4;
	constexpr uint32_t m_counter = 0x4F8;
}

namespace CMultiSource
{
	constexpr uint32_t m_rgEntities = 0x4C0;
	constexpr uint32_t m_rgTriggered = 0x540;
	constexpr uint32_t m_OnTrigger = 0x5C0;
	constexpr uint32_t m_iTotal = 0x5E8;
	constexpr uint32_t m_globalstate = 0x5F0;
}

namespace CMathCounter
{
	constexpr uint32_t m_flMin = 0x4C0;
	constexpr uint32_t m_flMax = 0x4C4;
	constexpr uint32_t m_bHitMin = 0x4C8;
	constexpr uint32_t m_bHitMax = 0x4C9;
	constexpr uint32_t m_bDisabled = 0x4CA;
	constexpr uint32_t m_OutValue = 0x4D0;
	constexpr uint32_t m_OnGetValue = 0x4F8;
	constexpr uint32_t m_OnHitMin = 0x520;
	constexpr uint32_t m_OnHitMax = 0x548;
	constexpr uint32_t m_OnChangedFromMin = 0x570;
	constexpr uint32_t m_OnChangedFromMax = 0x598;
}

namespace CLogicCase
{
	constexpr uint32_t m_nCase = 0x4C0;
	constexpr uint32_t m_nShuffleCases = 0x5C0;
	constexpr uint32_t m_nLastShuffleCase = 0x5C4;
	constexpr uint32_t m_uchShuffleCaseMap = 0x5C8;
	constexpr uint32_t m_OnCase = 0x5E8;
	constexpr uint32_t m_OnDefault = 0xAE8;
}

namespace CLogicCompare
{
	constexpr uint32_t m_flInValue = 0x4C0;
	constexpr uint32_t m_flCompareValue = 0x4C4;
	constexpr uint32_t m_OnLessThan = 0x4C8;
	constexpr uint32_t m_OnEqualTo = 0x4F0;
	constexpr uint32_t m_OnNotEqualTo = 0x518;
	constexpr uint32_t m_OnGreaterThan = 0x540;
}

namespace CLogicAutosave
{
	constexpr uint32_t m_bForceNewLevelUnit = 0x4C0;
	constexpr uint32_t m_minHitPoints = 0x4C4;
	constexpr uint32_t m_minHitPointsToCommit = 0x4C8;
}

namespace CLogicActiveAutosave
{
	constexpr uint32_t m_TriggerHitPoints = 0x4D0;
	constexpr uint32_t m_flTimeToTrigger = 0x4D4;
	constexpr uint32_t m_flStartTime = 0x4D8;
	constexpr uint32_t m_flDangerousTime = 0x4DC;
}

namespace CLogicDistanceAutosave
{
	constexpr uint32_t m_iszTargetEntity = 0x4C0;
	constexpr uint32_t m_flDistanceToPlayer = 0x4C8;
	constexpr uint32_t m_bForceNewLevelUnit = 0x4CC;
	constexpr uint32_t m_bCheckCough = 0x4CD;
	constexpr uint32_t m_bThinkDangerous = 0x4CE;
	constexpr uint32_t m_flDangerousTime = 0x4D0;
}

namespace CLogicCollisionPair
{
	constexpr uint32_t m_nameAttach1 = 0x4C0;
	constexpr uint32_t m_nameAttach2 = 0x4C8;
	constexpr uint32_t m_disabled = 0x4D0;
	constexpr uint32_t m_succeeded = 0x4D1;
}

namespace CLogicBranchList
{
	constexpr uint32_t m_nLogicBranchNames = 0x4C0;
	constexpr uint32_t m_LogicBranchList = 0x540;
	constexpr uint32_t m_eLastState = 0x558;
	constexpr uint32_t m_OnAllTrue = 0x560;
	constexpr uint32_t m_OnAllFalse = 0x588;
	constexpr uint32_t m_OnMixed = 0x5B0;
}

namespace CLogicGameEvent
{
	constexpr uint32_t m_iszEventName = 0x4C0;
}

namespace CMessageEntity
{
	constexpr uint32_t m_radius = 0x4C0;
	constexpr uint32_t m_messageText = 0x4C8;
	constexpr uint32_t m_drawText = 0x4D0;
	constexpr uint32_t m_bDeveloperOnly = 0x4D1;
	constexpr uint32_t m_bEnabled = 0x4D2;
}

namespace CTriggerBrush
{
	constexpr uint32_t m_OnStartTouch = 0x710;
	constexpr uint32_t m_OnEndTouch = 0x738;
	constexpr uint32_t m_OnUse = 0x760;
	constexpr uint32_t m_iInputFilter = 0x788;
	constexpr uint32_t m_iDontMessageParent = 0x78C;
}

namespace CPathKeyFrame
{
	constexpr uint32_t m_Origin = 0x4C0;
	constexpr uint32_t m_Angles = 0x4CC;
	constexpr uint32_t m_qAngle = 0x4E0;
	constexpr uint32_t m_iNextKey = 0x4F0;
	constexpr uint32_t m_flNextTime = 0x4F8;
	constexpr uint32_t m_pNextKey = 0x500;
	constexpr uint32_t m_pPrevKey = 0x508;
	constexpr uint32_t m_flSpeed = 0x510;
}

namespace CBaseMoveBehavior
{
	constexpr uint32_t m_iPositionInterpolator = 0x520;
	constexpr uint32_t m_iRotationInterpolator = 0x524;
	constexpr uint32_t m_flAnimStartTime = 0x528;
	constexpr uint32_t m_flAnimEndTime = 0x52C;
	constexpr uint32_t m_flAverageSpeedAcrossFrame = 0x530;
	constexpr uint32_t m_pCurrentKeyFrame = 0x538;
	constexpr uint32_t m_pTargetKeyFrame = 0x540;
	constexpr uint32_t m_pPreKeyFrame = 0x548;
	constexpr uint32_t m_pPostKeyFrame = 0x550;
	constexpr uint32_t m_flTimeIntoFrame = 0x558;
	constexpr uint32_t m_iDirection = 0x55C;
}

namespace CPathCorner
{
	constexpr uint32_t m_flWait = 0x4C0;
	constexpr uint32_t m_flRadius = 0x4C4;
	constexpr uint32_t m_OnPass = 0x4C8;
}

namespace CPhysForce
{
	constexpr uint32_t m_nameAttach = 0x4C8;
	constexpr uint32_t m_force = 0x4D0;
	constexpr uint32_t m_forceTime = 0x4D4;
	constexpr uint32_t m_attachedObject = 0x4D8;
	constexpr uint32_t m_wasRestored = 0x4DC;
	constexpr uint32_t m_integrator = 0x4E0;
}

namespace CPhysThruster
{
	constexpr uint32_t m_localOrigin = 0x520;
}

namespace CPhysTorque
{
	constexpr uint32_t m_axis = 0x520;
}

namespace CPhysMotor
{
	constexpr uint32_t m_nameAttach = 0x4C0;
	constexpr uint32_t m_hAttachedObject = 0x4C8;
	constexpr uint32_t m_spinUp = 0x4CC;
	constexpr uint32_t m_additionalAcceleration = 0x4D0;
	constexpr uint32_t m_angularAcceleration = 0x4D4;
	constexpr uint32_t m_lastTime = 0x4D8;
	constexpr uint32_t m_motor = 0x4F0;
}

namespace CKeepUpright
{
	constexpr uint32_t m_worldGoalAxis = 0x4C8;
	constexpr uint32_t m_localTestAxis = 0x4D4;
	constexpr uint32_t m_nameAttach = 0x4E8;
	constexpr uint32_t m_attachedObject = 0x4F0;
	constexpr uint32_t m_angularLimit = 0x4F4;
	constexpr uint32_t m_bActive = 0x4F8;
	constexpr uint32_t m_bDampAllRotation = 0x4F9;
}

namespace CPhysConstraint
{
	constexpr uint32_t m_nameAttach1 = 0x4C8;
	constexpr uint32_t m_nameAttach2 = 0x4D0;
	constexpr uint32_t m_breakSound = 0x4D8;
	constexpr uint32_t m_forceLimit = 0x4E0;
	constexpr uint32_t m_torqueLimit = 0x4E4;
	constexpr uint32_t m_teleportTick = 0x4E8;
	constexpr uint32_t m_minTeleportDistance = 0x4EC;
	constexpr uint32_t m_OnBreak = 0x4F0;
}

namespace CPhysHinge
{
	constexpr uint32_t m_soundInfo = 0x520;
	constexpr uint32_t m_NotifyMinLimitReached = 0x5A8;
	constexpr uint32_t m_NotifyMaxLimitReached = 0x5D0;
	constexpr uint32_t m_bAtMinLimit = 0x5F8;
	constexpr uint32_t m_bAtMaxLimit = 0x5F9;
	constexpr uint32_t m_hinge = 0x5FC;
	constexpr uint32_t m_hingeFriction = 0x63C;
	constexpr uint32_t m_systemLoadScale = 0x640;
	constexpr uint32_t m_bIsAxisLocal = 0x644;
	constexpr uint32_t m_flMinRotation = 0x648;
	constexpr uint32_t m_flMaxRotation = 0x64C;
	constexpr uint32_t m_flInitialRotation = 0x650;
	constexpr uint32_t m_flMotorFrequency = 0x654;
	constexpr uint32_t m_flMotorDampingRatio = 0x658;
	constexpr uint32_t m_flAngleSpeed = 0x65C;
	constexpr uint32_t m_flAngleSpeedThreshold = 0x660;
	constexpr uint32_t m_OnStartMoving = 0x668;
	constexpr uint32_t m_OnStopMoving = 0x690;
}

namespace CPhysHingeAlias_phys_hinge_local
{
}

namespace CPhysBallSocket
{
	constexpr uint32_t m_flFriction = 0x518;
	constexpr uint32_t m_bEnableSwingLimit = 0x51C;
	constexpr uint32_t m_flSwingLimit = 0x520;
	constexpr uint32_t m_bEnableTwistLimit = 0x524;
	constexpr uint32_t m_flMinTwistAngle = 0x528;
	constexpr uint32_t m_flMaxTwistAngle = 0x52C;
}

namespace CPhysSlideConstraint
{
	constexpr uint32_t m_axisEnd = 0x520;
	constexpr uint32_t m_slideFriction = 0x52C;
	constexpr uint32_t m_systemLoadScale = 0x530;
	constexpr uint32_t m_initialOffset = 0x534;
	constexpr uint32_t m_bEnableLinearConstraint = 0x538;
	constexpr uint32_t m_bEnableAngularConstraint = 0x539;
	constexpr uint32_t m_flMotorFrequency = 0x53C;
	constexpr uint32_t m_flMotorDampingRatio = 0x540;
	constexpr uint32_t m_bUseEntityPivot = 0x544;
	constexpr uint32_t m_soundInfo = 0x548;
}

namespace CPhysFixed
{
	constexpr uint32_t m_flLinearFrequency = 0x518;
	constexpr uint32_t m_flLinearDampingRatio = 0x51C;
	constexpr uint32_t m_flAngularFrequency = 0x520;
	constexpr uint32_t m_flAngularDampingRatio = 0x524;
	constexpr uint32_t m_bEnableLinearConstraint = 0x528;
	constexpr uint32_t m_bEnableAngularConstraint = 0x529;
}

namespace CPhysPulley
{
	constexpr uint32_t m_position2 = 0x518;
	constexpr uint32_t m_offset = 0x524;
	constexpr uint32_t m_addLength = 0x53C;
	constexpr uint32_t m_gearRatio = 0x540;
}

namespace CPhysLength
{
	constexpr uint32_t m_offset = 0x518;
	constexpr uint32_t m_vecAttach = 0x530;
	constexpr uint32_t m_addLength = 0x53C;
	constexpr uint32_t m_minLength = 0x540;
	constexpr uint32_t m_totalLength = 0x544;
	constexpr uint32_t m_bEnableCollision = 0x548;
}

namespace CRagdollConstraint
{
	constexpr uint32_t m_xmin = 0x518;
	constexpr uint32_t m_xmax = 0x51C;
	constexpr uint32_t m_ymin = 0x520;
	constexpr uint32_t m_ymax = 0x524;
	constexpr uint32_t m_zmin = 0x528;
	constexpr uint32_t m_zmax = 0x52C;
	constexpr uint32_t m_xfriction = 0x530;
	constexpr uint32_t m_yfriction = 0x534;
	constexpr uint32_t m_zfriction = 0x538;
}

namespace CGenericConstraint
{
	constexpr uint32_t m_nLinearMotionX = 0x520;
	constexpr uint32_t m_nLinearMotionY = 0x524;
	constexpr uint32_t m_nLinearMotionZ = 0x528;
	constexpr uint32_t m_flLinearFrequencyX = 0x52C;
	constexpr uint32_t m_flLinearFrequencyY = 0x530;
	constexpr uint32_t m_flLinearFrequencyZ = 0x534;
	constexpr uint32_t m_flLinearDampingRatioX = 0x538;
	constexpr uint32_t m_flLinearDampingRatioY = 0x53C;
	constexpr uint32_t m_flLinearDampingRatioZ = 0x540;
	constexpr uint32_t m_flMaxLinearImpulseX = 0x544;
	constexpr uint32_t m_flMaxLinearImpulseY = 0x548;
	constexpr uint32_t m_flMaxLinearImpulseZ = 0x54C;
	constexpr uint32_t m_flBreakAfterTimeX = 0x550;
	constexpr uint32_t m_flBreakAfterTimeY = 0x554;
	constexpr uint32_t m_flBreakAfterTimeZ = 0x558;
	constexpr uint32_t m_flBreakAfterTimeStartTimeX = 0x55C;
	constexpr uint32_t m_flBreakAfterTimeStartTimeY = 0x560;
	constexpr uint32_t m_flBreakAfterTimeStartTimeZ = 0x564;
	constexpr uint32_t m_flBreakAfterTimeThresholdX = 0x568;
	constexpr uint32_t m_flBreakAfterTimeThresholdY = 0x56C;
	constexpr uint32_t m_flBreakAfterTimeThresholdZ = 0x570;
	constexpr uint32_t m_flNotifyForceX = 0x574;
	constexpr uint32_t m_flNotifyForceY = 0x578;
	constexpr uint32_t m_flNotifyForceZ = 0x57C;
	constexpr uint32_t m_flNotifyForceMinTimeX = 0x580;
	constexpr uint32_t m_flNotifyForceMinTimeY = 0x584;
	constexpr uint32_t m_flNotifyForceMinTimeZ = 0x588;
	constexpr uint32_t m_flNotifyForceLastTimeX = 0x58C;
	constexpr uint32_t m_flNotifyForceLastTimeY = 0x590;
	constexpr uint32_t m_flNotifyForceLastTimeZ = 0x594;
	constexpr uint32_t m_bAxisNotifiedX = 0x598;
	constexpr uint32_t m_bAxisNotifiedY = 0x599;
	constexpr uint32_t m_bAxisNotifiedZ = 0x59A;
	constexpr uint32_t m_nAngularMotionX = 0x59C;
	constexpr uint32_t m_nAngularMotionY = 0x5A0;
	constexpr uint32_t m_nAngularMotionZ = 0x5A4;
	constexpr uint32_t m_flAngularFrequencyX = 0x5A8;
	constexpr uint32_t m_flAngularFrequencyY = 0x5AC;
	constexpr uint32_t m_flAngularFrequencyZ = 0x5B0;
	constexpr uint32_t m_flAngularDampingRatioX = 0x5B4;
	constexpr uint32_t m_flAngularDampingRatioY = 0x5B8;
	constexpr uint32_t m_flAngularDampingRatioZ = 0x5BC;
	constexpr uint32_t m_flMaxAngularImpulseX = 0x5C0;
	constexpr uint32_t m_flMaxAngularImpulseY = 0x5C4;
	constexpr uint32_t m_flMaxAngularImpulseZ = 0x5C8;
	constexpr uint32_t m_NotifyForceReachedX = 0x5D0;
	constexpr uint32_t m_NotifyForceReachedY = 0x5F8;
	constexpr uint32_t m_NotifyForceReachedZ = 0x620;
}

namespace CSplineConstraint
{
}

namespace CPhysWheelConstraint
{
	constexpr uint32_t m_flSuspensionFrequency = 0x518;
	constexpr uint32_t m_flSuspensionDampingRatio = 0x51C;
	constexpr uint32_t m_flSuspensionHeightOffset = 0x520;
	constexpr uint32_t m_bEnableSuspensionLimit = 0x524;
	constexpr uint32_t m_flMinSuspensionOffset = 0x528;
	constexpr uint32_t m_flMaxSuspensionOffset = 0x52C;
	constexpr uint32_t m_bEnableSteeringLimit = 0x530;
	constexpr uint32_t m_flMinSteeringAngle = 0x534;
	constexpr uint32_t m_flMaxSteeringAngle = 0x538;
	constexpr uint32_t m_flSteeringAxisFriction = 0x53C;
	constexpr uint32_t m_flSpinAxisFriction = 0x540;
}

namespace CPhysicsEntitySolver
{
	constexpr uint32_t m_hMovingEntity = 0x4C8;
	constexpr uint32_t m_hPhysicsBlocker = 0x4CC;
	constexpr uint32_t m_separationDuration = 0x4D0;
	constexpr uint32_t m_cancelTime = 0x4D4;
}

namespace CPhysicsSpring
{
	constexpr uint32_t m_flFrequency = 0x4C8;
	constexpr uint32_t m_flDampingRatio = 0x4CC;
	constexpr uint32_t m_flRestLength = 0x4D0;
	constexpr uint32_t m_nameAttachStart = 0x4D8;
	constexpr uint32_t m_nameAttachEnd = 0x4E0;
	constexpr uint32_t m_start = 0x4E8;
	constexpr uint32_t m_end = 0x4F4;
	constexpr uint32_t m_teleportTick = 0x500;
}

namespace CPointPush
{
	constexpr uint32_t m_bEnabled = 0x4C0;
	constexpr uint32_t m_flMagnitude = 0x4C4;
	constexpr uint32_t m_flRadius = 0x4C8;
	constexpr uint32_t m_flInnerRadius = 0x4CC;
	constexpr uint32_t m_flConeOfInfluence = 0x4D0;
	constexpr uint32_t m_iszFilterName = 0x4D8;
	constexpr uint32_t m_hFilter = 0x4E0;
}

namespace CInfoPlayerStart
{
	constexpr uint32_t m_bDisabled = 0x4C0;
}

namespace CPointEntityFinder
{
	constexpr uint32_t m_hEntity = 0x4C0;
	constexpr uint32_t m_iFilterName = 0x4C8;
	constexpr uint32_t m_hFilter = 0x4D0;
	constexpr uint32_t m_iRefName = 0x4D8;
	constexpr uint32_t m_hReference = 0x4E0;
	constexpr uint32_t m_FindMethod = 0x4E4;
	constexpr uint32_t m_OnFoundEntity = 0x4E8;
}

namespace CPointValueRemapper
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_bUpdateOnClient = 0x4C1;
	constexpr uint32_t m_nInputType = 0x4C4;
	constexpr uint32_t m_iszRemapLineStartName = 0x4C8;
	constexpr uint32_t m_iszRemapLineEndName = 0x4D0;
	constexpr uint32_t m_hRemapLineStart = 0x4D8;
	constexpr uint32_t m_hRemapLineEnd = 0x4DC;
	constexpr uint32_t m_flMaximumChangePerSecond = 0x4E0;
	constexpr uint32_t m_flDisengageDistance = 0x4E4;
	constexpr uint32_t m_flEngageDistance = 0x4E8;
	constexpr uint32_t m_bRequiresUseKey = 0x4EC;
	constexpr uint32_t m_nOutputType = 0x4F0;
	constexpr uint32_t m_iszOutputEntityName = 0x4F8;
	constexpr uint32_t m_iszOutputEntity2Name = 0x500;
	constexpr uint32_t m_iszOutputEntity3Name = 0x508;
	constexpr uint32_t m_iszOutputEntity4Name = 0x510;
	constexpr uint32_t m_hOutputEntities = 0x518;
	constexpr uint32_t m_nHapticsType = 0x530;
	constexpr uint32_t m_nMomentumType = 0x534;
	constexpr uint32_t m_flMomentumModifier = 0x538;
	constexpr uint32_t m_flSnapValue = 0x53C;
	constexpr uint32_t m_flCurrentMomentum = 0x540;
	constexpr uint32_t m_nRatchetType = 0x544;
	constexpr uint32_t m_flRatchetOffset = 0x548;
	constexpr uint32_t m_flInputOffset = 0x54C;
	constexpr uint32_t m_bEngaged = 0x550;
	constexpr uint32_t m_bFirstUpdate = 0x551;
	constexpr uint32_t m_flPreviousValue = 0x554;
	constexpr uint32_t m_flPreviousUpdateTickTime = 0x558;
	constexpr uint32_t m_vecPreviousTestPoint = 0x55C;
	constexpr uint32_t m_hUsingPlayer = 0x568;
	constexpr uint32_t m_flCustomOutputValue = 0x56C;
	constexpr uint32_t m_iszSoundEngage = 0x570;
	constexpr uint32_t m_iszSoundDisengage = 0x578;
	constexpr uint32_t m_iszSoundReachedValueZero = 0x580;
	constexpr uint32_t m_iszSoundReachedValueOne = 0x588;
	constexpr uint32_t m_iszSoundMovingLoop = 0x590;
	constexpr uint32_t m_Position = 0x5A0;
	constexpr uint32_t m_PositionDelta = 0x5C8;
	constexpr uint32_t m_OnReachedValueZero = 0x5F0;
	constexpr uint32_t m_OnReachedValueOne = 0x618;
	constexpr uint32_t m_OnReachedValueCustom = 0x640;
	constexpr uint32_t m_OnEngage = 0x668;
	constexpr uint32_t m_OnDisengage = 0x690;
}

namespace CPointWorldText
{
	constexpr uint32_t m_messageText = 0x710;
	constexpr uint32_t m_FontName = 0x910;
	constexpr uint32_t m_bEnabled = 0x950;
	constexpr uint32_t m_bFullbright = 0x951;
	constexpr uint32_t m_flWorldUnitsPerPx = 0x954;
	constexpr uint32_t m_flFontSize = 0x958;
	constexpr uint32_t m_flDepthOffset = 0x95C;
	constexpr uint32_t m_Color = 0x960;
	constexpr uint32_t m_nJustifyHorizontal = 0x964;
	constexpr uint32_t m_nJustifyVertical = 0x968;
	constexpr uint32_t m_nReorientMode = 0x96C;
}

namespace CPointAngleSensor
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_nLookAtName = 0x4C8;
	constexpr uint32_t m_hTargetEntity = 0x4D0;
	constexpr uint32_t m_hLookAtEntity = 0x4D4;
	constexpr uint32_t m_flDuration = 0x4D8;
	constexpr uint32_t m_flDotTolerance = 0x4DC;
	constexpr uint32_t m_flFacingTime = 0x4E0;
	constexpr uint32_t m_bFired = 0x4E4;
	constexpr uint32_t m_OnFacingLookat = 0x4E8;
	constexpr uint32_t m_OnNotFacingLookat = 0x510;
	constexpr uint32_t m_TargetDir = 0x538;
	constexpr uint32_t m_FacingPercentage = 0x560;
}

namespace CPointProximitySensor
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_hTargetEntity = 0x4C4;
	constexpr uint32_t m_Distance = 0x4C8;
}

namespace CPointAngularVelocitySensor
{
	constexpr uint32_t m_hTargetEntity = 0x4C0;
	constexpr uint32_t m_flThreshold = 0x4C4;
	constexpr uint32_t m_nLastCompareResult = 0x4C8;
	constexpr uint32_t m_nLastFireResult = 0x4CC;
	constexpr uint32_t m_flFireTime = 0x4D0;
	constexpr uint32_t m_flFireInterval = 0x4D4;
	constexpr uint32_t m_flLastAngVelocity = 0x4D8;
	constexpr uint32_t m_lastOrientation = 0x4DC;
	constexpr uint32_t m_vecAxis = 0x4E8;
	constexpr uint32_t m_bUseHelper = 0x4F4;
	constexpr uint32_t m_AngularVelocity = 0x4F8;
	constexpr uint32_t m_OnLessThan = 0x520;
	constexpr uint32_t m_OnLessThanOrEqualTo = 0x548;
	constexpr uint32_t m_OnGreaterThan = 0x570;
	constexpr uint32_t m_OnGreaterThanOrEqualTo = 0x598;
	constexpr uint32_t m_OnEqualTo = 0x5C0;
}

namespace CPointVelocitySensor
{
	constexpr uint32_t m_hTargetEntity = 0x4C0;
	constexpr uint32_t m_vecAxis = 0x4C4;
	constexpr uint32_t m_bEnabled = 0x4D0;
	constexpr uint32_t m_fPrevVelocity = 0x4D4;
	constexpr uint32_t m_flAvgInterval = 0x4D8;
	constexpr uint32_t m_Velocity = 0x4E0;
}

namespace CPointHurt
{
	constexpr uint32_t m_nDamage = 0x4C0;
	constexpr uint32_t m_bitsDamageType = 0x4C4;
	constexpr uint32_t m_flRadius = 0x4C8;
	constexpr uint32_t m_flDelay = 0x4CC;
	constexpr uint32_t m_strTarget = 0x4D0;
	constexpr uint32_t m_pActivator = 0x4D8;
}

namespace CPointTeleport
{
	constexpr uint32_t m_vSaveOrigin = 0x4C0;
	constexpr uint32_t m_vSaveAngles = 0x4CC;
	constexpr uint32_t m_bTeleportParentedEntities = 0x4D8;
	constexpr uint32_t m_bTeleportUseCurrentAngle = 0x4D9;
}

namespace CEnableMotionFixup
{
}

namespace CFuncPropRespawnZone
{
}

namespace CRagdollManager
{
	constexpr uint32_t m_iCurrentMaxRagdollCount = 0x4C0;
	constexpr uint32_t m_iMaxRagdollCount = 0x4C4;
	constexpr uint32_t m_bSaveImportant = 0x4C8;
}

namespace CRevertSaved
{
	constexpr uint32_t m_loadTime = 0x710;
	constexpr uint32_t m_Duration = 0x714;
	constexpr uint32_t m_HoldTime = 0x718;
}

namespace CSceneListManager
{
	constexpr uint32_t m_hListManagers = 0x4C0;
	constexpr uint32_t m_iszScenes = 0x4D8;
	constexpr uint32_t m_hScenes = 0x558;
}

namespace CSceneEntity
{
	constexpr uint32_t m_iszSceneFile = 0x4C8;
	constexpr uint32_t m_iszResumeSceneFile = 0x4D0;
	constexpr uint32_t m_iszTarget1 = 0x4D8;
	constexpr uint32_t m_iszTarget2 = 0x4E0;
	constexpr uint32_t m_iszTarget3 = 0x4E8;
	constexpr uint32_t m_iszTarget4 = 0x4F0;
	constexpr uint32_t m_iszTarget5 = 0x4F8;
	constexpr uint32_t m_iszTarget6 = 0x500;
	constexpr uint32_t m_iszTarget7 = 0x508;
	constexpr uint32_t m_iszTarget8 = 0x510;
	constexpr uint32_t m_hTarget1 = 0x518;
	constexpr uint32_t m_hTarget2 = 0x51C;
	constexpr uint32_t m_hTarget3 = 0x520;
	constexpr uint32_t m_hTarget4 = 0x524;
	constexpr uint32_t m_hTarget5 = 0x528;
	constexpr uint32_t m_hTarget6 = 0x52C;
	constexpr uint32_t m_hTarget7 = 0x530;
	constexpr uint32_t m_hTarget8 = 0x534;
	constexpr uint32_t m_bIsPlayingBack = 0x538;
	constexpr uint32_t m_bPaused = 0x539;
	constexpr uint32_t m_bMultiplayer = 0x53A;
	constexpr uint32_t m_bAutogenerated = 0x53B;
	constexpr uint32_t m_flForceClientTime = 0x53C;
	constexpr uint32_t m_flCurrentTime = 0x540;
	constexpr uint32_t m_flFrameTime = 0x544;
	constexpr uint32_t m_bCancelAtNextInterrupt = 0x548;
	constexpr uint32_t m_fPitch = 0x54C;
	constexpr uint32_t m_bAutomated = 0x550;
	constexpr uint32_t m_nAutomatedAction = 0x554;
	constexpr uint32_t m_flAutomationDelay = 0x558;
	constexpr uint32_t m_flAutomationTime = 0x55C;
	constexpr uint32_t m_hWaitingForThisResumeScene = 0x560;
	constexpr uint32_t m_bWaitingForResumeScene = 0x564;
	constexpr uint32_t m_bPausedViaInput = 0x565;
	constexpr uint32_t m_bPauseAtNextInterrupt = 0x566;
	constexpr uint32_t m_bWaitingForActor = 0x567;
	constexpr uint32_t m_bWaitingForInterrupt = 0x568;
	constexpr uint32_t m_bInterruptedActorsScenes = 0x569;
	constexpr uint32_t m_bBreakOnNonIdle = 0x56A;
	constexpr uint32_t m_hActorList = 0x570;
	constexpr uint32_t m_hRemoveActorList = 0x588;
	constexpr uint32_t m_nSceneFlushCounter = 0x5D0;
	constexpr uint32_t m_nSceneStringIndex = 0x5D4;
	constexpr uint32_t m_OnStart = 0x5D8;
	constexpr uint32_t m_OnCompletion = 0x600;
	constexpr uint32_t m_OnCanceled = 0x628;
	constexpr uint32_t m_OnPaused = 0x650;
	constexpr uint32_t m_OnResumed = 0x678;
	constexpr uint32_t m_OnTrigger = 0x6A0;
	constexpr uint32_t m_hInterruptScene = 0x9B0;
	constexpr uint32_t m_nInterruptCount = 0x9B4;
	constexpr uint32_t m_bSceneMissing = 0x9B8;
	constexpr uint32_t m_bInterrupted = 0x9B9;
	constexpr uint32_t m_bCompletedEarly = 0x9BA;
	constexpr uint32_t m_bInterruptSceneFinished = 0x9BB;
	constexpr uint32_t m_bRestoring = 0x9BC;
	constexpr uint32_t m_hNotifySceneCompletion = 0x9C0;
	constexpr uint32_t m_hListManagers = 0x9D8;
	constexpr uint32_t m_iszSoundName = 0x9F0;
	constexpr uint32_t m_iszSequenceName = 0x9F8;
	constexpr uint32_t m_hActor = 0xA00;
	constexpr uint32_t m_hActivator = 0xA04;
	constexpr uint32_t m_BusyActor = 0xA08;
	constexpr uint32_t m_iPlayerDeathBehavior = 0xA0C;
}

namespace CSoundOpvarSetEntity
{
	constexpr uint32_t m_iszStackName = 0x4C8;
	constexpr uint32_t m_iszOperatorName = 0x4D0;
	constexpr uint32_t m_iszOpvarName = 0x4D8;
	constexpr uint32_t m_nOpvarType = 0x4E0;
	constexpr uint32_t m_nOpvarIndex = 0x4E4;
	constexpr uint32_t m_flOpvarValue = 0x4E8;
	constexpr uint32_t m_OpvarValueString = 0x4F0;
	constexpr uint32_t m_bSetOnSpawn = 0x4F8;
}

namespace CAISound
{
	constexpr uint32_t m_iSoundType = 0x4C0;
	constexpr uint32_t m_iSoundContext = 0x4C4;
	constexpr uint32_t m_iVolume = 0x4C8;
	constexpr uint32_t m_iSoundIndex = 0x4CC;
	constexpr uint32_t m_flDuration = 0x4D0;
	constexpr uint32_t m_iszProxyEntityName = 0x4D8;
}

namespace CSoundStackSave
{
	constexpr uint32_t m_iszStackName = 0x4C0;
}

namespace CSoundEventEntity
{
	constexpr uint32_t m_bStartOnSpawn = 0x4C0;
	constexpr uint32_t m_bToLocalPlayer = 0x4C1;
	constexpr uint32_t m_bStopOnNew = 0x4C2;
	constexpr uint32_t m_bSaveRestore = 0x4C3;
	constexpr uint32_t m_bSavedIsPlaying = 0x4C4;
	constexpr uint32_t m_flSavedElapsedTime = 0x4C8;
	constexpr uint32_t m_iszSourceEntityName = 0x4D0;
	constexpr uint32_t m_iszAttachmentName = 0x4D8;
	constexpr uint32_t m_onGUIDChanged = 0x4E0;
	constexpr uint32_t m_onSoundFinished = 0x508;
	constexpr uint32_t m_iszSoundName = 0x550;
	constexpr uint32_t m_hSource = 0x560;
}

namespace CSoundEventEntityAlias_snd_event_point
{
}

namespace CSoundEventAABBEntity
{
	constexpr uint32_t m_vMins = 0x568;
	constexpr uint32_t m_vMaxs = 0x574;
}

namespace CSoundEventOBBEntity
{
	constexpr uint32_t m_vMins = 0x568;
	constexpr uint32_t m_vMaxs = 0x574;
}

namespace CSoundEventPathCornerEntity
{
	constexpr uint32_t m_iszPathCorner = 0x568;
	constexpr uint32_t m_iCountMax = 0x570;
	constexpr uint32_t m_flDistanceMax = 0x574;
	constexpr uint32_t m_flDistMaxSqr = 0x578;
	constexpr uint32_t m_flDotProductMax = 0x57C;
	constexpr uint32_t bPlaying = 0x580;
}

namespace CSoundEventParameter
{
	constexpr uint32_t m_iszParamName = 0x4C8;
	constexpr uint32_t m_flFloatValue = 0x4D0;
}

namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy
{
}

namespace CEnvSoundscapeAlias_snd_soundscape
{
}

namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable
{
}

namespace CNullEntity
{
}

namespace CBaseDMStart
{
	constexpr uint32_t m_Master = 0x4C0;
}

namespace CInfoLandmark
{
}

namespace CSun
{
	constexpr uint32_t m_vDirection = 0x710;
	constexpr uint32_t m_clrOverlay = 0x71C;
	constexpr uint32_t m_iszEffectName = 0x720;
	constexpr uint32_t m_iszSSEffectName = 0x728;
	constexpr uint32_t m_bOn = 0x730;
	constexpr uint32_t m_bmaxColor = 0x731;
	constexpr uint32_t m_flSize = 0x734;
	constexpr uint32_t m_flRotation = 0x738;
	constexpr uint32_t m_flHazeScale = 0x73C;
	constexpr uint32_t m_flAlphaHaze = 0x740;
	constexpr uint32_t m_flAlphaHdr = 0x744;
	constexpr uint32_t m_flAlphaScale = 0x748;
	constexpr uint32_t m_flHDRColorScale = 0x74C;
	constexpr uint32_t m_flFarZScale = 0x750;
}

namespace CTankTargetChange
{
	constexpr uint32_t m_newTarget = 0x4C0;
	constexpr uint32_t m_newTargetName = 0x4D0;
}

namespace CFuncTrackTrain
{
	constexpr uint32_t m_ppath = 0x710;
	constexpr uint32_t m_length = 0x714;
	constexpr uint32_t m_vPosPrev = 0x718;
	constexpr uint32_t m_angPrev = 0x724;
	constexpr uint32_t m_controlMins = 0x730;
	constexpr uint32_t m_controlMaxs = 0x73C;
	constexpr uint32_t m_lastBlockPos = 0x748;
	constexpr uint32_t m_lastBlockTick = 0x754;
	constexpr uint32_t m_flVolume = 0x758;
	constexpr uint32_t m_flBank = 0x75C;
	constexpr uint32_t m_oldSpeed = 0x760;
	constexpr uint32_t m_flBlockDamage = 0x764;
	constexpr uint32_t m_height = 0x768;
	constexpr uint32_t m_maxSpeed = 0x76C;
	constexpr uint32_t m_dir = 0x770;
	constexpr uint32_t m_iszSoundMove = 0x778;
	constexpr uint32_t m_iszSoundMovePing = 0x780;
	constexpr uint32_t m_iszSoundStart = 0x788;
	constexpr uint32_t m_iszSoundStop = 0x790;
	constexpr uint32_t m_strPathTarget = 0x798;
	constexpr uint32_t m_flMoveSoundMinDuration = 0x7A0;
	constexpr uint32_t m_flMoveSoundMaxDuration = 0x7A4;
	constexpr uint32_t m_flNextMoveSoundTime = 0x7A8;
	constexpr uint32_t m_flMoveSoundMinPitch = 0x7AC;
	constexpr uint32_t m_flMoveSoundMaxPitch = 0x7B0;
	constexpr uint32_t m_eOrientationType = 0x7B4;
	constexpr uint32_t m_eVelocityType = 0x7B8;
	constexpr uint32_t m_OnStart = 0x7C8;
	constexpr uint32_t m_OnNext = 0x7F0;
	constexpr uint32_t m_OnArrivedAtDestinationNode = 0x818;
	constexpr uint32_t m_bManualSpeedChanges = 0x840;
	constexpr uint32_t m_flDesiredSpeed = 0x844;
	constexpr uint32_t m_flSpeedChangeTime = 0x848;
	constexpr uint32_t m_flAccelSpeed = 0x84C;
	constexpr uint32_t m_flDecelSpeed = 0x850;
	constexpr uint32_t m_bAccelToSpeed = 0x854;
	constexpr uint32_t m_flTimeScale = 0x858;
	constexpr uint32_t m_flNextMPSoundTime = 0x85C;
}

namespace CTankTrainAI
{
	constexpr uint32_t m_hTrain = 0x4C0;
	constexpr uint32_t m_hTargetEntity = 0x4C4;
	constexpr uint32_t m_soundPlaying = 0x4C8;
	constexpr uint32_t m_startSoundName = 0x4E0;
	constexpr uint32_t m_engineSoundName = 0x4E8;
	constexpr uint32_t m_movementSoundName = 0x4F0;
	constexpr uint32_t m_targetEntityName = 0x4F8;
}

namespace CHandleTest
{
	constexpr uint32_t m_Handle = 0x4C0;
	constexpr uint32_t m_bSendHandle = 0x4C4;
}

namespace CHandleDummy
{
}

namespace CFuncPlat
{
	constexpr uint32_t m_sNoise = 0x7B8;
}

namespace CPlatTrigger
{
	constexpr uint32_t m_pPlatform = 0x710;
}

namespace CFuncTrainControls
{
}

namespace CTriggerVolume
{
	constexpr uint32_t m_iFilterName = 0x710;
	constexpr uint32_t m_hFilter = 0x718;
}

namespace CInfoTeleportDestination
{
}

namespace CAI_ChangeHintGroup
{
	constexpr uint32_t m_iSearchType = 0x4C0;
	constexpr uint32_t m_strSearchName = 0x4C8;
	constexpr uint32_t m_strNewHintGroup = 0x4D0;
	constexpr uint32_t m_flRadius = 0x4D8;
}

namespace CLogicProximity
{
}

namespace CInfoSpawnGroupLandmark
{
}

namespace CInfoSpawnGroupLoadUnload
{
	constexpr uint32_t m_OnSpawnGroupLoadStarted = 0x4C0;
	constexpr uint32_t m_OnSpawnGroupLoadFinished = 0x4E8;
	constexpr uint32_t m_OnSpawnGroupUnloadStarted = 0x510;
	constexpr uint32_t m_OnSpawnGroupUnloadFinished = 0x538;
	constexpr uint32_t m_iszSpawnGroupName = 0x560;
	constexpr uint32_t m_iszSpawnGroupFilterName = 0x568;
	constexpr uint32_t m_iszLandmarkName = 0x570;
	constexpr uint32_t m_sFixedSpawnGroupName = 0x578;
	constexpr uint32_t m_flTimeoutInterval = 0x580;
	constexpr uint32_t m_bStreamingStarted = 0x584;
	constexpr uint32_t m_bUnloadingStarted = 0x585;
}

namespace CPointPulse
{
}

namespace CPointScriptEntity
{
}

namespace CFuncNavObstruction
{
	constexpr uint32_t m_bDisabled = 0x718;
}

namespace CAmbientGeneric
{
	constexpr uint32_t m_radius = 0x4C0;
	constexpr uint32_t m_flMaxRadius = 0x4C4;
	constexpr uint32_t m_iSoundLevel = 0x4C8;
	constexpr uint32_t m_dpv = 0x4CC;
	constexpr uint32_t m_fActive = 0x530;
	constexpr uint32_t m_fLooping = 0x531;
	constexpr uint32_t m_iszSound = 0x538;
	constexpr uint32_t m_sSourceEntName = 0x540;
	constexpr uint32_t m_hSoundSource = 0x548;
	constexpr uint32_t m_nSoundSourceEntIndex = 0x54C;
}

namespace RelationshipOverride_t
{
	constexpr uint32_t entity = 0x8;
	constexpr uint32_t classType = 0xC;
}

namespace CBaseToggle
{
	constexpr uint32_t m_toggle_state = 0x710;
	constexpr uint32_t m_flMoveDistance = 0x714;
	constexpr uint32_t m_flWait = 0x718;
	constexpr uint32_t m_flLip = 0x71C;
	constexpr uint32_t m_bAlwaysFireBlockedOutputs = 0x720;
	constexpr uint32_t m_vecPosition1 = 0x724;
	constexpr uint32_t m_vecPosition2 = 0x730;
	constexpr uint32_t m_vecMoveAng = 0x73C;
	constexpr uint32_t m_vecAngle1 = 0x748;
	constexpr uint32_t m_vecAngle2 = 0x754;
	constexpr uint32_t m_flHeight = 0x760;
	constexpr uint32_t m_hActivator = 0x764;
	constexpr uint32_t m_vecFinalDest = 0x768;
	constexpr uint32_t m_vecFinalAngle = 0x774;
	constexpr uint32_t m_movementType = 0x780;
	constexpr uint32_t m_sMaster = 0x788;
}

namespace CBaseButton
{
	constexpr uint32_t m_angMoveEntitySpace = 0x790;
	constexpr uint32_t m_fStayPushed = 0x79C;
	constexpr uint32_t m_fRotating = 0x79D;
	constexpr uint32_t m_ls = 0x7A0;
	constexpr uint32_t m_sUseSound = 0x7C0;
	constexpr uint32_t m_sLockedSound = 0x7C8;
	constexpr uint32_t m_sUnlockedSound = 0x7D0;
	constexpr uint32_t m_bLocked = 0x7D8;
	constexpr uint32_t m_bDisabled = 0x7D9;
	constexpr uint32_t m_flUseLockedTime = 0x7DC;
	constexpr uint32_t m_bSolidBsp = 0x7E0;
	constexpr uint32_t m_OnDamaged = 0x7E8;
	constexpr uint32_t m_OnPressed = 0x810;
	constexpr uint32_t m_OnUseLocked = 0x838;
	constexpr uint32_t m_OnIn = 0x860;
	constexpr uint32_t m_OnOut = 0x888;
	constexpr uint32_t m_nState = 0x8B0;
	constexpr uint32_t m_hConstraint = 0x8B4;
	constexpr uint32_t m_hConstraintParent = 0x8B8;
	constexpr uint32_t m_bForceNpcExclude = 0x8BC;
	constexpr uint32_t m_sGlowEntity = 0x8C0;
	constexpr uint32_t m_glowEntity = 0x8C8;
	constexpr uint32_t m_usable = 0x8CC;
	constexpr uint32_t m_szDisplayText = 0x8D0;
}

namespace CPhysicalButton
{
}

namespace CRotButton
{
}

namespace CMomentaryRotButton
{
	constexpr uint32_t m_Position = 0x8D8;
	constexpr uint32_t m_OnUnpressed = 0x900;
	constexpr uint32_t m_OnFullyOpen = 0x928;
	constexpr uint32_t m_OnFullyClosed = 0x950;
	constexpr uint32_t m_OnReachedPosition = 0x978;
	constexpr uint32_t m_lastUsed = 0x9A0;
	constexpr uint32_t m_start = 0x9A4;
	constexpr uint32_t m_end = 0x9B0;
	constexpr uint32_t m_IdealYaw = 0x9BC;
	constexpr uint32_t m_sNoise = 0x9C0;
	constexpr uint32_t m_bUpdateTarget = 0x9C8;
	constexpr uint32_t m_direction = 0x9CC;
	constexpr uint32_t m_returnSpeed = 0x9D0;
	constexpr uint32_t m_flStartPosition = 0x9D4;
}

namespace CRagdollMagnet
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_radius = 0x4C4;
	constexpr uint32_t m_force = 0x4C8;
	constexpr uint32_t m_axis = 0x4CC;
}

namespace CBaseDoor
{
	constexpr uint32_t m_angMoveEntitySpace = 0x7A0;
	constexpr uint32_t m_vecMoveDirParentSpace = 0x7AC;
	constexpr uint32_t m_ls = 0x7B8;
	constexpr uint32_t m_bForceClosed = 0x7D8;
	constexpr uint32_t m_bDoorGroup = 0x7D9;
	constexpr uint32_t m_bLocked = 0x7DA;
	constexpr uint32_t m_bIgnoreDebris = 0x7DB;
	constexpr uint32_t m_eSpawnPosition = 0x7DC;
	constexpr uint32_t m_flBlockDamage = 0x7E0;
	constexpr uint32_t m_NoiseMoving = 0x7E8;
	constexpr uint32_t m_NoiseArrived = 0x7F0;
	constexpr uint32_t m_NoiseMovingClosed = 0x7F8;
	constexpr uint32_t m_NoiseArrivedClosed = 0x800;
	constexpr uint32_t m_ChainTarget = 0x808;
	constexpr uint32_t m_OnBlockedClosing = 0x810;
	constexpr uint32_t m_OnBlockedOpening = 0x838;
	constexpr uint32_t m_OnUnblockedClosing = 0x860;
	constexpr uint32_t m_OnUnblockedOpening = 0x888;
	constexpr uint32_t m_OnFullyClosed = 0x8B0;
	constexpr uint32_t m_OnFullyOpen = 0x8D8;
	constexpr uint32_t m_OnClose = 0x900;
	constexpr uint32_t m_OnOpen = 0x928;
	constexpr uint32_t m_OnLockedUse = 0x950;
	constexpr uint32_t m_bLoopMoveSound = 0x978;
	constexpr uint32_t m_bCreateNavObstacle = 0x990;
	constexpr uint32_t m_isChaining = 0x991;
	constexpr uint32_t m_bIsUsable = 0x992;
}

namespace CEntityBlocker
{
}

namespace CEntityDissolve
{
	constexpr uint32_t m_flFadeInStart = 0x710;
	constexpr uint32_t m_flFadeInLength = 0x714;
	constexpr uint32_t m_flFadeOutModelStart = 0x718;
	constexpr uint32_t m_flFadeOutModelLength = 0x71C;
	constexpr uint32_t m_flFadeOutStart = 0x720;
	constexpr uint32_t m_flFadeOutLength = 0x724;
	constexpr uint32_t m_flStartTime = 0x728;
	constexpr uint32_t m_nDissolveType = 0x72C;
	constexpr uint32_t m_vDissolverOrigin = 0x730;
	constexpr uint32_t m_nMagnitude = 0x73C;
}

namespace CEnvProjectedTexture
{
	constexpr uint32_t m_hTargetEntity = 0x710;
	constexpr uint32_t m_bState = 0x714;
	constexpr uint32_t m_bAlwaysUpdate = 0x715;
	constexpr uint32_t m_flLightFOV = 0x718;
	constexpr uint32_t m_bEnableShadows = 0x71C;
	constexpr uint32_t m_bSimpleProjection = 0x71D;
	constexpr uint32_t m_bLightOnlyTarget = 0x71E;
	constexpr uint32_t m_bLightWorld = 0x71F;
	constexpr uint32_t m_bCameraSpace = 0x720;
	constexpr uint32_t m_flBrightnessScale = 0x724;
	constexpr uint32_t m_LightColor = 0x728;
	constexpr uint32_t m_flIntensity = 0x72C;
	constexpr uint32_t m_flLinearAttenuation = 0x730;
	constexpr uint32_t m_flQuadraticAttenuation = 0x734;
	constexpr uint32_t m_bVolumetric = 0x738;
	constexpr uint32_t m_flNoiseStrength = 0x73C;
	constexpr uint32_t m_flFlashlightTime = 0x740;
	constexpr uint32_t m_nNumPlanes = 0x744;
	constexpr uint32_t m_flPlaneOffset = 0x748;
	constexpr uint32_t m_flVolumetricIntensity = 0x74C;
	constexpr uint32_t m_flColorTransitionTime = 0x750;
	constexpr uint32_t m_flAmbient = 0x754;
	constexpr uint32_t m_SpotlightTextureName = 0x758;
	constexpr uint32_t m_nSpotlightTextureFrame = 0x958;
	constexpr uint32_t m_nShadowQuality = 0x95C;
	constexpr uint32_t m_flNearZ = 0x960;
	constexpr uint32_t m_flFarZ = 0x964;
	constexpr uint32_t m_flProjectionSize = 0x968;
	constexpr uint32_t m_flRotation = 0x96C;
	constexpr uint32_t m_bFlipHorizontal = 0x970;
}

namespace CEnvDecal
{
	constexpr uint32_t m_hDecalMaterial = 0x710;
	constexpr uint32_t m_flWidth = 0x718;
	constexpr uint32_t m_flHeight = 0x71C;
	constexpr uint32_t m_flDepth = 0x720;
	constexpr uint32_t m_nRenderOrder = 0x724;
	constexpr uint32_t m_bProjectOnWorld = 0x728;
	constexpr uint32_t m_bProjectOnCharacters = 0x729;
	constexpr uint32_t m_bProjectOnWater = 0x72A;
	constexpr uint32_t m_flDepthSortBias = 0x72C;
}

namespace CMessage
{
	constexpr uint32_t m_iszMessage = 0x4C0;
	constexpr uint32_t m_MessageVolume = 0x4C8;
	constexpr uint32_t m_MessageAttenuation = 0x4CC;
	constexpr uint32_t m_Radius = 0x4D0;
	constexpr uint32_t m_sNoise = 0x4D8;
	constexpr uint32_t m_OnShowMessage = 0x4E0;
}

namespace CEnvMicrophone
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_hMeasureTarget = 0x4C4;
	constexpr uint32_t m_nSoundMask = 0x4C8;
	constexpr uint32_t m_flSensitivity = 0x4CC;
	constexpr uint32_t m_flSmoothFactor = 0x4D0;
	constexpr uint32_t m_flMaxRange = 0x4D4;
	constexpr uint32_t m_iszSpeakerName = 0x4D8;
	constexpr uint32_t m_hSpeaker = 0x4E0;
	constexpr uint32_t m_bAvoidFeedback = 0x4E4;
	constexpr uint32_t m_iSpeakerDSPPreset = 0x4E8;
	constexpr uint32_t m_iszListenFilter = 0x4F0;
	constexpr uint32_t m_hListenFilter = 0x4F8;
	constexpr uint32_t m_SoundLevel = 0x500;
	constexpr uint32_t m_OnRoutedSound = 0x528;
	constexpr uint32_t m_OnHeardSound = 0x550;
	constexpr uint32_t m_szLastSound = 0x578;
	constexpr uint32_t m_iLastRoutedFrame = 0x678;
}

namespace CBreakable
{
	constexpr uint32_t m_Material = 0x720;
	constexpr uint32_t m_hBreaker = 0x724;
	constexpr uint32_t m_Explosion = 0x728;
	constexpr uint32_t m_iszSpawnObject = 0x730;
	constexpr uint32_t m_flPressureDelay = 0x738;
	constexpr uint32_t m_iMinHealthDmg = 0x73C;
	constexpr uint32_t m_iszPropData = 0x740;
	constexpr uint32_t m_impactEnergyScale = 0x748;
	constexpr uint32_t m_nOverrideBlockLOS = 0x74C;
	constexpr uint32_t m_OnBreak = 0x750;
	constexpr uint32_t m_OnHealthChanged = 0x778;
	constexpr uint32_t m_flDmgModBullet = 0x7A0;
	constexpr uint32_t m_flDmgModClub = 0x7A4;
	constexpr uint32_t m_flDmgModExplosive = 0x7A8;
	constexpr uint32_t m_flDmgModFire = 0x7AC;
	constexpr uint32_t m_iszPhysicsDamageTableName = 0x7B0;
	constexpr uint32_t m_iszBasePropData = 0x7B8;
	constexpr uint32_t m_iInteractions = 0x7C0;
	constexpr uint32_t m_PerformanceMode = 0x7C4;
	constexpr uint32_t m_hPhysicsAttacker = 0x7C8;
	constexpr uint32_t m_flLastPhysicsInfluenceTime = 0x7CC;
}

namespace CFuncMoveLinear
{
	constexpr uint32_t m_authoredPosition = 0x790;
	constexpr uint32_t m_angMoveEntitySpace = 0x794;
	constexpr uint32_t m_vecMoveDirParentSpace = 0x7A0;
	constexpr uint32_t m_soundStart = 0x7B0;
	constexpr uint32_t m_soundStop = 0x7B8;
	constexpr uint32_t m_currentSound = 0x7C0;
	constexpr uint32_t m_flBlockDamage = 0x7C8;
	constexpr uint32_t m_flStartPosition = 0x7CC;
	constexpr uint32_t m_flMoveDistance = 0x7D0;
	constexpr uint32_t m_OnFullyOpen = 0x7E0;
	constexpr uint32_t m_OnFullyClosed = 0x808;
	constexpr uint32_t m_bCreateMovableNavMesh = 0x830;
	constexpr uint32_t m_bCreateNavObstacle = 0x831;
}

namespace CFuncRotating
{
	constexpr uint32_t m_OnStopped = 0x710;
	constexpr uint32_t m_OnStarted = 0x738;
	constexpr uint32_t m_OnReachedStart = 0x760;
	constexpr uint32_t m_localRotationVector = 0x788;
	constexpr uint32_t m_flFanFriction = 0x794;
	constexpr uint32_t m_flAttenuation = 0x798;
	constexpr uint32_t m_flVolume = 0x79C;
	constexpr uint32_t m_flTargetSpeed = 0x7A0;
	constexpr uint32_t m_flMaxSpeed = 0x7A4;
	constexpr uint32_t m_flBlockDamage = 0x7A8;
	constexpr uint32_t m_flTimeScale = 0x7AC;
	constexpr uint32_t m_NoiseRunning = 0x7B0;
	constexpr uint32_t m_bReversed = 0x7B8;
	constexpr uint32_t m_bAccelDecel = 0x7B9;
	constexpr uint32_t m_prevLocalAngles = 0x7C4;
	constexpr uint32_t m_angStart = 0x7D0;
	constexpr uint32_t m_bStopAtStartPos = 0x7DC;
	constexpr uint32_t m_vecClientOrigin = 0x7E0;
	constexpr uint32_t m_vecClientAngles = 0x7EC;
}

namespace CItemGeneric
{
	constexpr uint32_t m_bHasTriggerRadius = 0x9C8;
	constexpr uint32_t m_bHasPickupRadius = 0x9C9;
	constexpr uint32_t m_flPickupRadiusSqr = 0x9CC;
	constexpr uint32_t m_flTriggerRadiusSqr = 0x9D0;
	constexpr uint32_t m_flLastPickupCheck = 0x9D4;
	constexpr uint32_t m_bPlayerCounterListenerAdded = 0x9D8;
	constexpr uint32_t m_bPlayerInTriggerRadius = 0x9D9;
	constexpr uint32_t m_hSpawnParticleEffect = 0x9E0;
	constexpr uint32_t m_pAmbientSoundEffect = 0x9E8;
	constexpr uint32_t m_bAutoStartAmbientSound = 0x9F0;
	constexpr uint32_t m_pSpawnScriptFunction = 0x9F8;
	constexpr uint32_t m_hPickupParticleEffect = 0xA00;
	constexpr uint32_t m_pPickupSoundEffect = 0xA08;
	constexpr uint32_t m_pPickupScriptFunction = 0xA10;
	constexpr uint32_t m_hTimeoutParticleEffect = 0xA18;
	constexpr uint32_t m_pTimeoutSoundEffect = 0xA20;
	constexpr uint32_t m_pTimeoutScriptFunction = 0xA28;
	constexpr uint32_t m_pPickupFilterName = 0xA30;
	constexpr uint32_t m_hPickupFilter = 0xA38;
	constexpr uint32_t m_OnPickup = 0xA40;
	constexpr uint32_t m_OnTimeout = 0xA68;
	constexpr uint32_t m_OnTriggerStartTouch = 0xA90;
	constexpr uint32_t m_OnTriggerTouch = 0xAB8;
	constexpr uint32_t m_OnTriggerEndTouch = 0xAE0;
	constexpr uint32_t m_pAllowPickupScriptFunction = 0xB08;
	constexpr uint32_t m_flPickupRadius = 0xB10;
	constexpr uint32_t m_flTriggerRadius = 0xB14;
	constexpr uint32_t m_pTriggerSoundEffect = 0xB18;
	constexpr uint32_t m_bGlowWhenInTrigger = 0xB20;
	constexpr uint32_t m_glowColor = 0xB21;
	constexpr uint32_t m_bUseable = 0xB25;
	constexpr uint32_t m_hTriggerHelper = 0xB28;
}

namespace CItemGenericTriggerHelper
{
	constexpr uint32_t m_hParentItem = 0x710;
}

namespace CRuleEntity
{
	constexpr uint32_t m_iszMaster = 0x710;
}

namespace CRulePointEntity
{
	constexpr uint32_t m_Score = 0x718;
}

namespace CGamePlayerEquip
{
}

namespace CMarkupVolume
{
	constexpr uint32_t m_bEnabled = 0x710;
}

namespace CMarkupVolumeTagged
{
	constexpr uint32_t m_bIsGroup = 0x748;
	constexpr uint32_t m_bGroupByPrefab = 0x749;
	constexpr uint32_t m_bGroupByVolume = 0x74A;
	constexpr uint32_t m_bGroupOtherGroups = 0x74B;
	constexpr uint32_t m_bIsInGroup = 0x74C;
}

namespace CMarkupVolumeWithRef
{
	constexpr uint32_t m_bUseRef = 0x750;
	constexpr uint32_t m_vRefPos = 0x754;
	constexpr uint32_t m_flRefDot = 0x760;
}

namespace CFuncBrush
{
	constexpr uint32_t m_iSolidity = 0x710;
	constexpr uint32_t m_iDisabled = 0x714;
	constexpr uint32_t m_bSolidBsp = 0x718;
	constexpr uint32_t m_iszExcludedClass = 0x720;
	constexpr uint32_t m_bInvertExclusion = 0x728;
	constexpr uint32_t m_bScriptedMovement = 0x729;
}

namespace CPathTrack
{
	constexpr uint32_t m_pnext = 0x4C0;
	constexpr uint32_t m_pprevious = 0x4C8;
	constexpr uint32_t m_paltpath = 0x4D0;
	constexpr uint32_t m_flRadius = 0x4D8;
	constexpr uint32_t m_length = 0x4DC;
	constexpr uint32_t m_altName = 0x4E0;
	constexpr uint32_t m_nIterVal = 0x4E8;
	constexpr uint32_t m_eOrientationType = 0x4EC;
	constexpr uint32_t m_OnPass = 0x4F0;
}

namespace CPhysBox
{
	constexpr uint32_t m_damageType = 0x7D0;
	constexpr uint32_t m_massScale = 0x7D4;
	constexpr uint32_t m_damageToEnableMotion = 0x7D8;
	constexpr uint32_t m_flForceToEnableMotion = 0x7DC;
	constexpr uint32_t m_angPreferredCarryAngles = 0x7E0;
	constexpr uint32_t m_bNotSolidToWorld = 0x7EC;
	constexpr uint32_t m_bEnableUseOutput = 0x7ED;
	constexpr uint32_t m_iExploitableByPlayer = 0x7F0;
	constexpr uint32_t m_flTouchOutputPerEntityDelay = 0x7F4;
	constexpr uint32_t m_OnDamaged = 0x7F8;
	constexpr uint32_t m_OnAwakened = 0x820;
	constexpr uint32_t m_OnMotionEnabled = 0x848;
	constexpr uint32_t m_OnPlayerUse = 0x870;
	constexpr uint32_t m_OnStartTouch = 0x898;
	constexpr uint32_t m_hCarryingPlayer = 0x8C0;
}

namespace CPhysExplosion
{
	constexpr uint32_t m_bExplodeOnSpawn = 0x4C0;
	constexpr uint32_t m_flMagnitude = 0x4C4;
	constexpr uint32_t m_flDamage = 0x4C8;
	constexpr uint32_t m_radius = 0x4CC;
	constexpr uint32_t m_targetEntityName = 0x4D0;
	constexpr uint32_t m_flInnerRadius = 0x4D8;
	constexpr uint32_t m_flPushScale = 0x4DC;
	constexpr uint32_t m_bConvertToDebrisWhenPossible = 0x4E0;
	constexpr uint32_t m_OnPushedPlayer = 0x4E8;
}

namespace CPhysImpact
{
	constexpr uint32_t m_damage = 0x4C0;
	constexpr uint32_t m_distance = 0x4C4;
	constexpr uint32_t m_directionEntityName = 0x4C8;
}

namespace CRopeKeyframe
{
	constexpr uint32_t m_RopeFlags = 0x718;
	constexpr uint32_t m_iNextLinkName = 0x720;
	constexpr uint32_t m_Slack = 0x728;
	constexpr uint32_t m_Width = 0x72C;
	constexpr uint32_t m_TextureScale = 0x730;
	constexpr uint32_t m_nSegments = 0x734;
	constexpr uint32_t m_bConstrainBetweenEndpoints = 0x735;
	constexpr uint32_t m_strRopeMaterialModel = 0x738;
	constexpr uint32_t m_iRopeMaterialModelIndex = 0x740;
	constexpr uint32_t m_Subdiv = 0x748;
	constexpr uint32_t m_nChangeCount = 0x749;
	constexpr uint32_t m_RopeLength = 0x74A;
	constexpr uint32_t m_fLockedPoints = 0x74C;
	constexpr uint32_t m_bCreatedFromMapFile = 0x74D;
	constexpr uint32_t m_flScrollSpeed = 0x750;
	constexpr uint32_t m_bStartPointValid = 0x754;
	constexpr uint32_t m_bEndPointValid = 0x755;
	constexpr uint32_t m_hStartPoint = 0x758;
	constexpr uint32_t m_hEndPoint = 0x75C;
	constexpr uint32_t m_iStartAttachment = 0x760;
	constexpr uint32_t m_iEndAttachment = 0x761;
}

namespace CSoundEnt
{
	constexpr uint32_t m_iFreeSound = 0x4C0;
	constexpr uint32_t m_iActiveSound = 0x4C4;
	constexpr uint32_t m_cLastActiveSounds = 0x4C8;
	constexpr uint32_t m_SoundPool = 0x4CC;
}

namespace CSpotlightEnd
{
	constexpr uint32_t m_flLightScale = 0x710;
	constexpr uint32_t m_Radius = 0x714;
	constexpr uint32_t m_vSpotlightDir = 0x718;
	constexpr uint32_t m_vSpotlightOrg = 0x724;
}

namespace CBaseTrigger
{
	constexpr uint32_t m_bDisabled = 0x790;
	constexpr uint32_t m_iFilterName = 0x798;
	constexpr uint32_t m_hFilter = 0x7A0;
	constexpr uint32_t m_OnStartTouch = 0x7A8;
	constexpr uint32_t m_OnStartTouchAll = 0x7D0;
	constexpr uint32_t m_OnEndTouch = 0x7F8;
	constexpr uint32_t m_OnEndTouchAll = 0x820;
	constexpr uint32_t m_OnTouching = 0x848;
	constexpr uint32_t m_OnNotTouching = 0x870;
	constexpr uint32_t m_hTouchingEntities = 0x898;
	constexpr uint32_t m_bClientSidePredicted = 0x8B0;
}

namespace CTriggerMultiple
{
	constexpr uint32_t m_OnTrigger = 0x8B8;
}

namespace CTriggerSndSosOpvar
{
	constexpr uint32_t m_hTouchingPlayers = 0x8B8;
	constexpr uint32_t m_flPosition = 0x8D0;
	constexpr uint32_t m_flCenterSize = 0x8DC;
	constexpr uint32_t m_flMinVal = 0x8E0;
	constexpr uint32_t m_flMaxVal = 0x8E4;
	constexpr uint32_t m_flWait = 0x8E8;
	constexpr uint32_t m_opvarName = 0x8F0;
	constexpr uint32_t m_stackName = 0x8F8;
	constexpr uint32_t m_operatorName = 0x900;
	constexpr uint32_t m_bVolIs2D = 0x908;
	constexpr uint32_t m_opvarNameChar = 0x909;
	constexpr uint32_t m_stackNameChar = 0xA09;
	constexpr uint32_t m_operatorNameChar = 0xB09;
	constexpr uint32_t m_VecNormPos = 0xC0C;
	constexpr uint32_t m_flNormCenterSize = 0xC18;
}

namespace CTriggerHurt
{
	constexpr uint32_t m_flOriginalDamage = 0x8B8;
	constexpr uint32_t m_flDamage = 0x8BC;
	constexpr uint32_t m_flDamageCap = 0x8C0;
	constexpr uint32_t m_flLastDmgTime = 0x8C4;
	constexpr uint32_t m_flForgivenessDelay = 0x8C8;
	constexpr uint32_t m_bitsDamageInflict = 0x8CC;
	constexpr uint32_t m_damageModel = 0x8D0;
	constexpr uint32_t m_bNoDmgForce = 0x8D4;
	constexpr uint32_t m_vDamageForce = 0x8D8;
	constexpr uint32_t m_thinkAlways = 0x8E4;
	constexpr uint32_t m_hurtThinkPeriod = 0x8E8;
	constexpr uint32_t m_OnHurt = 0x8F0;
	constexpr uint32_t m_OnHurtPlayer = 0x918;
	constexpr uint32_t m_hurtEntities = 0x940;
}

namespace CTriggerHurtGhost
{
}

namespace CTriggerCallback
{
}

namespace CTriggerLerpObject
{
	constexpr uint32_t m_iszLerpTarget = 0x8B8;
	constexpr uint32_t m_hLerpTarget = 0x8C0;
	constexpr uint32_t m_iszLerpTargetAttachment = 0x8C8;
	constexpr uint32_t m_hLerpTargetAttachment = 0x8D0;
	constexpr uint32_t m_flLerpDuration = 0x8D4;
	constexpr uint32_t m_bLerpRestoreMoveType = 0x8D8;
	constexpr uint32_t m_bSingleLerpObject = 0x8D9;
	constexpr uint32_t m_vecLerpingObjects = 0x8E0;
	constexpr uint32_t m_iszLerpEffect = 0x8F8;
	constexpr uint32_t m_iszLerpSound = 0x900;
	constexpr uint32_t m_bAttachTouchingObject = 0x908;
	constexpr uint32_t m_hEntityToWaitForDisconnect = 0x90C;
	constexpr uint32_t m_OnLerpStarted = 0x910;
	constexpr uint32_t m_OnLerpFinished = 0x938;
}

namespace CChangeLevel
{
	constexpr uint32_t m_sMapName = 0x8B8;
	constexpr uint32_t m_sLandmarkName = 0x8C0;
	constexpr uint32_t m_OnChangeLevel = 0x8C8;
	constexpr uint32_t m_bTouched = 0x8F0;
	constexpr uint32_t m_bNoTouch = 0x8F1;
	constexpr uint32_t m_bNewChapter = 0x8F2;
	constexpr uint32_t m_bOnChangeLevelFired = 0x8F3;
}

namespace CTriggerTeleport
{
	constexpr uint32_t m_iLandmark = 0x8B8;
	constexpr uint32_t m_bUseLandmarkAngles = 0x8C0;
	constexpr uint32_t m_bMirrorPlayer = 0x8C1;
}

namespace CTriggerFan
{
	constexpr uint32_t m_vFanOrigin = 0x8B8;
	constexpr uint32_t m_vFanEnd = 0x8C4;
	constexpr uint32_t m_vNoise = 0x8D0;
	constexpr uint32_t m_flForce = 0x8DC;
	constexpr uint32_t m_flRopeForceScale = 0x8E0;
	constexpr uint32_t m_flPlayerForce = 0x8E4;
	constexpr uint32_t m_flRampTime = 0x8E8;
	constexpr uint32_t m_bFalloff = 0x8EC;
	constexpr uint32_t m_bPushPlayer = 0x8ED;
	constexpr uint32_t m_bRampDown = 0x8EE;
	constexpr uint32_t m_bAddNoise = 0x8EF;
	constexpr uint32_t m_RampTimer = 0x8F0;
}

namespace CNavWalkable
{
}

namespace CFuncNavBlocker
{
	constexpr uint32_t m_bDisabled = 0x710;
	constexpr uint32_t m_nBlockedTeamNumber = 0x714;
}

namespace CNavLinkAreaEntity
{
	constexpr uint32_t m_flWidth = 0x4C0;
	constexpr uint32_t m_vLocatorOffset = 0x4C4;
	constexpr uint32_t m_qLocatorAnglesOffset = 0x4D0;
	constexpr uint32_t m_strMovementForward = 0x4E0;
	constexpr uint32_t m_strMovementReverse = 0x4E8;
	constexpr uint32_t m_nNavLinkIdForward = 0x4F0;
	constexpr uint32_t m_nNavLinkIdReverse = 0x4F4;
	constexpr uint32_t m_bEnabled = 0x4F8;
	constexpr uint32_t m_strFilterName = 0x500;
	constexpr uint32_t m_hFilter = 0x508;
	constexpr uint32_t m_OnNavLinkStart = 0x510;
	constexpr uint32_t m_OnNavLinkFinish = 0x538;
	constexpr uint32_t m_bIsTerminus = 0x560;
}

namespace CNavSpaceInfo
{
	constexpr uint32_t m_bCreateFlightSpace = 0x4C0;
}

namespace CFuncLadder
{
	constexpr uint32_t m_vecLadderDir = 0x710;
	constexpr uint32_t m_Dismounts = 0x720;
	constexpr uint32_t m_vecLocalTop = 0x738;
	constexpr uint32_t m_vecPlayerMountPositionTop = 0x744;
	constexpr uint32_t m_vecPlayerMountPositionBottom = 0x750;
	constexpr uint32_t m_flAutoRideSpeed = 0x75C;
	constexpr uint32_t m_bDisabled = 0x760;
	constexpr uint32_t m_bFakeLadder = 0x761;
	constexpr uint32_t m_bHasSlack = 0x762;
	constexpr uint32_t m_surfacePropName = 0x768;
	constexpr uint32_t m_OnPlayerGotOnLadder = 0x770;
	constexpr uint32_t m_OnPlayerGotOffLadder = 0x798;
}

namespace CPrecipitationVData
{
	constexpr uint32_t m_szParticlePrecipitationEffect = 0x28;
	constexpr uint32_t m_flInnerDistance = 0x108;
	constexpr uint32_t m_nAttachType = 0x10C;
	constexpr uint32_t m_bBatchSameVolumeType = 0x110;
	constexpr uint32_t m_nRTEnvCP = 0x114;
	constexpr uint32_t m_nRTEnvCPComponent = 0x118;
	constexpr uint32_t m_szModifier = 0x120;
}

namespace CSprite
{
	constexpr uint32_t m_hSpriteMaterial = 0x710;
	constexpr uint32_t m_hAttachedToEntity = 0x718;
	constexpr uint32_t m_nAttachment = 0x71C;
	constexpr uint32_t m_flSpriteFramerate = 0x720;
	constexpr uint32_t m_flFrame = 0x724;
	constexpr uint32_t m_flDieTime = 0x728;
	constexpr uint32_t m_nBrightness = 0x738;
	constexpr uint32_t m_flBrightnessDuration = 0x73C;
	constexpr uint32_t m_flSpriteScale = 0x740;
	constexpr uint32_t m_flScaleDuration = 0x744;
	constexpr uint32_t m_bWorldSpaceScale = 0x748;
	constexpr uint32_t m_flGlowProxySize = 0x74C;
	constexpr uint32_t m_flHDRColorScale = 0x750;
	constexpr uint32_t m_flLastTime = 0x754;
	constexpr uint32_t m_flMaxFrame = 0x758;
	constexpr uint32_t m_flStartScale = 0x75C;
	constexpr uint32_t m_flDestScale = 0x760;
	constexpr uint32_t m_flScaleTimeStart = 0x764;
	constexpr uint32_t m_nStartBrightness = 0x768;
	constexpr uint32_t m_nDestBrightness = 0x76C;
	constexpr uint32_t m_flBrightnessTimeStart = 0x770;
	constexpr uint32_t m_nSpriteWidth = 0x774;
	constexpr uint32_t m_nSpriteHeight = 0x778;
}

namespace CSpriteOriented
{
}

namespace CBaseClientUIEntity
{
	constexpr uint32_t m_bEnabled = 0x710;
	constexpr uint32_t m_DialogXMLName = 0x718;
	constexpr uint32_t m_PanelClassName = 0x720;
	constexpr uint32_t m_PanelID = 0x728;
	constexpr uint32_t m_CustomOutput0 = 0x730;
	constexpr uint32_t m_CustomOutput1 = 0x758;
	constexpr uint32_t m_CustomOutput2 = 0x780;
	constexpr uint32_t m_CustomOutput3 = 0x7A8;
	constexpr uint32_t m_CustomOutput4 = 0x7D0;
	constexpr uint32_t m_CustomOutput5 = 0x7F8;
	constexpr uint32_t m_CustomOutput6 = 0x820;
	constexpr uint32_t m_CustomOutput7 = 0x848;
	constexpr uint32_t m_CustomOutput8 = 0x870;
	constexpr uint32_t m_CustomOutput9 = 0x898;
}

namespace CPointClientUIDialog
{
	constexpr uint32_t m_hActivator = 0x8C0;
	constexpr uint32_t m_bStartEnabled = 0x8C4;
}

namespace CPointClientUIWorldPanel
{
	constexpr uint32_t m_bIgnoreInput = 0x8C0;
	constexpr uint32_t m_bLit = 0x8C1;
	constexpr uint32_t m_bFollowPlayerAcrossTeleport = 0x8C2;
	constexpr uint32_t m_flWidth = 0x8C4;
	constexpr uint32_t m_flHeight = 0x8C8;
	constexpr uint32_t m_flDPI = 0x8CC;
	constexpr uint32_t m_flInteractDistance = 0x8D0;
	constexpr uint32_t m_flDepthOffset = 0x8D4;
	constexpr uint32_t m_unOwnerContext = 0x8D8;
	constexpr uint32_t m_unHorizontalAlign = 0x8DC;
	constexpr uint32_t m_unVerticalAlign = 0x8E0;
	constexpr uint32_t m_unOrientation = 0x8E4;
	constexpr uint32_t m_bAllowInteractionFromAllSceneWorlds = 0x8E8;
	constexpr uint32_t m_vecCSSClasses = 0x8F0;
	constexpr uint32_t m_bOpaque = 0x908;
	constexpr uint32_t m_bNoDepth = 0x909;
	constexpr uint32_t m_bRenderBackface = 0x90A;
	constexpr uint32_t m_bUseOffScreenIndicator = 0x90B;
	constexpr uint32_t m_bExcludeFromSaveGames = 0x90C;
	constexpr uint32_t m_bGrabbable = 0x90D;
	constexpr uint32_t m_bOnlyRenderToTexture = 0x90E;
	constexpr uint32_t m_bDisableMipGen = 0x90F;
	constexpr uint32_t m_nExplicitImageLayout = 0x910;
}

namespace CPointClientUIWorldTextPanel
{
	constexpr uint32_t m_messageText = 0x918;
}

namespace CInfoOffscreenPanoramaTexture
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_nResolutionX = 0x4C4;
	constexpr uint32_t m_nResolutionY = 0x4C8;
	constexpr uint32_t m_szLayoutFileName = 0x4D0;
	constexpr uint32_t m_RenderAttrName = 0x4D8;
	constexpr uint32_t m_TargetEntities = 0x4E0;
	constexpr uint32_t m_nTargetChangeCount = 0x4F8;
	constexpr uint32_t m_vecCSSClasses = 0x500;
	constexpr uint32_t m_szTargetsName = 0x518;
	constexpr uint32_t m_AdditionalTargetEntities = 0x520;
}

namespace CInfoPlayerTerrorist
{
}

namespace CInfoPlayerCounterterrorist
{
}

namespace CInfoDeathmatchSpawn
{
}

namespace CInfoEnemyTerroristSpawn
{
}

namespace CPointGiveAmmo
{
	constexpr uint32_t m_pActivator = 0x4C0;
}

namespace CBombTarget
{
	constexpr uint32_t m_OnBombExplode = 0x8B8;
	constexpr uint32_t m_OnBombPlanted = 0x8E0;
	constexpr uint32_t m_OnBombDefused = 0x908;
	constexpr uint32_t m_bIsBombSiteB = 0x930;
	constexpr uint32_t m_bIsHeistBombTarget = 0x931;
	constexpr uint32_t m_bBombPlantedHere = 0x932;
	constexpr uint32_t m_szMountTarget = 0x938;
	constexpr uint32_t m_hInstructorHint = 0x940;
	constexpr uint32_t m_nBombSiteDesignation = 0x944;
}

namespace CInfoInstructorHintBombTargetA
{
}

namespace CInfoInstructorHintBombTargetB
{
}

namespace CHostageRescueZoneShim
{
}

namespace CHostageRescueZone
{
}

namespace CInfoInstructorHintHostageRescueZone
{
}

namespace CTriggerBuoyancy
{
	constexpr uint32_t m_BuoyancyHelper = 0x8B8;
	constexpr uint32_t m_flFluidDensity = 0x8D8;
}

namespace CFuncWater
{
	constexpr uint32_t m_BuoyancyHelper = 0x710;
}

namespace CCSSprite
{
}

namespace CCSObserverPawn
{
}

namespace CFootstepControl
{
	constexpr uint32_t m_source = 0x8B8;
	constexpr uint32_t m_destination = 0x8C0;
}

namespace CCSWeaponBaseVData
{
	constexpr uint32_t m_WeaponType = 0x248;
	constexpr uint32_t m_WeaponCategory = 0x24C;
	constexpr uint32_t m_szViewModel = 0x250;
	constexpr uint32_t m_szPlayerModel = 0x330;
	constexpr uint32_t m_szWorldDroppedModel = 0x410;
	constexpr uint32_t m_szAimsightLensMaskModel = 0x4F0;
	constexpr uint32_t m_szMagazineModel = 0x5D0;
	constexpr uint32_t m_szHeatEffect = 0x6B0;
	constexpr uint32_t m_szEjectBrassEffect = 0x790;
	constexpr uint32_t m_szMuzzleFlashParticleAlt = 0x870;
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticle = 0x950;
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA30;
	constexpr uint32_t m_szTracerParticle = 0xB10;
	constexpr uint32_t m_GearSlot = 0xBF0;
	constexpr uint32_t m_GearSlotPosition = 0xBF4;
	constexpr uint32_t m_DefaultLoadoutSlot = 0xBF8;
	constexpr uint32_t m_sWrongTeamMsg = 0xC00;
	constexpr uint32_t m_nPrice = 0xC08;
	constexpr uint32_t m_nKillAward = 0xC0C;
	constexpr uint32_t m_nPrimaryReserveAmmoMax = 0xC10;
	constexpr uint32_t m_nSecondaryReserveAmmoMax = 0xC14;
	constexpr uint32_t m_bMeleeWeapon = 0xC18;
	constexpr uint32_t m_bHasBurstMode = 0xC19;
	constexpr uint32_t m_bIsRevolver = 0xC1A;
	constexpr uint32_t m_bCannotShootUnderwater = 0xC1B;
	constexpr uint32_t m_szName = 0xC20;
	constexpr uint32_t m_szAnimExtension = 0xC28;
	constexpr uint32_t m_eSilencerType = 0xC30;
	constexpr uint32_t m_nCrosshairMinDistance = 0xC34;
	constexpr uint32_t m_nCrosshairDeltaDistance = 0xC38;
	constexpr uint32_t m_bIsFullAuto = 0xC3C;
	constexpr uint32_t m_nNumBullets = 0xC40;
	constexpr uint32_t m_flCycleTime = 0xC44;
	constexpr uint32_t m_flMaxSpeed = 0xC4C;
	constexpr uint32_t m_flSpread = 0xC54;
	constexpr uint32_t m_flInaccuracyCrouch = 0xC5C;
	constexpr uint32_t m_flInaccuracyStand = 0xC64;
	constexpr uint32_t m_flInaccuracyJump = 0xC6C;
	constexpr uint32_t m_flInaccuracyLand = 0xC74;
	constexpr uint32_t m_flInaccuracyLadder = 0xC7C;
	constexpr uint32_t m_flInaccuracyFire = 0xC84;
	constexpr uint32_t m_flInaccuracyMove = 0xC8C;
	constexpr uint32_t m_flRecoilAngle = 0xC94;
	constexpr uint32_t m_flRecoilAngleVariance = 0xC9C;
	constexpr uint32_t m_flRecoilMagnitude = 0xCA4;
	constexpr uint32_t m_flRecoilMagnitudeVariance = 0xCAC;
	constexpr uint32_t m_nTracerFrequency = 0xCB4;
	constexpr uint32_t m_flInaccuracyJumpInitial = 0xCBC;
	constexpr uint32_t m_flInaccuracyJumpApex = 0xCC0;
	constexpr uint32_t m_flInaccuracyReload = 0xCC4;
	constexpr uint32_t m_nRecoilSeed = 0xCC8;
	constexpr uint32_t m_nSpreadSeed = 0xCCC;
	constexpr uint32_t m_flTimeToIdleAfterFire = 0xCD0;
	constexpr uint32_t m_flIdleInterval = 0xCD4;
	constexpr uint32_t m_flAttackMovespeedFactor = 0xCD8;
	constexpr uint32_t m_flHeatPerShot = 0xCDC;
	constexpr uint32_t m_flInaccuracyPitchShift = 0xCE0;
	constexpr uint32_t m_flInaccuracyAltSoundThreshold = 0xCE4;
	constexpr uint32_t m_flBotAudibleRange = 0xCE8;
	constexpr uint32_t m_szUseRadioSubtitle = 0xCF0;
	constexpr uint32_t m_bUnzoomsAfterShot = 0xCF8;
	constexpr uint32_t m_bHideViewModelWhenZoomed = 0xCF9;
	constexpr uint32_t m_nZoomLevels = 0xCFC;
	constexpr uint32_t m_nZoomFOV1 = 0xD00;
	constexpr uint32_t m_nZoomFOV2 = 0xD04;
	constexpr uint32_t m_flZoomTime0 = 0xD08;
	constexpr uint32_t m_flZoomTime1 = 0xD0C;
	constexpr uint32_t m_flZoomTime2 = 0xD10;
	constexpr uint32_t m_flIronSightPullUpSpeed = 0xD14;
	constexpr uint32_t m_flIronSightPutDownSpeed = 0xD18;
	constexpr uint32_t m_flIronSightFOV = 0xD1C;
	constexpr uint32_t m_flIronSightPivotForward = 0xD20;
	constexpr uint32_t m_flIronSightLooseness = 0xD24;
	constexpr uint32_t m_angPivotAngle = 0xD28;
	constexpr uint32_t m_vecIronSightEyePos = 0xD34;
	constexpr uint32_t m_nDamage = 0xD40;
	constexpr uint32_t m_flHeadshotMultiplier = 0xD44;
	constexpr uint32_t m_flArmorRatio = 0xD48;
	constexpr uint32_t m_flPenetration = 0xD4C;
	constexpr uint32_t m_flRange = 0xD50;
	constexpr uint32_t m_flRangeModifier = 0xD54;
	constexpr uint32_t m_flFlinchVelocityModifierLarge = 0xD58;
	constexpr uint32_t m_flFlinchVelocityModifierSmall = 0xD5C;
	constexpr uint32_t m_flRecoveryTimeCrouch = 0xD60;
	constexpr uint32_t m_flRecoveryTimeStand = 0xD64;
	constexpr uint32_t m_flRecoveryTimeCrouchFinal = 0xD68;
	constexpr uint32_t m_flRecoveryTimeStandFinal = 0xD6C;
	constexpr uint32_t m_nRecoveryTransitionStartBullet = 0xD70;
	constexpr uint32_t m_nRecoveryTransitionEndBullet = 0xD74;
	constexpr uint32_t m_flThrowVelocity = 0xD78;
	constexpr uint32_t m_vSmokeColor = 0xD7C;
	constexpr uint32_t m_szAnimClass = 0xD88;
}

namespace CTriggerTripWire
{
}

namespace CPointGamestatsCounter
{
	constexpr uint32_t m_strStatisticName = 0x4C0;
	constexpr uint32_t m_bDisabled = 0x4C8;
}

namespace CEnvHudHint
{
	constexpr uint32_t m_iszMessage = 0x4C0;
}

namespace CBuyZone
{
	constexpr uint32_t m_LegacyTeamNum = 0x8B8;
}

namespace CFuncConveyor
{
	constexpr uint32_t m_szConveyorModels = 0x710;
	constexpr uint32_t m_flTransitionDurationSeconds = 0x718;
	constexpr uint32_t m_angMoveEntitySpace = 0x71C;
	constexpr uint32_t m_vecMoveDirEntitySpace = 0x728;
	constexpr uint32_t m_flTargetSpeed = 0x734;
	constexpr uint32_t m_nTransitionStartTick = 0x738;
	constexpr uint32_t m_nTransitionDurationTicks = 0x73C;
	constexpr uint32_t m_flTransitionStartSpeed = 0x740;
	constexpr uint32_t m_hConveyorModels = 0x748;
}

namespace CTriggerBombReset
{
}

namespace CTriggerHostageReset
{
}

namespace CCSPlace
{
	constexpr uint32_t m_name = 0x718;
}

namespace CGameMoney
{
	constexpr uint32_t m_OnMoneySpent = 0x720;
	constexpr uint32_t m_OnMoneySpentFail = 0x748;
	constexpr uint32_t m_nMoney = 0x770;
	constexpr uint32_t m_strAwardText = 0x778;
}

namespace CPlayerSprayDecal
{
	constexpr uint32_t m_nUniqueID = 0x710;
	constexpr uint32_t m_unAccountID = 0x714;
	constexpr uint32_t m_unTraceID = 0x718;
	constexpr uint32_t m_rtGcTime = 0x71C;
	constexpr uint32_t m_vecEndPos = 0x720;
	constexpr uint32_t m_vecStart = 0x72C;
	constexpr uint32_t m_vecLeft = 0x738;
	constexpr uint32_t m_vecNormal = 0x744;
	constexpr uint32_t m_nPlayer = 0x750;
	constexpr uint32_t m_nEntity = 0x754;
	constexpr uint32_t m_nHitbox = 0x758;
	constexpr uint32_t m_flCreationTime = 0x75C;
	constexpr uint32_t m_nTintID = 0x760;
	constexpr uint32_t m_nVersion = 0x764;
	constexpr uint32_t m_ubSignature = 0x765;
}

namespace CInferno
{
	constexpr uint32_t m_firePositions = 0x720;
	constexpr uint32_t m_fireParentPositions = 0xA20;
	constexpr uint32_t m_bFireIsBurning = 0xD20;
	constexpr uint32_t m_BurnNormal = 0xD60;
	constexpr uint32_t m_fireCount = 0x1060;
	constexpr uint32_t m_nInfernoType = 0x1064;
	constexpr uint32_t m_nFireEffectTickBegin = 0x1068;
	constexpr uint32_t m_nFireLifetime = 0x106C;
	constexpr uint32_t m_bInPostEffectTime = 0x1070;
	constexpr uint32_t m_nFiresExtinguishCount = 0x1074;
	constexpr uint32_t m_bWasCreatedInSmoke = 0x1078;
	constexpr uint32_t m_extent = 0x1280;
	constexpr uint32_t m_damageTimer = 0x1298;
	constexpr uint32_t m_damageRampTimer = 0x12B0;
	constexpr uint32_t m_splashVelocity = 0x12C8;
	constexpr uint32_t m_InitialSplashVelocity = 0x12D4;
	constexpr uint32_t m_startPos = 0x12E0;
	constexpr uint32_t m_vecOriginalSpawnLocation = 0x12EC;
	constexpr uint32_t m_activeTimer = 0x12F8;
	constexpr uint32_t m_fireSpawnOffset = 0x1308;
	constexpr uint32_t m_nMaxFlames = 0x130C;
	constexpr uint32_t m_nSpreadCount = 0x1310;
	constexpr uint32_t m_BookkeepingTimer = 0x1318;
	constexpr uint32_t m_NextSpreadTimer = 0x1330;
	constexpr uint32_t m_nSourceItemDefIndex = 0x1348;
}

namespace CFireCrackerBlast
{
}

namespace CBarnLight
{
	constexpr uint32_t m_bEnabled = 0x710;
	constexpr uint32_t m_nColorMode = 0x714;
	constexpr uint32_t m_Color = 0x718;
	constexpr uint32_t m_flColorTemperature = 0x71C;
	constexpr uint32_t m_flBrightness = 0x720;
	constexpr uint32_t m_flBrightnessScale = 0x724;
	constexpr uint32_t m_nDirectLight = 0x728;
	constexpr uint32_t m_nBakedShadowIndex = 0x72C;
	constexpr uint32_t m_nLuminaireShape = 0x730;
	constexpr uint32_t m_flLuminaireSize = 0x734;
	constexpr uint32_t m_flLuminaireAnisotropy = 0x738;
	constexpr uint32_t m_LightStyleString = 0x740;
	constexpr uint32_t m_flLightStyleStartTime = 0x748;
	constexpr uint32_t m_QueuedLightStyleStrings = 0x750;
	constexpr uint32_t m_LightStyleEvents = 0x768;
	constexpr uint32_t m_LightStyleTargets = 0x780;
	constexpr uint32_t m_StyleEvent = 0x798;
	constexpr uint32_t m_hLightCookie = 0x858;
	constexpr uint32_t m_flShape = 0x860;
	constexpr uint32_t m_flSoftX = 0x864;
	constexpr uint32_t m_flSoftY = 0x868;
	constexpr uint32_t m_flSkirt = 0x86C;
	constexpr uint32_t m_flSkirtNear = 0x870;
	constexpr uint32_t m_vSizeParams = 0x874;
	constexpr uint32_t m_flRange = 0x880;
	constexpr uint32_t m_vShear = 0x884;
	constexpr uint32_t m_nBakeSpecularToCubemaps = 0x890;
	constexpr uint32_t m_vBakeSpecularToCubemapsSize = 0x894;
	constexpr uint32_t m_nCastShadows = 0x8A0;
	constexpr uint32_t m_nShadowMapSize = 0x8A4;
	constexpr uint32_t m_nShadowPriority = 0x8A8;
	constexpr uint32_t m_bContactShadow = 0x8AC;
	constexpr uint32_t m_nBounceLight = 0x8B0;
	constexpr uint32_t m_flBounceScale = 0x8B4;
	constexpr uint32_t m_flMinRoughness = 0x8B8;
	constexpr uint32_t m_vAlternateColor = 0x8BC;
	constexpr uint32_t m_fAlternateColorBrightness = 0x8C8;
	constexpr uint32_t m_nFog = 0x8CC;
	constexpr uint32_t m_flFogStrength = 0x8D0;
	constexpr uint32_t m_nFogShadows = 0x8D4;
	constexpr uint32_t m_flFogScale = 0x8D8;
	constexpr uint32_t m_flFadeSizeStart = 0x8DC;
	constexpr uint32_t m_flFadeSizeEnd = 0x8E0;
	constexpr uint32_t m_flShadowFadeSizeStart = 0x8E4;
	constexpr uint32_t m_flShadowFadeSizeEnd = 0x8E8;
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x8EC;
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x8F0;
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x8FC;
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0x908;
	constexpr uint32_t m_vPrecomputedOBBAngles = 0x914;
	constexpr uint32_t m_vPrecomputedOBBExtent = 0x920;
	constexpr uint32_t m_bPvsModifyEntity = 0x92C;
}

namespace CRectLight
{
	constexpr uint32_t m_bShowLight = 0x938;
}

namespace COmniLight
{
	constexpr uint32_t m_flInnerAngle = 0x938;
	constexpr uint32_t m_flOuterAngle = 0x93C;
	constexpr uint32_t m_bShowLight = 0x940;
}

namespace CCSTeam
{
	constexpr uint32_t m_nLastRecievedShorthandedRoundBonus = 0x578;
	constexpr uint32_t m_nShorthandedRoundBonusStartRound = 0x57C;
	constexpr uint32_t m_bSurrendered = 0x580;
	constexpr uint32_t m_szTeamMatchStat = 0x581;
	constexpr uint32_t m_numMapVictories = 0x784;
	constexpr uint32_t m_scoreFirstHalf = 0x788;
	constexpr uint32_t m_scoreSecondHalf = 0x78C;
	constexpr uint32_t m_scoreOvertime = 0x790;
	constexpr uint32_t m_szClanTeamname = 0x794;
	constexpr uint32_t m_iClanID = 0x818;
	constexpr uint32_t m_szTeamFlagImage = 0x81C;
	constexpr uint32_t m_szTeamLogoImage = 0x824;
	constexpr uint32_t m_flNextResourceTime = 0x82C;
	constexpr uint32_t m_iLastUpdateSentAt = 0x830;
}

namespace CMapInfo
{
	constexpr uint32_t m_iBuyingStatus = 0x4C0;
	constexpr uint32_t m_flBombRadius = 0x4C4;
	constexpr uint32_t m_iPetPopulation = 0x4C8;
	constexpr uint32_t m_bUseNormalSpawnsForDM = 0x4CC;
	constexpr uint32_t m_bDisableAutoGeneratedDMSpawns = 0x4CD;
	constexpr uint32_t m_flBotMaxVisionDistance = 0x4D0;
	constexpr uint32_t m_iHostageCount = 0x4D4;
	constexpr uint32_t m_bFadePlayerVisibilityFarZ = 0x4D8;
}

namespace CCSBot
{
	constexpr uint32_t m_lastCoopSpawnPoint = 0xF0;
	constexpr uint32_t m_eyePosition = 0x100;
	constexpr uint32_t m_name = 0x10C;
	constexpr uint32_t m_combatRange = 0x14C;
	constexpr uint32_t m_isRogue = 0x150;
	constexpr uint32_t m_rogueTimer = 0x158;
	constexpr uint32_t m_diedLastRound = 0x174;
	constexpr uint32_t m_safeTime = 0x178;
	constexpr uint32_t m_wasSafe = 0x17C;
	constexpr uint32_t m_blindFire = 0x184;
	constexpr uint32_t m_surpriseTimer = 0x188;
	constexpr uint32_t m_bAllowActive = 0x1A0;
	constexpr uint32_t m_isFollowing = 0x1A1;
	constexpr uint32_t m_leader = 0x1A4;
	constexpr uint32_t m_followTimestamp = 0x1A8;
	constexpr uint32_t m_allowAutoFollowTime = 0x1AC;
	constexpr uint32_t m_hurryTimer = 0x1B0;
	constexpr uint32_t m_alertTimer = 0x1C8;
	constexpr uint32_t m_sneakTimer = 0x1E0;
	constexpr uint32_t m_panicTimer = 0x1F8;
	constexpr uint32_t m_stateTimestamp = 0x4C8;
	constexpr uint32_t m_isAttacking = 0x4CC;
	constexpr uint32_t m_isOpeningDoor = 0x4CD;
	constexpr uint32_t m_taskEntity = 0x4D4;
	constexpr uint32_t m_goalPosition = 0x4E4;
	constexpr uint32_t m_goalEntity = 0x4F0;
	constexpr uint32_t m_avoid = 0x4F4;
	constexpr uint32_t m_avoidTimestamp = 0x4F8;
	constexpr uint32_t m_isStopping = 0x4FC;
	constexpr uint32_t m_hasVisitedEnemySpawn = 0x4FD;
	constexpr uint32_t m_stillTimer = 0x500;
	constexpr uint32_t m_bEyeAnglesUnderPathFinderControl = 0x510;
	constexpr uint32_t m_pathIndex = 0x6608;
	constexpr uint32_t m_areaEnteredTimestamp = 0x660C;
	constexpr uint32_t m_repathTimer = 0x6610;
	constexpr uint32_t m_avoidFriendTimer = 0x6628;
	constexpr uint32_t m_isFriendInTheWay = 0x6640;
	constexpr uint32_t m_politeTimer = 0x6648;
	constexpr uint32_t m_isWaitingBehindFriend = 0x6660;
	constexpr uint32_t m_pathLadderEnd = 0x668C;
	constexpr uint32_t m_mustRunTimer = 0x66D8;
	constexpr uint32_t m_waitTimer = 0x66F0;
	constexpr uint32_t m_updateTravelDistanceTimer = 0x6708;
	constexpr uint32_t m_playerTravelDistance = 0x6720;
	constexpr uint32_t m_travelDistancePhase = 0x6820;
	constexpr uint32_t m_hostageEscortCount = 0x69B8;
	constexpr uint32_t m_hostageEscortCountTimestamp = 0x69BC;
	constexpr uint32_t m_desiredTeam = 0x69C0;
	constexpr uint32_t m_hasJoined = 0x69C4;
	constexpr uint32_t m_isWaitingForHostage = 0x69C5;
	constexpr uint32_t m_inhibitWaitingForHostageTimer = 0x69C8;
	constexpr uint32_t m_waitForHostageTimer = 0x69E0;
	constexpr uint32_t m_noisePosition = 0x69F8;
	constexpr uint32_t m_noiseTravelDistance = 0x6A04;
	constexpr uint32_t m_noiseTimestamp = 0x6A08;
	constexpr uint32_t m_noiseSource = 0x6A10;
	constexpr uint32_t m_noiseBendTimer = 0x6A28;
	constexpr uint32_t m_bentNoisePosition = 0x6A40;
	constexpr uint32_t m_bendNoisePositionValid = 0x6A4C;
	constexpr uint32_t m_lookAroundStateTimestamp = 0x6A50;
	constexpr uint32_t m_lookAheadAngle = 0x6A54;
	constexpr uint32_t m_forwardAngle = 0x6A58;
	constexpr uint32_t m_inhibitLookAroundTimestamp = 0x6A5C;
	constexpr uint32_t m_lookAtSpot = 0x6A64;
	constexpr uint32_t m_lookAtSpotDuration = 0x6A74;
	constexpr uint32_t m_lookAtSpotTimestamp = 0x6A78;
	constexpr uint32_t m_lookAtSpotAngleTolerance = 0x6A7C;
	constexpr uint32_t m_lookAtSpotClearIfClose = 0x6A80;
	constexpr uint32_t m_lookAtSpotAttack = 0x6A81;
	constexpr uint32_t m_lookAtDesc = 0x6A88;
	constexpr uint32_t m_peripheralTimestamp = 0x6A90;
	constexpr uint32_t m_approachPointCount = 0x6C18;
	constexpr uint32_t m_approachPointViewPosition = 0x6C1C;
	constexpr uint32_t m_viewSteadyTimer = 0x6C28;
	constexpr uint32_t m_tossGrenadeTimer = 0x6C40;
	constexpr uint32_t m_isAvoidingGrenade = 0x6C60;
	constexpr uint32_t m_spotCheckTimestamp = 0x6C80;
	constexpr uint32_t m_checkedHidingSpotCount = 0x7088;
	constexpr uint32_t m_lookPitch = 0x708C;
	constexpr uint32_t m_lookPitchVel = 0x7090;
	constexpr uint32_t m_lookYaw = 0x7094;
	constexpr uint32_t m_lookYawVel = 0x7098;
	constexpr uint32_t m_targetSpot = 0x709C;
	constexpr uint32_t m_targetSpotVelocity = 0x70A8;
	constexpr uint32_t m_targetSpotPredicted = 0x70B4;
	constexpr uint32_t m_aimError = 0x70C0;
	constexpr uint32_t m_aimGoal = 0x70CC;
	constexpr uint32_t m_targetSpotTime = 0x70D8;
	constexpr uint32_t m_aimFocus = 0x70DC;
	constexpr uint32_t m_aimFocusInterval = 0x70E0;
	constexpr uint32_t m_aimFocusNextUpdate = 0x70E4;
	constexpr uint32_t m_ignoreEnemiesTimer = 0x70F0;
	constexpr uint32_t m_enemy = 0x7108;
	constexpr uint32_t m_isEnemyVisible = 0x710C;
	constexpr uint32_t m_visibleEnemyParts = 0x710D;
	constexpr uint32_t m_lastEnemyPosition = 0x7110;
	constexpr uint32_t m_lastSawEnemyTimestamp = 0x711C;
	constexpr uint32_t m_firstSawEnemyTimestamp = 0x7120;
	constexpr uint32_t m_currentEnemyAcquireTimestamp = 0x7124;
	constexpr uint32_t m_enemyDeathTimestamp = 0x7128;
	constexpr uint32_t m_friendDeathTimestamp = 0x712C;
	constexpr uint32_t m_isLastEnemyDead = 0x7130;
	constexpr uint32_t m_nearbyEnemyCount = 0x7134;
	constexpr uint32_t m_bomber = 0x7340;
	constexpr uint32_t m_nearbyFriendCount = 0x7344;
	constexpr uint32_t m_closestVisibleFriend = 0x7348;
	constexpr uint32_t m_closestVisibleHumanFriend = 0x734C;
	constexpr uint32_t m_attentionInterval = 0x7350;
	constexpr uint32_t m_attacker = 0x7360;
	constexpr uint32_t m_attackedTimestamp = 0x7364;
	constexpr uint32_t m_burnedByFlamesTimer = 0x7368;
	constexpr uint32_t m_lastVictimID = 0x7378;
	constexpr uint32_t m_isAimingAtEnemy = 0x737C;
	constexpr uint32_t m_isRapidFiring = 0x737D;
	constexpr uint32_t m_equipTimer = 0x7380;
	constexpr uint32_t m_zoomTimer = 0x7390;
	constexpr uint32_t m_fireWeaponTimestamp = 0x73A8;
	constexpr uint32_t m_lookForWeaponsOnGroundTimer = 0x73B0;
	constexpr uint32_t m_bIsSleeping = 0x73C8;
	constexpr uint32_t m_isEnemySniperVisible = 0x73C9;
	constexpr uint32_t m_sawEnemySniperTimer = 0x73D0;
	constexpr uint32_t m_enemyQueueIndex = 0x7488;
	constexpr uint32_t m_enemyQueueCount = 0x7489;
	constexpr uint32_t m_enemyQueueAttendIndex = 0x748A;
	constexpr uint32_t m_isStuck = 0x748B;
	constexpr uint32_t m_stuckTimestamp = 0x748C;
	constexpr uint32_t m_stuckSpot = 0x7490;
	constexpr uint32_t m_wiggleTimer = 0x74A0;
	constexpr uint32_t m_stuckJumpTimer = 0x74B8;
	constexpr uint32_t m_nextCleanupCheckTimestamp = 0x74D0;
	constexpr uint32_t m_avgVel = 0x74D4;
	constexpr uint32_t m_avgVelIndex = 0x74FC;
	constexpr uint32_t m_avgVelCount = 0x7500;
	constexpr uint32_t m_lastOrigin = 0x7504;
	constexpr uint32_t m_lastRadioRecievedTimestamp = 0x7514;
	constexpr uint32_t m_lastRadioSentTimestamp = 0x7518;
	constexpr uint32_t m_radioSubject = 0x751C;
	constexpr uint32_t m_radioPosition = 0x7520;
	constexpr uint32_t m_voiceEndTimestamp = 0x752C;
	constexpr uint32_t m_lastValidReactionQueueFrame = 0x7538;
}

namespace CFogVolume
{
	constexpr uint32_t m_fogName = 0x710;
	constexpr uint32_t m_postProcessName = 0x718;
	constexpr uint32_t m_colorCorrectionName = 0x720;
	constexpr uint32_t m_bDisabled = 0x730;
	constexpr uint32_t m_bInFogVolumesList = 0x731;
}

namespace CInfoDynamicShadowHint
{
	constexpr uint32_t m_bDisabled = 0x4C0;
	constexpr uint32_t m_flRange = 0x4C4;
	constexpr uint32_t m_nImportance = 0x4C8;
	constexpr uint32_t m_nLightChoice = 0x4CC;
	constexpr uint32_t m_hLight = 0x4D0;
}

namespace CInfoDynamicShadowHintBox
{
	constexpr uint32_t m_vBoxMins = 0x4D8;
	constexpr uint32_t m_vBoxMaxs = 0x4E4;
}

namespace CEnvSky
{
	constexpr uint32_t m_hSkyMaterial = 0x710;
	constexpr uint32_t m_hSkyMaterialLightingOnly = 0x718;
	constexpr uint32_t m_bStartDisabled = 0x720;
	constexpr uint32_t m_vTintColor = 0x721;
	constexpr uint32_t m_vTintColorLightingOnly = 0x725;
	constexpr uint32_t m_flBrightnessScale = 0x72C;
	constexpr uint32_t m_nFogType = 0x730;
	constexpr uint32_t m_flFogMinStart = 0x734;
	constexpr uint32_t m_flFogMinEnd = 0x738;
	constexpr uint32_t m_flFogMaxStart = 0x73C;
	constexpr uint32_t m_flFogMaxEnd = 0x740;
	constexpr uint32_t m_bEnabled = 0x744;
}

namespace CTonemapController2Alias_env_tonemap_controller2
{
}

namespace CTonemapTrigger
{
	constexpr uint32_t m_tonemapControllerName = 0x8B8;
	constexpr uint32_t m_hTonemapController = 0x8C0;
}

namespace CFogTrigger
{
	constexpr uint32_t m_fog = 0x8B8;
}

namespace CLightSpotEntity
{
}

namespace CLightOrthoEntity
{
}

namespace CLightDirectionalEntity
{
}

namespace CLightEnvironmentEntity
{
}

namespace CEnvParticleGlow
{
	constexpr uint32_t m_flAlphaScale = 0xC88;
	constexpr uint32_t m_flRadiusScale = 0xC8C;
	constexpr uint32_t m_flSelfIllumScale = 0xC90;
	constexpr uint32_t m_ColorTint = 0xC94;
	constexpr uint32_t m_hTextureOverride = 0xC98;
}

namespace CTextureBasedAnimatable
{
	constexpr uint32_t m_bLoop = 0x710;
	constexpr uint32_t m_flFPS = 0x714;
	constexpr uint32_t m_hPositionKeys = 0x718;
	constexpr uint32_t m_hRotationKeys = 0x720;
	constexpr uint32_t m_vAnimationBoundsMin = 0x728;
	constexpr uint32_t m_vAnimationBoundsMax = 0x734;
	constexpr uint32_t m_flStartTime = 0x740;
	constexpr uint32_t m_flStartFrame = 0x744;
}

namespace CWorld
{
}

namespace CBaseProp
{
	constexpr uint32_t m_bModelOverrodeBlockLOS = 0x8E8;
	constexpr uint32_t m_iShapeType = 0x8EC;
	constexpr uint32_t m_bConformToCollisionBounds = 0x8F0;
	constexpr uint32_t m_mPreferredCatchTransform = 0x8F4;
}

namespace CBreakableProp
{
	constexpr uint32_t m_OnBreak = 0x938;
	constexpr uint32_t m_OnHealthChanged = 0x960;
	constexpr uint32_t m_OnTakeDamage = 0x988;
	constexpr uint32_t m_impactEnergyScale = 0x9B0;
	constexpr uint32_t m_iMinHealthDmg = 0x9B4;
	constexpr uint32_t m_preferredCarryAngles = 0x9B8;
	constexpr uint32_t m_flPressureDelay = 0x9C4;
	constexpr uint32_t m_hBreaker = 0x9C8;
	constexpr uint32_t m_PerformanceMode = 0x9CC;
	constexpr uint32_t m_flDmgModBullet = 0x9D0;
	constexpr uint32_t m_flDmgModClub = 0x9D4;
	constexpr uint32_t m_flDmgModExplosive = 0x9D8;
	constexpr uint32_t m_flDmgModFire = 0x9DC;
	constexpr uint32_t m_iszPhysicsDamageTableName = 0x9E0;
	constexpr uint32_t m_iszBasePropData = 0x9E8;
	constexpr uint32_t m_iInteractions = 0x9F0;
	constexpr uint32_t m_flPreventDamageBeforeTime = 0x9F4;
	constexpr uint32_t m_bHasBreakPiecesOrCommands = 0x9F8;
	constexpr uint32_t m_explodeDamage = 0x9FC;
	constexpr uint32_t m_explodeRadius = 0xA00;
	constexpr uint32_t m_explosionDelay = 0xA08;
	constexpr uint32_t m_explosionBuildupSound = 0xA10;
	constexpr uint32_t m_explosionCustomEffect = 0xA18;
	constexpr uint32_t m_explosionCustomSound = 0xA20;
	constexpr uint32_t m_explosionModifier = 0xA28;
	constexpr uint32_t m_hPhysicsAttacker = 0xA30;
	constexpr uint32_t m_flLastPhysicsInfluenceTime = 0xA34;
	constexpr uint32_t m_bOriginalBlockLOS = 0xA38;
	constexpr uint32_t m_flDefaultFadeScale = 0xA3C;
	constexpr uint32_t m_hLastAttacker = 0xA40;
	constexpr uint32_t m_hFlareEnt = 0xA44;
	constexpr uint32_t m_bUsePuntSound = 0xA48;
	constexpr uint32_t m_iszPuntSound = 0xA50;
	constexpr uint32_t m_noGhostCollision = 0xA58;
}

namespace CDynamicProp
{
	constexpr uint32_t m_bCreateNavObstacle = 0xA68;
	constexpr uint32_t m_bUseHitboxesForRenderBox = 0xA69;
	constexpr uint32_t m_bUseAnimGraph = 0xA6A;
	constexpr uint32_t m_pOutputAnimBegun = 0xA70;
	constexpr uint32_t m_pOutputAnimOver = 0xA98;
	constexpr uint32_t m_pOutputAnimLoopCycleOver = 0xAC0;
	constexpr uint32_t m_OnAnimReachedStart = 0xAE8;
	constexpr uint32_t m_OnAnimReachedEnd = 0xB10;
	constexpr uint32_t m_iszIdleAnim = 0xB38;
	constexpr uint32_t m_nIdleAnimLoopMode = 0xB40;
	constexpr uint32_t m_bRandomizeCycle = 0xB44;
	constexpr uint32_t m_bStartDisabled = 0xB45;
	constexpr uint32_t m_bFiredStartEndOutput = 0xB46;
	constexpr uint32_t m_bForceNpcExclude = 0xB47;
	constexpr uint32_t m_bCreateNonSolid = 0xB48;
	constexpr uint32_t m_bIsOverrideProp = 0xB49;
	constexpr uint32_t m_iInitialGlowState = 0xB4C;
	constexpr uint32_t m_nGlowRange = 0xB50;
	constexpr uint32_t m_nGlowRangeMin = 0xB54;
	constexpr uint32_t m_glowColor = 0xB58;
	constexpr uint32_t m_nGlowTeam = 0xB5C;
}

namespace CDynamicPropAlias_dynamic_prop
{
}

namespace CDynamicPropAlias_prop_dynamic_override
{
}

namespace CDynamicPropAlias_cable_dynamic
{
}

namespace CColorCorrectionVolume
{
	constexpr uint32_t m_bEnabled = 0x8B8;
	constexpr uint32_t m_MaxWeight = 0x8BC;
	constexpr uint32_t m_FadeDuration = 0x8C0;
	constexpr uint32_t m_bStartDisabled = 0x8C4;
	constexpr uint32_t m_Weight = 0x8C8;
	constexpr uint32_t m_lookupFilename = 0x8CC;
	constexpr uint32_t m_LastEnterWeight = 0xACC;
	constexpr uint32_t m_LastEnterTime = 0xAD0;
	constexpr uint32_t m_LastExitWeight = 0xAD4;
	constexpr uint32_t m_LastExitTime = 0xAD8;
}

namespace CCommentaryViewPosition
{
}

namespace CRotDoor
{
	constexpr uint32_t m_bSolidBsp = 0x998;
}

namespace CItemSoda
{
}

namespace CPrecipitation
{
}

namespace CEnvBeam
{
	constexpr uint32_t m_active = 0x7B0;
	constexpr uint32_t m_spriteTexture = 0x7B8;
	constexpr uint32_t m_iszStartEntity = 0x7C0;
	constexpr uint32_t m_iszEndEntity = 0x7C8;
	constexpr uint32_t m_life = 0x7D0;
	constexpr uint32_t m_boltWidth = 0x7D4;
	constexpr uint32_t m_noiseAmplitude = 0x7D8;
	constexpr uint32_t m_speed = 0x7DC;
	constexpr uint32_t m_restrike = 0x7E0;
	constexpr uint32_t m_iszSpriteName = 0x7E8;
	constexpr uint32_t m_frameStart = 0x7F0;
	constexpr uint32_t m_vEndPointWorld = 0x7F4;
	constexpr uint32_t m_vEndPointRelative = 0x800;
	constexpr uint32_t m_radius = 0x80C;
	constexpr uint32_t m_TouchType = 0x810;
	constexpr uint32_t m_iFilterName = 0x818;
	constexpr uint32_t m_hFilter = 0x820;
	constexpr uint32_t m_iszDecal = 0x828;
	constexpr uint32_t m_OnTouchedByEntity = 0x830;
}

namespace CPushable
{
}

namespace CFuncLadderAlias_func_useableladder
{
}

namespace CFuncMonitor
{
	constexpr uint32_t m_targetCamera = 0x730;
	constexpr uint32_t m_nResolutionEnum = 0x738;
	constexpr uint32_t m_bRenderShadows = 0x73C;
	constexpr uint32_t m_bUseUniqueColorTarget = 0x73D;
	constexpr uint32_t m_brushModelName = 0x740;
	constexpr uint32_t m_hTargetCamera = 0x748;
	constexpr uint32_t m_bEnabled = 0x74C;
	constexpr uint32_t m_bDraw3DSkybox = 0x74D;
	constexpr uint32_t m_bStartEnabled = 0x74E;
}

namespace CFuncMoveLinearAlias_momentary_door
{
}

namespace CGunTarget
{
	constexpr uint32_t m_on = 0x790;
	constexpr uint32_t m_hTargetEnt = 0x794;
	constexpr uint32_t m_OnDeath = 0x798;
}

namespace CTriggerGameEvent
{
	constexpr uint32_t m_strStartTouchEventName = 0x8B8;
	constexpr uint32_t m_strEndTouchEventName = 0x8C0;
	constexpr uint32_t m_strTriggerID = 0x8C8;
}

namespace CRuleBrushEntity
{
}

namespace CGameEnd
{
}

namespace CGameText
{
	constexpr uint32_t m_iszMessage = 0x720;
	constexpr uint32_t m_textParms = 0x728;
}

namespace CGamePlayerZone
{
	constexpr uint32_t m_OnPlayerInZone = 0x718;
	constexpr uint32_t m_OnPlayerOutZone = 0x740;
	constexpr uint32_t m_PlayersInCount = 0x768;
	constexpr uint32_t m_PlayersOutCount = 0x790;
}

namespace CSimpleMarkupVolumeTagged
{
}

namespace CMarkupVolumeTagged_Nav
{
}

namespace CMarkupVolumeTagged_NavGame
{
	constexpr uint32_t m_bFloodFillAttribute = 0x768;
}

namespace CFuncElectrifiedVolume
{
	constexpr uint32_t m_EffectName = 0x730;
	constexpr uint32_t m_EffectInterpenetrateName = 0x738;
	constexpr uint32_t m_EffectZapName = 0x740;
	constexpr uint32_t m_iszEffectSource = 0x748;
}

namespace CPathCornerCrash
{
}

namespace CConstraintAnchor
{
	constexpr uint32_t m_massScale = 0x8E8;
}

namespace COrnamentProp
{
	constexpr uint32_t m_initialOwner = 0xB60;
}

namespace CRopeKeyframeAlias_move_rope
{
}

namespace CSceneEntityAlias_logic_choreographed_scene
{
}

namespace CInstancedSceneEntity
{
	constexpr uint32_t m_hOwner = 0xA18;
	constexpr uint32_t m_bHadOwner = 0xA1C;
	constexpr uint32_t m_flPostSpeakDelay = 0xA20;
	constexpr uint32_t m_flPreDelay = 0xA24;
	constexpr uint32_t m_bIsBackground = 0xA28;
	constexpr uint32_t m_bRemoveOnCompletion = 0xA29;
	constexpr uint32_t m_hTarget = 0xA2C;
}

namespace CTriggerSoundscape
{
	constexpr uint32_t m_hSoundscape = 0x8B8;
	constexpr uint32_t m_SoundscapeName = 0x8C0;
	constexpr uint32_t m_spectators = 0x8C8;
}

namespace CSpriteAlias_env_glow
{
}

namespace CFuncTankTrain
{
	constexpr uint32_t m_OnDeath = 0x860;
}

namespace CBasePlatTrain
{
	constexpr uint32_t m_NoiseMoving = 0x790;
	constexpr uint32_t m_NoiseArrived = 0x798;
	constexpr uint32_t m_volume = 0x7A8;
	constexpr uint32_t m_flTWidth = 0x7AC;
	constexpr uint32_t m_flTLength = 0x7B0;
}

namespace CFuncPlatRot
{
	constexpr uint32_t m_end = 0x7C0;
	constexpr uint32_t m_start = 0x7CC;
}

namespace CFuncTrain
{
	constexpr uint32_t m_hCurrentTarget = 0x7B8;
	constexpr uint32_t m_activated = 0x7BC;
	constexpr uint32_t m_hEnemy = 0x7C0;
	constexpr uint32_t m_flBlockDamage = 0x7C4;
	constexpr uint32_t m_flNextBlockTime = 0x7C8;
	constexpr uint32_t m_iszLastTarget = 0x7D0;
}

namespace CFuncTrackChange
{
	constexpr uint32_t m_trackTop = 0x7D8;
	constexpr uint32_t m_trackBottom = 0x7E0;
	constexpr uint32_t m_train = 0x7E8;
	constexpr uint32_t m_trackTopName = 0x7F0;
	constexpr uint32_t m_trackBottomName = 0x7F8;
	constexpr uint32_t m_trainName = 0x800;
	constexpr uint32_t m_code = 0x808;
	constexpr uint32_t m_targetState = 0x80C;
	constexpr uint32_t m_use = 0x810;
}

namespace CFuncTrackAuto
{
}

namespace CTriggerRemove
{
	constexpr uint32_t m_OnRemove = 0x8B8;
}

namespace CScriptTriggerHurt
{
	constexpr uint32_t m_vExtent = 0x958;
}

namespace CScriptTriggerMultiple
{
	constexpr uint32_t m_vExtent = 0x8E0;
}

namespace CTriggerOnce
{
}

namespace CScriptTriggerOnce
{
	constexpr uint32_t m_vExtent = 0x8E0;
}

namespace CTriggerLook
{
	constexpr uint32_t m_hLookTarget = 0x8E0;
	constexpr uint32_t m_flFieldOfView = 0x8E4;
	constexpr uint32_t m_flLookTime = 0x8E8;
	constexpr uint32_t m_flLookTimeTotal = 0x8EC;
	constexpr uint32_t m_flLookTimeLast = 0x8F0;
	constexpr uint32_t m_flTimeoutDuration = 0x8F4;
	constexpr uint32_t m_bTimeoutFired = 0x8F8;
	constexpr uint32_t m_bIsLooking = 0x8F9;
	constexpr uint32_t m_b2DFOV = 0x8FA;
	constexpr uint32_t m_bUseVelocity = 0x8FB;
	constexpr uint32_t m_hActivator = 0x8FC;
	constexpr uint32_t m_bTestOcclusion = 0x900;
	constexpr uint32_t m_OnTimeout = 0x908;
	constexpr uint32_t m_OnStartLook = 0x930;
	constexpr uint32_t m_OnEndLook = 0x958;
}

namespace CTriggerPush
{
	constexpr uint32_t m_angPushEntitySpace = 0x8B8;
	constexpr uint32_t m_vecPushDirEntitySpace = 0x8C4;
	constexpr uint32_t m_bTriggerOnStartTouch = 0x8D0;
}

namespace CScriptTriggerPush
{
	constexpr uint32_t m_vExtent = 0x8D8;
}

namespace CTriggerToggleSave
{
	constexpr uint32_t m_bDisabled = 0x8B8;
}

namespace CTriggerSave
{
	constexpr uint32_t m_bForceNewLevelUnit = 0x8B8;
	constexpr uint32_t m_fDangerousTimer = 0x8BC;
	constexpr uint32_t m_minHitPoints = 0x8C0;
}

namespace CTriggerGravity
{
}

namespace CTriggerProximity
{
	constexpr uint32_t m_hMeasureTarget = 0x8B8;
	constexpr uint32_t m_iszMeasureTarget = 0x8C0;
	constexpr uint32_t m_fRadius = 0x8C8;
	constexpr uint32_t m_nTouchers = 0x8CC;
	constexpr uint32_t m_NearestEntityDistance = 0x8D0;
}

namespace CTriggerImpact
{
	constexpr uint32_t m_flMagnitude = 0x8E0;
	constexpr uint32_t m_flNoise = 0x8E4;
	constexpr uint32_t m_flViewkick = 0x8E8;
	constexpr uint32_t m_pOutputForce = 0x8F0;
}

namespace CServerRagdollTrigger
{
}

namespace CTriggerActiveWeaponDetect
{
	constexpr uint32_t m_OnTouchedActiveWeapon = 0x8B8;
	constexpr uint32_t m_iszWeaponClassName = 0x8E0;
}

namespace CTriggerPhysics
{
	constexpr uint32_t m_gravityScale = 0x8C8;
	constexpr uint32_t m_linearLimit = 0x8CC;
	constexpr uint32_t m_linearDamping = 0x8D0;
	constexpr uint32_t m_angularLimit = 0x8D4;
	constexpr uint32_t m_angularDamping = 0x8D8;
	constexpr uint32_t m_linearForce = 0x8DC;
	constexpr uint32_t m_flFrequency = 0x8E0;
	constexpr uint32_t m_flDampingRatio = 0x8E4;
	constexpr uint32_t m_vecLinearForcePointAt = 0x8E8;
	constexpr uint32_t m_bCollapseToForcePoint = 0x8F4;
	constexpr uint32_t m_vecLinearForcePointAtWorld = 0x8F8;
	constexpr uint32_t m_vecLinearForceDirection = 0x904;
	constexpr uint32_t m_bConvertToDebrisWhenPossible = 0x910;
}

namespace CTriggerDetectBulletFire
{
	constexpr uint32_t m_bPlayerFireOnly = 0x8B8;
	constexpr uint32_t m_OnDetectedBulletFire = 0x8C0;
}

namespace CTriggerDetectExplosion
{
	constexpr uint32_t m_OnDetectedExplosion = 0x8F0;
}

namespace CScriptNavBlocker
{
	constexpr uint32_t m_vExtent = 0x720;
}

namespace CBasePropDoor
{
	constexpr uint32_t m_flAutoReturnDelay = 0xB70;
	constexpr uint32_t m_hDoorList = 0xB78;
	constexpr uint32_t m_nHardwareType = 0xB90;
	constexpr uint32_t m_bNeedsHardware = 0xB94;
	constexpr uint32_t m_eDoorState = 0xB98;
	constexpr uint32_t m_bLocked = 0xB9C;
	constexpr uint32_t m_closedPosition = 0xBA0;
	constexpr uint32_t m_closedAngles = 0xBAC;
	constexpr uint32_t m_hBlocker = 0xBB8;
	constexpr uint32_t m_bFirstBlocked = 0xBBC;
	constexpr uint32_t m_ls = 0xBC0;
	constexpr uint32_t m_bForceClosed = 0xBE0;
	constexpr uint32_t m_vecLatchWorldPosition = 0xBE4;
	constexpr uint32_t m_hActivator = 0xBF0;
	constexpr uint32_t m_SoundMoving = 0xC00;
	constexpr uint32_t m_SoundOpen = 0xC08;
	constexpr uint32_t m_SoundClose = 0xC10;
	constexpr uint32_t m_SoundLock = 0xC18;
	constexpr uint32_t m_SoundUnlock = 0xC20;
	constexpr uint32_t m_SoundLatch = 0xC28;
	constexpr uint32_t m_SoundPound = 0xC30;
	constexpr uint32_t m_SoundJiggle = 0xC38;
	constexpr uint32_t m_SoundLockedAnim = 0xC40;
	constexpr uint32_t m_numCloseAttempts = 0xC48;
	constexpr uint32_t m_nPhysicsMaterial = 0xC4C;
	constexpr uint32_t m_SlaveName = 0xC50;
	constexpr uint32_t m_hMaster = 0xC58;
	constexpr uint32_t m_OnBlockedClosing = 0xC60;
	constexpr uint32_t m_OnBlockedOpening = 0xC88;
	constexpr uint32_t m_OnUnblockedClosing = 0xCB0;
	constexpr uint32_t m_OnUnblockedOpening = 0xCD8;
	constexpr uint32_t m_OnFullyClosed = 0xD00;
	constexpr uint32_t m_OnFullyOpen = 0xD28;
	constexpr uint32_t m_OnClose = 0xD50;
	constexpr uint32_t m_OnOpen = 0xD78;
	constexpr uint32_t m_OnLockedUse = 0xDA0;
	constexpr uint32_t m_OnAjarOpen = 0xDC8;
}

namespace CEnvLaser
{
	constexpr uint32_t m_iszLaserTarget = 0x7B0;
	constexpr uint32_t m_pSprite = 0x7B8;
	constexpr uint32_t m_iszSpriteName = 0x7C0;
	constexpr uint32_t m_firePosition = 0x7C8;
	constexpr uint32_t m_flStartFrame = 0x7D4;
}

namespace CItem
{
	constexpr uint32_t m_OnPlayerTouch = 0x8F0;
	constexpr uint32_t m_bActivateWhenAtRest = 0x918;
	constexpr uint32_t m_OnCacheInteraction = 0x920;
	constexpr uint32_t m_OnPlayerPickup = 0x948;
	constexpr uint32_t m_OnGlovePulled = 0x970;
	constexpr uint32_t m_vOriginalSpawnOrigin = 0x998;
	constexpr uint32_t m_vOriginalSpawnAngles = 0x9A4;
	constexpr uint32_t m_bPhysStartAsleep = 0x9B0;
}

namespace CRagdollProp
{
	constexpr uint32_t m_ragdoll = 0x8F0;
	constexpr uint32_t m_bStartDisabled = 0x928;
	constexpr uint32_t m_ragPos = 0x930;
	constexpr uint32_t m_ragAngles = 0x948;
	constexpr uint32_t m_hRagdollSource = 0x960;
	constexpr uint32_t m_lastUpdateTickCount = 0x964;
	constexpr uint32_t m_allAsleep = 0x968;
	constexpr uint32_t m_bFirstCollisionAfterLaunch = 0x969;
	constexpr uint32_t m_hDamageEntity = 0x96C;
	constexpr uint32_t m_hKiller = 0x970;
	constexpr uint32_t m_hPhysicsAttacker = 0x974;
	constexpr uint32_t m_flLastPhysicsInfluenceTime = 0x978;
	constexpr uint32_t m_flFadeOutStartTime = 0x97C;
	constexpr uint32_t m_flFadeTime = 0x980;
	constexpr uint32_t m_vecLastOrigin = 0x984;
	constexpr uint32_t m_flAwakeTime = 0x990;
	constexpr uint32_t m_flLastOriginChangeTime = 0x994;
	constexpr uint32_t m_nBloodColor = 0x998;
	constexpr uint32_t m_strOriginClassName = 0x9A0;
	constexpr uint32_t m_strSourceClassName = 0x9A8;
	constexpr uint32_t m_bHasBeenPhysgunned = 0x9B0;
	constexpr uint32_t m_bShouldTeleportPhysics = 0x9B1;
	constexpr uint32_t m_flBlendWeight = 0x9B4;
	constexpr uint32_t m_flDefaultFadeScale = 0x9B8;
	constexpr uint32_t m_ragdollMins = 0x9C0;
	constexpr uint32_t m_ragdollMaxs = 0x9D8;
	constexpr uint32_t m_bShouldDeleteActivationRecord = 0x9F0;
	constexpr uint32_t m_bValidatePoweredRagdollPose = 0xA50;
}

namespace CPhysMagnet
{
	constexpr uint32_t m_OnMagnetAttach = 0x8E8;
	constexpr uint32_t m_OnMagnetDetach = 0x910;
	constexpr uint32_t m_massScale = 0x938;
	constexpr uint32_t m_forceLimit = 0x93C;
	constexpr uint32_t m_torqueLimit = 0x940;
	constexpr uint32_t m_MagnettedEntities = 0x948;
	constexpr uint32_t m_bActive = 0x960;
	constexpr uint32_t m_bHasHitSomething = 0x961;
	constexpr uint32_t m_flTotalMass = 0x964;
	constexpr uint32_t m_flRadius = 0x968;
	constexpr uint32_t m_flNextSuckTime = 0x96C;
	constexpr uint32_t m_iMaxObjectsAttached = 0x970;
}

namespace CPhysicsProp
{
	constexpr uint32_t m_MotionEnabled = 0xA68;
	constexpr uint32_t m_OnAwakened = 0xA90;
	constexpr uint32_t m_OnAwake = 0xAB8;
	constexpr uint32_t m_OnAsleep = 0xAE0;
	constexpr uint32_t m_OnPlayerUse = 0xB08;
	constexpr uint32_t m_OnPlayerPickup = 0xB30;
	constexpr uint32_t m_OnOutOfWorld = 0xB58;
	constexpr uint32_t m_massScale = 0xB80;
	constexpr uint32_t m_inertiaScale = 0xB84;
	constexpr uint32_t m_buoyancyScale = 0xB88;
	constexpr uint32_t m_damageType = 0xB8C;
	constexpr uint32_t m_damageToEnableMotion = 0xB90;
	constexpr uint32_t m_flForceToEnableMotion = 0xB94;
	constexpr uint32_t m_bThrownByPlayer = 0xB98;
	constexpr uint32_t m_bDroppedByPlayer = 0xB99;
	constexpr uint32_t m_bTouchedByPlayer = 0xB9A;
	constexpr uint32_t m_bFirstCollisionAfterLaunch = 0xB9B;
	constexpr uint32_t m_iExploitableByPlayer = 0xB9C;
	constexpr uint32_t m_bHasBeenAwakened = 0xBA0;
	constexpr uint32_t m_bIsOverrideProp = 0xBA1;
	constexpr uint32_t m_fNextCheckDisableMotionContactsTime = 0xBA4;
	constexpr uint32_t m_iInitialGlowState = 0xBA8;
	constexpr uint32_t m_nGlowRange = 0xBAC;
	constexpr uint32_t m_nGlowRangeMin = 0xBB0;
	constexpr uint32_t m_glowColor = 0xBB4;
	constexpr uint32_t m_bForceNavIgnore = 0xBB8;
	constexpr uint32_t m_bNoNavmeshBlocker = 0xBB9;
	constexpr uint32_t m_bForceNpcExclude = 0xBBA;
	constexpr uint32_t m_bShouldAutoConvertBackFromDebris = 0xBBB;
	constexpr uint32_t m_bMuteImpactEffects = 0xBBC;
	constexpr uint32_t m_bAcceptDamageFromHeldObjects = 0xBC4;
	constexpr uint32_t m_bEnableUseOutput = 0xBC5;
	constexpr uint32_t m_bAwake = 0xBC6;
	constexpr uint32_t m_nCollisionGroupOverride = 0xBC8;
}

namespace CPhysicsPropOverride
{
}

namespace CPhysicsPropRespawnable
{
	constexpr uint32_t m_vOriginalSpawnOrigin = 0xBD0;
	constexpr uint32_t m_vOriginalSpawnAngles = 0xBDC;
	constexpr uint32_t m_vOriginalMins = 0xBE8;
	constexpr uint32_t m_vOriginalMaxs = 0xBF4;
	constexpr uint32_t m_flRespawnDuration = 0xC00;
}

namespace CWaterBullet
{
}

namespace CEconEntity
{
	constexpr uint32_t m_AttributeManager = 0x988;
	constexpr uint32_t m_OriginalOwnerXuidLow = 0xC50;
	constexpr uint32_t m_OriginalOwnerXuidHigh = 0xC54;
	constexpr uint32_t m_nFallbackPaintKit = 0xC58;
	constexpr uint32_t m_nFallbackSeed = 0xC5C;
	constexpr uint32_t m_flFallbackWear = 0xC60;
	constexpr uint32_t m_nFallbackStatTrak = 0xC64;
	constexpr uint32_t m_hOldProvidee = 0xC68;
	constexpr uint32_t m_iOldOwnerClass = 0xC6C;
}

namespace CEconWearable
{
	constexpr uint32_t m_nForceSkin = 0xC70;
	constexpr uint32_t m_bAlwaysAllow = 0xC74;
}

namespace CBaseGrenade
{
	constexpr uint32_t m_OnPlayerPickup = 0x980;
	constexpr uint32_t m_OnExplode = 0x9A8;
	constexpr uint32_t m_bHasWarnedAI = 0x9D0;
	constexpr uint32_t m_bIsSmokeGrenade = 0x9D1;
	constexpr uint32_t m_bIsLive = 0x9D2;
	constexpr uint32_t m_DmgRadius = 0x9D4;
	constexpr uint32_t m_flDetonateTime = 0x9D8;
	constexpr uint32_t m_flWarnAITime = 0x9DC;
	constexpr uint32_t m_flDamage = 0x9E0;
	constexpr uint32_t m_iszBounceSound = 0x9E8;
	constexpr uint32_t m_ExplosionSound = 0x9F0;
	constexpr uint32_t m_hThrower = 0x9FC;
	constexpr uint32_t m_flNextAttack = 0xA14;
	constexpr uint32_t m_hOriginalThrower = 0xA18;
}

namespace CCoopBonusCoin
{
}

namespace CPhysicsPropMultiplayer
{
}

namespace CPredictedViewModel
{
}

namespace CPlantedC4
{
	constexpr uint32_t m_bBombTicking = 0x8E8;
	constexpr uint32_t m_flC4Blow = 0x8EC;
	constexpr uint32_t m_nBombSite = 0x8F0;
	constexpr uint32_t m_nSourceSoundscapeHash = 0x8F4;
	constexpr uint32_t m_OnBombDefused = 0x8F8;
	constexpr uint32_t m_OnBombBeginDefuse = 0x920;
	constexpr uint32_t m_OnBombDefuseAborted = 0x948;
	constexpr uint32_t m_bCannotBeDefused = 0x970;
	constexpr uint32_t m_entitySpottedState = 0x978;
	constexpr uint32_t m_nSpotRules = 0x990;
	constexpr uint32_t m_bTrainingPlacedByPlayer = 0x994;
	constexpr uint32_t m_bHasExploded = 0x995;
	constexpr uint32_t m_flTimerLength = 0x998;
	constexpr uint32_t m_bBeingDefused = 0x99C;
	constexpr uint32_t m_fLastDefuseTime = 0x9A4;
	constexpr uint32_t m_flDefuseLength = 0x9AC;
	constexpr uint32_t m_flDefuseCountDown = 0x9B0;
	constexpr uint32_t m_bBombDefused = 0x9B4;
	constexpr uint32_t m_hBombDefuser = 0x9B8;
	constexpr uint32_t m_hControlPanel = 0x9BC;
	constexpr uint32_t m_iProgressBarTime = 0x9C0;
	constexpr uint32_t m_bVoiceAlertFired = 0x9C4;
	constexpr uint32_t m_bVoiceAlertPlayed = 0x9C5;
	constexpr uint32_t m_flNextBotBeepTime = 0x9CC;
	constexpr uint32_t m_angCatchUpToPlayerEye = 0x9D4;
	constexpr uint32_t m_flLastSpinDetectionTime = 0x9E0;
}

namespace CBaseCSGrenadeProjectile
{
	constexpr uint32_t m_vInitialPosition = 0xA20;
	constexpr uint32_t m_vInitialVelocity = 0xA2C;
	constexpr uint32_t m_nBounces = 0xA38;
	constexpr uint32_t m_nExplodeEffectIndex = 0xA40;
	constexpr uint32_t m_nExplodeEffectTickBegin = 0xA48;
	constexpr uint32_t m_vecExplodeEffectOrigin = 0xA4C;
	constexpr uint32_t m_flSpawnTime = 0xA58;
	constexpr uint32_t m_unOGSExtraFlags = 0xA5C;
	constexpr uint32_t m_bDetonationRecorded = 0xA5D;
	constexpr uint32_t m_flDetonateTime = 0xA60;
	constexpr uint32_t m_nItemIndex = 0xA64;
	constexpr uint32_t m_vecOriginalSpawnLocation = 0xA68;
	constexpr uint32_t m_flLastBounceSoundTime = 0xA74;
	constexpr uint32_t m_vecGrenadeSpin = 0xA78;
	constexpr uint32_t m_vecLastHitSurfaceNormal = 0xA84;
	constexpr uint32_t m_nTicksAtZeroVelocity = 0xA90;
	constexpr uint32_t m_bHasEverHitPlayer = 0xA94;
	constexpr uint32_t m_bClearFromPlayers = 0xA95;
}

namespace CItemDogtags
{
	constexpr uint32_t m_OwningPlayer = 0x9C0;
	constexpr uint32_t m_KillingPlayer = 0x9C4;
}

namespace CSensorGrenadeProjectile
{
	constexpr uint32_t m_fExpireTime = 0xA98;
	constexpr uint32_t m_fNextDetectPlayerSound = 0xA9C;
	constexpr uint32_t m_hDisplayGrenade = 0xAA0;
}

namespace CBreachChargeProjectile
{
}

namespace CBumpMineProjectile
{
}

namespace CTripWireFireProjectile
{
}

namespace CFlashbangProjectile
{
	constexpr uint32_t m_flTimeToDetonate = 0xA98;
	constexpr uint32_t m_numOpponentsHit = 0xA9C;
	constexpr uint32_t m_numTeammatesHit = 0xA9D;
}

namespace CHEGrenadeProjectile
{
}

namespace CChicken
{
	constexpr uint32_t m_AttributeManager = 0xB80;
	constexpr uint32_t m_OriginalOwnerXuidLow = 0xE48;
	constexpr uint32_t m_OriginalOwnerXuidHigh = 0xE4C;
	constexpr uint32_t m_updateTimer = 0xE50;
	constexpr uint32_t m_stuckAnchor = 0xE68;
	constexpr uint32_t m_stuckTimer = 0xE78;
	constexpr uint32_t m_collisionStuckTimer = 0xE90;
	constexpr uint32_t m_isOnGround = 0xEA8;
	constexpr uint32_t m_vFallVelocity = 0xEAC;
	constexpr uint32_t m_activity = 0xEB8;
	constexpr uint32_t m_activityTimer = 0xEC0;
	constexpr uint32_t m_turnRate = 0xED8;
	constexpr uint32_t m_fleeFrom = 0xEDC;
	constexpr uint32_t m_moveRateThrottleTimer = 0xEE0;
	constexpr uint32_t m_startleTimer = 0xEF8;
	constexpr uint32_t m_vocalizeTimer = 0xF10;
	constexpr uint32_t m_flWhenZombified = 0xF28;
	constexpr uint32_t m_jumpedThisFrame = 0xF2C;
	constexpr uint32_t m_leader = 0xF30;
	constexpr uint32_t m_reuseTimer = 0xF38;
	constexpr uint32_t m_hasBeenUsed = 0xF50;
	constexpr uint32_t m_jumpTimer = 0xF58;
	constexpr uint32_t m_flLastJumpTime = 0xF70;
	constexpr uint32_t m_bInJump = 0xF74;
	constexpr uint32_t m_isWaitingForLeader = 0xF75;
	constexpr uint32_t m_repathTimer = 0x2F80;
	constexpr uint32_t m_inhibitDoorTimer = 0x2F98;
	constexpr uint32_t m_inhibitObstacleAvoidanceTimer = 0x3028;
	constexpr uint32_t m_vecPathGoal = 0x3048;
	constexpr uint32_t m_flActiveFollowStartTime = 0x3054;
	constexpr uint32_t m_followMinuteTimer = 0x3058;
	constexpr uint32_t m_vecLastEggPoopPosition = 0x3070;
	constexpr uint32_t m_vecEggsPooped = 0x3080;
	constexpr uint32_t m_BlockDirectionTimer = 0x30A0;
}

namespace CHostageCarriableProp
{
}

namespace CItemAssaultSuit
{
}

namespace CItemHeavyAssaultSuit
{
}

namespace CItemKevlar
{
}

namespace CItemDefuser
{
	constexpr uint32_t m_entitySpottedState = 0x9C0;
	constexpr uint32_t m_nSpotRules = 0x9D8;
}

namespace CBaseFlexAlias_funCBaseFlex
{
}

namespace CScriptItem
{
	constexpr uint32_t m_OnPlayerPickup = 0x9C0;
	constexpr uint32_t m_MoveTypeOverride = 0x9E8;
}

namespace CRagdollPropAlias_physics_prop_ragdoll
{
}

namespace CRagdollPropAttached
{
	constexpr uint32_t m_boneIndexAttached = 0xA90;
	constexpr uint32_t m_ragdollAttachedObjectIndex = 0xA94;
	constexpr uint32_t m_attachmentPointBoneSpace = 0xA98;
	constexpr uint32_t m_attachmentPointRagdollSpace = 0xAA4;
	constexpr uint32_t m_bShouldDetach = 0xAB0;
	constexpr uint32_t m_bShouldDeleteAttachedActivationRecord = 0xAC0;
}

namespace CPropDoorRotating
{
	constexpr uint32_t m_vecAxis = 0xDF0;
	constexpr uint32_t m_flDistance = 0xDFC;
	constexpr uint32_t m_eSpawnPosition = 0xE00;
	constexpr uint32_t m_eOpenDirection = 0xE04;
	constexpr uint32_t m_eCurrentOpenDirection = 0xE08;
	constexpr uint32_t m_flAjarAngle = 0xE0C;
	constexpr uint32_t m_angRotationAjarDeprecated = 0xE10;
	constexpr uint32_t m_angRotationClosed = 0xE1C;
	constexpr uint32_t m_angRotationOpenForward = 0xE28;
	constexpr uint32_t m_angRotationOpenBack = 0xE34;
	constexpr uint32_t m_angGoal = 0xE40;
	constexpr uint32_t m_vecForwardBoundsMin = 0xE4C;
	constexpr uint32_t m_vecForwardBoundsMax = 0xE58;
	constexpr uint32_t m_vecBackBoundsMin = 0xE64;
	constexpr uint32_t m_vecBackBoundsMax = 0xE70;
	constexpr uint32_t m_bAjarDoorShouldntAlwaysOpen = 0xE7C;
	constexpr uint32_t m_hEntityBlocker = 0xE80;
}

namespace CPropDoorRotatingBreakable
{
	constexpr uint32_t m_bBreakable = 0xE88;
	constexpr uint32_t m_isAbleToCloseAreaPortals = 0xE89;
	constexpr uint32_t m_currentDamageState = 0xE8C;
	constexpr uint32_t m_damageStates = 0xE90;
}

namespace CBaseCombatCharacter
{
	constexpr uint32_t m_bForceServerRagdoll = 0x978;
	constexpr uint32_t m_hMyWearables = 0x980;
	constexpr uint32_t m_flFieldOfView = 0x998;
	constexpr uint32_t m_impactEnergyScale = 0x99C;
	constexpr uint32_t m_LastHitGroup = 0x9A0;
	constexpr uint32_t m_bApplyStressDamage = 0x9A4;
	constexpr uint32_t m_bloodColor = 0x9A8;
	constexpr uint32_t m_iDamageCount = 0x9F0;
	constexpr uint32_t m_pVecRelationships = 0x9F8;
	constexpr uint32_t m_strRelationships = 0xA00;
	constexpr uint32_t m_eHull = 0xA08;
	constexpr uint32_t m_nNavHullIdx = 0xA0C;
}

namespace CCSGOViewModel
{
	constexpr uint32_t m_bShouldIgnoreOffsetAndAccuracy = 0x930;
	constexpr uint32_t m_nWeaponParity = 0x934;
	constexpr uint32_t m_nOldWeaponParity = 0x938;
}

namespace CCSWeaponBase
{
	constexpr uint32_t m_bRemoveable = 0xCE0;
	constexpr uint32_t m_flFireSequenceStartTime = 0xCE8;
	constexpr uint32_t m_nFireSequenceStartTimeChange = 0xCEC;
	constexpr uint32_t m_nFireSequenceStartTimeAck = 0xCF0;
	constexpr uint32_t m_ePlayerFireEvent = 0xCF4;
	constexpr uint32_t m_ePlayerFireEventAttackType = 0xCF8;
	constexpr uint32_t m_seqIdle = 0xCFC;
	constexpr uint32_t m_seqFirePrimary = 0xD00;
	constexpr uint32_t m_seqFireSecondary = 0xD04;
	constexpr uint32_t m_thirdPersonFireSequences = 0xD08;
	constexpr uint32_t m_hCurrentThirdPersonSequence = 0xD20;
	constexpr uint32_t m_nSilencerBoneIndex = 0xD24;
	constexpr uint32_t m_thirdPersonSequences = 0xD28;
	constexpr uint32_t m_bPlayerAmmoStockOnPickup = 0xD50;
	constexpr uint32_t m_bRequireUseToTouch = 0xD51;
	constexpr uint32_t m_iState = 0xD54;
	constexpr uint32_t m_flLastTimeInAir = 0xD58;
	constexpr uint32_t m_flLastDeployTime = 0xD5C;
	constexpr uint32_t m_nLastEmptySoundCmdNum = 0xD60;
	constexpr uint32_t m_nViewModelIndex = 0xD64;
	constexpr uint32_t m_bReloadsWithClips = 0xD68;
	constexpr uint32_t m_flTimeWeaponIdle = 0xD88;
	constexpr uint32_t m_bFireOnEmpty = 0xD8C;
	constexpr uint32_t m_OnPlayerPickup = 0xD90;
	constexpr uint32_t m_weaponMode = 0xDB8;
	constexpr uint32_t m_flTurningInaccuracyDelta = 0xDBC;
	constexpr uint32_t m_vecTurningInaccuracyEyeDirLast = 0xDC0;
	constexpr uint32_t m_flTurningInaccuracy = 0xDCC;
	constexpr uint32_t m_fAccuracyPenalty = 0xDD0;
	constexpr uint32_t m_flLastAccuracyUpdateTime = 0xDD4;
	constexpr uint32_t m_fAccuracySmoothedForZoom = 0xDD8;
	constexpr uint32_t m_fScopeZoomEndTime = 0xDDC;
	constexpr uint32_t m_iRecoilIndex = 0xDE0;
	constexpr uint32_t m_flRecoilIndex = 0xDE4;
	constexpr uint32_t m_bBurstMode = 0xDE8;
	constexpr uint32_t m_nPostponeFireReadyTicks = 0xDEC;
	constexpr uint32_t m_flPostponeFireReadyFrac = 0xDF0;
	constexpr uint32_t m_bInReload = 0xDF4;
	constexpr uint32_t m_bReloadVisuallyComplete = 0xDF5;
	constexpr uint32_t m_flDroppedAtTime = 0xDF8;
	constexpr uint32_t m_bIsHauledBack = 0xDFC;
	constexpr uint32_t m_bSilencerOn = 0xDFD;
	constexpr uint32_t m_flTimeSilencerSwitchComplete = 0xE00;
	constexpr uint32_t m_iOriginalTeamNumber = 0xE04;
	constexpr uint32_t m_flNextAttackRenderTimeOffset = 0xE08;
	constexpr uint32_t m_bCanBePickedUp = 0xE20;
	constexpr uint32_t m_bUseCanOverrideNextOwnerTouchTime = 0xE21;
	constexpr uint32_t m_nextOwnerTouchTime = 0xE24;
	constexpr uint32_t m_nextPrevOwnerTouchTime = 0xE28;
	constexpr uint32_t m_hPrevOwner = 0xE2C;
	constexpr uint32_t m_nDropTick = 0xE30;
	constexpr uint32_t m_donated = 0xE54;
	constexpr uint32_t m_fLastShotTime = 0xE58;
	constexpr uint32_t m_bWasOwnedByCT = 0xE5C;
	constexpr uint32_t m_bWasOwnedByTerrorist = 0xE5D;
	constexpr uint32_t m_bFiredOutOfAmmoEvent = 0xE5E;
	constexpr uint32_t m_numRemoveUnownedWeaponThink = 0xE60;
	constexpr uint32_t m_IronSightController = 0xE68;
	constexpr uint32_t m_iIronSightMode = 0xE80;
	constexpr uint32_t m_flLastLOSTraceFailureTime = 0xE84;
	constexpr uint32_t m_iNumEmptyAttacks = 0xE88;
	constexpr uint32_t m_flWatTickOffset = 0xE8C;
}

namespace CCSWeaponBaseGun
{
	constexpr uint32_t m_zoomLevel = 0xE90;
	constexpr uint32_t m_iBurstShotsRemaining = 0xE94;
	constexpr uint32_t m_silencedModelIndex = 0xEA0;
	constexpr uint32_t m_inPrecache = 0xEA4;
	constexpr uint32_t m_bNeedsBoltAction = 0xEA5;
	constexpr uint32_t m_bSkillReloadAvailable = 0xEA6;
	constexpr uint32_t m_bSkillReloadLiftedReloadKey = 0xEA7;
	constexpr uint32_t m_bSkillBoltInterruptAvailable = 0xEA8;
	constexpr uint32_t m_bSkillBoltLiftedFireKey = 0xEA9;
}

namespace CC4
{
	constexpr uint32_t m_vecLastValidPlayerHeldPosition = 0xE90;
	constexpr uint32_t m_vecLastValidDroppedPosition = 0xE9C;
	constexpr uint32_t m_bDoValidDroppedPositionCheck = 0xEA8;
	constexpr uint32_t m_bStartedArming = 0xEA9;
	constexpr uint32_t m_fArmedTime = 0xEAC;
	constexpr uint32_t m_bBombPlacedAnimation = 0xEB0;
	constexpr uint32_t m_bIsPlantingViaUse = 0xEB1;
	constexpr uint32_t m_entitySpottedState = 0xEB8;
	constexpr uint32_t m_nSpotRules = 0xED0;
	constexpr uint32_t m_bPlayedArmingBeeps = 0xED4;
	constexpr uint32_t m_bBombPlanted = 0xEDB;
}

namespace CDEagle
{
}

namespace CWeaponElite
{
}

namespace CWeaponNOVA
{
}

namespace CWeaponSawedoff
{
}

namespace CWeaponTaser
{
	constexpr uint32_t m_fFireTime = 0xEB0;
}

namespace CWeaponXM1014
{
}

namespace CKnife
{
	constexpr uint32_t m_bFirstAttack = 0xE90;
}

namespace CMelee
{
}

namespace CWeaponShield
{
	constexpr uint32_t m_flBulletDamageAbsorbed = 0xEB0;
	constexpr uint32_t m_flLastBulletHitSoundTime = 0xEB4;
	constexpr uint32_t m_flDisplayHealth = 0xEB8;
}

namespace CMolotovProjectile
{
	constexpr uint32_t m_bIsIncGrenade = 0xA98;
	constexpr uint32_t m_bDetonated = 0xAA4;
	constexpr uint32_t m_stillTimer = 0xAA8;
	constexpr uint32_t m_bHasBouncedOffPlayer = 0xB88;
}

namespace CDecoyProjectile
{
	constexpr uint32_t m_nDecoyShotTick = 0xAA0;
	constexpr uint32_t m_shotsRemaining = 0xAA4;
	constexpr uint32_t m_fExpireTime = 0xAA8;
	constexpr uint32_t m_decoyWeaponDefIndex = 0xAB8;
}

namespace CSmokeGrenadeProjectile
{
	constexpr uint32_t m_nSmokeEffectTickBegin = 0xAB0;
	constexpr uint32_t m_bDidSmokeEffect = 0xAB4;
	constexpr uint32_t m_nRandomSeed = 0xAB8;
	constexpr uint32_t m_vSmokeColor = 0xABC;
	constexpr uint32_t m_vSmokeDetonationPos = 0xAC8;
	constexpr uint32_t m_VoxelFrameData = 0xAD8;
	constexpr uint32_t m_flLastBounce = 0xAF0;
	constexpr uint32_t m_fllastSimulationTime = 0xAF4;
}

namespace CBaseCSGrenade
{
	constexpr uint32_t m_bRedraw = 0xE90;
	constexpr uint32_t m_bIsHeldByPlayer = 0xE91;
	constexpr uint32_t m_bPinPulled = 0xE92;
	constexpr uint32_t m_bJumpThrow = 0xE93;
	constexpr uint32_t m_bThrowAnimating = 0xE94;
	constexpr uint32_t m_fThrowTime = 0xE98;
	constexpr uint32_t m_flThrowStrength = 0xE9C;
	constexpr uint32_t m_flThrowStrengthApproach = 0xEA0;
	constexpr uint32_t m_fDropTime = 0xEA4;
	constexpr uint32_t m_bJustPulledPin = 0xEA8;
	constexpr uint32_t m_nNextHoldTick = 0xEAC;
	constexpr uint32_t m_flNextHoldFrac = 0xEB0;
	constexpr uint32_t m_hSwitchToWeaponAfterThrow = 0xEB4;
}

namespace CWeaponBaseItem
{
	constexpr uint32_t m_SequenceCompleteTimer = 0xE90;
	constexpr uint32_t m_bRedraw = 0xEA8;
}

namespace CItem_Healthshot
{
}

namespace CFists
{
	constexpr uint32_t m_bPlayingUninterruptableAct = 0xE90;
	constexpr uint32_t m_nUninterruptableActivity = 0xE94;
	constexpr uint32_t m_bRestorePrevWep = 0xE98;
	constexpr uint32_t m_hWeaponBeforePrevious = 0xE9C;
	constexpr uint32_t m_hWeaponPrevious = 0xEA0;
	constexpr uint32_t m_bDelayedHardPunchIncoming = 0xEA4;
	constexpr uint32_t m_bDestroyAfterTaunt = 0xEA5;
}

namespace CSensorGrenade
{
}

namespace CBreachCharge
{
}

namespace CBumpMine
{
}

namespace CTablet
{
}

namespace CTripWireFire
{
}

namespace CWeaponZoneRepulsor
{
}

namespace CHostageExpresserShim
{
	constexpr uint32_t m_pExpresser = 0xA10;
}

namespace CHostage
{
	constexpr uint32_t m_OnHostageBeginGrab = 0xA28;
	constexpr uint32_t m_OnFirstPickedUp = 0xA50;
	constexpr uint32_t m_OnDroppedNotRescued = 0xA78;
	constexpr uint32_t m_OnRescued = 0xAA0;
	constexpr uint32_t m_entitySpottedState = 0xAC8;
	constexpr uint32_t m_nSpotRules = 0xAE0;
	constexpr uint32_t m_uiHostageSpawnExclusionGroupMask = 0xAE4;
	constexpr uint32_t m_nHostageSpawnRandomFactor = 0xAE8;
	constexpr uint32_t m_bRemove = 0xAEC;
	constexpr uint32_t m_vel = 0xAF0;
	constexpr uint32_t m_isRescued = 0xAFC;
	constexpr uint32_t m_jumpedThisFrame = 0xAFD;
	constexpr uint32_t m_nHostageState = 0xB00;
	constexpr uint32_t m_leader = 0xB04;
	constexpr uint32_t m_lastLeader = 0xB08;
	constexpr uint32_t m_reuseTimer = 0xB10;
	constexpr uint32_t m_hasBeenUsed = 0xB28;
	constexpr uint32_t m_accel = 0xB2C;
	constexpr uint32_t m_isRunning = 0xB38;
	constexpr uint32_t m_isCrouching = 0xB39;
	constexpr uint32_t m_jumpTimer = 0xB40;
	constexpr uint32_t m_isWaitingForLeader = 0xB58;
	constexpr uint32_t m_repathTimer = 0x2B68;
	constexpr uint32_t m_inhibitDoorTimer = 0x2B80;
	constexpr uint32_t m_inhibitObstacleAvoidanceTimer = 0x2C10;
	constexpr uint32_t m_wiggleTimer = 0x2C30;
	constexpr uint32_t m_isAdjusted = 0x2C4C;
	constexpr uint32_t m_bHandsHaveBeenCut = 0x2C4D;
	constexpr uint32_t m_hHostageGrabber = 0x2C50;
	constexpr uint32_t m_fLastGrabTime = 0x2C54;
	constexpr uint32_t m_vecPositionWhenStartedDroppingToGround = 0x2C58;
	constexpr uint32_t m_vecGrabbedPos = 0x2C64;
	constexpr uint32_t m_flRescueStartTime = 0x2C70;
	constexpr uint32_t m_flGrabSuccessTime = 0x2C74;
	constexpr uint32_t m_flDropStartTime = 0x2C78;
	constexpr uint32_t m_nApproachRewardPayouts = 0x2C7C;
	constexpr uint32_t m_nPickupEventCount = 0x2C80;
	constexpr uint32_t m_vecSpawnGroundPos = 0x2C84;
	constexpr uint32_t m_vecHostageResetPosition = 0x2CA4;
}

namespace CHostageAlias_info_hostage_spawn
{
}

namespace CItemDefuserAlias_item_defuser
{
}

namespace CAK47
{
}

namespace CWeaponAug
{
}

namespace CWeaponAWP
{
}

namespace CWeaponBizon
{
}

namespace CWeaponFamas
{
}

namespace CWeaponFiveSeven
{
}

namespace CWeaponG3SG1
{
}

namespace CWeaponGalilAR
{
}

namespace CWeaponGlock
{
}

namespace CWeaponHKP2000
{
}

namespace CWeaponUSPSilencer
{
}

namespace CWeaponM4A1
{
}

namespace CWeaponM4A1Silencer
{
}

namespace CWeaponMAC10
{
}

namespace CWeaponMag7
{
}

namespace CWeaponMP5SD
{
}

namespace CWeaponMP7
{
}

namespace CWeaponMP9
{
}

namespace CWeaponNegev
{
}

namespace CWeaponP250
{
}

namespace CWeaponCZ75a
{
}

namespace CWeaponP90
{
}

namespace CWeaponSCAR20
{
}

namespace CWeaponSG556
{
}

namespace CWeaponSSG08
{
}

namespace CWeaponTec9
{
}

namespace CWeaponUMP45
{
}

namespace CWeaponM249
{
}

namespace CWeaponRevolver
{
}

namespace CMolotovGrenade
{
}

namespace CIncendiaryGrenade
{
}

namespace CDecoyGrenade
{
}

namespace CFlashbang
{
}

namespace CHEGrenade
{
}

namespace CSmokeGrenade
{
}

