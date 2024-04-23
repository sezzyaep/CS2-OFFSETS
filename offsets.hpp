// Offsets are automatically updated by frezzyhook.com.
// 2024-04-23 01:09:05.541908700 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x192A580;
            constexpr std::ptrdiff_t dwEntityList = 0x18C1EA8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x19DF730;
            constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
            constexpr std::ptrdiff_t dwGameRules = 0x191EC40;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1729B80;
            constexpr std::ptrdiff_t dwGlowManager = 0x191F060;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1911548;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17361C8;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1927A38;
            constexpr std::ptrdiff_t dwPrediction = 0x1736090;
            constexpr std::ptrdiff_t dwSensitivity = 0x191F988;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x192F910;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1923180;
            constexpr std::ptrdiff_t dwViewRender = 0x1923980;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x515564;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x514AC8;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x258;
            constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_getMaxClients = 0x250;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
            constexpr std::ptrdiff_t dwWindowHeight = 0x5CDD04;
            constexpr std::ptrdiff_t dwWindowWidth = 0x5CDD00;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1D21E0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x1D2300;
        }
    }
}
