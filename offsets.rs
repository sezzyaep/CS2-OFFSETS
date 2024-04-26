// Offsets are automatically updated by frezzyhook.com.
// 2024-04-26 01:08:49.976978 UTC

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod cs2_dumper {
    pub mod offsets {
        // Module: client.dll
        pub mod client_dll {
            pub const dwCSGOInput: usize = 0x192EF60;
            pub const dwEntityList: usize = 0x18C6268;
            pub const dwGameEntitySystem: usize = 0x19E3B70;
            pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
            pub const dwGameRules: usize = 0x1923370;
            pub const dwGlobalVars: usize = 0x172DD60;
            pub const dwGlowManager: usize = 0x1923788;
            pub const dwLocalPlayerController: usize = 0x1915C18;
            pub const dwLocalPlayerPawn: usize = 0x173A3C8;
            pub const dwPlantedC4: usize = 0x192C408;
            pub const dwPrediction: usize = 0x173A290;
            pub const dwSensitivity: usize = 0x19240B8;
            pub const dwSensitivity_sensitivity: usize = 0x40;
            pub const dwViewAngles: usize = 0x19342F0;
            pub const dwViewMatrix: usize = 0x19278B0;
            pub const dwViewRender: usize = 0x19280B0;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const dwNetworkGameClient: usize = 0x515AC8;
            pub const dwNetworkGameClient_deltaTick: usize = 0x258;
            pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
            pub const dwNetworkGameClient_getMaxClients: usize = 0x250;
            pub const dwNetworkGameClient_signOnState: usize = 0x240;
            pub const dwWindowHeight: usize = 0x5CEE4C;
            pub const dwWindowWidth: usize = 0x5CEE48;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const dwInputSystem: usize = 0x367A0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const dwGameTypes: usize = 0x1D21E0;
            pub const dwGameTypes_mapName: usize = 0x1D2300;
        }
    }
}
