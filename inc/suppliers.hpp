#pragma once

#include <bits/stdc++.h>
#include "supplier.hpp"

namespace BookStore
{
    class Suppliers
    {
    private:
        std::vector<BookStore::Supplier> suppliers;

    public:
        bool updateSuppliers(BookStore::Supplier supplier);
        bool deleteSuppliers(BookStore::Supplier supplier);
        friend std::ostream &operator<<(std::ostream &ostr, BookStore::Suppliers &suppliers);
    };
};