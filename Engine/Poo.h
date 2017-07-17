#pragma once
#include "Dude.h"
#include "Graphics.h"
class Poo {
public:
	Poo();
	void Update();
	void Draw(Graphics& gfx) const;
	void ProcessConsumption(const Dude& dude);
	bool IsEaten() const;
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int height = 24;
	static constexpr int width = 24;
	bool isEaten = false;
};