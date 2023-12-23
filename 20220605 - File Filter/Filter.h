#ifndef FILTER_H
#define FILTER_H
#include <fstream>
using namespace std;
class AbstractFilter{
	public:
		virtual char transform(char ch) = 0;
		void doFilter(ifstream &in, ofstream &out);
};

class Encrypt:public AbstractFilter{
	private:
		int key;
	public:
		Encrypt(int key)
		{ this->key = key; }
		virtual char transform(char ch);
};
class Upper:public AbstractFilter{
	public:
		virtual char transform(char ch);
};

class Copy:public AbstractFilter{
	public:
		virtual char transform(char ch);
};

class DoubleSpaces:public AbstractFilter{
	private:
		int count;	
	public:
		DoubleSpaces() { count = 0; }
		void doFilter(ifstream &in, ofstream &out);
		virtual char transform(char ch);
};
#endif
