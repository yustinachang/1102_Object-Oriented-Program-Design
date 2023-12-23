// File Filter
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

//***********************************************
// Filter class declaration                     *
//***********************************************
class Filter
{
public:
    void doFilter(fstream &in, fstream &out);
protected:
    virtual char transform(char ch) = 0;
};

//**********************************************
// The doFilter method performs the filtering. *
// *********************************************

void Filter::doFilter(fstream &in, fstream &out)
{
    char ch = in.get();
    while (ch != EOF)
    {
        out.put(transform(ch));
        ch = in.get();
    }
}

//*********************************************
// Uppercase Class Declaration. This class is *
// derived from the Filter class.             *
//*********************************************

class UpperCaseFilter: public Filter
{
protected:
    char transform(char ch)
    {
        return toupper(ch);
    }    
};


void printFile(fstream &); // Prototype

const int SIZE = 81;  // Array size for file name

//***********************************************
// The main function                            *
//***********************************************

int main( )
{
   char inFileName[SIZE];  // To hold the input file name
   char outFileName[SIZE]; // To hold the output file name
      
    // Explain the program
    cout << "This program creates an uppercase "
         << "version of a test file.\n";
    cout << "Enter name of input file (input.txt): "; cin >> inFileName;
    fstream inputFile(inFileName, ios::in);
    if (!inputFile)
    {
        cout << "The file " << inFileName
             << " cannot be opened." << endl;
        exit(EXIT_FAILURE);
    }

    // Echo the input file
    cout << "\nOriginal file is: " << endl;

    printFile(inputFile);
    cout << endl;

    cout << "Enter name of output file: "; cin >> outFileName;
    fstream outputFile(outFileName, ios::out);
    if (!outputFile)
    {
        cout << "The file " << outFileName 
             << " cannot be opened." << endl;
        exit(EXIT_FAILURE);
    }
    
    // Process 
    UpperCaseFilter upperFilter;
    upperFilter.doFilter(inputFile, outputFile);

    // Close output file and reopen for reading so we can print
    // its contents.
    outputFile.close();
    outputFile.open(outFileName, ios::in);
    cout << "\nFiltered file is: " << endl;
    printFile(outputFile);

    // Close all files
    inputFile.close();
    outputFile.close();
    return 0;    
}
    

// **************************************
// Print file function                  *
// **************************************

void printFile(fstream &file)
{
   // Start at beginning of file
   file.clear(); 
   file.seekg(0, ios::beg);

   // Print the file contents
   char ch = file.get();
   while (ch != EOF)
   {
      cout << ch;
      ch = file.get();
   }
   
   // Go back to beginning of file for further processing.
   file.clear();
   file.seekg(0, ios::beg);
}
