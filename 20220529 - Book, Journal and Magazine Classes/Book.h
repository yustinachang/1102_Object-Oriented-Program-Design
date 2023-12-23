#ifndef BOOK_H
#define BOOK_H
#include <string>
class Book{
	private:
		std::string author, ISBN;
		double price;
	public:
		Book();
		Book(std::string, std::string, double);
		void setBook(std::string, std::string, double);
		void setAuthor(std::string);
		void setISBN(std::string);
		void setPrice(double);
		std::string getAuthor();
		std::string getISBN();
		double getPrice();
};
#endif
