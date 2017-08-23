#pragma once

#include "SpawnFilter.h"
#include "GrassMeshType.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class GrassMesh : public ScriptableObject // 0x18
	{
	public:
		SpawnFilter* Filter; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		GrassMeshType MeshType; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		float Width; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float Height; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float WidthRandomness; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float HeightRandomness; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float SizeRandomness; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float Twist; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float Skew; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float Extent; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float Offset; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float ColorRandomness; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color ColorRandomA; // 0x4c (size: 0x10, flags: 0x6, type: 0x11)
		float ColorRandomAScale; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float ColorRandomAOffset; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color ColorRandomB; // 0x64 (size: 0x10, flags: 0x6, type: 0x11)
		float ColorRandomBScale; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float ColorRandomBOffset; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x80
}