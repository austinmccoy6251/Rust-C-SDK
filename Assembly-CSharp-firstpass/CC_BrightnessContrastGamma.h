#pragma once

namespace rust 
{
	class CC_BrightnessContrastGamma : public CC_Base // 0x28
	{
	public:
		float redCoeff; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float greenCoeff; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float blueCoeff; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float brightness; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float contrast; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float gamma; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
