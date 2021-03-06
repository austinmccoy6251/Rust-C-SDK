#pragma once

namespace System
{
	namespace Xml
{
	class XmlDictionaryReaderQuotas : public Object // 0x0
	{
	public:
		bool is_readonly; // 0x10 (size: 0x1, flags: 0x21, type: 0x2)
		int array_len; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int bytes; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int depth; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int nt_chars; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int text_len; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
