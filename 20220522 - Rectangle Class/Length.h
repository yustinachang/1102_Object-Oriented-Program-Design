#ifndef LENGTH_H
#define LENGTH_H
#include "Rectangle.h"
class Length{
	private:
		int centimeters;
		int millimeters;
		int len_millimeters;
	public:
		Length();
		Length(int, int);
		void setLength(int, int);
		int getCentimeters();
		int getMillimeters();
		int getLenMillimeters();
		friend Length operator+(Length l1, Length l2);
		friend Length operator*(Length l1, Length l2);
		friend bool operator<(Length l1, Length l2);
		friend bool operator==(Length l1, Length l2);
};
#endif
