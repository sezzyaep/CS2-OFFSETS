// FrezzyHook d1mp
// 2025-10-30 00:30:40.957679400 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace interfaces {
        // Module: animationsystem.dll
        namespace animationsystem_dll {
            constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x7C2B70;
            constexpr std::ptrdiff_t AnimationSystem_001 = 0x7BAA90;
        }
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x1BE0A30;
            constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x1B9BE00;
            constexpr std::ptrdiff_t GameClientExports001 = 0x1BDD710;
            constexpr std::ptrdiff_t LegacyGameUI001 = 0x1BFBF10;
            constexpr std::ptrdiff_t Source2Client002 = 0x1E251C0;
            constexpr std::ptrdiff_t Source2ClientConfig001 = 0x1DC06D0;
            constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x1BE7CD0;
            constexpr std::ptrdiff_t Source2ClientUI001 = 0x1BFA450;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t BenchmarkService001 = 0x5F55E0;
            constexpr std::ptrdiff_t BugService001 = 0x8A9A60;
            constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x8EB170;
            constexpr std::ptrdiff_t EngineGameUI001 = 0x5F32C0;
            constexpr std::ptrdiff_t EngineServiceMgr001 = 0x8EAA70;
            constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x8EAD40;
            constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x8EAE60;
            constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x5F56E0;
            constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x5F5740;
            constexpr std::ptrdiff_t GameUIService_001 = 0x8A9E90;
            constexpr std::ptrdiff_t HostStateMgr001 = 0x5F5FA0;
            constexpr std::ptrdiff_t INETSUPPORT_001 = 0x5EE860;
            constexpr std::ptrdiff_t InputService_001 = 0x8AA180;
            constexpr std::ptrdiff_t KeyValueCache001 = 0x5F6050;
            constexpr std::ptrdiff_t MapListService_001 = 0x8E90F0;
            constexpr std::ptrdiff_t NetworkClientService_001 = 0x8E9280;
            constexpr std::ptrdiff_t NetworkP2PService_001 = 0x8E95A0;
            constexpr std::ptrdiff_t NetworkServerService_001 = 0x8E9730;
            constexpr std::ptrdiff_t NetworkService_001 = 0x5F58B0;
            constexpr std::ptrdiff_t RenderService_001 = 0x8E9990;
            constexpr std::ptrdiff_t ScreenshotService001 = 0x8E9C40;
            constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x5F60B0;
            constexpr std::ptrdiff_t SoundService_001 = 0x5F58F0;
            constexpr std::ptrdiff_t Source2EngineToClient001 = 0x5F2950;
            constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x5F29B0;
            constexpr std::ptrdiff_t Source2EngineToServer001 = 0x5F2A28;
            constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0x5F2A50;
            constexpr std::ptrdiff_t SplitScreenService_001 = 0x5F5BF0;
            constexpr std::ptrdiff_t StatsService_001 = 0x8EA040;
            constexpr std::ptrdiff_t ToolService_001 = 0x5F5DB0;
            constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x5F3350;
            constexpr std::ptrdiff_t VProfService_001 = 0x5F5DF0;
        }
        // Module: filesystem_stdio.dll
        namespace filesystem_stdio_dll {
            constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x215AE0;
            constexpr std::ptrdiff_t VFileSystem017 = 0x2106C0;
        }
        // Module: host.dll
        namespace host_dll {
            constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x138EF0;
            constexpr std::ptrdiff_t GameModelInfo001 = 0x138F30;
            constexpr std::ptrdiff_t GameSystem2HostHook = 0x138F70;
            constexpr std::ptrdiff_t HostUtils001 = 0x1466E0;
            constexpr std::ptrdiff_t PredictionDiffManager001 = 0x139080;
            constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x1391B0;
            constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x1391E0;
            constexpr std::ptrdiff_t Source2Host001 = 0x139250;
        }
        // Module: imemanager.dll
        namespace imemanager_dll {
            constexpr std::ptrdiff_t IMEManager001 = 0x36AA0;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x43CD0;
            constexpr std::ptrdiff_t InputSystemVersion001 = 0x45A20;
        }
        // Module: localize.dll
        namespace localize_dll {
            constexpr std::ptrdiff_t Localize_001 = 0x47BE0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t GameTypes001 = 0x1B5EE0;
            constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0x1BE190;
        }
        // Module: materialsystem2.dll
        namespace materialsystem2_dll {
            constexpr std::ptrdiff_t FontManager_001 = 0x163500;
            constexpr std::ptrdiff_t MaterialUtils_001 = 0x14B430;
            constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x14B340;
            constexpr std::ptrdiff_t TextLayout_001 = 0x14B3C0;
            constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x162D70;
        }
        // Module: meshsystem.dll
        namespace meshsystem_dll {
            constexpr std::ptrdiff_t MeshSystem001 = 0x1400E0;
        }
        // Module: navsystem.dll
        namespace navsystem_dll {
            constexpr std::ptrdiff_t NavSystem001 = 0x120840;
        }
        // Module: networksystem.dll
        namespace networksystem_dll {
            constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x2632D0;
            constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0x28B1D0;
            constexpr std::ptrdiff_t NetworkSystemVersion001 = 0x27C9B0;
            constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0x27CAC0;
        }
        // Module: panorama.dll
        namespace panorama_dll {
            constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x509B20;
        }
        // Module: panorama_text_pango.dll
        namespace panorama_text_pango_dll {
            constexpr std::ptrdiff_t PanoramaTextServices001 = 0x2B79C0;
        }
        // Module: panoramauiclient.dll
        namespace panoramauiclient_dll {
            constexpr std::ptrdiff_t PanoramaUIClient001 = 0x291200;
        }
        // Module: particles.dll
        namespace particles_dll {
            constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x555680;
        }
        // Module: pulse_system.dll
        namespace pulse_system_dll {
            constexpr std::ptrdiff_t IPulseSystem_001 = 0x1F0E30;
        }
        // Module: rendersystemdx11.dll
        namespace rendersystemdx11_dll {
            constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x431BC0;
            constexpr std::ptrdiff_t RenderUtils_001 = 0x4324B8;
            constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x431C60;
        }
        // Module: resourcesystem.dll
        namespace resourcesystem_dll {
            constexpr std::ptrdiff_t ResourceSystem013 = 0x7FDD0;
        }
        // Module: scenefilecache.dll
        namespace scenefilecache_dll {
            constexpr std::ptrdiff_t ResponseRulesCache001 = 0x95740;
            constexpr std::ptrdiff_t SceneFileCache002 = 0x95890;
        }
        // Module: scenesystem.dll
        namespace scenesystem_dll {
            constexpr std::ptrdiff_t RenderingPipelines_001 = 0x61BB60;
            constexpr std::ptrdiff_t SceneSystem_002 = 0x83E7D0;
            constexpr std::ptrdiff_t SceneUtils_001 = 0x61C460;
        }
        // Module: schemasystem.dll
        namespace schemasystem_dll {
            constexpr std::ptrdiff_t SchemaSystem_001 = 0x756F0;
        }
        // Module: server.dll
        namespace server_dll {
            constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x1730E10;
            constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x16DD250;
            constexpr std::ptrdiff_t NavGameTest001 = 0x17D9BC0;
            constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x17890A8;
            constexpr std::ptrdiff_t Source2GameClients001 = 0x17849F0;
            constexpr std::ptrdiff_t Source2GameDirector001 = 0x18E3F30;
            constexpr std::ptrdiff_t Source2GameEntities001 = 0x17887B0;
            constexpr std::ptrdiff_t Source2Server001 = 0x1788610;
            constexpr std::ptrdiff_t Source2ServerConfig001 = 0x19B7F48;
            constexpr std::ptrdiff_t customnavsystem001 = 0x16BCC18;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t SoundOpSystem001 = 0x3EB490;
            constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x3EB370;
            constexpr std::ptrdiff_t SoundSystem001 = 0x3EAE50;
            constexpr std::ptrdiff_t VMixEditTool001 = 0x485ED80B;
        }
        // Module: steamaudio.dll
        namespace steamaudio_dll {
            constexpr std::ptrdiff_t SteamAudio001 = 0x257550;
        }
        // Module: steamclient64.dll
        namespace steamclient64_dll {
            constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0xFFFFFFFF8BB1D4EA;
            constexpr std::ptrdiff_t IVALIDATE001 = 0x1551558;
            constexpr std::ptrdiff_t SteamClient006 = 0x154EB30;
            constexpr std::ptrdiff_t SteamClient007 = 0x154EB38;
            constexpr std::ptrdiff_t SteamClient008 = 0x154EB40;
            constexpr std::ptrdiff_t SteamClient009 = 0x154EB48;
            constexpr std::ptrdiff_t SteamClient010 = 0x154EB50;
            constexpr std::ptrdiff_t SteamClient011 = 0x154EB58;
            constexpr std::ptrdiff_t SteamClient012 = 0x154EB60;
            constexpr std::ptrdiff_t SteamClient013 = 0x154EB68;
            constexpr std::ptrdiff_t SteamClient014 = 0x154EB70;
            constexpr std::ptrdiff_t SteamClient015 = 0x154EB78;
            constexpr std::ptrdiff_t SteamClient016 = 0x154EB80;
            constexpr std::ptrdiff_t SteamClient017 = 0x154EB88;
            constexpr std::ptrdiff_t SteamClient018 = 0x154EB90;
            constexpr std::ptrdiff_t SteamClient019 = 0x154EB98;
            constexpr std::ptrdiff_t SteamClient020 = 0x154EBA0;
            constexpr std::ptrdiff_t SteamClient021 = 0x154EBA8;
            constexpr std::ptrdiff_t SteamClient022 = 0x154EBB0;
            constexpr std::ptrdiff_t SteamClient023 = 0x154EBB8;
            constexpr std::ptrdiff_t p2pvoice002 = 0x14E1B7F;
            constexpr std::ptrdiff_t p2pvoicesingleton002 = 0x152B0F0;
        }
        // Module: tier0.dll
        namespace tier0_dll {
            constexpr std::ptrdiff_t TestScriptMgr001 = 0x3975A0;
            constexpr std::ptrdiff_t VEngineCvar007 = 0x3A2440;
            constexpr std::ptrdiff_t VProcessUtils002 = 0x3974E0;
            constexpr std::ptrdiff_t VStringTokenSystem001 = 0x3C9310;
        }
        // Module: v8system.dll
        namespace v8system_dll {
            constexpr std::ptrdiff_t Source2V8System001 = 0x315F0;
        }
        // Module: vconcomm.dll
        namespace vconcomm_dll {
            constexpr std::ptrdiff_t VConComm001 = 0x375C0;
        }
        // Module: vphysics2.dll
        namespace vphysics2_dll {
            constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x3E4120;
            constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x3E4160;
        }
        // Module: vscript.dll
        namespace vscript_dll {
            constexpr std::ptrdiff_t VScriptManager010 = 0x13B280;
        }
        // Module: vstdlib_s64.dll
        namespace vstdlib_s64_dll {
            constexpr std::ptrdiff_t IVALIDATE001 = 0x6E990;
            constexpr std::ptrdiff_t VEngineCvar002 = 0x6D070;
        }
        // Module: worldrenderer.dll
        namespace worldrenderer_dll {
            constexpr std::ptrdiff_t WorldRendererMgr001 = 0x1FEC50;
        }
    }
}
