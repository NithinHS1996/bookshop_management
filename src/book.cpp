#include "book.hpp"

using namespace BookStore;

std::string Book::getTitle() const
{
    std::string tempStr(titleBook);
    return tempStr;
}
void Book::setTitle(std::string title)
{
    int length = title.size();
    length = (length > 49) ? 49 : length;
    title.copy(titleBook, length);
    titleBook[length] = '\0';
}
std::string Book::getGenre() const
{
    std::string tempStr(genreBook);
    return tempStr;
}
void Book::setGenre(std::string genre)
{
    int length = genre.size();
    length = (length > 49) ? 49 : length;
    genre.copy(genreBook, length);
    genreBook[length] = '\0';
}
std::string Book::getAuthor() const
{
    std::string tempStr(authorBook);
    return tempStr;
}
void Book::setAuthor(std::string author)
{
    int length = author.size();
    length = (length > 49) ? 49 : length;
    author.copy(authorBook, length);
    authorBook[length] = '\0';
}
time_t Book::getPublishDate() const
{
    return publishDateBook;
}
void Book::setPublishDate(time_t publishDate)
{
    publishDateBook = publishDate;
}
double Book::getPrice() const
{
    return priceBook;
}
void Book::setPrice(double price)
{
    if (price < 0)
        throw std::invalid_argument("Price shouldn't less than 0\n");
    priceBook = price;
}
tm *Book::dateExtract(time_t time)
{
    return localtime(&time);
}
uint Book::getID()
{
    return idBook;
}
std::ostream &BookStore::operator<<(std::ostream &ostr, Book &book)
{
    tm *time = book.dateExtract(book.publishDateBook);
    ostr << "Title:        " << book.titleBook << "\n";
    ostr << "Genre:        " << book.genreBook << "\n";
    ostr << "Author:       " << book.authorBook << "\n";
    ostr << "PublishDate:  " << 1900 + time->tm_year << 1 + time->tm_mon << time->tm_mday << "\n";
    ostr << "Price:        " << book.priceBook << "\n";
    ostr << "ID:           " << book.getID() << "\n";
    return ostr;
}