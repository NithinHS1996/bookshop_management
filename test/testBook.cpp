/*Book store Manangement project
  Author:- Nithin HS*/

#include <bits/stdc++.h>
#include "book.hpp"
#include "books.hpp"
#include "validateBook.hpp"
#include "database.hpp"

uint BookStore::Book::sidBook;
void cinSetup()
{
    std::cin.tie(&std::cout);
}
char databaseBook[] = "databaseBook.dat";
int main()
{
    cinSetup();

    BookStore::Book book("Social", "Academy", "MLR", time(0), 100);
    std::cout << book << "\n";

    BookStore::DataBase<BookStore::Book, databaseBook> database;
    database.writeDatabase(book);
    BookStore::Books books;

    if (BookStore::validateBook::validate(book))
        std::cout << "Validation passed\n";
    else
        std::cout << "Validation failed\n";
    database.writeDatabase(book);

    books.updateBooks(book);
    std::vector<BookStore::Book> databasebook = database.readDatabse();
    for (auto temp : databasebook)
    {
        std::cout << temp << "\n";
    }
    books.filterByAuthor();
    books.filterByGenre();
    books.filterByPrice();
    books.filterByTitle();
    books.filterByPublishDate();
}