#include <iostream>
#include <fstream>
#include <cctype>
#include "Filter.h"
using namespace std;

void AbstractFilter::doFilter(ifstream &in, ofstream &out){
	char ch;
	in.get(ch);
	while (!in.fail())	{
		out.put(transform(ch));
		in.get(ch);
	}
}
char Encrypt::transform(char ch){
	ch += key;
	return ch;
}
char Upper::transform(char ch){
	ch = toupper(ch);
	return ch;
}
char Copy::transform(char ch){
	return ch;
}
void DoubleSpaces::doFilter(ifstream &in, ofstream &out){
	char ch;
	in.get(ch);
	while (!in.fail()){
		if (ch == '\n')
			out.put(transform(ch));
		
		out.put(transform(ch));
		in.get(ch);
	}
}

char DoubleSpaces::transform(char ch){
	return ch;
}
