#pragma once

#include "types_file.h"

int32_t main(int32_t arg1, struct struct_197* arg2);
void strncpy(void* arg1, void* arg2, int32_t arg3);
void ProcessCommandLine__FiPPc(int32_t arg1, struct struct_197* arg2);
int32_t __nw__14ZeroVisUnknownFUl(int32_t size);
struct TextureObject_1* __ct__12GameVisWorldFPviPc(struct TextureObject_1* textureObject, int32_t textureWidth, int32_t textureHeight, int32_t renderFlags);
int32_t Init__10TRCManagerFv();
int32_t AddType__11MemProfilerFUiPCc(int32_t memoryUsage, char* component) __pure;
void* OSReport(char* format, ...);
int32_t ZeroAllocatedBytes__Fv();
int32_t ClearPaths__8ZeroFileFv();
void* AddPath__8ZeroFileFPCcb(char* inputPath, int32_t flags);
int32_t OneTimeInit__Fv();
void WinLoop__Fv();
int32_t* CloseRecording__Fv();
void* LastInputs__Fv();
int32_t Done__5InputFv();
void USB_Close__Fi(int32_t arg1);
struct SceneManager* Done__7LoadBarFv();
int32_t Start__11MemProfilerFPCcUi() __pure;
int32_t Destroy__11SoundEngineFv();
int32_t End__11MemProfilerFv() __pure;
struct SceneManager* Done__10Draw2DUtilFv();
struct struct_66* CleanupAll__11GameFeatureFv();
int32_t Done__7ConsoleFv();
int32_t Done__7FontSysFv();
int32_t Done__10TRCManagerFv() __pure;
int32_t Release__7ZeroRefFv(struct SceneManager* arg1);
int32_t GetGenericAllocator__13ZeroAllocatorFv();
int32_t Done__6VarSysFv();
int32_t gcReportRubbish__Fv() __pure;
