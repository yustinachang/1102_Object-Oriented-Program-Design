#ifndef INVENTORY_H
#define INVENTORY_H
#include <fstream>
using namespace std;

class Inventory{
	private:
		string ItemDescription, Date;
		double Quantity, WholesaleCost, RetailCost;
	public:
		Inventory();
		Inventory(string, string, double, double, double);
		void addRecord(Inventory &, fstream &);
		void displayRecord(Inventory &, fstream &);
		void changeRecord(Inventory &, fstream &);
		long byteNumber(int);
		void inputValue(double);
		bool validDate(string);
};
#endif
