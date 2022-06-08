#include <bits/stdc++.h>
#include "books.hpp"
namespace BookStore
{
    class FilterBook
    {
    public:
        bool filterByGenre(BookStore::Books books);
        bool filterByAuthor(BookStore::Books books);
        bool filterByPublishDate(BookStore::Books books);
        bool filterByPrice(BookStore::Books books);
        bool filterByTitle(BookStore::Books books);
        void display(std::vector<Book> filteredBooks);
    };
};