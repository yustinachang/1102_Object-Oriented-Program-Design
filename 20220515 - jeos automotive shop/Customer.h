#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
class Customer{
	private:
		string name;
		string address;
		string phone;
	public:
		Customer();
		Customer(string, string, string);
		void setName(string);
		void setAddress(string);
		void setPhone(string);
		string getName();
		string getAddress();
		string getPhone();
};
#endif
