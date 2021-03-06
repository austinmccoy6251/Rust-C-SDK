#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509Certificate.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class PublisherIdentityPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::Cryptography::X509Certificates::X509Certificate* x509; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
