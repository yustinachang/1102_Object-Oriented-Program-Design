#include <iostream>
#include <fstream>
#include "Filter.h"
using namespace std;

int main(){
	string inFileName, outFileName;
	ifstream inFile;
	ofstream outFile;
	cout << "Enter the name of file to filter: ";
	cin  >> inFileName;
	cout << "Enter the name of file to receive filtered text: ";
	cin  >> outFileName;
	inFile.open(inFileName.c_str());
	if(!inFile){
		cout << "Error opening file " << inFileName << endl;
		exit(1);
	}
	outFile.open(outFileName.c_str());
	if(!outFile){
		cout << "Error opening file " << outFileName << endl;
		exit(1);
	}
	DoubleSpaces test;
	test.doFilter(inFile, outFile);
	inFile.close();
	outFile.close();
	return 0;
}
