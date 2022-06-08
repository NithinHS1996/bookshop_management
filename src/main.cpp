/*Book store Manangement project
  Author:- Nithin HS*/

#include <bits/stdc++.h>
#include "book.hpp"
#include "books.hpp"
#include "validateBook.hpp"
#include "database.hpp"
#include "supplier.hpp"
#include "suppliers.hpp"

uint BookStore::Book::sidBook;
uint BookStore::Supplier::sIDSupplier;
void cinSetup()
{
    std::cin.tie(&std::cout);
}
char databaseBook[] = "databaseBook.dat";
char databaseSupplier[] = "databaseSupplier.dat";
int main()
{
    cinSetup();
    try
    {
        BookStore::Book book("Social", "Academy", "MLR", time(0), -100);
        std::cout << book << "\n";
        BookStore::DataBase<BookStore::Book, databaseBook> database;
        database.writeDatabase(book);
        std::vector<BookStore::Book> databasebook = database.readDatabse();
        for (auto temp : databasebook)
        {
            std::cout << temp << "\n";
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "\n";
    }

    BookStore::Supplier supplier("XOXO", "Nithin", "1234567890");
    std::cout << supplier << "\n";
}