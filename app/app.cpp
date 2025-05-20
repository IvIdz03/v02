#include "app.h"
#include <algorithm>
#include <format>
#include <iostream>

namespace vsite::oop::v2
{
	std::string to_hex(int number) {
		return std::format("{:X}", number);
	}

	double color::get_red() const {
		return red;
	}

	double color::get_green() const {
		return green;
	}

	double color::get_blue() const {
		return blue;
	}

	void color::set_red(double value) {
		red = std::clamp(value, 0.0, 1.0);
	}

	void color::set_green(double value) {
		green = std::clamp(value, 0.0, 1.0);
	}

	void color::set_blue(double value) {
		blue = std::clamp(value, 0.0, 1.0);
	}

	unsigned int color::get_color_ref() const {
		return RGB(static_cast<int>(red * 255), static_cast<int>(green * 255), static_cast<int>(blue * 255));
	}

	double color::get_luminance() const {
		return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
	}

} // namespace
