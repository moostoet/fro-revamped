#ifndef GUARD_SCRIPT_MENU_H
#define GUARD_SCRIPT_MENU_H

#include "global.h"
#include "list_menu.h"

// The default size the stack for dynamic multichoice is initialized to
// If you try to push an element when the stack is full, it will be reallocated
// With increasing capacity of MULTICHOICE_DYNAMIC_STACK_INC

#define MULTICHOICE_DYNAMIC_STACK_SIZE 5
#define MULTICHOICE_DYNAMIC_STACK_INC 5
#define MAX_MULTICHOICE_WIDTH 28

extern const u8 *const gStdStringPtrs[];

struct DynamicMultichoiceStack
{
    s32 top;
    u32 capacity;
    struct ListMenuItem *elements;
};

void MultichoiceDynamic_InitStack(u32 capacity);
void MultichoiceDynamic_ReallocStack(u32 newCapacity);
bool32 MultichoiceDynamic_StackFull(void);
bool32 MultichoiceDynamic_StackEmpty(void);
u32 MultichoiceDynamic_StackSize(void);
void MultichoiceDynamic_PushElement(struct ListMenuItem item);
struct ListMenuItem *MultichoiceDynamic_PopElement(void);
struct ListMenuItem *MultichoiceDynamic_PeekElement(void);
struct ListMenuItem *MultichoiceDynamic_PeekElementAt(u32 index);
void MultichoiceDynamic_DestroyStack(void);
bool8 ScriptMenu_MultichoiceDynamic(u8 left, u8 top, u8 argc, struct ListMenuItem *items, bool8 ignoreBPress, u8 maxBeforeScroll, u32 initialRow, u32 callbackSet);
int DisplayTextAndGetWidth(const u8 *str, int prevWidth);
int ConvertPixelWidthToTileWidth(int width);
int ScriptMenu_AdjustLeftCoordFromWidth(int left, int width);

bool8 ScriptMenu_Multichoice(u8 left, u8 top, u8 var3, u8 var4);
bool8 ScriptMenu_MultichoiceWithDefault(u8 left, u8 top, u8 var3, u8 var4, u8 var5);
bool8 ScriptMenu_YesNo(u8 var1, u8 var2);
bool8 ScriptMenu_MultichoiceGrid(u8 left, u8 top, u8 multichoiceId, u8 a4, u8 columnCount);
bool8 ScriptMenu_ShowPokemonPic(u16 var1, u8 var2, u8 var3);
bool8 CreatePCMenu(void);
void ScriptMenu_DisplayPCStartupPrompt(void);

bool8 (*ScriptMenu_HidePokemonPic(void))(void);
void QL_DestroyAbortedDisplay(void);
void PicboxCancel(void);

#endif //GUARD_SCRIPT_MENU_H
