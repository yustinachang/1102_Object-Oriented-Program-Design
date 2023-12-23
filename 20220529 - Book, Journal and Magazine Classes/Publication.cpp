#include "Publication.h"
#include <iostream>
#include <string>
using namespace std;
Publication::Publication(){
	setPublication("", 0, 0);
	Book();
	Journal();
	Magazine();
}
Publication::Publication(string x, int y, int z){
	setPublication(x, y, z);
	Book();
	Journal();
	Magazine();
}
void Publication::setPublication(string x, int y, int z){
	title = x;
	volume = y;
	year = z;
}
void Publication::setTitle(string x){
	title = x;
}
void Publication::setVolume(int x){
	volume = x;
}
void Publication::setYear(int x){
	year = x;
}
string Publication::getTitle(){
	return title;
}
int Publication::getVolume(){
	return volume;
}
int Publication::getYear(){
	return year;
}
