#include <iostream>
#include "Length.h"
#include "Rectangle.h"
using namespace std;

int checkNumber(int x){
	while(cin >> x, x < 0){
		cout << "ERROR! Please input positive number : ";
	}
	return x;
}

int main(){
	Rectangle r1;
	int value;
	cout << "The sides of rectangle : ";
	r1.setSides(checkNumber(value), checkNumber(value));
	if(r1.isSquare(l1, l2))
		cout << "It's square." << endl;
	else cout << "It's NOT square." << endl;
	cout << "The area of rectangle : " << r1.getArea(l1, l2) << endl;
	cout << "The area of rectangle : " << r1.getPerimeter(l1, l2) << endl;
}
