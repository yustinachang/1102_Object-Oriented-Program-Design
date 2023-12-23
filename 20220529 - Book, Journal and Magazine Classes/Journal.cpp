#include "Journal.h"
#include <iostream>
#include <string>
using namespace std;
Journal::Journal(){
	setJournal(0, "", 0, 0);
}
Journal::Journal(int w, string x, double y, double z){
	setJournal(w, x, y, z);
}
void Journal::setJournal(int w, string x, double y, double z){
	month = w;
	ISBN = x;
	impactFactor = y;
	annualSubscription = z;
}
void Journal::setMonth(int x){
	month = x;
}
void Journal::setISBN(string x){
	ISBN = x;
}
void Journal::setImpactFactor(double x){
	impactFactor = x;
}
void Journal::setAnnualSubscription(double x){
	annualSubscription = x;
}
int Journal::getMonth(){
	return month;
}
string Journal::getISBN(){
	return ISBN;
}
double Journal::getImpactFactor(){
	return impactFactor;
}
double Journal::getAnnualSubscription(){
	return annualSubscription;
}
