/*Book store Manangement project
  Author:- Nithin HS*/

#include <bits/stdc++.h>
#include "database.hpp"
#include "supplier.hpp"
#include "suppliers.hpp"

uint BookStore::Supplier::sIDSupplier;
void cinSetup()
{
    std::cin.tie(&std::cout);
}
char databaseSupplier[] = "databaseSupplier.dat";
int main()
{
    cinSetup();

    BookStore::Supplier supplier("XOXO", "Nithin", "1234567890");
    std::cout << supplier << "\n";

    BookStore::Suppliers suppliers;
    suppliers.updateSuppliers(supplier);
    std::cout << suppliers << "\n";

    BookStore::DataBase<BookStore::Supplier, databaseSupplier> databaseSupplier;
    databaseSupplier.writeDatabase(supplier);
    std::vector<BookStore::Supplier> databasesupplier = databaseSupplier.readDatabse();
    for (auto temp : databasesupplier)
    {
        std::cout << temp << "\n";
    }
}