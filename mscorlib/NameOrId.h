#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Resources
{
	class NameOrId : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		int id; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
