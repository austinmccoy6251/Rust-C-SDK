#pragma once

namespace I18N
{
	namespace CJK
{
	class CP51932Decoder : public DbcsDecoder // 0x28
	{
	public:
		int last_count; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int last_bytes; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
