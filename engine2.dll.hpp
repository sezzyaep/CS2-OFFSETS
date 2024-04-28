namespace EngineLoopState_t
{
	constexpr uint32_t m_nPlatWindowWidth = 0x18;
	constexpr uint32_t m_nPlatWindowHeight = 0x1C;
	constexpr uint32_t m_nRenderWidth = 0x20;
	constexpr uint32_t m_nRenderHeight = 0x24;
}

namespace EntComponentInfo_t
{
	constexpr uint32_t m_pName = 0x0;
	constexpr uint32_t m_pCPPClassname = 0x8;
	constexpr uint32_t m_pNetworkDataReferencedDescription = 0x10;
	constexpr uint32_t m_pNetworkDataReferencedPtrPropDescription = 0x18;
	constexpr uint32_t m_nRuntimeIndex = 0x20;
	constexpr uint32_t m_nFlags = 0x24;
	constexpr uint32_t m_pBaseClassComponentHelper = 0x60;
}

namespace CVariantDefaultAllocator
{
}

namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;
}

namespace ChangeAccessorFieldPathIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace EventModInitialized_t
{
}

namespace EventFrameBoundary_t
{
	constexpr uint32_t m_flFrameTime = 0x0;
}

namespace EventProfileStorageAvailable_t
{
	constexpr uint32_t m_nSplitScreenSlot = 0x0;
}

namespace EventSplitScreenStateChanged_t
{
}

namespace EventSetTime_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_nClientOutputFrames = 0x28;
	constexpr uint32_t m_flRealTime = 0x30;
	constexpr uint32_t m_flRenderTime = 0x38;
	constexpr uint32_t m_flRenderFrameTime = 0x40;
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x48;
	constexpr uint32_t m_flRenderFrameTimeUnscaled = 0x50;
	constexpr uint32_t m_flTickRemainder = 0x58;
}

namespace EventClientPollInput_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRealTime = 0x28;
}

namespace EventClientProcessInput_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRealTime = 0x28;
	constexpr uint32_t m_flTickInterval = 0x2C;
	constexpr uint32_t m_flTickStartTime = 0x30;
}

namespace EventClientProcessGameInput_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRealTime = 0x28;
	constexpr uint32_t m_flFrameTime = 0x2C;
}

namespace EventClientPreOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRenderTime = 0x28;
	constexpr uint32_t m_flRenderFrameTime = 0x30;
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x38;
	constexpr uint32_t m_flRealTime = 0x40;
	constexpr uint32_t m_bRenderOnly = 0x44;
}

namespace EventClientSceneSystemThreadStateChange_t
{
	constexpr uint32_t m_bThreadsActive = 0x0;
}

namespace EventClientOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRenderTime = 0x28;
	constexpr uint32_t m_flRealTime = 0x2C;
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x30;
	constexpr uint32_t m_bRenderOnly = 0x34;
}

namespace EventClientPostOutput_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRenderTime = 0x28;
	constexpr uint32_t m_flRenderFrameTime = 0x30;
	constexpr uint32_t m_flRenderFrameTimeUnbounded = 0x34;
	constexpr uint32_t m_bRenderOnly = 0x38;
}

namespace EventClientFrameSimulate_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRealTime = 0x28;
	constexpr uint32_t m_flFrameTime = 0x2C;
	constexpr uint32_t m_flWhenScheduleSendTickPacket = 0x30;
}

namespace EventSimpleLoopFrameUpdate_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_flRealTime = 0x28;
	constexpr uint32_t m_flFrameTime = 0x2C;
}

namespace EventSimulate_t
{
	constexpr uint32_t m_LoopState = 0x0;
	constexpr uint32_t m_bFirstTick = 0x28;
	constexpr uint32_t m_bLastTick = 0x29;
}

namespace EventAdvanceTick_t
{
	constexpr uint32_t m_nCurrentTick = 0x30;
	constexpr uint32_t m_nCurrentTickThisFrame = 0x34;
	constexpr uint32_t m_nTotalTicksThisFrame = 0x38;
	constexpr uint32_t m_nTotalTicks = 0x3C;
}

namespace EventPostAdvanceTick_t
{
	constexpr uint32_t m_nCurrentTick = 0x30;
	constexpr uint32_t m_nCurrentTickThisFrame = 0x34;
	constexpr uint32_t m_nTotalTicksThisFrame = 0x38;
	constexpr uint32_t m_nTotalTicks = 0x3C;
}

namespace EventServerAdvanceTick_t
{
}

namespace EventServerPostAdvanceTick_t
{
}

namespace EventClientAdvanceTick_t
{
}

namespace EventClientPostAdvanceTick_t
{
}

namespace EventClientPredictionPostNetupdate_t
{
}

namespace EventClientPollNetworking_t
{
	constexpr uint32_t m_nTickCount = 0x0;
}

namespace EventClientProcessNetworking_t
{
}

namespace EventClientPreSimulate_t
{
}

namespace EventClientSimulate_t
{
}

namespace EventServerPollNetworking_t
{
}

namespace EventServerProcessNetworking_t
{
}

namespace EventServerSimulate_t
{
}

namespace EventServerPostSimulate_t
{
}

namespace EventClientPostSimulate_t
{
}

namespace EventClientPauseSimulate_t
{
}

namespace EventPostDataUpdate_t
{
	constexpr uint32_t m_nCount = 0x0;
}

namespace EventPreDataUpdate_t
{
	constexpr uint32_t m_nCount = 0x0;
}

namespace EventAppShutdown_t
{
	constexpr uint32_t m_nDummy0 = 0x0;
}

namespace CNetworkVarChainer
{
	constexpr uint32_t m_PathIndex = 0x20;
}

namespace EntOutput_t
{
}

namespace CEntityComponentHelper
{
	constexpr uint32_t m_flags = 0x8;
	constexpr uint32_t m_pInfo = 0x10;
	constexpr uint32_t m_nPriority = 0x18;
	constexpr uint32_t m_pNext = 0x20;
}

namespace CEntityComponent
{
}

namespace EntInput_t
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

namespace CEmptyEntityInstance
{
}

namespace CEntityInstance
{
	constexpr uint32_t m_iszPrivateVScripts = 0x8;
	constexpr uint32_t m_pEntity = 0x10;
	constexpr uint32_t m_CScriptComponent = 0x28;
	constexpr uint32_t m_bVisibleinPVS = 0x30;
}

namespace CEntityIOOutput
{
	constexpr uint32_t m_Value = 0x18;
}

