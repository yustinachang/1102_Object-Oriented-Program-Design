#include "Inventory.h"
#include <iostream>
using namespace std;

Inventory::Inventory(){
	itemNumber = 0;
	quantity = 0;
	cost = 0.00;
	totalCost = 0.00;
}
Inventory::Inventory(int x, int y, double z){
	itemNumber = x;
	quantity = y;
	cost = z;
	setTotalCost(){
		totalCost = quantity*cost;
	}
}
int Inventory::setItemNumber(int x){
	itemNumber = x;
	return x;
}
int Inventory::setQuantity(int x){
	quantity = x;
	setTotalCost();
	return x;
}
double Inventory::setCost(double x){
	cost = x;
	setTotalCost();
	return x;
}
int Inventory::getItemNumber(){
	return itemNumber;
}
int Inventory::getQuantity(){
	return quantity;
}
double Inventory::getCost(){
	return cost;
}
double Inventory::getTotalCost(){
	return totalCost;
}
