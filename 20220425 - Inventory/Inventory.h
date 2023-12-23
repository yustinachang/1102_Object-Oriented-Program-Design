#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory{
	private:
		int itemNumber;
		int quantity;
		double cost;
		double totalCost;
	public:
		Inventory();
		Inventory(int, int, double);
		int setItemNumber(int);
		int setQuantity(int);
		double setCost(double);
		void setTotalCost();//setTotalCost();
		int getItemNumber();
		int getQuantity();
		double getCost();
		double getTotalCost();
};
#endif
