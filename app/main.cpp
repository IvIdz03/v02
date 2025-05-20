#include <iostream>
#include <format>
#include <string>
#include "app.h"

int main()
{
	vsite::oop::v2::color c;

	double r, g, b;
	std::cout << "unesi crvenu, zelenu i plavu: ";
	std::cin >> r >> g >> b;

	c.set_red(r);
	c.set_green(g);
	c.set_blue(b);

	std::cout << "Vrijednost boje u hex zapisu 0x" << vsite::oop::v2::to_hex(c.get_color_ref());
}
