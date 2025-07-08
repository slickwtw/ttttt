#pragma once

namespace Offsets {
    constexpr uintptr_t GWorld = 0x1078A7D8; // pointer to the game world

    constexpr uintptr_t FField_Next = 0x20;
    constexpr uintptr_t FField_Name = 0x28;
    constexpr uintptr_t FField_Flags = 0x2C;

    constexpr uintptr_t UClass_ClassDefaultObject = 0x110;
    constexpr uintptr_t UClass_ImplementedInterfaces = 0x1D0;

    constexpr uintptr_t UEnum_Names = 0x40;

    constexpr uintptr_t UFunction_FunctionFlags = 0xB0;
    constexpr uintptr_t UFunction_ExecFunction = 0xD8;

    constexpr uintptr_t Property_ElementSize = 0x34;
    constexpr uintptr_t Property_ArrayDim = 0x30;
    constexpr uintptr_t Property_Offset_Internal = 0x44;
    constexpr uintptr_t Property_PropertyFlags = 0x38;
    constexpr uintptr_t UPropertySize = 0x70;

    constexpr uintptr_t ArrayProperty_Inner = 0x70;
    constexpr uintptr_t SetProperty_ElementProp = 0x70;
    constexpr uintptr_t MapProperty_Base = 0x70;

    constexpr uintptr_t ULevel_Actors = 0x98;
    constexpr uintptr_t UDataTable_RowMap = 0x30;

    constexpr uintptr_t Text_TextSize = 0x18;
    constexpr uintptr_t Text_TextDataOffset = 0x0;
    constexpr uintptr_t Text_InTextDataStringOffset = 0x30;

    // Example player pawn tag container offset
    constexpr uintptr_t AFortPlayerPawnAthena_TagContainer = 0x19E0;
}
