#pragma once
#include "Base.h"
class ProtectedDerived : protected Base
{
public:
	// function to access protected member from Base
	int getProt() {
		return prot;
	}

	// function to access public member from Base
	int getPub() {
		return pub;
	}
};

