namespace CPulseCursorFuncs
{
}

namespace CPulseCell_WaitForCursorsWithTagBase::CursorState_t
{
	constexpr uint32_t m_TagName = 0x0;
}

namespace CPulseTestFuncs_LibraryA
{
}

namespace FakeEntity_tAPI
{
}

namespace CPulseExecCursor
{
}

namespace CPulse_RegisterInfo
{
	constexpr uint32_t m_nReg = 0x0;
	constexpr uint32_t m_Type = 0x8;
	constexpr uint32_t m_OriginName = 0x18;
	constexpr uint32_t m_nWrittenByInstruction = 0x50;
	constexpr uint32_t m_nLastReadByInstruction = 0x54;
}

namespace PulseRuntimeRegisterIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CPulse_Chunk
{
	constexpr uint32_t m_Instructions = 0x0;
	constexpr uint32_t m_Registers = 0x10;
	constexpr uint32_t m_InstructionEditorIDs = 0x20;
}

namespace PGDInstruction_t
{
	constexpr uint32_t m_nCode = 0x0;
	constexpr uint32_t m_nVar = 0x4;
	constexpr uint32_t m_nReg0 = 0x8;
	constexpr uint32_t m_nReg1 = 0xA;
	constexpr uint32_t m_nReg2 = 0xC;
	constexpr uint32_t m_nInvokeBindingIndex = 0x10;
	constexpr uint32_t m_nChunk = 0x14;
	constexpr uint32_t m_nDestInstruction = 0x18;
	constexpr uint32_t m_nCallInfoIndex = 0x1C;
	constexpr uint32_t m_nConstIdx = 0x20;
	constexpr uint32_t m_DomainValue = 0x28;
}

namespace PulseDocNodeID_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CPulse_Variable
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_Description = 0x8;
	constexpr uint32_t m_Type = 0x10;
	constexpr uint32_t m_DefaultValue = 0x20;
	constexpr uint32_t m_bIsPublic = 0x32;
}

namespace CPulse_Constant
{
	constexpr uint32_t m_Type = 0x0;
	constexpr uint32_t m_Value = 0x10;
}

namespace CPulse_PublicOutput
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_Description = 0x8;
	constexpr uint32_t m_ParamType = 0x10;
}

namespace CPulse_OutputConnection
{
	constexpr uint32_t m_SourceOutput = 0x0;
	constexpr uint32_t m_TargetEntity = 0x8;
	constexpr uint32_t m_TargetInput = 0x10;
	constexpr uint32_t m_Param = 0x18;
}

namespace CPulse_InvokeBinding
{
	constexpr uint32_t m_RegisterMap = 0x0;
	constexpr uint32_t m_FuncName = 0x20;
	constexpr uint32_t m_nCellIndex = 0x28;
	constexpr uint32_t m_nSrcChunk = 0x2C;
	constexpr uint32_t m_nSrcInstruction = 0x30;
}

namespace PulseRegisterMap_t
{
	constexpr uint32_t m_Inparams = 0x0;
	constexpr uint32_t m_Outparams = 0x10;
}

namespace PulseRuntimeCellIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseRuntimeChunkIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CPulse_CallInfo
{
	constexpr uint32_t m_PortName = 0x0;
	constexpr uint32_t m_nEditorNodeID = 0x8;
	constexpr uint32_t m_RegisterMap = 0x10;
	constexpr uint32_t m_CallMethodID = 0x30;
	constexpr uint32_t m_nSrcChunk = 0x34;
	constexpr uint32_t m_nSrcInstruction = 0x38;
}

namespace CPulseGraphDef
{
	constexpr uint32_t m_DomainIdentifier = 0x8;
	constexpr uint32_t m_ParentMapName = 0x10;
	constexpr uint32_t m_Chunks = 0x18;
	constexpr uint32_t m_Cells = 0x30;
	constexpr uint32_t m_Vars = 0x48;
	constexpr uint32_t m_PublicOutputs = 0x60;
	constexpr uint32_t m_InvokeBindings = 0x78;
	constexpr uint32_t m_CallInfos = 0x90;
	constexpr uint32_t m_Constants = 0xA8;
	constexpr uint32_t m_OutputConnections = 0xC0;
}

namespace CPulseCell_Base
{
	constexpr uint32_t m_nEditorNodeID = 0x8;
}

namespace CBasePulseGraphInstance
{
}

namespace CPulseMathlib
{
}

namespace CPulseTestScriptLib
{
}

namespace PulseRuntimeCallInfoIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseRuntimeVarIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseRuntimeOutputIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseRuntimeStateOffset_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseRuntimeConstantIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseRuntimeInvokeIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseRuntimeEntrypointIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseGraphInstanceID_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseCursorID_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace PulseCursorYieldToken_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CPulse_OutflowConnection
{
	constexpr uint32_t m_SourceOutflowName = 0x0;
	constexpr uint32_t m_nDestChunk = 0x8;
	constexpr uint32_t m_nInstruction = 0xC;
}

namespace CPulse_ResumePoint
{
}

namespace CPulseCell_BaseFlow
{
}

namespace CPulseCell_Inflow_BaseEntrypoint
{
	constexpr uint32_t m_EntryChunk = 0x48;
	constexpr uint32_t m_RegisterMap = 0x50;
}

namespace CPulseRuntimeMethodArg
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_Description = 0x38;
	constexpr uint32_t m_Type = 0x40;
}

namespace CPulseCell_Inflow_Method
{
	constexpr uint32_t m_MethodName = 0x70;
	constexpr uint32_t m_Description = 0x78;
	constexpr uint32_t m_bIsPublic = 0x80;
	constexpr uint32_t m_ReturnType = 0x88;
	constexpr uint32_t m_Args = 0x98;
}

namespace CPulseCell_Inflow_EventHandler
{
	constexpr uint32_t m_EventName = 0x70;
}

namespace CPulseCell_Inflow_GraphHook
{
	constexpr uint32_t m_HookName = 0x70;
}

namespace CPulseCell_Inflow_EntOutputHandler
{
	constexpr uint32_t m_SourceEntity = 0x70;
	constexpr uint32_t m_SourceOutput = 0x78;
	constexpr uint32_t m_TargetInput = 0x80;
	constexpr uint32_t m_ExpectedParamType = 0x88;
}

namespace CPulseCell_BaseYieldingInflow
{
}

namespace CPulseCell_BaseValue
{
}

namespace CPulseCell_Step_PublicOutput
{
	constexpr uint32_t m_OutputIndex = 0x48;
}

namespace CPulseCell_Inflow_Yield
{
	constexpr uint32_t m_UnyieldResume = 0x48;
}

namespace CPulseCell_Inflow_Wait
{
	constexpr uint32_t m_WakeResume = 0x48;
}

namespace CPulseCell_Outflow_StringSwitch
{
	constexpr uint32_t m_DefaultCaseOutflow = 0x48;
	constexpr uint32_t m_CaseOutflows = 0x58;
}

namespace CPulseCell_Outflow_IntSwitch
{
	constexpr uint32_t m_DefaultCaseOutflow = 0x48;
	constexpr uint32_t m_CaseOutflows = 0x58;
}

namespace CPulseCell_Outflow_CycleOrdered
{
	constexpr uint32_t m_Outputs = 0x48;
}

namespace CPulseCell_Outflow_CycleOrdered::InstanceState_t
{
	constexpr uint32_t m_nNextIndex = 0x0;
}

namespace CPulseCell_Outflow_CycleRandom
{
	constexpr uint32_t m_Outputs = 0x48;
}

namespace CPulseCell_Outflow_CycleShuffled
{
	constexpr uint32_t m_Outputs = 0x48;
}

namespace CPulseCell_Outflow_CycleShuffled::InstanceState_t
{
	constexpr uint32_t m_Shuffle = 0x0;
	constexpr uint32_t m_nNextShuffle = 0x20;
}

namespace CPulseCell_Outflow_TestRandomYesNo
{
	constexpr uint32_t m_Yes = 0x48;
	constexpr uint32_t m_No = 0x58;
}

namespace CPulseCell_Outflow_TestExplicitYesNo
{
	constexpr uint32_t m_Yes = 0x48;
	constexpr uint32_t m_No = 0x58;
}

namespace CPulseCell_Value_TestValue50
{
}

namespace CPulseCell_Value_RandomInt
{
}

namespace CPulseCell_Step_DebugLog
{
}

namespace CPulseCell_Step_CallExternalMethod
{
	constexpr uint32_t m_MethodName = 0x48;
	constexpr uint32_t m_ExpectedArgs = 0x50;
	constexpr uint32_t m_nAsyncCallMode = 0x68;
	constexpr uint32_t m_OnFinished = 0x70;
}

namespace CPulseCell_Timeline
{
	constexpr uint32_t m_TimelineEvents = 0x48;
	constexpr uint32_t m_bWaitForChildOutflows = 0x60;
	constexpr uint32_t m_OnFinished = 0x68;
	constexpr uint32_t m_OnCanceled = 0x78;
}

namespace CPulseCell_Timeline::TimelineEvent_t
{
	constexpr uint32_t m_flTimeFromPrevious = 0x0;
	constexpr uint32_t m_bPauseForPreviousEvents = 0x4;
	constexpr uint32_t m_bCallModeSync = 0x5;
	constexpr uint32_t m_EventOutflow = 0x8;
}

namespace PulseTestEHandle_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace FakeEntity_t
{
	constexpr uint32_t m_nHandle = 0x0;
	constexpr uint32_t m_Name = 0x8;
	constexpr uint32_t m_Class = 0x10;
	constexpr uint32_t m_bDestroyed = 0x18;
	constexpr uint32_t m_pAssociatedGraphInstance = 0x20;
	constexpr uint32_t m_bFuncWasCalled = 0x28;
	constexpr uint32_t m_fValue = 0x2C;
}

namespace CPulseGraphInstance_TestDomain
{
	constexpr uint32_t m_bIsRunningUnitTests = 0xD8;
	constexpr uint32_t m_bExplicitTimeStepping = 0xD9;
	constexpr uint32_t m_bExpectingToDestroyWithYieldedCursors = 0xDA;
	constexpr uint32_t m_nNextValidateIndex = 0xDC;
	constexpr uint32_t m_Tracepoints = 0xE0;
	constexpr uint32_t m_bTestYesOrNoPath = 0xF8;
}

namespace CPulseCell_Step_TestDomainTracepoint
{
}

namespace CPulseCell_Step_TestDomainCreateFakeEntity
{
}

namespace CPulseCell_Step_TestDomainDestroyFakeEntity
{
}

namespace CPulseCell_Step_TestDomainEntFire
{
	constexpr uint32_t m_Input = 0x48;
}

namespace CPulseCell_Val_TestDomainGetEntityName
{
}

namespace CPulseCell_Val_TestDomainFindEntityByName
{
}

namespace CPulseCell_TestWaitWithCursorState
{
	constexpr uint32_t m_WakeResume = 0x48;
	constexpr uint32_t m_WakeCancel = 0x58;
	constexpr uint32_t m_WakeFail = 0x68;
}

namespace CPulseCell_TestWaitWithCursorState::CursorState_t
{
	constexpr uint32_t flWaitValue = 0x0;
	constexpr uint32_t bFailOnCancel = 0x4;
}

namespace CTestDomainDerived_Cursor
{
	constexpr uint32_t m_nCursorValueA = 0x168;
	constexpr uint32_t m_nCursorValueB = 0x16C;
}

namespace CPulseGraphInstance_TestDomain_Derived
{
	constexpr uint32_t m_nInstanceValueX = 0x100;
}

namespace CPulseTestFuncs_DerivedDomain
{
}

namespace CPulseCell_Test_NoInflow
{
}

namespace CPulseCell_Test_MultiInflow_WithDefault
{
}

namespace CPulseCell_Test_MultiInflow_NoDefault
{
}

namespace CPulseTurtleGraphicsCursor
{
	constexpr uint32_t m_Color = 0x168;
	constexpr uint32_t m_vPos = 0x16C;
	constexpr uint32_t m_flHeadingDeg = 0x174;
	constexpr uint32_t m_bPenUp = 0x178;
}

namespace CPulseGraphInstance_TurtleGraphics
{
}

namespace CPulseCell_WaitForCursorsWithTagBase
{
	constexpr uint32_t m_nCursorsAllowedToWait = 0x48;
	constexpr uint32_t m_WaitComplete = 0x50;
}

namespace CPulseCell_WaitForCursorsWithTag
{
	constexpr uint32_t m_bTagSelfWhenComplete = 0x60;
	constexpr uint32_t m_nDesiredKillPriority = 0x64;
}

namespace CPulseCell_CursorQueue
{
	constexpr uint32_t m_nCursorsAllowedToRunParallel = 0x60;
}

