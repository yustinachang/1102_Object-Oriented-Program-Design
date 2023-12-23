#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Length.h"
class Rectangle : public Length{
	private:
		Length l1, l2;
	public:
		Rectangle();
		Rectangle(Length, Length);
		~Rectangle();
		void setSides(int, int);
		int getSides();
		bool isSquare(Length, Length);
		int getArea(Length, Length);
		int getPerimeter(Length, Length);
};
#endif
