#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
	l1.Length();
	l2.Length();
}
Rectangle::Rectangle(Length x, Length y){
	l1 = x;
	l2 = y;
}
void Rectangle::setSides(int x, int y){
	setLength(x, y);
}
int Rectangle::getSides(){
	getLenMillimeters();
}
bool Rectangle::isSquare(Length x, Length y){
	return x == y;
}
int Rectangle::getArea(Length x, Length y){
	return x * y;
}
int Rectangle::getPerimeter(Length x, Length y){
	return x + x + y + y;
}
