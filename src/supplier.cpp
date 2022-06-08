#include "supplier.hpp"

using namespace BookStore;

std::string Supplier::getName()
{
    std::string name = nameSupplier;
    return name;
}
void Supplier::setName(std::string name)
{
    int length = name.size();
    name.copy(nameSupplier, length);
    nameSupplier[length] = '\0';
}
std::string Supplier::getContactPerson()
{
    std::string contPerson = contactPersonSupplier;
    return contPerson;
}
void Supplier::setContactPerson(std::string contPerson)
{
    int length = contPerson.size();
    contPerson.copy(contactPersonSupplier, length);
    contactPersonSupplier[length] = '\0';
}
std::string Supplier::getGSTSupplier()
{
    std::string GSTsupp = GSTSupplier;
    return GSTsupp;
}
void Supplier::setGSTSupplier(std::string GSTsupp)
{
    int length = GSTsupp.size();
    GSTsupp.copy(GSTSupplier, length);
    GSTSupplier[length] = '\0';
}
uint Supplier::getID()
{
    return idSupplier;
}

std::ostream &BookStore::operator<<(std::ostream &ostr, BookStore::Supplier &supplier)
{
    ostr << "Name: " << supplier.nameSupplier << "\n";
    ostr << "Contact Person: " << supplier.contactPersonSupplier << "\n";
    ostr << "GST: " << supplier.GSTSupplier << "\n";
}