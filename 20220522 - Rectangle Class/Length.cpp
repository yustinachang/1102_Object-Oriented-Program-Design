#include "Length.h"
#include <iostream>
using namespace std;

Length::Length(){
	setLength(0, 0);
}
Length::Length(int x, int y){
	setLength(x, y);
}
void Length::setLength(int x, int y){
	centimeters = x;
	millimeters = y;
	len_millimeters = 10 * x + y;
}
int Length::getCentimeters(){
	return centimeters;
}
int Length::getMillimeters(){
	return millimeters;
}
int Length::getLenMillimeters(){
	return len_millimeters;
}
Length operator+(Length l1, Length l2){
	return Length( l1.len_millimeters + l2.len_millimeters );
}
Length operator*(Length l1, Length l2){
	return Length( l1.len_millimeters * l2.len_millimeters );
}
bool operator<(Length l1, Length l2){
	return l1.len_millimeters < l2.len_millimeters;
}
bool operator==(Length l1, Length l2){
	return l1.len_millimeters == l2.len_millimeters;
}
