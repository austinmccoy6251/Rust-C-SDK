#pragma once

#include "..\System\Xml\XPath\XPathNodeType.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathLinkedNode2 : public ValueType // 0x0
	{
	public:
		int FirstChild; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int Parent; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int PreviousSibling; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int NextSibling; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int FirstAttribute; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int FirstNamespace; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		System::Xml::XPath::XPathNodeType NodeType; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		int BaseURI; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		bool IsEmptyElement; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		int LocalName; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		int NamespaceURI; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int Prefix; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		int Value; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		int XmlLang; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		int LineNumber; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		int LinePosition; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x50
}