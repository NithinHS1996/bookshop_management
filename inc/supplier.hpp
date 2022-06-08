#pragma once

#include <bits/stdc++.h>

namespace BookStore
{
    class Supplier
    {
    private:
        char nameSupplier[20];
        char contactPersonSupplier[50];
        char GSTSupplier[10];
        uint idSupplier;
        static uint sIDSupplier;

    public:
        Supplier(std::string name, std::string contPer, std::string GSTSupp)
        {
            setName(name);
            setContactPerson(contPer);
            setGSTSupplier(GSTSupp);
            ++sIDSupplier;
            idSupplier = sIDSupplier;
        }
        Supplier() {}
        std::string getName();
        void setName(std::string name);
        std::string getContactPerson();
        void setContactPerson(std::string name);
        std::string getGSTSupplier();
        void setGSTSupplier(std::string name);
        uint getID();
        friend std::ostream &operator<<(std::ostream &ostr, BookStore::Supplier &supplier);
    };
};