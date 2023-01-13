#pragma once
#include "Base.h"

class PublicDerived : public Base
{
	public:
		// function to access protected member from Base
		int getProt() {
			return prot;
		}
};

