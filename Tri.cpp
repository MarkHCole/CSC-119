#include "Tri.h"

Tri::Tri(){

	base = 0;
	height = 0;

}

Tri::Tri(int newbase, int newheight) {
	base = newbase;
	height = newheight;


}

int Tri::getbase() {
	return base;
}

int Tri::getheight() {
	return height;
}

void Tri::setbase(int newbase) {
	base = newbase;
}

void Tri::setheight(int newheight) {
	height = newheight;
}

float Tri::calculate() {
	return base * height * .5;
}