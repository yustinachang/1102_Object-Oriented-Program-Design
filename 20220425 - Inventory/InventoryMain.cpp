#include <iostream>
#include <iomanip>
#include <string>
#include "Inventory.h"
using namespace std;
template<class T>

inline T checkNumber(T t){
	while(cin >> t, t < 0){
		cout << "ERROR! Please input positive number : ";
	}
	return t;
}

int main(){
	Inventory i1;
	int intv;
	double doublev;
	cout << "itemNumber : ";
	i1.setItemNumber(checkNumber(intv));
	cout << "quantity : ";
	i1.setQuantity(checkNumber(intv));
	cout << "cost : ";
	i1.setCost(checkNumber(doublev));
	cout << "Part Number : " << i1.getItemNumber() <<endl;
	cout << "Units On Hand : " << i1.getQuantity() <<endl;
	cout << "Price : $" << fixed <<setprecision(2) << i1.getCost() <<endl;
	cout << "Total Price : $" << fixed <<setprecision(2) << i1.getTotalCost() <<endl;
}
