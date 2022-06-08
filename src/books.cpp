#include "books.hpp"

using namespace BookStore;

bool Books::updateBooks(BookStore::Book book)
{
    books.push_back(book);
    return true;
}
bool Books::deleteBooks(BookStore::Book book)
{
    std::vector<Book>::iterator itr;
    for (itr = books.begin(); itr != books.end(); itr++)
    {
        if (itr->getID() == book.getID())
            books.erase(itr);
    }

    return true;
}

std::vector<BookStore::Book> Books::getBooks()
{
    return books;
}
