#include "suppliers.hpp"

using namespace BookStore;

bool Suppliers::updateSuppliers(BookStore::Supplier supplier)
{
    suppliers.push_back(supplier);
}

bool Suppliers::deleteSuppliers(BookStore::Supplier supplier)
{
}
std::ostream &BookStore::operator<<(std::ostream &ostr, BookStore::Suppliers &suppliers)
{
    for (auto temp : suppliers.suppliers)
    {
        ostr << temp << "\n";
    }
    return ostr;
}