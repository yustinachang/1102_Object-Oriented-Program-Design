#ifndef PUBLICATION_H
#define PUBLICATION_H
#include "Book.h"
#include "Journal.h"
#include "Magazine.h"
#include <string>
class Publication : public Book, public Journal, public Magazine{
	private:
		std::string title;
		int volume, year;
		Book b1;
		Journal j1;
		Magazine m1;
	public:
		Publication();
		Publication(std::string, int, int);
		void setPublication(std::string, int, int);
		void setTitle(std::string);
		void setVolume(int);
		void setYear(int);
		std::string getTitle();
		int getVolume();
		int getYear();
};
#endif
