/*Book store Manangement project
  Author:- Nithin HS*/

#include <bits/stdc++.h>
#include "book.hpp"
#include "books.hpp"
#include "validateBook.hpp"
#include "database.hpp"
#include "filterBook.hpp"

uint BookStore::Book::sidBook;
void cinSetup()
{
    std::cin.tie(&std::cout);
}
char databaseBook[] = "databaseBook.dat";
int main()
{
    cinSetup();

    BookStore::Book book1("Social", "Academy", "MLR", time(0), 100);
    std::cout << book1 << "\n";

    BookStore::Book book2("Science", "Academy", "BS", time(0), 200);
    std::cout << book2 << "\n";

    BookStore::DataBase<BookStore::Book, databaseBook> database;
    database.writeDatabase(book1);
    database.writeDatabase(book2);

    BookStore::Books books;
    if (BookStore::validateBook::validate(book1))
        std::cout << "Validation passed\n";
    else
        std::cout << "Validation failed\n";

    if (BookStore::validateBook::validate(book2))
        std::cout << "Validation passed\n";
    else
        std::cout << "Validation failed\n";

    database.writeDatabase(book1);
    database.writeDatabase(book2);

    books.updateBooks(book1);
    books.updateBooks(book2);

    std::vector<BookStore::Book> databasebook = database.readDatabse();
    for (auto temp : databasebook)
    {
        std::cout << temp << "\n";
    }

    BookStore::FilterBook filterbook;
    filterbook.filterByAuthor(books);
}