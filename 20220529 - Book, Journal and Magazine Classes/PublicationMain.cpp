#include <iostream>
#include "Publication.h"
#include "Book.h"
#include "Journal.h"
#include "Magazine.h"
using namespace std;
template<class T>

inline T checkNumber(T t){
	while(cin >> t, t < 0){
		cout << "ERROR! Please input positive number : ";
	}
	return t;
}

int main(){
	Publication p1;
	string svalue;
	int ivalue;
	double dvalue;
	cout << "Input the publication's title, volume and year :";
	p1.setPublication(svalue, checkNumber(ivalue), checkNumber(ivalue));
	cout << "There are catagory of the publication.\n";
	cout << "1. book\n2. journal\n3. magazine\n";
	cout << "Input the publication's category : ";
	while(cin>>ivalue, ivalue<0||ivalue>3){
		cout << "ERROR! Please input number 1-3 : ";
	}
	switch(ivalue){
		case 1:
			cout << "Input the book's author, ISBN and price : ";
			p1.setBook(svalue, svalue, checkNumber(dvalue));
		case 2:
			cout << "Input the journal's month, ISSN, impact factor and annual subscription : ";
			p1.setJournal(checkNumber(ivalue), svalue, checkNumber(dvalue), checkNumber(dvalue));
		case 3:
			cout << "Input the magazine's month, editor and annual subscription : ";
			p1.setMagazine(checkNumber(ivalue), svalue, checkNumber(dvalue));
	}
	return 0;
}
