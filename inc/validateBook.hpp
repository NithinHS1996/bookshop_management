#pragma once

#include <bits/stdc++.h>
#include "book.hpp"
namespace BookStore
{
    class validateBook
    {
    private:
        static bool validateTitle(std::string title);
        static bool validateAuthor(std::string author);
        static bool validateGenre(std::string genre);
        static bool validatePrice(double price);
        static bool validateDate(time_t time);

    public:
        static bool validate(BookStore::Book book);
    };
};
