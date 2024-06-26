// frezzyhook.com
// 2024-06-26 22:19:10.922689 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace interfaces {
        // Module: animationsystem.dll
        namespace animationsystem_dll {
            constexpr std::ptrdiff_t AnimationSystemUtils_001 = 0x79E30;
            constexpr std::ptrdiff_t AnimationSystem_001 = 0x748F0;
        }
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t ClientToolsInfo_001 = 0x747DC0;
            constexpr std::ptrdiff_t EmptyWorldService001_Client = 0x482F10;
            constexpr std::ptrdiff_t GameClientExports001 = 0x747DD0;
            constexpr std::ptrdiff_t LegacyGameUI001 = 0x8E3BE0;
            constexpr std::ptrdiff_t Source2Client002 = 0x747DE0;
            constexpr std::ptrdiff_t Source2ClientConfig001 = 0x466220;
            constexpr std::ptrdiff_t Source2ClientPrediction001 = 0x7CB0A0;
            constexpr std::ptrdiff_t Source2ClientUI001 = 0x8CA4B0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t BenchmarkService001 = 0x1845C0;
            constexpr std::ptrdiff_t BugService001 = 0x185710;
            constexpr std::ptrdiff_t ClientServerEngineLoopService_001 = 0x1FA6F0;
            constexpr std::ptrdiff_t EngineGameUI001 = 0x129A00;
            constexpr std::ptrdiff_t EngineServiceMgr001 = 0x1E8A60;
            constexpr std::ptrdiff_t GameEventSystemClientV001 = 0x1EDC00;
            constexpr std::ptrdiff_t GameEventSystemServerV001 = 0x1EDC10;
            constexpr std::ptrdiff_t GameResourceServiceClientV001 = 0x18CD90;
            constexpr std::ptrdiff_t GameResourceServiceServerV001 = 0x18CDA0;
            constexpr std::ptrdiff_t GameUIService_001 = 0x18F750;
            constexpr std::ptrdiff_t HostStateMgr001 = 0x1F3390;
            constexpr std::ptrdiff_t INETSUPPORT_001 = 0xF8390;
            constexpr std::ptrdiff_t InputService_001 = 0x1952D0;
            constexpr std::ptrdiff_t KeyValueCache001 = 0x1F5BB0;
            constexpr std::ptrdiff_t MapListService_001 = 0x1A8490;
            constexpr std::ptrdiff_t NetworkClientService_001 = 0x1AF6E0;
            constexpr std::ptrdiff_t NetworkP2PService_001 = 0x1B5E70;
            constexpr std::ptrdiff_t NetworkServerService_001 = 0x1BA3A0;
            constexpr std::ptrdiff_t NetworkService_001 = 0x1BF660;
            constexpr std::ptrdiff_t RenderService_001 = 0x1BFB50;
            constexpr std::ptrdiff_t ScreenshotService001 = 0x1C2500;
            constexpr std::ptrdiff_t SimpleEngineLoopService_001 = 0x2072C0;
            constexpr std::ptrdiff_t SoundService_001 = 0x1C6740;
            constexpr std::ptrdiff_t Source2EngineToClient001 = 0x68F60;
            constexpr std::ptrdiff_t Source2EngineToClientStringTable001 = 0x922C0;
            constexpr std::ptrdiff_t Source2EngineToServer001 = 0x99850;
            constexpr std::ptrdiff_t Source2EngineToServerStringTable001 = 0xB0E50;
            constexpr std::ptrdiff_t SplitScreenService_001 = 0x1CD190;
            constexpr std::ptrdiff_t StatsService_001 = 0x1CFEF0;
            constexpr std::ptrdiff_t ToolService_001 = 0x1D4970;
            constexpr std::ptrdiff_t VENGINE_GAMEUIFUNCS_VERSION005 = 0x12A6B0;
            constexpr std::ptrdiff_t VProfService_001 = 0x1D5DB0;
        }
        // Module: filesystem_stdio.dll
        namespace filesystem_stdio_dll {
            constexpr std::ptrdiff_t VAsyncFileSystem2_001 = 0x67540;
            constexpr std::ptrdiff_t VFileSystem017 = 0x67530;
        }
        // Module: host.dll
        namespace host_dll {
            constexpr std::ptrdiff_t DebugDrawQueueManager001 = 0x15170;
            constexpr std::ptrdiff_t GameModelInfo001 = 0x15720;
            constexpr std::ptrdiff_t GameSystem2HostHook = 0x15800;
            constexpr std::ptrdiff_t HostUtils001 = 0x15FB0;
            constexpr std::ptrdiff_t PredictionDiffManager001 = 0x1AB00;
            constexpr std::ptrdiff_t SaveRestoreDataVersion001 = 0x1C500;
            constexpr std::ptrdiff_t SinglePlayerSharedMemory001 = 0x1C510;
            constexpr std::ptrdiff_t Source2Host001 = 0x1C8A0;
        }
        // Module: imemanager.dll
        namespace imemanager_dll {
            constexpr std::ptrdiff_t IMEManager001 = 0xC470;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t InputStackSystemVersion001 = 0x1950;
            constexpr std::ptrdiff_t InputSystemVersion001 = 0x2B40;
        }
        // Module: localize.dll
        namespace localize_dll {
            constexpr std::ptrdiff_t Localize_001 = 0x3AE0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t GameTypes001 = 0x32B10;
            constexpr std::ptrdiff_t MATCHFRAMEWORK_001 = 0xE49C0;
        }
        // Module: materialsystem2.dll
        namespace materialsystem2_dll {
            constexpr std::ptrdiff_t FontManager_001 = 0x38450;
            constexpr std::ptrdiff_t MaterialUtils_001 = 0x4E3A0;
            constexpr std::ptrdiff_t PostProcessingSystem_001 = 0x43350;
            constexpr std::ptrdiff_t TextLayout_001 = 0x4AA60;
            constexpr std::ptrdiff_t VMaterialSystem2_001 = 0x26760;
        }
        // Module: meshsystem.dll
        namespace meshsystem_dll {
            constexpr std::ptrdiff_t MeshSystem001 = 0xAA20;
        }
        // Module: navsystem.dll
        namespace navsystem_dll {
            constexpr std::ptrdiff_t NavSystem001 = 0xC430;
        }
        // Module: networksystem.dll
        namespace networksystem_dll {
            constexpr std::ptrdiff_t FlattenedSerializersVersion001 = 0x83B60;
            constexpr std::ptrdiff_t NetworkMessagesVersion001 = 0xA4840;
            constexpr std::ptrdiff_t NetworkSystemVersion001 = 0xC5AE0;
            constexpr std::ptrdiff_t SerializedEntitiesVersion001 = 0xDBCB0;
        }
        // Module: panorama.dll
        namespace panorama_dll {
            constexpr std::ptrdiff_t PanoramaUIEngine001 = 0x61240;
        }
        // Module: panorama_text_pango.dll
        namespace panorama_text_pango_dll {
            constexpr std::ptrdiff_t PanoramaTextServices001 = 0x4CBD0;
        }
        // Module: panoramauiclient.dll
        namespace panoramauiclient_dll {
            constexpr std::ptrdiff_t PanoramaUIClient001 = 0x122B0;
        }
        // Module: particles.dll
        namespace particles_dll {
            constexpr std::ptrdiff_t ParticleSystemMgr003 = 0x5C800;
        }
        // Module: pulse_system.dll
        namespace pulse_system_dll {
            constexpr std::ptrdiff_t IPulseSystem_001 = 0x3EC0;
        }
        // Module: rendersystemdx11.dll
        namespace rendersystemdx11_dll {
            constexpr std::ptrdiff_t RenderDeviceMgr001 = 0x505B0;
            constexpr std::ptrdiff_t RenderUtils_001 = 0x5A7B0;
            constexpr std::ptrdiff_t VRenderDeviceMgrBackdoor001 = 0x505C0;
        }
        // Module: resourcesystem.dll
        namespace resourcesystem_dll {
            constexpr std::ptrdiff_t ResourceSystem013 = 0x10C30;
        }
        // Module: scenefilecache.dll
        namespace scenefilecache_dll {
            constexpr std::ptrdiff_t ResponseRulesCache001 = 0x3320;
            constexpr std::ptrdiff_t SceneFileCache002 = 0x6BE0;
        }
        // Module: scenesystem.dll
        namespace scenesystem_dll {
            constexpr std::ptrdiff_t RenderingPipelines_001 = 0x9C390;
            constexpr std::ptrdiff_t SceneSystem_002 = 0xD3550;
            constexpr std::ptrdiff_t SceneUtils_001 = 0x14B590;
        }
        // Module: schemasystem.dll
        namespace schemasystem_dll {
            constexpr std::ptrdiff_t SchemaSystem_001 = 0xAB40;
        }
        // Module: server.dll
        namespace server_dll {
            constexpr std::ptrdiff_t EmptyWorldService001_Server = 0x565C70;
            constexpr std::ptrdiff_t EntitySubclassUtilsV001 = 0x2BDC00;
            constexpr std::ptrdiff_t NavGameTest001 = 0xA584C0;
            constexpr std::ptrdiff_t ServerToolsInfo_001 = 0x84A520;
            constexpr std::ptrdiff_t Source2GameClients001 = 0x84A530;
            constexpr std::ptrdiff_t Source2GameDirector001 = 0x124410;
            constexpr std::ptrdiff_t Source2GameEntities001 = 0x84A540;
            constexpr std::ptrdiff_t Source2Server001 = 0x84A550;
            constexpr std::ptrdiff_t Source2ServerConfig001 = 0x550990;
            constexpr std::ptrdiff_t customnavsystem001 = 0x22BF60;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t SoundOpSystem001 = 0x17F6C0;
            constexpr std::ptrdiff_t SoundOpSystemEdit001 = 0x9CD80;
            constexpr std::ptrdiff_t SoundSystem001 = 0x49730;
            constexpr std::ptrdiff_t VMixEditTool001 = 0x7A160;
        }
        // Module: steamaudio.dll
        namespace steamaudio_dll {
            constexpr std::ptrdiff_t SteamAudio001 = 0x64A70;
        }
        // Module: steamclient64.dll
        namespace steamclient64_dll {
            constexpr std::ptrdiff_t CLIENTENGINE_INTERFACE_VERSION005 = 0x8BD0A0;
            constexpr std::ptrdiff_t IVALIDATE001 = 0x8C1480;
            constexpr std::ptrdiff_t SteamClient006 = 0x6A5F00;
            constexpr std::ptrdiff_t SteamClient007 = 0x6A5F10;
            constexpr std::ptrdiff_t SteamClient008 = 0x6A5F20;
            constexpr std::ptrdiff_t SteamClient009 = 0x6A5F30;
            constexpr std::ptrdiff_t SteamClient010 = 0x6A5F40;
            constexpr std::ptrdiff_t SteamClient011 = 0x6A5F50;
            constexpr std::ptrdiff_t SteamClient012 = 0x6A5F60;
            constexpr std::ptrdiff_t SteamClient013 = 0x6A5F70;
            constexpr std::ptrdiff_t SteamClient014 = 0x6A5F80;
            constexpr std::ptrdiff_t SteamClient015 = 0x6A5F90;
            constexpr std::ptrdiff_t SteamClient016 = 0x6A5FA0;
            constexpr std::ptrdiff_t SteamClient017 = 0x6A5FB0;
            constexpr std::ptrdiff_t SteamClient018 = 0x6A5FC0;
            constexpr std::ptrdiff_t SteamClient019 = 0x6A5FD0;
            constexpr std::ptrdiff_t SteamClient020 = 0x6A5FE0;
            constexpr std::ptrdiff_t SteamClient021 = 0x6A5FF0;
            constexpr std::ptrdiff_t p2pvoice002 = 0xDA330;
            constexpr std::ptrdiff_t p2pvoicesingleton002 = 0xD6770;
        }
        // Module: tier0.dll
        namespace tier0_dll {
            constexpr std::ptrdiff_t TestScriptMgr001 = 0x14A150;
            constexpr std::ptrdiff_t VEngineCvar007 = 0x63C90;
            constexpr std::ptrdiff_t VProcessUtils002 = 0x13ABB0;
            constexpr std::ptrdiff_t VStringTokenSystem001 = 0x19ED00;
        }
        // Module: v8system.dll
        namespace v8system_dll {
            constexpr std::ptrdiff_t Source2V8System001 = 0x1AE0;
        }
        // Module: valve_avi.dll
        namespace valve_avi_dll {
            constexpr std::ptrdiff_t VAvi001 = 0x2F90;
        }
        // Module: valve_wmf.dll
        namespace valve_wmf_dll {
            constexpr std::ptrdiff_t VMediaFoundation001 = 0x12D0;
        }
        // Module: vphysics2.dll
        namespace vphysics2_dll {
            constexpr std::ptrdiff_t VPhysics2_Handle_Interface_001 = 0x60CC0;
            constexpr std::ptrdiff_t VPhysics2_Interface_001 = 0x5C070;
        }
        // Module: vscript.dll
        namespace vscript_dll {
            constexpr std::ptrdiff_t VScriptManager010 = 0x32210;
        }
        // Module: vstdlib_s64.dll
        namespace vstdlib_s64_dll {
            constexpr std::ptrdiff_t IVALIDATE001 = 0x268D0;
            constexpr std::ptrdiff_t VEngineCvar002 = 0x5F70;
        }
        // Module: worldrenderer.dll
        namespace worldrenderer_dll {
            constexpr std::ptrdiff_t WorldRendererMgr001 = 0x22FD0;
        }
    }
}
