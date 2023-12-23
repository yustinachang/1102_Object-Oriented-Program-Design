#ifndef CAR_H
#define CAR_H
#include <string>
class Car{
	private:
		string make;
		string model;
		int year;
	public:
		Car();
		Car(string, string, int);
		void setMake(string);
		void setModel(string);
		void setYear(int);
		string getMake();
		string getModel();
		int getYear();
};
#endif
