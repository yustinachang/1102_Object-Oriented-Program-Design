#include <iostream>
using namespace std;

double spent_days, daily_rate, medication_charges, services_charges, total_charges;
inline double numbercheck(double *number){
	while(cin >> number, number < 0){
		cout << "ERROR! Please input positive number : ";
	}
	return number;
}
inline double calculate(double, double, double, double){
	return spent_days * daily_rate + medication_charges + services_charges;
}
inline double calculate(double, double){
	return medication_charges + services_charges;
}

int main(){
	char patient_classification;
	bool error;
	cout << "Was the patient admitted as an in-patient or an out-patient? (i / o) : ";
	do{
		cin >> patient_classification;
		switch(patient_classification){
			case 'i':
				cout << "The number of days spent in the hospital : ";
				spent_days = numbercheck(spent_days);
				cout << "The daily rate : ";
				daily_rate = numbercheck(daily_rate);
				cout << "Hospital medication charges : ";
				medication_charges = numbercheck(medication_charges);
				cout << "Charges for hospital services (lab tests, etc.) : ";
				services_charges = numbercheck(services_charges);
				total_charges = calculate(spent_days, daily_rate, medication_charges, services_charges);
				error = false;
				break;
			case 'o':
				cout << "Charges for hospital services (lab tests, etc.) : ";
				services_charges = numbercheck(services_charges);
				cout << "Hospital medication charges : ";
				medication_charges = numbercheck(medication_charges);
				total_charges = calculate(medication_charges, services_charges);
				error = false;
				break;
			default:
				cout << "ERROR! Please input the word 'i' or 'o' : ";
				error = true;
				break;
		}
	}while(error);
	cout << "\nThe total charges : " << total_charges;		
}
