
#include "Inventory.h"


Inventory::Inventory(int size) : length(size), nextEntry(0) {
    books = new Book[size];  
}

Inventory::~Inventory() {
    delete[] books;  
}

bool Inventory::addBook(const Book& theBook) {
    if (nextEntry < length) {
        books[nextEntry] = theBook;
        nextEntry++;
        return true;
    }
    return false; 
}

void Inventory::changePrice(const std::string& isbn, double newPrice) {
    for (int i = 0; i < nextEntry; i++) {
        if (books[i].getIsbn() == isbn) {
            books[i].setPrice(newPrice);
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found.\n";
}

void Inventory::printInventory() const {
    for (int i = 0; i < nextEntry; i++) {
        std::cout << "ISBN: " << books[i].getIsbn()
                  << ", Title: " << books[i].getTitle()
                  << ", Price: $" << books[i].getPrice() << std::endl;
    }
}


#include "Inventory.h"
#include "Book.h"

int main() {
    
    Inventory inventory(3);

    Book book1("978-0131101630", "The C Programming Language", 50.0);
    Book book2("978-0131103627", "Introduction to Algorithms", 90.0);
    Book book3("978-0321534965", "Effective Java", 45.0);

 
    inventory.addBook(book1);
    inventory.addBook(book2);
    inventory.addBook(book3);

    
    std::cout << "Inventory before price change:\n";
    inventory.printInventory();

   
    inventory.changePrice("978-0131101630", 60.0);

    
    std::cout << "\nInventory after price change:\n";
    inventory.printInventory();

    return 0;
}