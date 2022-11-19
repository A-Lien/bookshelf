////////////////////////////////////////////////////////////////////////////
//Author: Ashton Lien
//Start Date: 11/19/22
//Last Updated: 11/19/22
//File Name: bookshelf.h
//Description: creats functions, lists, and objects for bookshelf
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>


using namespace std;

class bookshelf
{
    private:
        int yearPublished;
        int edition;
        int bookNumInSeries;

        string title;
        string authorFirstName;
        string authorLastName;
        string publisher;
        
        bool bDoesBookHaveEdition = false;
        bool bIsBookPartOfASeries = false;
    
    public:
        string bookCode;
}


bool createBook (int yearPublished, int edition, int bookNumInSeries, 
    string title, string authorFirstName, string authorLastName,
     string publisher, bool bDoesBookHaveEdition, 
     bool bIsBookPartOfASeries); //creates new book objects; returns true if object was created. otherwise returns false

string createBookCode (int yearPublished); //creates call number
string findClassificationID (); //prompts user for catagory and then more detailed catagory
