// FrezzyHook d1mp
// 2025-10-15 07:09:44.993313600 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: networksystem.dll
        // Class count: 1
        // Enum count: 1
        pub mod networksystem_dll {
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum OutOfPVSUpdates_t {
                OOPVSUpdates_OptOut = 0x0,
                OOPVSUpdates_OptIn = 0x1,
                OOPVSUpdates_Default = 0x2,
                OOPVSUpdates_Count = 0x3
            }
            // Parent: None
            // Field count: 1
            pub mod ChangeAccessorFieldPathIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
        }
    }
}
