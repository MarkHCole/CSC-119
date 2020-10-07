#include "Area.h"
// :: is scope resolution operator
Area::Area() {
	length = 0.0;
	width = 0.0;
}

Area::Area(float newlength, float newwidth) {

	length = newlength;
	width = newwidth;
}

float Area::getlength() {
	return length;

}

float Area::getwidth() {
	return width;

}

void Area::setlength(float newlength) {
	length = newlength;

}

void Area::setwidth(float newwidth) {
	width = newwidth;

}

float Area::CalculateArea() {
	return length * width;

}