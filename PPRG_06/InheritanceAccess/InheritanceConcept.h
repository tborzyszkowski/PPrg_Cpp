#pragma once

class BaseConcept {
	public:
		int x;
	protected:
		int y;
	private:
		int z;
};

class PublicDerivedConcept : public BaseConcept {
	// x is public
	// y is protected
	// z is not accessible from PublicDerived
};

class ProtectedDerivedConcept : protected BaseConcept {
	// x is protected
	// y is protected
	// z is not accessible from ProtectedDerived
};

class PrivateDerivedConcept : private BaseConcept {
	// x is private
	// y is private
	// z is not accessible from PrivateDerived
};

