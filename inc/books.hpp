#pragma once

#include "book.hpp"
namespace BookStore
{
    class Books
    {
    private:
        std::vector<BookStore::Book> books;

    public:
        bool updateBooks(BookStore::Book book);
        bool deleteBooks(BookStore::Book book);
        std::vector<BookStore::Book> getBooks();
    };
};