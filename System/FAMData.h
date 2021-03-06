#pragma once

#include "..\System\IO\FileSystemWatcher.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\FAMRequest.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace IO
{
	class FAMData : public Object // 0x0
	{
	public:
		System::IO::FileSystemWatcher* FSW; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* Directory; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* FileMask; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Collections::Hashtable* SubDirs; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		bool IncludeSubdirs; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool Enabled; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		System::IO::FAMRequest Request; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
