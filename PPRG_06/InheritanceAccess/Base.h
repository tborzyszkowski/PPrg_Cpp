#pragma once
class Base
{
private:
	int pvt = 1;

protected:
	int prot = 2;

public:
	int pub = 3;

	// function to access private member
	int getPVT() {
		return pvt;
	}
};

