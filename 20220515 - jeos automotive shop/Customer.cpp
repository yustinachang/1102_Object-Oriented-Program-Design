#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

Customer::Customer(){
	name = "";
	address = "";
	phone = "";
}
Customer::Customer(string x, string y, string z){
	name = x;
	address = y;
	phone = z;
}
void Customer::setName(string x){
	name = x;
	return x;
}
void Customer::setAddress(string x){
	address = x;
	return x;
}
void Customer::setPhone(string x){
	phone = x;
	return x;
}
string Customer::getName(){
	return name;
}
string Customer::getAddress(){
	return address;
}
string Customer::getPhone(){
	return phone;
}

