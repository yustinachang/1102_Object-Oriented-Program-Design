#ifndef PATIENT_ACCOUNT_H
#define PATIENT_ACCOUNT_H

class PatientAccount{
	private:
		double total_charges;
		int spent_days;
	public:
		PatientAccount();
		void setDays();
		void updateCharges(double);
		double getCharges();
};
#endif
