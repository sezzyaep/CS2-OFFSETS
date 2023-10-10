#![allow(non_snake_case, non_upper_case_globals)]

pub mod animationsystem_dll {
    pub const AnimationSystemUtils_001: usize = 0x64670;
    pub const AnimationSystem_001: usize = 0x5f1d0;
}

pub mod client_dll {
    pub const LegacyGameUI001: usize = 0x88d230;
    pub const Source2ClientUI001: usize = 0x87bcd0;
    pub const Source2ClientPrediction001: usize = 0x79ae80;
    pub const ClientToolsInfo_001: usize = 0x726d90;
    pub const Source2Client002: usize = 0x726db0;
    pub const GameClientExports001: usize = 0x726da0;
    pub const EmptyWorldService001_Client: usize = 0x48a8b0;
    pub const Source2ClientConfig001: usize = 0x471b70;
}

pub mod crashhandler64_dll {
    pub const : usize = 0xffff8000eee80000;
}

pub mod engine2_dll {
    pub const SimpleEngineLoopService_001: usize = 0x1e1bb0;
    pub const ClientServerEngineLoopService_001: usize = 0x1d7880;
    pub const KeyValueCache001: usize = 0x1d3ec0;
    pub const HostStateMgr001: usize = 0x1d18d0;
    pub const GameEventSystemServerV001: usize = 0x1ccf90;
    pub const GameEventSystemClientV001: usize = 0x1ccf80;
    pub const EngineServiceMgr001: usize = 0x1c8c70;
    pub const VProfService_001: usize = 0x1b6750;
    pub const ToolService_001: usize = 0x1b54b0;
    pub const StatsService_001: usize = 0x1b0730;
    pub const SplitScreenService_001: usize = 0x1ad9a0;
    pub const SoundService_001: usize = 0x1a84f0;
    pub const ScreenshotService001: usize = 0x1a43c0;
    pub const RenderService_001: usize = 0x1a1720;
    pub const NetworkService_001: usize = 0x1a1230;
    pub const NetworkServerService_001: usize = 0x19c2d0;
    pub const NetworkP2PService_001: usize = 0x197ce0;
    pub const NetworkClientService_001: usize = 0x191910;
    pub const MapListService_001: usize = 0x18a8e0;
    pub const InputService_001: usize = 0x178720;
    pub const GameUIService_001: usize = 0x1731e0;
    pub const GameResourceServiceServerV001: usize = 0x170f40;
    pub const GameResourceServiceClientV001: usize = 0x170f30;
    pub const BugService001: usize = 0x169f60;
    pub const BenchmarkService001: usize = 0x168730;
    pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x116310;
    pub const EngineGameUI001: usize = 0x1156a0;
    pub const INETSUPPORT_001: usize = 0xe5920;
    pub const Source2EngineToServerStringTable001: usize = 0xa0aa0;
    pub const Source2EngineToServer001: usize = 0x8a990;
    pub const Source2EngineToClientStringTable001: usize = 0x836b0;
    pub const Source2EngineToClient001: usize = 0x5a1b0;
}

pub mod filesystem_stdio_dll {
    pub const VAsyncFileSystem2_001: usize = 0x66d30;
    pub const VFileSystem017: usize = 0x66d20;
}

pub mod host_dll {
    pub const Source2Host001: usize = 0x18e10;
    pub const SinglePlayerSharedMemory001: usize = 0x18a90;
    pub const SaveRestoreDataVersion001: usize = 0x18a80;
    pub const PredictionDiffManager001: usize = 0x16e20;
    pub const HostUtils001: usize = 0x12550;
    pub const GameSystem2HostHook: usize = 0x11da0;
    pub const GameModelInfo001: usize = 0x11cc0;
    pub const DebugDrawQueueManager001: usize = 0x11710;
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
    pub const GameTypes001: usize = 0x50270;
    pub const MATCHFRAMEWORK_001: usize = 0x101030;
}

pub mod materialsystem2_dll {
    pub const MaterialUtils_001: usize = 0x4db80;
    pub const TextLayout_001: usize = 0x4a2d0;
    pub const PostProcessingSystem_001: usize = 0x42a50;
    pub const FontManager_001: usize = 0x378f0;
    pub const VMaterialSystem2_001: usize = 0x25eb0;
}

pub mod meshsystem_dll {
    pub const MeshSystem001: usize = 0x7270;
}

pub mod navsystem_dll {
    pub const NavSystem001: usize = 0x76f0;
}

pub mod networksystem_dll {
    pub const SerializedEntitiesVersion001: usize = 0xd1a60;
    pub const NetworkSystemVersion001: usize = 0xbbf70;
    pub const NetworkMessagesVersion001: usize = 0x9c010;
    pub const FlattenedSerializersVersion001: usize = 0x7b890;
}

pub mod panorama_dll {
    pub const PanoramaUIEngine001: usize = 0x57ee0;
}

pub mod panorama_text_pango_dll {
    pub const PanoramaTextServices001: usize = 0x4cbd0;
}

pub mod panoramauiclient_dll {
    pub const PanoramaUIClient001: usize = 0x12780;
}

pub mod particles_dll {
    pub const ParticleSystemMgr003: usize = 0x52d20;
}

pub mod pulse_system_dll {
    pub const IPulseSystem_001: usize = 0x5b80;
}

pub mod rendersystemdx11_dll {
    pub const RenderUtils_001: usize = 0x52c20;
    pub const VRenderDeviceMgrBackdoor001: usize = 0x4a330;
    pub const RenderDeviceMgr001: usize = 0x4a320;
}

pub mod resourcesystem_dll {
    pub const ResourceSystem013: usize = 0x10650;
}

pub mod scenefilecache_dll {
    pub const SceneFileCache002: usize = 0x68e0;
    pub const ResponseRulesCache001: usize = 0x3190;
}

pub mod scenesystem_dll {
    pub const SceneUtils_001: usize = 0x13ce80;
    pub const SceneSystem_002: usize = 0xcac60;
    pub const RenderingPipelines_001: usize = 0x8ed20;
}

pub mod schemasystem_dll {
    pub const SchemaSystem_001: usize = 0xa930;
}

pub mod server_dll {
    pub const NavGameTest001: usize = 0xa2dfa0;
    pub const ServerToolsInfo_001: usize = 0x832910;
    pub const Source2GameClients001: usize = 0x832920;
    pub const Source2GameEntities001: usize = 0x832930;
    pub const Source2Server001: usize = 0x832940;
    pub const EmptyWorldService001_Server: usize = 0x5877f0;
    pub const Source2ServerConfig001: usize = 0x5674f0;
    pub const EntitySubclassUtilsV001: usize = 0x2c8070;
    pub const customnavsystem001: usize = 0x244d50;
    pub const Source2GameDirector001: usize = 0x13ea50;
}

pub mod soundsystem_dll {
    pub const SoundOpSystem001: usize = 0x156160;
    pub const SoundOpSystemEdit001: usize = 0x8b540;
    pub const VMixEditTool001: usize = 0x71740;
    pub const SoundSystem001: usize = 0x46540;
}

pub mod steamaudio_dll {
    pub const SteamAudio001: usize = 0x12ee0;
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
    pub const VStringTokenSystem001: usize = 0x18c390;
    pub const TestScriptMgr001: usize = 0x13f6f0;
    pub const VProcessUtils002: usize = 0x12f870;
    pub const VEngineCvar007: usize = 0x61c50;
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
    pub const VPhysics2_Handle_Interface_001: usize = 0x5fa50;
    pub const VPhysics2_Interface_001: usize = 0x5b7f0;
}

pub mod vscript_dll {
    pub const VScriptManager010: usize = 0x31da0;
}

pub mod vstdlib_s64_dll {
    pub const IVALIDATE001: usize = 0x24ff0;
    pub const VEngineCvar002: usize = 0x5750;
}

pub mod worldrenderer_dll {
    pub const WorldRendererMgr001: usize = 0x21480;
}