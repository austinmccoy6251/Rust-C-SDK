#pragma once

#include "..\System\Reflection\EventInfo\AddEventAdapter.h"

namespace System
{
	namespace Reflection
{
	class EventInfo : public MemberInfo // 0x0
	{
	public:
		System::Reflection::EventInfo::AddEventAdapter* cached_add_event; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
