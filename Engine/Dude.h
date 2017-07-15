#pragma once
#include "MainWindow.h"
#include "Graphics.h"
class Dude {
public:
	Dude();
	Dude(int x, int y);
	void Update(const MainWindow& wnd);
	void Draw(Graphics& gfx) const;
	int	x;
	int	y;
	static constexpr int width = 20;
	static constexpr int height = 20;
};