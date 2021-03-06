#pragma once

#include "..\UnityEngine\LayerMask.h"

namespace rust 
{
	class SocketMod_SphereCheck : public SocketMod // 0xa8
	{
	public:
		float sphereRadius; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask layerMask; // 0xac (size: 0x4, flags: 0x6, type: 0x11)
		bool wantsCollide; // 0xb0 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xb8
}
