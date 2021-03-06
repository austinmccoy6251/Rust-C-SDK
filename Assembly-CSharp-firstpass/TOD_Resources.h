#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Mesh.h"

namespace rust 
{
	class TOD_Resources : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* Skybox; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* MoonLOD0; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* MoonLOD1; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* MoonLOD2; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* SkyLOD0; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* SkyLOD1; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* SkyLOD2; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* CloudsLOD0; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* CloudsLOD1; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* CloudsLOD2; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* StarsLOD0; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* StarsLOD1; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* StarsLOD2; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		int <ID_SunLightColor>k__BackingField; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonLightColor>k__BackingField; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_SunSkyColor>k__BackingField; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonSkyColor>k__BackingField; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_SunMeshColor>k__BackingField; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonMeshColor>k__BackingField; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_SunCloudColor>k__BackingField; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonCloudColor>k__BackingField; // 0x9c (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_FogColor>k__BackingField; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_GroundColor>k__BackingField; // 0xa4 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_AmbientColor>k__BackingField; // 0xa8 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_SunDirection>k__BackingField; // 0xac (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonDirection>k__BackingField; // 0xb0 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_LightDirection>k__BackingField; // 0xb4 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_LocalSunDirection>k__BackingField; // 0xb8 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_LocalMoonDirection>k__BackingField; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_LocalLightDirection>k__BackingField; // 0xc0 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_Contrast>k__BackingField; // 0xc4 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_Brightness>k__BackingField; // 0xc8 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_Fogginess>k__BackingField; // 0xcc (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_Directionality>k__BackingField; // 0xd0 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonHaloPower>k__BackingField; // 0xd4 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonHaloColor>k__BackingField; // 0xd8 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudSize>k__BackingField; // 0xdc (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudOpacity>k__BackingField; // 0xe0 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudCoverage>k__BackingField; // 0xe4 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudSharpness>k__BackingField; // 0xe8 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudDensity>k__BackingField; // 0xec (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudColoring>k__BackingField; // 0xf0 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudAttenuation>k__BackingField; // 0xf4 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudSaturation>k__BackingField; // 0xf8 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudScattering>k__BackingField; // 0xfc (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudBrightness>k__BackingField; // 0x100 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudMultiplier>k__BackingField; // 0x104 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudOffset>k__BackingField; // 0x108 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_CloudWind>k__BackingField; // 0x10c (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_StarSize>k__BackingField; // 0x110 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_StarBrightness>k__BackingField; // 0x114 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_StarVisibility>k__BackingField; // 0x118 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_SunMeshContrast>k__BackingField; // 0x11c (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_SunMeshBrightness>k__BackingField; // 0x120 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonMeshContrast>k__BackingField; // 0x124 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_MoonMeshBrightness>k__BackingField; // 0x128 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_kBetaMie>k__BackingField; // 0x12c (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_kSun>k__BackingField; // 0x130 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_k4PI>k__BackingField; // 0x134 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_kRadius>k__BackingField; // 0x138 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_kScale>k__BackingField; // 0x13c (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_World2Sky>k__BackingField; // 0x140 (size: 0x4, flags: 0x1, type: 0x8)
		int <ID_Sky2World>k__BackingField; // 0x144 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x148
}
