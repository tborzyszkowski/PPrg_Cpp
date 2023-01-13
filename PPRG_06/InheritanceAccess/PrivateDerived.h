#pragma once
#include "Base.h"
class PrivateDerived : private Base
{
public:
	// function to access protected member from Base
	int getProt() {
		return prot;
	}

	// function to access private member
	int getPub() {
		return pub;
	}
};

