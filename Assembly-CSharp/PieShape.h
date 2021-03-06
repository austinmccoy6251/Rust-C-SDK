#pragma once

namespace rust 
{
	class PieShape : public Graphic // 0x70
	{
	public:
		float outerSize; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		float innerSize; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float startRadius; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		float endRadius; // 0x7c (size: 0x4, flags: 0x6, type: 0xc)
		float border; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		bool debugDrawing; // 0x84 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x88
}
