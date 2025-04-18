#include "Book.h"


Book::Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr)
    : codeNum(cn), author(au), title(ti), edition(ed), pubCode(pc), price(pr) {}


std::string Book::getTitle() const {
    return title;
}


std::string Book::getAuthor() const {
    return author;
}


double Book::getPrice() const {
    return price;a
}


int Book::getEdition() const {
    return edition;
}


std::string Book::getISBN() const {
    return codeNum;
}


std::string Book::getPubCode() const {
    return pubCode;
}


void Book::changePrice(double newPrice) {
    price = newPrice;
}
