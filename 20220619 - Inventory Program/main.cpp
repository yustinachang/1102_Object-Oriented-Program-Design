#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>
#include "Inventory.h"
using namespace std;

int main(){
	Inventory i1;
	int x;
	fstream f1("Inventory.dat", ios::out | ios::in | ios::binary);
	if (!f1){
		cout << "Error opening file.\n";
		return 0;
	}
	cout << "               Inventory program menu.\n"
		 << "Choose one of the following numbers to perform a task:\n";
	cout << " 1. Add new records to the file.\n";
	cout << " 2. Display any record in the file.\n";
	cout << " 3. Change any record in the file.\n";
	cin  >> x;
	switch(x){
		case 1 : 
			i1.addRecord(i1, f1);
			break;
		case 2 :
			i1.displayRecord(i1, f1);
			break;
		case 3 :
			i1.changeRecord(i1, f1);
			break;
	}
	f1.close();
	return 0;
}
