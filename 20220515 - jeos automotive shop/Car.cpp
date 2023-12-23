#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car(){
	make = "";
	model = "";
	year = 0;
}
Car::Car(string x, string y, int z){
	make = x;
	model = y;
	year = z;
}
void Car::setMake(string x){
	make = x;
	return x;
}
void Car::setModel(string x){
	model = x;
	return x;
}
void Car::setYear(int x){
	year = x;
	return x;
}
string Car::getMake(){
	return make;
}
string Car::getModel(){
	return model;
}
int Car::getYear(){
	return year;
}
