#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "Inventory.h"
using namespace std;

Inventory::Inventory(){
	ItemDescription = "";
	Date = "";
	Quantity = 0.00;
	WholesaleCost = 0.00;
	RetailCost = 0.00;
}
Inventory::Inventory(string a, string b, double x, double y, double z){
	ItemDescription = a;
	Date = b;
	Quantity = x;
	WholesaleCost = y;
	RetailCost = z;
}
void Inventory::addRecord(Inventory &x, fstream &f){
	f.seekp(0L, ios::end);
	cout << "Enter the following inventory information:\n";
	cout << "Item description: ";
	cin.ignore();
	getline(cin, x.ItemDescription);
	do{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, x.Date);
		if(!validDate(x.Date)){
			cout << validDate(x.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}
	}while(!validDate(x.Date));
	cout << "Quantity :";
	inputValue(x.Quantity);
	cout << "Wholesale cost: ";
	inputValue(x.WholesaleCost);
	cout << "Retail cost: ";
	inputValue(x.RetailCost);
	f.write(reinterpret_cast<char *>(&x), sizeof(x));
}
void Inventory::displayRecord(Inventory &x, fstream &f){
	int n;
	cout << "Enter the record number: ";
	cin  >> n;
	if (n < 1)
		n = 1;
	n--;
	f.seekg(byteNumber(n), ios::beg);
	f.read(reinterpret_cast<char *>(&x), sizeof(x));
	cout << "Record number: " << (n + 1) << endl;
	cout << "Item description: ";
	cout << x.ItemDescription << endl;
	cout << "Date : ";
	cout << x.Date << endl;
	cout << "Quantity :";
	cout << fixed << showpoint << setprecision(2);
	cout << x.Quantity << endl;
	cout << "Wholesale cost: ";
	cout << x.WholesaleCost << endl;
	cout << "Retail cost: ";
	cout << x.RetailCost << endl;
}
void Inventory::changeRecord(Inventory &x, fstream &f){
	int n;
	cout << "Enter the record number: ";
	cin  >> n;
	if (n < 1)
		n = 1;
	n--;
	f.seekg(byteNumber(n), ios::beg);
	f.read(reinterpret_cast<char *>(&x), sizeof(x));
	cout << "Enter the following inventory information:\n";
	cout << "Item description: ";
	cin.ignore();
	getline(cin, x.ItemDescription);
	do{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, x.Date);
		if (!validDate(x.Date)){
			cout << validDate(x.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}
	}while(!validDate(x.Date));
	cout << "Quantity :";
	inputValue(x.Quantity);
	cout << "Wholesale cost: ";
	inputValue(x.WholesaleCost);
	cout << "Retail cost: ";
	inputValue(x.RetailCost);
	f.seekp(byteNumber(n), ios::beg);
	f.write(reinterpret_cast<char *>(&x), sizeof(x));
}
long Inventory::byteNumber(int x){
	return sizeof(Inventory) * x;
}
void Inventory::inputValue(double x){
	while(cin >> x, x < 0){
	cout << "Error! Please input the positive number.\n";
	}
}
bool Inventory::validDate(string x){
	if (x.length() == 9)
		x += "0";
	if (x.length() != 10)
		return false;
	for (int i = 0; i < x.length(); i++){
		if (i == 2 || i == 5){
			if (x[i] != '/'){
				return false;
			}
			continue;
		}
		if (!isdigit(x[i]))
			return false;
	}
	return true;
}
