namespace CSosGroupActionSchema
{
	constexpr uint32_t m_name = 0x8;
	constexpr uint32_t m_actionType = 0x10;
	constexpr uint32_t m_actionInstanceType = 0x14;
}

namespace CSosGroupActionLimitSchema
{
	constexpr uint32_t m_nMaxCount = 0x18;
	constexpr uint32_t m_nStopType = 0x1C;
	constexpr uint32_t m_nSortType = 0x20;
}

namespace CSosGroupActionTimeLimitSchema
{
	constexpr uint32_t m_flMaxDuration = 0x18;
}

namespace CSosGroupActionTimeBlockLimitSchema
{
	constexpr uint32_t m_nMaxCount = 0x18;
	constexpr uint32_t m_flMaxDuration = 0x1C;
}

namespace CSosGroupActionSetSoundeventParameterSchema
{
	constexpr uint32_t m_nMaxCount = 0x18;
	constexpr uint32_t m_flMinValue = 0x1C;
	constexpr uint32_t m_flMaxValue = 0x20;
	constexpr uint32_t m_opvarName = 0x28;
	constexpr uint32_t m_nSortType = 0x30;
}

namespace CSosGroupActionSoundeventClusterSchema
{
	constexpr uint32_t m_nMinNearby = 0x18;
	constexpr uint32_t m_flClusterEpsilon = 0x1C;
	constexpr uint32_t m_shouldPlayOpvar = 0x20;
	constexpr uint32_t m_shouldPlayClusterChild = 0x28;
	constexpr uint32_t m_clusterSizeOpvar = 0x30;
	constexpr uint32_t m_groupBoundingBoxMinsOpvar = 0x38;
	constexpr uint32_t m_groupBoundingBoxMaxsOpvar = 0x40;
}

namespace CSosGroupBranchPattern
{
	constexpr uint32_t m_bMatchEventName = 0x8;
	constexpr uint32_t m_bMatchEventSubString = 0x9;
	constexpr uint32_t m_bMatchEntIndex = 0xA;
	constexpr uint32_t m_bMatchOpvar = 0xB;
}

namespace CSosGroupMatchPattern
{
	constexpr uint32_t m_matchSoundEventName = 0x10;
	constexpr uint32_t m_matchSoundEventSubString = 0x18;
	constexpr uint32_t m_flEntIndex = 0x20;
	constexpr uint32_t m_flOpvar = 0x24;
}

namespace CSosSoundEventGroupSchema
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_nType = 0x8;
	constexpr uint32_t m_bIsBlocking = 0xC;
	constexpr uint32_t m_nBlockMaxCount = 0x10;
	constexpr uint32_t m_bInvertMatch = 0x14;
	constexpr uint32_t m_matchPattern = 0x18;
	constexpr uint32_t m_branchPattern = 0x40;
	constexpr uint32_t m_vActions = 0xB0;
}

namespace CSosSoundEventGroupListSchema
{
	constexpr uint32_t m_groupList = 0x0;
}

namespace SosEditItemInfo_t
{
	constexpr uint32_t itemType = 0x0;
	constexpr uint32_t itemName = 0x8;
	constexpr uint32_t itemTypeName = 0x10;
	constexpr uint32_t itemKVString = 0x20;
	constexpr uint32_t itemPos = 0x28;
}

namespace SelectedEditItemInfo_t
{
	constexpr uint32_t m_EditItems = 0x0;
}

namespace CSoundEventMetaData
{
	constexpr uint32_t m_soundEventVMix = 0x0;
}

namespace CDSPMixgroupModifier
{
	constexpr uint32_t m_mixgroup = 0x0;
	constexpr uint32_t m_flModifier = 0x8;
	constexpr uint32_t m_flModifierMin = 0xC;
	constexpr uint32_t m_flSourceModifier = 0x10;
	constexpr uint32_t m_flSourceModifierMin = 0x14;
	constexpr uint32_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18;
}

namespace CDspPresetModifierList
{
	constexpr uint32_t m_dspName = 0x0;
	constexpr uint32_t m_modifiers = 0x8;
}

namespace CDSPPresetMixgroupModifierTable
{
	constexpr uint32_t m_table = 0x0;
}

namespace CVoiceContainerBase
{
	constexpr uint32_t m_curves = 0x20;
}

namespace CVoiceContainerDefault
{
}

namespace CVoiceContainerWavFileReader
{
	constexpr uint32_t m_wavFilePath = 0x60;
}

namespace CVoiceContainerTestConstant
{
	constexpr uint32_t m_flTestConstantParam = 0x68;
}

namespace CVoiceContainerTestNestedDynamic
{
	constexpr uint32_t m_SoundToPlay = 0x60;
	constexpr uint32_t m_flTestConstantParam = 0x68;
}

namespace CVoiceContainerDecayingSineWave
{
	constexpr uint32_t m_flFrequency = 0x60;
	constexpr uint32_t m_flDecayTime = 0x64;
}

namespace CVoiceContainerAmpedDecayingSineWave
{
	constexpr uint32_t m_flGainAmount = 0x68;
}

namespace CVoiceContainerRealtimeFMSineWave
{
	constexpr uint32_t m_flCarrierFrequency = 0x60;
	constexpr uint32_t m_flModulatorFrequency = 0x64;
	constexpr uint32_t m_flModulatorAmount = 0x68;
}

namespace CVoiceContainerBlend
{
	constexpr uint32_t m_hSoundOne = 0x60;
	constexpr uint32_t m_hSoundTwo = 0x68;
	constexpr uint32_t m_flBlendAmount = 0x70;
}

namespace CVoiceContainerEngineSound
{
	constexpr uint32_t m_SoundToPlay = 0x60;
	constexpr uint32_t m_flTestConstantParam = 0x68;
	constexpr uint32_t m_flTestSoundEventBoundParam = 0x6C;
	constexpr uint32_t m_flEngineRPM = 0x70;
}

namespace CVoiceContainerEnvelopeAnalyzer
{
	constexpr uint32_t m_envBuffer = 0x68;
}

namespace CVoiceContainerRandomSampler
{
	constexpr uint32_t m_flLoudAmplitude = 0x60;
	constexpr uint32_t m_flLoudAmplitudeJitter = 0x64;
	constexpr uint32_t m_flSoftAmplitude = 0x68;
	constexpr uint32_t m_flSoftAmplitudeJitter = 0x6C;
	constexpr uint32_t m_flLoudTimeJitter = 0x70;
	constexpr uint32_t m_flSoftTimeJitter = 0x74;
	constexpr uint32_t m_grainResources = 0x78;
}

namespace VMixFilterDesc_t
{
	constexpr uint32_t m_nFilterType = 0x0;
	constexpr uint32_t m_nFilterSlope = 0x2;
	constexpr uint32_t m_bEnabled = 0x3;
	constexpr uint32_t m_fldbGain = 0x4;
	constexpr uint32_t m_flCutoffFreq = 0x8;
	constexpr uint32_t m_flQ = 0xC;
}

namespace VMixEQ8Desc_t
{
	constexpr uint32_t m_stages = 0x0;
}

namespace VMixDelayDesc_t
{
	constexpr uint32_t m_feedbackFilter = 0x0;
	constexpr uint32_t m_bEnableFilter = 0x10;
	constexpr uint32_t m_flDelay = 0x14;
	constexpr uint32_t m_flDirectGain = 0x18;
	constexpr uint32_t m_flDelayGain = 0x1C;
	constexpr uint32_t m_flFeedbackGain = 0x20;
	constexpr uint32_t m_flWidth = 0x24;
}

namespace VMixPannerDesc_t
{
	constexpr uint32_t m_type = 0x0;
	constexpr uint32_t m_flStrength = 0x4;
}

namespace VMixModDelayDesc_t
{
	constexpr uint32_t m_feedbackFilter = 0x0;
	constexpr uint32_t m_bPhaseInvert = 0x10;
	constexpr uint32_t m_flGlideTime = 0x14;
	constexpr uint32_t m_flDelay = 0x18;
	constexpr uint32_t m_flOutputGain = 0x1C;
	constexpr uint32_t m_flFeedbackGain = 0x20;
	constexpr uint32_t m_flModRate = 0x24;
	constexpr uint32_t m_flModDepth = 0x28;
	constexpr uint32_t m_bApplyAntialiasing = 0x2C;
}

namespace VMixDiffusorDesc_t
{
	constexpr uint32_t m_flSize = 0x0;
	constexpr uint32_t m_flComplexity = 0x4;
	constexpr uint32_t m_flFeedback = 0x8;
	constexpr uint32_t m_flOutputGain = 0xC;
}

namespace VMixBoxverbDesc_t
{
	constexpr uint32_t m_flSizeMax = 0x0;
	constexpr uint32_t m_flSizeMin = 0x4;
	constexpr uint32_t m_flComplexity = 0x8;
	constexpr uint32_t m_flDiffusion = 0xC;
	constexpr uint32_t m_flModDepth = 0x10;
	constexpr uint32_t m_flModRate = 0x14;
	constexpr uint32_t m_bParallel = 0x18;
	constexpr uint32_t m_filterType = 0x1C;
	constexpr uint32_t m_flWidth = 0x2C;
	constexpr uint32_t m_flHeight = 0x30;
	constexpr uint32_t m_flDepth = 0x34;
	constexpr uint32_t m_flFeedbackScale = 0x38;
	constexpr uint32_t m_flFeedbackWidth = 0x3C;
	constexpr uint32_t m_flFeedbackHeight = 0x40;
	constexpr uint32_t m_flFeedbackDepth = 0x44;
	constexpr uint32_t m_flOutputGain = 0x48;
	constexpr uint32_t m_flTaps = 0x4C;
}

namespace VMixFreeverbDesc_t
{
	constexpr uint32_t m_flRoomSize = 0x0;
	constexpr uint32_t m_flDamp = 0x4;
	constexpr uint32_t m_flWidth = 0x8;
	constexpr uint32_t m_flLateReflections = 0xC;
}

namespace VMixPlateverbDesc_t
{
	constexpr uint32_t m_flPrefilter = 0x0;
	constexpr uint32_t m_flInputDiffusion1 = 0x4;
	constexpr uint32_t m_flInputDiffusion2 = 0x8;
	constexpr uint32_t m_flDecay = 0xC;
	constexpr uint32_t m_flDamp = 0x10;
	constexpr uint32_t m_flFeedbackDiffusion1 = 0x14;
	constexpr uint32_t m_flFeedbackDiffusion2 = 0x18;
}

namespace VMixDynamicsDesc_t
{
	constexpr uint32_t m_fldbGain = 0x0;
	constexpr uint32_t m_fldbNoiseGateThreshold = 0x4;
	constexpr uint32_t m_fldbCompressionThreshold = 0x8;
	constexpr uint32_t m_fldbLimiterThreshold = 0xC;
	constexpr uint32_t m_fldbKneeWidth = 0x10;
	constexpr uint32_t m_flRatio = 0x14;
	constexpr uint32_t m_flLimiterRatio = 0x18;
	constexpr uint32_t m_flAttackTimeMS = 0x1C;
	constexpr uint32_t m_flReleaseTimeMS = 0x20;
	constexpr uint32_t m_flRMSTimeMS = 0x24;
	constexpr uint32_t m_flWetMix = 0x28;
	constexpr uint32_t m_bPeakMode = 0x2C;
}

namespace VMixDynamicsCompressorDesc_t
{
	constexpr uint32_t m_fldbOutputGain = 0x0;
	constexpr uint32_t m_fldbCompressionThreshold = 0x4;
	constexpr uint32_t m_fldbKneeWidth = 0x8;
	constexpr uint32_t m_flCompressionRatio = 0xC;
	constexpr uint32_t m_flAttackTimeMS = 0x10;
	constexpr uint32_t m_flReleaseTimeMS = 0x14;
	constexpr uint32_t m_flRMSTimeMS = 0x18;
	constexpr uint32_t m_flWetMix = 0x1C;
	constexpr uint32_t m_bPeakMode = 0x20;
}

namespace VMixDynamicsBand_t
{
	constexpr uint32_t m_fldbGainInput = 0x0;
	constexpr uint32_t m_fldbGainOutput = 0x4;
	constexpr uint32_t m_fldbThresholdBelow = 0x8;
	constexpr uint32_t m_fldbThresholdAbove = 0xC;
	constexpr uint32_t m_flRatioBelow = 0x10;
	constexpr uint32_t m_flRatioAbove = 0x14;
	constexpr uint32_t m_flAttackTimeMS = 0x18;
	constexpr uint32_t m_flReleaseTimeMS = 0x1C;
	constexpr uint32_t m_bEnable = 0x20;
	constexpr uint32_t m_bSolo = 0x21;
}

namespace VMixDynamics3BandDesc_t
{
	constexpr uint32_t m_fldbGainOutput = 0x0;
	constexpr uint32_t m_flRMSTimeMS = 0x4;
	constexpr uint32_t m_fldbKneeWidth = 0x8;
	constexpr uint32_t m_flDepth = 0xC;
	constexpr uint32_t m_flWetMix = 0x10;
	constexpr uint32_t m_flTimeScale = 0x14;
	constexpr uint32_t m_flLowCutoffFreq = 0x18;
	constexpr uint32_t m_flHighCutoffFreq = 0x1C;
	constexpr uint32_t m_bPeakMode = 0x20;
	constexpr uint32_t m_bandDesc = 0x24;
}

namespace VMixEnvelopeDesc_t
{
	constexpr uint32_t m_flAttackTimeMS = 0x0;
	constexpr uint32_t m_flHoldTimeMS = 0x4;
	constexpr uint32_t m_flReleaseTimeMS = 0x8;
}

namespace VMixPitchShiftDesc_t
{
	constexpr uint32_t m_nGrainSampleCount = 0x0;
	constexpr uint32_t m_flPitchShift = 0x4;
	constexpr uint32_t m_nQuality = 0x8;
	constexpr uint32_t m_nProcType = 0xC;
}

namespace VMixConvolutionDesc_t
{
	constexpr uint32_t m_fldbGain = 0x0;
	constexpr uint32_t m_flPreDelayMS = 0x4;
	constexpr uint32_t m_flWetMix = 0x8;
	constexpr uint32_t m_fldbLow = 0xC;
	constexpr uint32_t m_fldbMid = 0x10;
	constexpr uint32_t m_fldbHigh = 0x14;
	constexpr uint32_t m_flLowCutoffFreq = 0x18;
	constexpr uint32_t m_flHighCutoffFreq = 0x1C;
}

namespace VMixVocoderDesc_t
{
	constexpr uint32_t m_nBandCount = 0x0;
	constexpr uint32_t m_flBandwidth = 0x4;
	constexpr uint32_t m_fldBModGain = 0x8;
	constexpr uint32_t m_flFreqRangeStart = 0xC;
	constexpr uint32_t m_flFreqRangeEnd = 0x10;
	constexpr uint32_t m_fldBUnvoicedGain = 0x14;
	constexpr uint32_t m_flAttackTimeMS = 0x18;
	constexpr uint32_t m_flReleaseTimeMS = 0x1C;
	constexpr uint32_t m_nDebugBand = 0x20;
	constexpr uint32_t m_bPeakMode = 0x24;
}

namespace VMixShaperDesc_t
{
	constexpr uint32_t m_nShape = 0x0;
	constexpr uint32_t m_fldbDrive = 0x4;
	constexpr uint32_t m_fldbOutputGain = 0x8;
	constexpr uint32_t m_flWetMix = 0xC;
	constexpr uint32_t m_nOversampleFactor = 0x10;
}

namespace VMixUtilityDesc_t
{
	constexpr uint32_t m_nOp = 0x0;
	constexpr uint32_t m_flInputPan = 0x4;
	constexpr uint32_t m_flOutputBalance = 0x8;
	constexpr uint32_t m_fldbOutputGain = 0xC;
	constexpr uint32_t m_bBassMono = 0x10;
	constexpr uint32_t m_flBassFreq = 0x14;
}

namespace VMixAutoFilterDesc_t
{
	constexpr uint32_t m_flEnvelopeAmount = 0x0;
	constexpr uint32_t m_flAttackTimeMS = 0x4;
	constexpr uint32_t m_flReleaseTimeMS = 0x8;
	constexpr uint32_t m_filter = 0xC;
	constexpr uint32_t m_flLFOAmount = 0x1C;
	constexpr uint32_t m_flLFORate = 0x20;
	constexpr uint32_t m_flPhase = 0x24;
	constexpr uint32_t m_nLFOShape = 0x28;
}

namespace VMixOscDesc_t
{
	constexpr uint32_t oscType = 0x0;
	constexpr uint32_t m_freq = 0x4;
	constexpr uint32_t m_flPhase = 0x8;
}

namespace VMixEffectChainDesc_t
{
	constexpr uint32_t m_flCrossfadeTime = 0x0;
}

namespace VMixSubgraphSwitchDesc_t
{
	constexpr uint32_t m_interpolationMode = 0x0;
	constexpr uint32_t m_bOnlyTailsOnFadeOut = 0x4;
	constexpr uint32_t m_flInterpolationTime = 0x8;
}

