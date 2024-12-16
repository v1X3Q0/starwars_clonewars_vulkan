
#ifndef BN_TYPE_PARSER
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>

#define __packed
#define __noreturn
#define __convention(name)
#define __syscall(number)
#define __offset(...)
#define __padding
#define __named(name)
#define __inherited
#define __base(name, offset)
#define __ptr_offset(offset)
#define __data_var_refs
#define __vtable
#define __pure
#define __ptr_width(width)
#define __ptr8
#define __ptr16
// __ptr32 and __ptr64 are real keywords on MSVC
// #define __ptr32
// #define __ptr64
#define __based(...)
typedef uint16_t wchar16;
typedef uint32_t wchar32;
#endif

enum e_machine
{
    EM_NONE = 0x0,
    EM_M32 = 0x1,
    EM_SPARC = 0x2,
    EM_386 = 0x3,
    EM_68K = 0x4,
    EM_88K = 0x5,
    EM_860 = 0x7,
    EM_MIPS = 0x8,
    EM_S370 = 0x9,
    EM_MIPS_RS3_LE = 0xa,
    EM_PARISC = 0xf,
    EM_VPP500 = 0x11,
    EM_SPARC32PLUS = 0x12,
    EM_960 = 0x13,
    EM_PPC = 0x14,
    EM_PPC64 = 0x15,
    EM_S390 = 0x16,
    EM_V800 = 0x24,
    EM_FR20 = 0x25,
    EM_RH32 = 0x26,
    EM_RCE = 0x27,
    EM_ARM = 0x28,
    EM_FAKE_ALPHA = 0x29,
    EM_SH = 0x2a,
    EM_SPARCV9 = 0x2b,
    EM_TRICORE = 0x2c,
    EM_ARC = 0x2d,
    EM_H8_300 = 0x2e,
    EM_H8_300H = 0x2f,
    EM_H8S = 0x30,
    EM_H8_500 = 0x31,
    EM_IA_64 = 0x32,
    EM_MIPS_X = 0x33,
    EM_COLDFIRE = 0x34,
    EM_68HC12 = 0x35,
    EM_MMA = 0x36,
    EM_PCP = 0x37,
    EM_NCPU = 0x38,
    EM_NDR1 = 0x39,
    EM_STARCORE = 0x3a,
    EM_ME16 = 0x3b,
    EM_ST100 = 0x3c,
    EM_TINYJ = 0x3d,
    EM_X86_64 = 0x3e,
    EM_PDSP = 0x3f,
    EM_FX66 = 0x42,
    EM_ST9PLUS = 0x43,
    EM_ST7 = 0x44,
    EM_68HC16 = 0x45,
    EM_68HC11 = 0x46,
    EM_68HC08 = 0x47,
    EM_68HC05 = 0x48,
    EM_SVX = 0x49,
    EM_ST19 = 0x4a,
    EM_VAX = 0x4b,
    EM_CRIS = 0x4c,
    EM_JAVELIN = 0x4d,
    EM_FIREPATH = 0x4e,
    EM_ZSP = 0x4f,
    EM_MMIX = 0x50,
    EM_HUANY = 0x51,
    EM_PRISM = 0x52,
    EM_AVR = 0x53,
    EM_FR30 = 0x54,
    EM_D10V = 0x55,
    EM_D30V = 0x56,
    EM_V850 = 0x57,
    EM_M32R = 0x58,
    EM_MN10300 = 0x59,
    EM_MN10200 = 0x5a,
    EM_PJ = 0x5b,
    EM_OPENRISC = 0x5c,
    EM_ARC_A5 = 0x5d,
    EM_XTENSA = 0x5e,
    EM_ALTERA_NIOS2 = 0x71,
    EM_AARCH64 = 0xb7,
    EM_TILEPRO = 0xbc,
    EM_MICROBLAZE = 0xbd,
    EM_TILEGX = 0xbf,
    EM_NUM = 0xc0
};

enum e_type
{
    ET_NONE = 0x0,
    ET_REL = 0x1,
    ET_EXEC = 0x2,
    ET_DYN = 0x3,
    ET_CORE = 0x4,
    ET_NUM = 0x5
};

enum p_flags
{
    PF_X = 0x1,
    PF_W = 0x2,
    PF_R = 0x4
};

enum p_type
{
    PT_NULL = 0x0,
    PT_LOAD = 0x1,
    PT_DYNAMIC = 0x2,
    PT_INTERP = 0x3,
    PT_NOTE = 0x4,
    PT_SHLIB = 0x5,
    PT_PHDR = 0x6,
    PT_TLS = 0x7,
    PT_NUM = 0x8,
    PT_LOOS = 0x60000000,
    PT_GNU_EH_FRAME = 0x6474e550,
    PT_GNU_STACK = 0x6474e551,
    PT_GNU_RELRO = 0x6474e552,
    PT_GNU_PROPERTY = 0x6474e553,
    PT_LOSUNW = 0x6ffffffa,
    PT_SUNWBSS = 0x6ffffffb,
    PT_SUNWSTACK = 0x6ffffffa,
    PT_MIPS_REGINFO = 0x70000000,
    PT_MIPS_RTPROC = 0x70000001,
    PT_MIPS_OPTIONS = 0x70000002,
    PT_MIPS_ABIFLAGS = 0x70000003
};

enum sh_flags
{
    SHF_WRITE = 0x1,
    SHF_ALLOC = 0x2,
    SHF_EXECINSTR = 0x4,
    SHF_MERGE = 0x10,
    SHF_STRINGS = 0x20,
    SHF_INFO_LINK = 0x40,
    SHF_LINK_ORDER = 0x80,
    SHF_OS_NONCONFORMING = 0x100,
    SHF_GROUP = 0x200,
    SHF_TLS = 0x400,
    SHF_COMPRESSED = 0x800,
    SHF_MASKOS = 0xff00000,
    SHF_MASKPROC = 0xf0000000
};

enum sh_type
{
    SHT_NULL = 0x0,
    SHT_PROGBITS = 0x1,
    SHT_SYMTAB = 0x2,
    SHT_STRTAB = 0x3,
    SHT_RELA = 0x4,
    SHT_HASH = 0x5,
    SHT_DYNAMIC = 0x6,
    SHT_NOTE = 0x7,
    SHT_NOBITS = 0x8,
    SHT_REL = 0x9,
    SHT_SHLIB = 0xa,
    SHT_DYNSYM = 0xb,
    SHT_LOUSER = 0x80000000,
    SHT_HIUSER = 0xffffffff,
    SHT_LOPROC = 0x70000000,
    SHT_HIPROC = 0x7fffffff
};

struct Elf32_Ident
{
    char signature[0x4];
    uint8_t file_class;
    uint8_t encoding;
    uint8_t version;
    uint8_t os;
    uint8_t abi_version;
    char pad[0x7];
};

struct Elf32_Header
{
    struct Elf32_Ident ident;
    enum e_type type;
    enum e_machine machine;
    uint32_t version;
    void (* entry)();
    uint32_t program_header_offset;
    uint32_t section_header_offset;
    uint32_t flags;
    uint16_t header_size;
    uint16_t program_header_size;
    uint16_t program_header_count;
    uint16_t section_header_size;
    uint16_t section_header_count;
    uint16_t string_table;
};

struct Elf32_ProgramHeader
{
    enum p_type type;
    uint32_t offset;
    uint32_t virtual_address;
    uint32_t physical_address;
    uint32_t file_size;
    uint32_t memory_size;
    enum p_flags flags;
    uint32_t align;
};

struct Elf32_SectionHeader
{
    uint32_t name;
    enum sh_type type;
    enum sh_flags flags;
    uint32_t address;
    uint32_t offset;
    uint32_t size;
    uint32_t link;
    uint32_t info;
    uint32_t align;
    uint32_t entry_size;
};

struct SoundQueue
{
	char __padding0[1];
	char __padding1[1];
	char __padding2[2];
    void* field_04;
    int32_t field_08;
    void* field_0c;
    void* field_10;
    void* field_14;
    void* field_18;
    int32_t field_1c;
    int32_t field_20;
    int32_t field_24;
    void* field_28;
    int32_t field_2c;
    int32_t field_30;
    int32_t field_34;
    void* field_38;
	char __padding60[1];
	char __padding61[1];
	char __padding62[1];
	char __padding63[1];
    int32_t field_40;
    int32_t field_44;
    char field_48;
    int32_t field_4c;
    int32_t field_50;
};

struct String
{
    struct StringMetadata* string_data;
};

struct StringBuffer
{
    void* buffer_data;
};

struct StringMetadata
{
	char __padding0[8];
    void* metadata_data;
	char __padding12[4];
    int32_t metadata_length;
};

struct __ptr_offset(0x8000) starwars_GLOB __packed
{
    char buf6564c[0x9e0];
    int32_t buf1w;
    char buf10c[0x8];
    int32_t buf2w;
    char buf5509c[0x7610];
};

struct __ptr_offset(0x7000) starwars_TOC __packed
{
    char buf5649c[0x25c8];
    void* GameKeyHandler_RenderBoxes;
    void* GameKeyHandler_RenderBsp;
    char buf9324c[0x4];
    void* GameKeyHandler_RenderGeometry;
    char buf7223c[0x24];
    void* GameVisWorld_myb;
    void* GameVisWorld;
    char buf4c[0xc0];
    void* GenericAllocator_1;
    char buf3106c[0x80];
    void* ZeroSurface;
    char buf914c[0x2ac];
    void* SoundEngineQueue;
    void* SoundEngineQueue_1;
    void* SoundEngineQueue_ref;
    char buf2171c[0x150];
    void* GenericAllocator_4;
    char buf3528c[0x5b0];
    void* tlbflusher;
    char buf3094c[0x44];
    int32_t tlbdirty;
    char buf8871c[0x2ac];
    void (* mission)();
    char buf5c[0x1cc];
    void* GenericAllocator_2;
    char buf6c[0x12c];
    void* GenericAllocator_3;
    char buf4679c[0x9c];
    void* SoundEngine;
    char buf5951c[0x60];
    void* GenericAllocator_5;
    char buf1864c[0x38c];
    char buf8c[0x346c];
};

struct struct_1
{
    int32_t field_00;
	char __padding4[24];
    struct struct_2* field_1c;
};

struct struct_10
{
    struct struct_11* field_00;
};

struct struct_11
{
	char __padding0[16];
    int32_t field_10;
};

struct struct_12
{
    struct struct_13* field_00;
};

struct struct_13
{
	char __padding0[8];
    void* field_08;
    int32_t field_0c;
    int32_t field_10;
};

struct struct_14
{
    void* field_00;
};

struct struct_15
{
    struct struct_16* field_00;
};

struct struct_16
{
    char field_00;
    int32_t field_04;
    void* field_08;
};

struct struct_17
{
    void* field_00;
};

struct struct_18
{
    void* field_00;
};

struct struct_19
{
    char field_00;
    char field_01;
    char field_02;
};

struct struct_2
{
    int32_t field_00;
};

struct struct_20
{
	char __padding0[12];
    int32_t field_0c;
	char __padding16[32];
    int32_t field_30;
    int32_t field_34;
    int32_t field_38;
};

struct struct_21
{
	char __padding0[12];
    int32_t field_0c;
	char __padding16[32];
    int32_t field_30;
    int32_t field_34;
    int32_t field_38;
};

struct struct_22
{
	char __padding0[8];
    int32_t field_08;
	char __padding12[8];
    int32_t field_14;
    int32_t field_18;
    void* field_1c;
    void* field_20;
    void* field_24;
    int32_t field_28;
	char __padding44[4];
    void* field_30;
};

struct struct_23
{
    int32_t field_00;
};

struct struct_24
{
    char field_00;
    char field_01;
    char field_02;
    char field_03;
    char field_04;
    char field_05;
    char field_06;
    char field_07;
    char field_08;
    char field_09;
    char field_0a;
    char field_0b;
    char field_0c;
    char field_0d;
    char field_0e;
    char field_0f;
};

struct struct_25
{
    int32_t field_00;
    int32_t field_04;
	char __padding8[4];
    void* field_0c;
    int32_t field_10;
    int32_t field_14;
    void* field_18;
    struct struct_26* field_1c;
	char __padding32[16];
    int32_t field_30;
};

struct struct_26
{
    struct struct_25* field_00;
    int32_t field_04;
    void* field_08;
	char __padding12[4];
    void* field_10;
    int32_t field_14;
    int32_t field_18;
	char __padding28[4];
    int32_t field_20;
	char __padding36[4];
    int32_t field_28;
	char __padding44[16];
    void* field_3c;
	char __padding64[4];
    int32_t field_44;
	char __padding72[28];
    int32_t field_64;
	char __padding104[4];
    int32_t field_6c;
	char __padding112[12];
    int32_t field_7c;
	char __padding128[64];
	char __padding192[64];
	char __padding256[64];
	char __padding320[64];
	char __padding384[64];
	char __padding448[64];
	char __padding512[64];
	char __padding576[64];
	char __padding640[64];
	char __padding704[64];
	char __padding768[64];
	char __padding832[64];
	char __padding896[64];
	char __padding960[64];
	char __padding1024[64];
	char __padding1088[64];
	char __padding1152[64];
	char __padding1216[64];
	char __padding1280[64];
	char __padding1344[64];
	char __padding1408[64];
	char __padding1472[64];
	char __padding1536[64];
	char __padding1600[64];
	char __padding1664[64];
	char __padding1728[64];
	char __padding1792[64];
	char __padding1856[64];
	char __padding1920[64];
	char __padding1984[64];
	char __padding2048[64];
	char __padding2112[64];
	char __padding2176[64];
	char __padding2240[64];
	char __padding2304[64];
	char __padding2368[64];
	char __padding2432[64];
	char __padding2496[64];
	char __padding2560[64];
	char __padding2624[64];
	char __padding2688[64];
	char __padding2752[64];
	char __padding2816[64];
	char __padding2880[64];
	char __padding2944[64];
	char __padding3008[64];
	char __padding3072[64];
	char __padding3136[64];
	char __padding3200[64];
	char __padding3264[64];
	char __padding3328[64];
	char __padding3392[64];
	char __padding3456[64];
	char __padding3520[64];
	char __padding3584[64];
	char __padding3648[64];
	char __padding3712[64];
	char __padding3776[64];
	char __padding3840[64];
	char __padding3904[64];
	char __padding3968[64];
	char __padding4032[64];
	char __padding4096[64];
	char __padding4160[64];
	char __padding4224[64];
	char __padding4288[64];
	char __padding4352[64];
	char __padding4416[64];
	char __padding4480[64];
	char __padding4544[64];
	char __padding4608[64];
	char __padding4672[64];
	char __padding4736[64];
	char __padding4800[64];
	char __padding4864[64];
	char __padding4928[64];
	char __padding4992[64];
	char __padding5056[64];
	char __padding5120[64];
	char __padding5184[64];
	char __padding5248[64];
	char __padding5312[64];
	char __padding5376[64];
	char __padding5440[64];
	char __padding5504[64];
	char __padding5568[64];
	char __padding5632[64];
	char __padding5696[64];
	char __padding5760[44];
    int32_t field_16ac;
    int16_t field_16b0;
    int32_t field_16b4;
};

struct struct_27
{
    char field_00;
};

struct struct_28
{
	char __padding0[8];
    int32_t field_08;
	char __padding12[8];
    int32_t field_14;
    void* field_18;
    void* field_1c;
    void* field_20;
    void* field_24;
    int32_t field_28;
    int32_t field_2c;
    int32_t field_30;
};

struct struct_29
{
    char field_00;
    __padding char _1[0xfffffffd];
	char __padding4294967294[1];
    char field_ffffffff;
};

struct struct_3
{
    char field_00;
};

struct struct_30
{
    char field_00;
};

struct struct_31
{
	char __padding0[12];
    void* field_0c;
};

struct struct_32
{
	char __padding0[12];
    void* field_0c;
};

struct struct_33
{
    int32_t field_00;
    int32_t field_04;
    void* field_08;
	char __padding12[4];
    struct struct_34* field_10;
};

struct struct_34
{
	char __padding0[8];
    struct struct_35* field_08;
};

struct struct_35
{
	char __padding0[16];
    int32_t field_10;
};

struct struct_36
{
    int32_t field_00;
    void* field_04;
    struct struct_37* field_08;
	char __padding12[12];
    char field_18;
};

struct struct_37
{
	char __padding0[4];
    int32_t field_04;
    struct struct_38* field_08;
};

struct struct_38
{
	char __padding0[12];
    int32_t field_0c;
};

struct struct_4
{
    void* field_00;
};

struct struct_40
{
    char field_00;
    char field_01;
    void* field_04;
};

struct struct_41
{
    int32_t field_00;
    int32_t field_04;
    void* field_08;
	char __padding12[4];
    struct struct_42* field_10;
};

struct struct_42
{
	char __padding0[8];
    struct struct_43* field_08;
};

struct struct_43
{
	char __padding0[16];
    int32_t field_10;
};

struct struct_44
{
	char __padding0[4];
    int32_t field_04;
    struct struct_45* field_08;
};

struct struct_45
{
	char __padding0[12];
    int32_t field_0c;
};

struct struct_46
{
    int32_t field_00;
    int32_t field_04;
};

struct struct_47
{
    int32_t field_00;
};

struct struct_48
{
    int32_t field_00;
};

struct struct_49
{
    int32_t field_00;
};

struct struct_5
{
    int32_t field_00;
};

struct struct_50
{
    int32_t field_00;
};

struct struct_51
{
    int32_t field_00;
};

struct struct_52
{
    int32_t field_00;
};

struct struct_53
{
    void* field_00;
};

struct struct_54
{
    int32_t field_00;
};

struct struct_55
{
    int32_t field_00;
    int16_t field_04;
	char __padding6[2];
    char field_08;
	char __padding9[1];
    char field_0a;
	char __padding12[12];
    int32_t field_18;
    void* field_1c;
	char __padding32[4];
    int32_t field_24;
    int32_t field_28;
	char __padding44[8];
    int32_t field_34;
	char __padding56[8];
	char __padding64[4];
    int32_t field_44;
};

struct struct_56
{
    int32_t field_00;
    int16_t field_04;
	char __padding6[2];
    char field_08;
    char field_09;
    char field_0a;
	char __padding12[12];
    int32_t field_18;
    int32_t field_1c;
	char __padding32[4];
    int32_t field_24;
    int32_t field_28;
	char __padding44[8];
    int32_t field_34;
    int32_t field_38;
	char __padding60[4];
	char __padding64[8];
    int32_t field_48;
};

struct struct_6
{
    struct struct_7* field_00;
};

struct struct_7
{
	char __padding0[8];
    int32_t field_08;
};

struct struct_8
{
    struct struct_9* field_00;
};

struct struct_9
{
	char __padding0[8];
    int32_t field_08;
};

