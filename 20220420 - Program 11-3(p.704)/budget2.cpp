#include "budget2.h"

double Budget::corpBudget = 0;
void Budget::mainOffice(double budReq){
	corpBudget += budReq;
}
