#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace ProtoBuf
{
	class PlayerNameID : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* username; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		unsigned __int64 userid; // 0x18 (size: 0x8, flags: 0x86, type: 0xb)
		bool ShouldPool; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
