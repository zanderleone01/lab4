/////////////////////////////////////////////////////////////////////
// Name: Zander Leone
// Date: 9/30/2026
// Class: CSCI 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: Generate a report of a user's ID and number
//                      of books they have borrowed as a txt file, at
//                      the end of the program print out the total
//                      number of books borrowed to the txt file as
//                      well as to the console
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int totalBooks;
ofstream fout("log report.txt", ios::app);

int generateUserID();
void borrowBook(int& bookCount);
void log(int uid, int bookCount);
void report();

int main()
{
    int uid, bookCount;

    // Simulating book checkouts for a user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Reporting end-of-day transactions
    report();

    return 0;
}

int generateUserID()
{
    static int userID = 1000;
    
    return ++userID;
}

void borrowBook(int& bookCount)
{
    bookCount = ++bookCount;
    totalBooks = ++totalBooks;
}

void log(int uid, int bookCount)
{
    if (uid == 1001) { // only the first uid will print endl on the top
        fout << endl << "User Id " << setfill('.') << setw(16) << uid << endl;
        fout << "Books Borrowed " << setfill('.') << setw(9) << bookCount << endl << endl;
    }
    else {
        fout << "User Id " << setfill('.') << setw(16) << uid << endl;
        fout << "Books Borrowed " << setfill('.') << setw(9) << bookCount << endl << endl;
    }
}

void report()
{
    fout << endl << "A total of " << totalBooks << " items were checked out today." << endl;
    cout << "A total of " << totalBooks << " items were checked out today." << endl;
    fout.close();
}