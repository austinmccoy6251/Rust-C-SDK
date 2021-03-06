#pragma once

namespace rust 
{
	class CC_Led : public CC_Base // 0x28
	{
	public:
		float scale; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		bool automaticRatio; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		float ratio; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float brightness; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		int mode; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
