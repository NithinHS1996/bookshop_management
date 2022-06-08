#pragma once

#include <bits/stdc++.h>

namespace BookStore
{
    class Book
    {
    private:
        char titleBook[50];
        char genreBook[50];
        char authorBook[50];
        time_t publishDateBook;
        double priceBook;
        uint idBook;
        static uint sidBook;
        int count;

        tm *dateExtract(time_t time);

    public:
        explicit Book(std::string title, std::string genre, std::string author, time_t publisDate, double price) : publishDateBook(publisDate)
        {
            setTitle(title);
            setGenre(genre);
            setAuthor(author);
            setPrice(price);
            ++sidBook;
            idBook = sidBook;
        }
        Book() {}
        ~Book() { --sidBook; }
        std::string getTitle() const;
        void setTitle(std::string title);
        std::string getGenre() const;
        void setGenre(std::string genre);
        std::string getAuthor() const;
        void setAuthor(std::string author);
        time_t getPublishDate() const;
        void setPublishDate(time_t publishDate);
        double getPrice() const;
        void setPrice(double price);
        uint getID();
        friend std::ostream &operator<<(std::ostream &ostr, Book &book);
    };
};