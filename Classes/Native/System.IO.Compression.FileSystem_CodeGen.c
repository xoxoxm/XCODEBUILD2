#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::OpenRead(System.String)
extern void ZipFile_OpenRead_m82404BAA63D25E027D3D0A472103AA6C20EBCF83 (void);
// 0x00000002 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode)
extern void ZipFile_Open_m6273C047FE6C596112D88B4D7666268E897C7A0F (void);
// 0x00000003 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
extern void ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D (void);
// 0x00000004 System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipFileExtensions::CreateEntryFromFile(System.IO.Compression.ZipArchive,System.String,System.String)
extern void ZipFileExtensions_CreateEntryFromFile_m619C0ACEEDE17D2FCF20A6D6134B98CF1014091E (void);
// 0x00000005 System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipFileExtensions::DoCreateEntryFromFile(System.IO.Compression.ZipArchive,System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>)
extern void ZipFileExtensions_DoCreateEntryFromFile_m0B0768102927FBBB004A43ECE057BE6680B91F26 (void);
// 0x00000006 System.Void System.IO.Compression.ZipFileExtensions::ExtractToFile(System.IO.Compression.ZipArchiveEntry,System.String,System.Boolean)
extern void ZipFileExtensions_ExtractToFile_m2584E3670B741B08409D95BFB8ABC04AA92B49F2 (void);
static Il2CppMethodPointer s_methodPointers[6] = 
{
	ZipFile_OpenRead_m82404BAA63D25E027D3D0A472103AA6C20EBCF83,
	ZipFile_Open_m6273C047FE6C596112D88B4D7666268E897C7A0F,
	ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D,
	ZipFileExtensions_CreateEntryFromFile_m619C0ACEEDE17D2FCF20A6D6134B98CF1014091E,
	ZipFileExtensions_DoCreateEntryFromFile_m0B0768102927FBBB004A43ECE057BE6680B91F26,
	ZipFileExtensions_ExtractToFile_m2584E3670B741B08409D95BFB8ABC04AA92B49F2,
};
static const int32_t s_InvokerIndices[6] = 
{
	12780,
	11275,
	10618,
	10626,
	10078,
	10869,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule;
const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule = 
{
	"System.IO.Compression.FileSystem.dll",
	6,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
