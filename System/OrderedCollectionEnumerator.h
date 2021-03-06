#pragma once

#include "..\System\Collections\IEnumerator.h"

namespace rust 
{
	class OrderedCollectionEnumerator : public Object // 0x0
	{
	public:
		System::Collections::IEnumerator* listEnumerator; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool isKeyList; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
