#include "PatientAccount.h"
#ifndef SURGERY_H
#define SURGERY_H

class Surgery{
	private:
		double rate1, rate2, rate3, rate4, rate5;
	public:
		Surgery();
		void updateAccount(PatientAccount&, int);
};
#endif
