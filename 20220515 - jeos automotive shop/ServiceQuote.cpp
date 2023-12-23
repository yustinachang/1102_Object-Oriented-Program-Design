#include "ServiceQuote.h"
#include <iostream>
using namespace std;
#define taxRate 0.05

ServiceQuote::ServiceQuote(){
	partsCharges = 0.00;
	laborCharges = 0.00;
	taxRate = 0.00;
}
ServiceQuote::ServiceQuote(double x, double y, double z){
	partsCharges = x;
	laborCharges = y;
	taxRate = z;
}
void ServiceQuote::setPartsCharges(double x){
	partsCharges = x;
	return x;
}
void ServiceQuote::setLaborCharges(double x){
	laborCharges = x;
	return x;
}
void ServiceQuote::setTaxRate(double x){
	taxRate = x;
	return x;
}
double ServiceQuote::getPartsCharges(){
	return partsCharges;
}
double ServiceQuote::getLaborCharges(){
	return laborCharges;
}
double ServiceQuote::getTaxRate(){
	return taxRate;
}
double ServiceQuote::getSalesTax(){
	return salesTax = partsCharges * taxRate;
}
double ServiceQuote::getTotalCost(){
	return partsCharges + laborCharges + (partsCharges * taxRate);
}
