#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Threading
{
	class HostExecutionContext : public Object // 0x0
	{
	public:
		System::Object _state; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x18
}
