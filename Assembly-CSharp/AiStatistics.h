#pragma once

namespace rust 
{
	class AiStatistics : public ValueType // 0x0
	{
	public:
		float Size; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float Speed; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float Acceleration; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float TurnSpeed; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float Tolerance; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float VisionRange; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float VisionCone; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float Hostility; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float Defensiveness; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float AggressionRange; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}