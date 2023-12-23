//S1022030 張云亭 獨立開發 
#include <iostream>
#include <iomanip>
#include <string>
#include "PatientAccount.h"
#include "Surgery.h" 
#include "Pharmacy.h"
using namespace std;

#define N 5
int getSurgeryType();
int getMedicationType();

int main(){
	int surgery_type, medication_type;
	PatientAccount patient_object; 
	Surgery surgery_object;
	Pharmacy pharmacy_object;
	
	cout << "The Patient Menu.\n\n";
	patient_object.setDays();
	surgery_type = getSurgeryType();
	medication_type = getMedicationType();

	surgery_object.updateAccount(patient_object, surgery_type);
	pharmacy_object.updateAccount(patient_object, medication_type);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe total charges : " << patient_object.getCharges() << endl;
	return 0;
}

int getSurgeryType(){
	int type;
	string surgery_menu[N]={"Hand", "Shoulder", "Knee", "Foot", "Head"};
	cout << "The Surgery Menu.\n";
	for(int i=0; i<N; i++)
		cout << N << ". " << surgery_menu[N] << endl;
	cout << "The type of surgery : ";
	while(cin>>type, type<1 || type>N)
		cout << "ERROR! Please input again (1-"<< N <<") : ";
	return type;
}
int getMedicationType(){
	int type;
	string medication_menu[N]={"drops", "pill", "powder", "decoction", "injection"};
	cout << "The Medication Menu.\n";
	for(int i=0; i<N; i++)
		cout << N << ". " << medication_menu[N] << endl;
	cout << "The type of medication : ";
	while(cin>>type, type<1 || type>N)
		cout << "ERROR! Please input again (1-"<< N <<") : ";
	return type;
}
