#include "Magazine.h"
#include <iostream>
#include <string>
using namespace std;
Magazine::Magazine(){
	setMagazine(0, "", 0);
}
Magazine::Magazine(int x, string y, double z){
	setMagazine(x, y, z);
}
void Magazine::setMagazine(int x, string y, double z){
	month = x;
	editor = y;
	annualSubscription = z;
}
void Magazine::setMonth(int x){
	month = x;
}
void Magazine::setEditor(string x){
	editor = x;
}
void Magazine::setAnnualSubscription(double x){
	annualSubscription = x;
}
int Magazine::getMonth(){
	return month;
}
string Magazine::getEditor(){
	return editor;
}
double Magazine::getAnnualSubscription(){
	return annualSubscription;
}
