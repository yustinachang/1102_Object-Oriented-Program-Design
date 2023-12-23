#include "Book.h"
#include <iostream>
#include <string>
using namespace std;
Book::Book(){
	setBook("", "", 0);
}
Book::Book(string x, string y, double z){
	setBook(x, y, z);
}
void Book::setBook(string x, string y, double z){
	author = x;
	ISBN = y;
	price = z;
}
void Book::setAuthor(string x){
	author = x;
}
void Book::setISBN(string x){
	ISBN = x;
}
void Book::setPrice(double x){
	price = x;
}
string Book::getAuthor(){
	return author;
}
string Book::getISBN(){
	return ISBN;
}
double Book::getPrice(){
	return price;
}
