// Offsets are automatically updated by frezzyhook.com.
// 2024-05-08 04:40:40.591862300 UTC

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod cs2_dumper {
    pub mod offsets {
        // Module: client.dll
        pub mod client_dll {
            pub const dwCSGOInput: usize = 0x1930C30;
            pub const dwEntityList: usize = 0x18C7F88;
            pub const dwGameEntitySystem: usize = 0x19E56E0;
            pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
            pub const dwGameRules: usize = 0x1924EE0;
            pub const dwGlobalVars: usize = 0x172EEE0;
            pub const dwGlowManager: usize = 0x1925300;
            pub const dwLocalPlayerController: usize = 0x1917698;
            pub const dwLocalPlayerPawn: usize = 0x173B568;
            pub const dwPlantedC4: usize = 0x192E0D8;
            pub const dwPrediction: usize = 0x173B430;
            pub const dwSensitivity: usize = 0x1925C28;
            pub const dwSensitivity_sensitivity: usize = 0x40;
            pub const dwViewAngles: usize = 0x1935FC0;
            pub const dwViewMatrix: usize = 0x1929420;
            pub const dwViewRender: usize = 0x1929C20;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const dwNetworkGameClient: usize = 0x515AD8;
            pub const dwNetworkGameClient_deltaTick: usize = 0x258;
            pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
            pub const dwNetworkGameClient_getMaxClients: usize = 0x250;
            pub const dwNetworkGameClient_signOnState: usize = 0x240;
            pub const dwWindowHeight: usize = 0x5CF1FC;
            pub const dwWindowWidth: usize = 0x5CF1F8;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const dwInputSystem: usize = 0x377C0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const dwGameTypes: usize = 0x1D2290;
            pub const dwGameTypes_mapName: usize = 0x1D23B0;
        }
    }
}
