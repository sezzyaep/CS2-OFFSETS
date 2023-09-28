#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll {
    pub const AnimationSystemUtils_001: usize = 0x64510;
    pub const AnimationSystem_001: usize = 0x5f070;
}

pub mod client_dll {
    pub const LegacyGameUI001: usize = 0x88d1a0;
    pub const Source2ClientUI001: usize = 0x87bb90;
    pub const Source2ClientPrediction001: usize = 0x79b2d0;
    pub const ClientToolsInfo_001: usize = 0x7270e0;
    pub const Source2Client002: usize = 0x727100;
    pub const GameClientExports001: usize = 0x7270f0;
    pub const EmptyWorldService001_Client: usize = 0x48a9c0;
    pub const Source2ClientConfig001: usize = 0x471d50;
}

pub mod engine2_dll {
    pub const SimpleEngineLoopService_001: usize = 0x1e44f0;
    pub const ClientServerEngineLoopService_001: usize = 0x1da1c0;
    pub const KeyValueCache001: usize = 0x1d6560;
    pub const HostStateMgr001: usize = 0x1d3fa0;
    pub const GameEventSystemServerV001: usize = 0x1cf3c0;
    pub const GameEventSystemClientV001: usize = 0x1cf3b0;
    pub const EngineServiceMgr001: usize = 0x1cacd0;
    pub const VProfService_001: usize = 0x1b8c60;
    pub const ToolService_001: usize = 0x1b79c0;
    pub const StatsService_001: usize = 0x1b2c40;
    pub const SplitScreenService_001: usize = 0x1afeb0;
    pub const SoundService_001: usize = 0x1aaa00;
    pub const ScreenshotService001: usize = 0x1a68d0;
    pub const RenderService_001: usize = 0x1a3c30;
    pub const NetworkService_001: usize = 0x1a3740;
    pub const NetworkServerService_001: usize = 0x19e7e0;
    pub const NetworkP2PService_001: usize = 0x19a1f0;
    pub const NetworkClientService_001: usize = 0x193e20;
    pub const MapListService_001: usize = 0x18ce60;
    pub const InputService_001: usize = 0x17abd0;
    pub const GameUIService_001: usize = 0x175690;
    pub const GameResourceServiceServerV001: usize = 0x1733f0;
    pub const GameResourceServiceClientV001: usize = 0x1733e0;
    pub const BugService001: usize = 0x16c410;
    pub const BenchmarkService001: usize = 0x16abe0;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x118300;
    pub const EngineGameUI001: usize = 0x1175c0;
    pub const INETSUPPORT_001: usize = 0xe6da0;
    pub const Source2EngineToServerStringTable001: usize = 0xa1820;
    pub const Source2EngineToServer001: usize = 0x8b650;
    pub const Source2EngineToClientStringTable001: usize = 0x84050;
    pub const Source2EngineToClient001: usize = 0x5a6b0;
}

pub mod filesystem_stdio_dll {
    pub const VAsyncFileSystem2_001: usize = 0x66d40;
    pub const VFileSystem017: usize = 0x66d30;
}

pub mod host_dll {
    pub const Source2Host001: usize = 0x18e50;
    pub const SinglePlayerSharedMemory001: usize = 0x18ad0;
    pub const SaveRestoreDataVersion001: usize = 0x18ac0;
    pub const PredictionDiffManager001: usize = 0x16e60;
    pub const HostUtils001: usize = 0x123f0;
    pub const GameSystem2HostHook: usize = 0x11c40;
    pub const GameModelInfo001: usize = 0x11b60;
    pub const DebugDrawQueueManager001: usize = 0x115b0;
}

pub mod imemanager_dll {
    pub const IMEManager001: usize = 0xc470;
}

pub mod inputsystem_dll {
    pub const InputSystemVersion001: usize = 0x28d0;
    pub const InputStackSystemVersion001: usize = 0x16f0;
}

pub mod localize_dll {
    pub const Localize_001: usize = 0x3830;
}

pub mod matchmaking_dll {
    pub const GameTypes001: usize = 0x50110;
    pub const MATCHFRAMEWORK_001: usize = 0x101180;
}

pub mod materialsystem2_dll {
    pub const MaterialUtils_001: usize = 0x4ddc0;
    pub const TextLayout_001: usize = 0x4a510;
    pub const PostProcessingSystem_001: usize = 0x42c90;
    pub const FontManager_001: usize = 0x37a70;
    pub const VMaterialSystem2_001: usize = 0x25fd0;
}

pub mod meshsystem_dll {
    pub const MeshSystem001: usize = 0x7110;
}

pub mod navsystem_dll {
    pub const NavSystem001: usize = 0x7590;
}

pub mod networksystem_dll {
    pub const SerializedEntitiesVersion001: usize = 0xd29c0;
    pub const NetworkSystemVersion001: usize = 0xbcd00;
    pub const NetworkMessagesVersion001: usize = 0x9cd30;
    pub const FlattenedSerializersVersion001: usize = 0x7c4e0;
}

pub mod panorama_dll {
    pub const PanoramaUIEngine001: usize = 0x5e650;
}

pub mod panorama_text_pango_dll {
    pub const PanoramaTextServices001: usize = 0x4ccb0;
}

pub mod panoramauiclient_dll {
    pub const PanoramaUIClient001: usize = 0x12620;
}

pub mod particles_dll {
    pub const ParticleSystemMgr003: usize = 0x52d00;
}

pub mod pulse_system_dll {
    pub const IPulseSystem_001: usize = 0x5a20;
}

pub mod rendersystemdx11_dll {
    pub const RenderUtils_001: usize = 0x53440;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4aaa0;
    pub const RenderDeviceMgr001: usize = 0x4aa90;
}

pub mod resourcesystem_dll {
    pub const ResourceSystem013: usize = 0x106b0;
}

pub mod scenefilecache_dll {
    pub const SceneFileCache002: usize = 0x68e0;
    pub const ResponseRulesCache001: usize = 0x3190;
}

pub mod scenesystem_dll {
    pub const SceneUtils_001: usize = 0x13d610;
    pub const SceneSystem_002: usize = 0xcaab0;
    pub const RenderingPipelines_001: usize = 0x8ea10;
}

pub mod schemasystem_dll {
    pub const SchemaSystem_001: usize = 0xa840;
}

pub mod server_dll {
    pub const NavGameTest001: usize = 0xa2b310;
    pub const ServerToolsInfo_001: usize = 0x82f8c0;
    pub const Source2GameClients001: usize = 0x82f8d0;
    pub const Source2GameEntities001: usize = 0x82f8e0;
    pub const Source2Server001: usize = 0x82f8f0;
    pub const EmptyWorldService001_Server: usize = 0x584640;
    pub const Source2ServerConfig001: usize = 0x564650;
    pub const EntitySubclassUtilsV001: usize = 0x2c69a0;
    pub const customnavsystem001: usize = 0x243420;
    pub const Source2GameDirector001: usize = 0x13e9c0;
}

pub mod soundsystem_dll {
    pub const SoundOpSystem001: usize = 0x1560d0;
    pub const SoundOpSystemEdit001: usize = 0x8b4b0;
    pub const VMixEditTool001: usize = 0x71710;
    pub const SoundSystem001: usize = 0x46510;
}

pub mod steamaudio_dll {
    pub const SteamAudio001: usize = 0x12d90;
}

pub mod steamclient64_dll {
    pub const IVALIDATE001: usize = 0x833640;
    pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x82f4c0;
    pub const SteamClient020: usize = 0x62caf0;
    pub const SteamClient019: usize = 0x62cae0;
    pub const SteamClient018: usize = 0x62cad0;
    pub const SteamClient017: usize = 0x62cac0;
    pub const SteamClient016: usize = 0x62cab0;
    pub const SteamClient015: usize = 0x62caa0;
    pub const SteamClient014: usize = 0x62ca90;
    pub const SteamClient013: usize = 0x62ca80;
    pub const SteamClient012: usize = 0x62ca70;
    pub const SteamClient011: usize = 0x62ca60;
    pub const SteamClient010: usize = 0x62ca50;
    pub const SteamClient009: usize = 0x62ca40;
    pub const SteamClient008: usize = 0x62ca30;
    pub const SteamClient007: usize = 0x62ca20;
    pub const SteamClient006: usize = 0x62ca10;
    pub const p2pvoice002: usize = 0xd8ea0;
    pub const p2pvoicesingleton002: usize = 0xd5840;
}

pub mod tier0_dll {
    pub const VStringTokenSystem001: usize = 0x18d680;
    pub const TestScriptMgr001: usize = 0x13f7b0;
    pub const VProcessUtils002: usize = 0x12f7c0;
    pub const VEngineCvar007: usize = 0x61640;
}

pub mod v8system_dll {
    pub const Source2V8System001: usize = 0x1670;
}

pub mod valve_avi_dll {
    pub const VAvi001: usize = 0x2f90;
}

pub mod valve_wmf_dll {
    pub const VMediaFoundation001: usize = 0x12d0;
}

pub mod vphysics2_dll {
    pub const VPhysics2_Handle_Interface_001: usize = 0x5f7f0;
    pub const VPhysics2_Interface_001: usize = 0x5b590;
}

pub mod vscript_dll {
    pub const VScriptManager010: usize = 0x31c40;
}

pub mod vstdlib_s64_dll {
    pub const IVALIDATE001: usize = 0x24ff0;
    pub const VEngineCvar002: usize = 0x5750;
}

pub mod worldrenderer_dll {
    pub const WorldRendererMgr001: usize = 0x21320;
}