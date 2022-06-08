#include "validateBook.hpp"

using namespace BookStore;

bool validateBook::validateTitle(std::string title)
{
    if (title.size() == 0)
        return false;
    return true;
}

bool validateBook::validateAuthor(std::string author)
{
    if (author.size() == 0)
        return false;
    return true;
}

bool validateBook::validateGenre(std::string genre)
{
    if (genre.size() == 0)
        return false;
    return true;
}

bool validateBook::validatePrice(double price)
{
    if (price <= 0)
        return false;
    return true;
}

bool validateBook::validateDate(time_t time)
{
    tm *userTime = localtime(&time);
    if ((userTime->tm_year < 100) && (userTime->tm_mon < 1 || userTime->tm_mon > 12) && (userTime->tm_mday < 1 || userTime->tm_mday > 31))
        return false;
    return true;
}

bool validateBook::validate(BookStore::Book book)
{
    if (validateTitle(book.getTitle()) && validateAuthor(book.getAuthor()) && validateGenre(book.getGenre()) && validatePrice(book.getPrice()) && validateDate(book.getPublishDate()))
        return true;
    return false;
}