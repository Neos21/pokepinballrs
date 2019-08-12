#ifndef GUARD_VARIABLES_H
#define GUARD_VARIABLES_H

// Place all external variable declarations in this file

extern struct {u16 unk0[5]; u16 unkA[5];} gUnknown_086A6B14;
extern s8 gUnknown_02002850;
extern struct ToneData gUnknown_08532D6C[];
extern struct ToneData gUnknown_08533360[];
extern struct ToneData gUnknown_08533960[];
extern struct ToneData gUnknown_08533F60[];
extern u16 gUnknown_08527D22[];
extern u16 gUnknown_086BB910[][4];
extern struct {u8 unk0; s16 unk2;} gUnknown_086BB9B4[];
extern u16 gUnknown_08527D66[];
extern u8 gUnknown_02031AF0[][10];
extern u8 gUnknown_08527ED6[][10];
extern void (*const gUnknown_08527F08[])(void);
extern u16 gUnknown_0201A520[];
extern u16 gUnknown_0201AD20[];
extern u32 gUnknown_0201A500[];
extern u16 gUnknown_0201A920[];
extern u8 gUnknown_03000000[];
//extern ? gOamBuffer;
//extern ? IntrMain_Buffer;
extern u16 gUnknown_03005C00[0x600];
//extern ? SoundMainRAM_Buffer;
extern u16 sGbPlayerCurKeys;
extern u16 sGbPlayerPrevKeys;
//extern ? gUnknown_02002008;
extern u8 gUnknown_02002808[];
//extern ? gTitlescreen;
//extern ? gEraseSaveDataAccessStep;
//extern ? gEraseSaveDataAccessCounter;
//extern ? gEReaderAccessStep;
//extern ? gEReaderAccessCounter;
//extern ? gUnknown_020028A4;
//extern ? gUnknown_020028A5;
//extern ? gUnknown_02002958;
//extern ? gIntrTable;
//extern ? gMain;
//extern ? gUnknown_0200B3B8;
//extern ? gUnknown_0200FB98;
//extern ? gUnknown_0200FB9C;
//extern ? gUnknown_0200FBA0;
//extern ? gUnknown_02017BD0;
//extern ? gUnknown_02017BD4;
//extern ? gUnknown_02017BE0;
//extern ? gUnknown_02019BE0;
//extern ? gUnknown_02019BE4;
//extern ? gUnknown_02019BE8;
//extern ? gUnknown_02019BEC;
//extern ? gUnknown_02019BF0;
//extern ? gUnknown_02019BF4;
//extern ? gUnknown_02019BF8;
//extern ? gUnknown_02019BFC;
//extern ? gUnknown_02019C00;
//extern ? gUnknown_02019C04;
//extern ? gUnknown_02019C08;
//extern ? gGameBoyPlayerEnabled;
//extern ? gUnknown_02019C10;
//extern ? gAutoDisplayTitlescreenMenu;
//extern ? gUnknown_0201C190;
//extern ? gUnknown_0202BE00;
//extern ? gUnknown_202BE24;
//extern ? gUnknown_0202C588;
//extern ? gUnknown_020314E0;
//extern ? gUnknown_02031520;
//extern ? gSoundInfo;
//extern ? gPokemonCryMusicPlayers;
//extern ? gMPlayJumpTable;
//extern ? gCgbChans;
//extern ? gPokemonCryTracks;
//extern ? gPokemonCrySong;
//extern ? gMPlayInfo_BGM;
//extern ? gMPlayMemAccArea;
extern const u16 gWildMonLocations[][2][8];
extern const s16 gUnknown_08055C44[];
extern const struct OamData gEmptyOamData[128];
extern const u8 gUnknown_08058048[];
extern const u8 gUnknown_08058248[];
extern const u8 gUnknown_0805C248[];
extern StateFunc gTitlescreenStateFuncs[];
//extern ? gIntroCopyright_Gfx;
//extern ? gIntroCopyright_Pal;
//extern ? gIntroScene1Sprites_Pals;
//extern ? gIntroScene1Sprites_Gfx;
extern const u8 gGBAButtonIcons_Pals[];
extern const u8 gOptionsSprites_Gfx[];
extern const IntrFunc gIntrTableTemplate[14];
//extern ? gMainFuncs;
//extern ? gUnknown_086A4B08;
//extern ? gUnknown_086A4B14;
//extern ? gUnknown_086A4B20;
//extern ? gUnknown_086A4B30;
//extern ? gUnknown_086A4B40;
//extern ? gUnknown_086A4B54;
//extern ? gUnknown_086A4B70;
//extern ? gUnknown_086A4B80;
//extern ? gUnknown_086A4B94;
//extern ? gUnknown_086A4BAC;
//extern ? gUnknown_086A4BC8;
//extern ? gUnknown_086A4BE8;
//extern ? gUnknown_086A4BFC;
//extern ? gUnknown_086A4C18;
//extern ? gUnknown_086A4C2C;
extern const int *gUnknown_086A4C44[];
extern const s16 gUnknown_086A964C[];
extern const s8 gUnknown_086A9662[];
extern const s8 gUnknown_086A9666[6][2];
extern const s8 gUnknown_086A9672[9][2];
extern const u16 gUnknown_086A96A4[];
extern const u16 gUnknown_086A96D4[];
extern const struct SpriteSet *const gUnknown_086A96E4[];
extern const u8 *const gUnknown_086A96F8[7];
extern const u8 *const gUnknown_086A9714[];
extern const s8 gUnknown_086A9748[];
extern const u8 *const gUnknown_086A975C[7];
extern const u8 *const gUnknown_086A9778[];
extern const s16 gEReaderAccessButtonSequence[];
//extern ? gMonHatchSpriteGroupPals;
//extern ? gMonPortraitGroupPals;
//extern ? gMonHatchSpriteGroupGfx;
//extern ? gMonPortraitGroupGfx;
//extern ? gMonHatchSpriteGroup0_Gfx;
//extern ? gMonHatchSpriteGroup1_Gfx;
//extern ? gMonHatchSpriteGroup2_Gfx;
//extern ? gMonHatchSpriteGroup3_Gfx;
//extern ? gMonHatchSpriteGroup4_Gfx;
//extern ? gMonHatchSpriteGroup5_Gfx;
extern struct Coord16 gUnknown_086A6B28[];
extern const struct SpriteSet *const gUnknown_086A6AD4[];
extern void (*gFieldSelectStateFuncs[])(void);
extern u8 gUnknown_080A2400[];
extern u8 gFieldSelectWindow_Gfx[];
//extern ? gUnknown_080A4000;
extern u8 gFieldSelectFrameShadowTilemap[];
extern u8 gFieldSelectMiniFields_Gfx[];
//extern ? gUnknown_080A8020;
extern u8 gFieldSelectWindowTilemap[];
extern u16 gFieldSelectBGPals[];
extern u16 gFieldSelectSpritePals[];
extern u8 gFieldSelectSpriteGfx[];
extern const u8 gTitlescreenBgTilemap[];
extern const u16 gTitlescreenBg_Pals[];
extern const u8 gTitlescreenBg_Gfx[];
extern const u8 gTitlescreenSpritesNoSavedGame_Gfx[];
//extern ? gUnknown_081306C0;
extern const u8 gTitlescreenSpritesSavedGame_Gfx[];
//extern ? gUnknown_081376E0;
extern const u16 gTitlescreenSprites_Pals[];
//extern ? gMonHatchSpriteGroup0_Pals;
//extern ? gMonHatchSpriteGroup1_Pals;
//extern ? gMonHatchSpriteGroup2_Pals;
//extern ? gMonHatchSpriteGroup3_Pals;
//extern ? gMonHatchSpriteGroup4_Pals;
//extern ? gMonHatchSpriteGroup5_Pals;
//extern ? gMonPortraitsGroup0_Gfx;
//extern ? gMonPortraitsGroup1_Gfx;
//extern ? gMonPortraitsGroup2_Gfx;
//extern ? gMonPortraitsGroup3_Gfx;
//extern ? gMonPortraitsGroup4_Gfx;
//extern ? gMonPortraitsGroup5_Gfx;
//extern ? gMonPortraitsGroup6_Gfx;
//extern ? gMonPortraitsGroup7_Gfx;
//extern ? gMonPortraitsGroup8_Gfx;
//extern ? gMonPortraitsGroup9_Gfx;
//extern ? gMonPortraitsGroup10_Gfx;
//extern ? gMonPortraitsGroup11_Gfx;
//extern ? gMonPortraitsGroup12_Gfx;
//extern ? gMonPortraitsGroup13_Gfx;
//extern ? gMonPortraitsGroup0_Pals;
//extern ? gMonPortraitsGroup1_Pals;
//extern ? gMonPortraitsGroup2_Pals;
//extern ? gMonPortraitsGroup3_Pals;
//extern ? gMonPortraitsGroup4_Pals;
//extern ? gMonPortraitsGroup5_Pals;
//extern ? gMonPortraitsGroup6_Pals;
//extern ? gMonPortraitsGroup7_Pals;
//extern ? gMonPortraitsGroup8_Pals;
//extern ? gMonPortraitsGroup9_Pals;
//extern ? gMonPortraitsGroup10_Pals;
//extern ? gMonPortraitsGroup11_Pals;
//extern ? gMonPortraitsGroup12_Pals;
//extern ? gMonPortraitsGroup13_Pals;
extern struct Coord16 gUnknown_086A9684[];
extern struct Coord16 gUnknown_086A9694[];
extern struct Coord16 gUnknown_086A96AC[];
extern struct Coord16 gUnknown_086A96C0[];

#endif  // GUARD_VARIABLES_H
