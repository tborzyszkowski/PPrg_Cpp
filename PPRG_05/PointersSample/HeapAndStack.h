#pragma once

struct Cube {
	int a;
	int getVolume() {
		return a * a * a;
	}
};

void stack();
void heap();
void deleteArray();
