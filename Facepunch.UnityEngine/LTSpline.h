#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class LTSpline : public Object // 0x0
	{
	public:
		UnityEngine::Vector3* pts; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* ptsAdj; // 0x18 (size: 0x8, flags: 0x86, type: 0x1d)
		float distance; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		bool constantSpeed; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		int ptsAdjLength; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		bool orientToPath; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		bool orientToPath2d; // 0x2d (size: 0x1, flags: 0x6, type: 0x2)
		int numSections; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int currPt; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}