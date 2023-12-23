#include "PatientAccount.h"
#include <iostream>
using namespace std;

const double daily_rate = 500.00;
PatientAccount::PatientAccount(){
	spent_days = 0;
	total_charges = 0.00;
}
void PatientAccount::setDays(){
	cout << "The number of days spent in the hospital : ";
	while(cin >> spent_days, spent_days < 0){
		cout << "ERROR! Please input positive number : ";
	}
	total_charges += spent_days * daily_rate;
}
void PatientAccount::updateCharges(double new_charges){
	total_charges += new_charges;
}
double PatientAccount::getCharges(){
	return total_charges;
}
