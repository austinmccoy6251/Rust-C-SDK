#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Collections
{
	class Queue : public Object // 0x0
	{
	public:
		System::Object* _array; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _head; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _size; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int _tail; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int _growFactor; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int _version; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
