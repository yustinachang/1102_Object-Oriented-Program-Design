#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <string>
class Magazine{
	private:
		int month;
		std::string editor;
		double annualSubscription;
	public:
		Magazine();
		Magazine(int, std::string, double);
		void setMagazine(int, std::string, double);
		void setMonth(int);
		void setEditor(std::string);
		void setAnnualSubscription(double);
		int getMonth();
		std::string getEditor();
		double getAnnualSubscription();
};
#endif

