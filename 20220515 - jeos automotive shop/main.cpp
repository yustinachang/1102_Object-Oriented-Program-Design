#include <iostream>
#include <string>
#include "Customer.h"
#include "Car.h"
#include "ServiceQuote.h"
using namespace std;

int main(){
	string cuseomerName_inquired;
	int date_inquired;
	Customer customer_object;
	Car car_object;
	ServiceQuote serviceQuote_object;
	setMenu();
	getMenu();
}

void setMenu(){
	cout << "Enter the Customer Name : ";
	customer_object.setName();
	cout << "Enter the Customer Address : ";
	customer_object.setAddress();
	cout << "Enter the Customer Phone Number : ";
	customer_object.setPhone();
	
	cout << "Enter the Car Make : ";
	car_object.setMake();
	cout << "Enter the Car Model : ";
	car_object.setModel();
	cout << "Enter the Car Year : ";
	car_object.setYear();
	
	cout << "Enter the Parts Amount : ";
	serviceQuote_object.setPartsCharges();
	cout << "Enter the Quote Amount : ";
	serviceQuote_object.setLaborCharges();
	cout << "Enter the Tax in % : ";
	serviceQuote_object.setTaxRate();
}
void getMenu(){
	cout << "Customer Name         : ";
	customer_object.getName();
	cout << "Customer Address      : ";
	customer_object.getAddress();
	cout << "Customer Phone Number : ";
	customer_object.getPhone();
	
	cout << "Car Make   : ";
	car_object.getMake();
	cout << "Car Model  : ";
	car_object.getModel();
	cout << "Model year : ";
	car_object.getYear();
	
	cout << "Parts Amount : ";
	serviceQuote_object.getPartsCharges();
	cout << "Quote Amount : ";
	serviceQuote_object.getLaborCharges();
	cout << "Tax in %     : ";
	serviceQuote_object.getTaxRate();
	cout << "Tax Amout    : "
	serviceQuote_object.getSalesTax();
	cout << "Total Amout  : "
	serviceQuote_object.getTotalCost();
}
