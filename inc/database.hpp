#pragma once

#include <bits/stdc++.h>

namespace BookStore
{
    template <typename T, char const *val>
    class DataBase
    {
    private:
        std::fstream databaseFile;

    public:
        DataBase()
        {
            if (databaseFile)
                databaseFile.open(val, std::ios::app | std::ios::in | std::ios::binary);
            else
                std::cerr << "Database opening failed\n";
        }
        ~DataBase()
        {
            databaseFile.close();
        }
        void writeDatabase(T obj)
        {
            std::cout << obj.getID() << "\n";
            databaseFile.seekp((obj.getID() - 1) * sizeof(T));
            databaseFile.write(reinterpret_cast<char const *>(&obj), sizeof(T));
        }
        std::vector<T> readDatabse()
        {
            std::vector<T> databaseBook;
            T obj;
            uint i = 1;
            databaseFile.seekg(0 * sizeof(T));
            databaseFile.read(reinterpret_cast<char *>(&obj), sizeof(obj));
            while (databaseFile and !databaseFile.eof())
            {
                databaseFile.seekg(i * sizeof(T));
                i++;
                if (obj.getID() != 0)
                {
                    databaseBook.push_back(obj);
                }
                databaseFile.read(reinterpret_cast<char *>(&obj), sizeof(T));
            }
            return databaseBook;
        }
        void deleteDatabse(T obj)
        {
            T blankObj;
            databaseFile.seekp((obj.getID() - 1) * sizeof(T));
            databaseFile.write(reinterpret_cast<char const *>(&blankObj), sizeof(T));
        }
    };
};