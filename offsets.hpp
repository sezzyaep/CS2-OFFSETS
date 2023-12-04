struct ClientDLL {
    dwEntityList: 0x17BB5B0,
    dwGameRules: 0x18173C8,
    dwGlobalVars: 0x16B7BE0,
    dwLocalPlayerController: 0x180AA20,
    dwLocalPlayerPawn: 0x16C2B18,
    dwPlantedC4: 0x181E988,
 
  
    dwForceForward: 0x16BBCB0,
    dwForceJump: 0x16BBF80,
    dwViewAngles: 0x187A9D0,
    dwViewMatrix: 0x1819D40,
}
 
struct Engine2DLL {
    dwBuildNumber: 0x48A344,
}
 
struct InputSystemDLL {
    dwInputSystem: 0x35760,
}
 
struct CBasePlayerPawn {
    m_pWeaponServices: 0x10A8,
    m_pItemServices: 0x10B0,
    m_vOldOrigin: 0x1224,
    m_pClippingWeapon: 0x12A8,
    m_bIsScoped: 0x13A0,
    m_bIsDefusing: 0x13A8,
    m_bIsGrabbingHostage: 0x13A9,
    m_iShotsFired: 0x1418,
    m_flFlashDuration: 0x1468,
    m_ArmorValue: 0x1508,
    m_angEyeAngles: 0x1510,
    m_iIDEntIndex: 0x153C,
    m_aimPunchCache: 0x1738,
}
 
struct CBaseEntity {
    m_pGameSceneNode: 0x310,
    m_iItemDefinitionIndex: 0x1BA,
    m_Item: 0x50,
    m_iTeamNum: 0x3BF,
    m_iHealth: 0x32C,
    m_lifeState: 0x330,
    m_hPawn: 0x60C,
    m_hPlayerPawn: 0x7EC,
    m_AttributeManager: 0x1040,
    m_iszPlayerName: 0x640,    
}
 
struct CItemServices {
    m_bHasDefuser: 0x40,
    m_bHasHelmet: 0x41,
}
 
struct CCSGameRules {
    m_bFreezePeriod: 0x30,
    m_bWarmupPeriod: 0x31,
    m_bHasMatchStarted: 0xA4,
    m_bBombPlanted: 0x9DD,
}
 
struct CPlantedC4 {
    m_nBombSite: 0xE84;
    m_flC4Blow: 0xEB0;
}
