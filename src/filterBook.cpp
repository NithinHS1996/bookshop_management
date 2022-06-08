#include "filterBook.hpp"

using namespace BookStore;

bool FilterBook::filterByGenre(BookStore::Books books)
{
    std::vector<Book> genreBook;
    std::string genre;
    std::cout << "Enter Genre to print the books\n";
    std::cin >> genre;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (auto temp : books.getBooks())
    {
        if (temp.getGenre() == genre)
        {
            genreBook.push_back(temp);
        }
    }
    display(genreBook);
}

bool FilterBook::filterByAuthor(BookStore::Books books)
{
    std::vector<Book> authorBook;
    std::string author;
    std::cout << "Enter Author to print the books\n";
    std::cin >> author;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (auto temp : books.getBooks())
    {
        if (temp.getAuthor() == author)
        {
            authorBook.push_back(temp);
        }
    }
    if (authorBook.size() == 0)
    {
        std::cerr << "Author not found\n";
        return false;
    }
    display(authorBook);
}

bool FilterBook::filterByPublishDate(BookStore::Books books)
{
    std::vector<Book> pdBook;
    tm *time;
    tm userTime;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Year\n";
    std::cin >> userTime.tm_year;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Month\n";
    std::cin >> userTime.tm_mon;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter date\n";
    std::cin >> userTime.tm_mday;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    time_t tempTime;
    for (auto temp : books.getBooks())
    {
        tempTime = temp.getPublishDate();
        time = localtime(&tempTime);
        std::cout << (userTime.tm_year == 1900 + time->tm_year) << (userTime.tm_mon == 1 + time->tm_mon) << (userTime.tm_mday == time->tm_mday) << "\n";
        if ((userTime.tm_year == 1900 + time->tm_year) && (userTime.tm_mon == 1 + time->tm_mon) && (userTime.tm_mday == time->tm_mday))
        {
            pdBook.push_back(temp);
        }
    }
    display(pdBook);
}

bool FilterBook::filterByPrice(BookStore::Books books)
{
    std::vector<Book> priceBook;
    double price;
    std::cout << "Enter price to print the books\n";
    std::cin >> price;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();
    for (auto temp : books.getBooks())
    {
        if (temp.getPrice() == price)
        {
            priceBook.push_back(temp);
        }
    }
    display(priceBook);
}

bool FilterBook::filterByTitle(BookStore::Books books)
{
    std::vector<Book> titleBook;
    std::string title;
    std::cout << "Enter title to print the books\n";
    std::cin >> title;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (auto temp : books.getBooks())
    {
        if (temp.getAuthor() == title)
        {
            titleBook.push_back(temp);
        }
    }
    display(titleBook);
}

void FilterBook::display(std::vector<Book> filteredBooks)
{
    for (auto temp : filteredBooks)
        std::cout << temp << "\n";
}