#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class CoClassAttribute : public Attribute // 0x0
	{
	public:
		System::Type* klass; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
