#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "pseudoc_routines.h"
#include "types_file.h"
#define nullptr NULL
#define bool int
#define true 1
#define false 0

extern void data_80380000;
extern void data_80310000;
extern char msn_filename;
extern char const global_1441[0xa];
extern char const global_1442[0xa];
extern char const global_1446[0x11];
extern char const global_1447[0xc];
extern char const global_1449[0xd];
extern char const global_145[0x27];
extern char const global_1451[0x25];
extern char const global_1346[0xc];
extern char sGenericAllocator_577;
int32_t main(int32_t arg1, int32_t* arg2)
{
    void* r2;
    strncpy(&msn_filename, (char*)r2 - 0x7fd8, 0x20);
    ProcessCommandLine__FiPPc(arg1, arg2);
    struct TextureObject_1* textureObject = __nw__14ZeroVisUnknownFUl(0x54);
    
    if (textureObject)
        r2 = __ct__12GameVisWorldFPviPc(textureObject, 0, 0, &msn_filename);
    
    void* r13;
    *(uint32_t*)((char*)r13 - 0x4a00) = textureObject;
    Init__10TRCManagerFv();
    OSReport("Starting Clonewars\n------------…");
    OSReport("Memory initialized at start up =…", ZeroAllocatedBytes__Fv());
    ClearPaths__8ZeroFileFv();
    AddPath__8ZeroFileFPCcb((char*)r2 - 0x7fb0, 1);
    AddPath__8ZeroFileFPCcb((char*)r2 - 0x7fa8, 1);
    AddPath__8ZeroFileFPCcb((char*)r2 - 0x7fa0, 0);
    OneTimeInit__Fv();
    WinLoop__Fv();
    CloseRecording__Fv();
    LastInputs__Fv();
    Done__5InputFv();
    USB_Close__Fi(0xffffffff);
    Done__7LoadBarFv();
    Destroy__11SoundEngineFv();
    Done__10Draw2DUtilFv();
    CleanupAll__11GameFeatureFv();
    Done__7ConsoleFv();
    Done__7FontSysFv();
    Release__7ZeroRefFv(*(uint32_t*)((char*)r13 - 0x4a04));
    Release__7ZeroRefFv(*(uint32_t*)((char*)r13 - 0x4a00));
    GetGenericAllocator__13ZeroAllocatorFv();
    *(uint32_t*)((char*)r13 - 0x493c) = &sGenericAllocator_577;
    GetGenericAllocator__13ZeroAllocatorFv();
    *(uint32_t*)((char*)r13 - 0x3a30) = &sGenericAllocator_577;
    GetGenericAllocator__13ZeroAllocatorFv();
    *(uint32_t*)((char*)r13 - 0x3900) = &sGenericAllocator_577;
    GetGenericAllocator__13ZeroAllocatorFv();
    *(uint32_t*)((char*)r13 - 0x44ac) = &sGenericAllocator_577;
    GetGenericAllocator__13ZeroAllocatorFv();
    *(uint32_t*)((char*)r13 - 0x37fc) = &sGenericAllocator_577;
    Done__6VarSysFv();
    return 0;
}
