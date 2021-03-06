#pragma once

#include "..\System\Object.h"
#include "..\System\ComponentModel\MemberDescriptor.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
{
{
			namespace Serialization
{
	class MemberRelationship : public ValueType // 0x0
	{
	public:
		System::Object _owner; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::ComponentModel::MemberDescriptor* _member; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
