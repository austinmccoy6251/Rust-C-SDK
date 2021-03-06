#pragma once

namespace rust 
{
	class Data : public ValueType // 0x0
	{
	public:
		int ansi; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int ebcdic; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int mac; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int oem; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		unsigned char list_sep; // 0x20 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x28
}
