#pragma once
#include "Keyboard.h"
#include "Graphics.h"
class Dude {
public:
	Dude();
	Dude(int x, int y);
	void Update(const Keyboard& kbdwnd);
	void Draw(Graphics& gfx) const;
	int GetX() const;
	int GetY() const;
	static int GetWidth();
	static int GetHeight();
private:
	int	x;
	int	y;
	static constexpr int speed = 1;
	static constexpr int width = 20;
	static constexpr int height = 20;
};