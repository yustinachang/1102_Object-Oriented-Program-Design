#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//program 7.10 P.465
class InventoryItem {
	private:
		int partNum;
		string description;
		int onHand;
		double price;
		
	public:
		void storeInfo(int p, string d, int oH, double cost);
		int getPartNum(){
			return partNum;
		}
		string getDescription(){
			return description;
		}
		int getOnHand(){
			return onHand; 
		}
		double getPrice(){
			return price;
		}
};

void InventoryItem::storeInfo(int p, string d, int oH, double cost){
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;
}
void storeValues(InventoryItem&);// &
void showValues(InventoryItem);
int main(){
 	InventoryItem part;
	storeValues(part);
	showValues(part);
	return 0;
}

void storeValues(InventoryItem &item){// &
	int partNum; // Local variables to hold user input
	string description; 
	int qty; 
	double price; 
	
	// Get the data from the user
	cout << "Enter data for the new part number \n";
	cout << "Part number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.get(); // Move past the '\n' left in the input buffer by the last input 
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;
	
	// Store the data in the InventoryItem object
	item.storeInfo(partNum, description, qty, price);
}
	
	/********************************************************
	* showValues *
	* This function displays the member data stored in the *
	* InventoryItem object passed to it by value. *
	********************************************************/
	void showValues(InventoryItem item)
	{
	cout << fixed << showpoint << setprecision(2) << endl;;
	cout << "Part Number : " << item.getPartNum() << endl;
	cout << "Description : " << item.getDescription() << endl;
	cout << "Units On Hand: " << item.getOnHand() << endl;
	cout << "Price : $" << item.getPrice() << endl;
}
 
