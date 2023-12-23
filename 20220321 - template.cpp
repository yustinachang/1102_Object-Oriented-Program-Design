#include <iostream>
using namespace std;

template<class Type>
Type funt(Type x){
	return (x>0)?x:-x;
}

int main(){
	int a=-1;
	float b=2.2;
	double c=-2.2;
	cout<<funt(a)<<funt(b)<<funt(c);
}
