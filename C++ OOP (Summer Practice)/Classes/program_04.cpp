// Problem 4: Book

// Create a Book class.

// Members:

// - Title
// - Author
// - Price

// Requirements:

// Default constructor
// Parameterized constructor
// display()

// Create at least three books.

// Concepts

// Constructors
// Objects

#include <iostream>
#include <string>
using namespace std;

class Book {

private: 
    string title;
    string author;
    int price;

public: 
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0;
    }

    Book(string title, string author, int price) {
        this->title = title;
        this->author = author;
        if (price >= 0) {
            this->price = price;
        } else {
            cout << "Price can't be negative! Setting to 0." << endl;
            this->price = 0;
        }
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    int getPrice() const {
        return price;
    }

    void setTitle(string title) {
        this->title = title;
    }

    void setAuthor(string author) {
        this->author = author;
    }

    void setPrice(int amount) {
        if (amount < 0) {
            cout << "Price cannot be negative!" << endl;
            return;
        }

        price = amount;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1("Grokking Algorithms", "Aditya Y. Bhargava", 900);
    Book b2("Maths", "Anamal", 200);
    Book b3("Science", "Bilal Rafique", 150);

    b1.display();
    cout << "\n";
    b2.display();
    cout << "\n";
    b3.display();
    cout << "\n";

    return 0;
}