#ifndef JOURNAL_H
#define JOURNAL_H
#include <string>
class Journal{
	private:
		int month;
		std::string ISBN;
		double impactFactor, annualSubscription;
	public:
		Journal();
		Journal(int, std::string, double, double);
		void setJournal(int, std::string, double, double);
		void setMonth(int);
		void setISBN(std::string);
		void setImpactFactor(double);
		void setAnnualSubscription(double);
		int getMonth();
		std::string getISBN();
		double getImpactFactor();
		double getAnnualSubscription();
};
#endif
