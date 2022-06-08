#pragma once

#include "book.hpp"
namespace BookStore
{
    class Books
    {
    private:
        std::vector<BookStore::Book> books;
        void display(std::vector<Book> filteredBooks);

    public:
        bool updateBooks(BookStore::Book book);
        bool deleteBooks(BookStore::Book book);
        bool filterByGenre();
        bool filterByAuthor();
        bool filterByPublishDate();
        bool filterByPrice();
        bool filterByTitle();
    };
};