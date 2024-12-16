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
    ProcessCommandLine(int, char*)(arg1, arg2);
    struct SoundQueue* r3_1 = ZeroVisUnknown::operator new(ZeroVisUnknown*, long)(0x54);
    
    if (r3_1)
        r2 = GameVisWorld::GameVisWorld(GameVisWorld*, void*, int, char*)(r3_1, 0, 0, &msn_filename);
    
    struct starwars_TOC* r13;
    r13->GameVisWorld = r3_1;
    TRCManager::Init(TRCManager*)();
    OSReport("Starting Clonewars\n------------…", "SOUND ENGINE");
    OSReport("Memory initialized at start up =…", ZeroAllocatedBytes()());
    OneTimeInit()(ZeroFile::AddPath(ZeroFile*, char*, char)((char*)r2 - 0x7fa0, nullptr, ZeroFile::AddPath(ZeroFile*, char*, char)((char*)r2 - 0x7fa8, 1, ZeroFile::AddPath(ZeroFile*, char*, char)((char*)r2 - 0x7fb0, 1, ZeroFile::ClearPaths(ZeroFile*)()))));
    WinLoop()();
    CloseRecording()();
    LastInputs()();
    Input::Done(Input*)();
    USB_Close(int)(0xffffffff);
    LoadBar::Done(LoadBar*)();
    SoundEngine::Destroy(SoundEngine*)();
    Draw2DUtil::Done(Draw2DUtil*)();
    GameFeature::CleanupAll(GameFeature*)();
    Console::Done(Console*)();
    FontSys::Done(FontSys*)();
    ZeroRef::Release(ZeroRef*)(r13->GameVisWorld_myb);
    ZeroRef::Release(ZeroRef*)(r13->GameVisWorld);
    ZeroAllocator::GetGenericAllocator(ZeroAllocator*)();
    r13->GenericAllocator_1 = &sGenericAllocator_577;
    ZeroAllocator::GetGenericAllocator(ZeroAllocator*)();
    r13->GenericAllocator_2 = &sGenericAllocator_577;
    ZeroAllocator::GetGenericAllocator(ZeroAllocator*)();
    r13->GenericAllocator_3 = &sGenericAllocator_577;
    ZeroAllocator::GetGenericAllocator(ZeroAllocator*)();
    r13->GenericAllocator_4 = &sGenericAllocator_577;
    ZeroAllocator::GetGenericAllocator(ZeroAllocator*)();
    r13->GenericAllocator_5 = &sGenericAllocator_577;
    VarSys::Done(VarSys*)();
    return 0;
}
