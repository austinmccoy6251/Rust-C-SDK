#pragma once

namespace rust 
{
	class TOD_CloudParameters : public Object // 0x0
	{
	public:
		float Size; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float Opacity; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float Coverage; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float Sharpness; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float Coloring; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float Attenuation; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float Saturation; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float Scattering; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float Brightness; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}