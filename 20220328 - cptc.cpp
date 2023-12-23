#include <iostream>
using namespace std;

int value = 1;
const int *const cptc = &value;

int main(){
	cout<<*cptc;
	value = 2;
	cout<<*cptc;
}
