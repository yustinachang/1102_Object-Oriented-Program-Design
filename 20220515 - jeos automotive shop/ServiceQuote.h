#ifndef SERVICE_QUOTE_H
#define SERVICE_QUOTE_H
class ServiceQuote{
	private:
		double partsCharges;
		double laborCharges;
		double taxRate;
		double totalCharges;
	public:
		ServiceQuote();
		ServiceQuote(double, double, double);
		void setPartsCharges(double);
		void setLaborCharges(double);
		void setTaxRate(double); 
		double getPartsCharges();
		double getLaborCharges();
		double getTaxRate();
		double getSalesTax();
		double getTotalCharges();
};
#endif
