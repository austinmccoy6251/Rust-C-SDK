#pragma once

#include "..\UnityEngine\Rigidbody.h"

namespace rust 
{
	class RigidbodyLOD : public LODComponent // 0x28
	{
	public:
		UnityEngine::Rigidbody* rigidbody; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float Distance; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		int curlod; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		bool force; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool kinematic; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
