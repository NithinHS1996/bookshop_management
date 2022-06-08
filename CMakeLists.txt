
cmake_minimum_required(VERSION 3.10)

project(BookStore VERSION 1.0)

message("Building BookStore binary")

#project bookstore binary
#--------------------------------------------------------------------
add_executable(bookStore src/main.cpp src/book.cpp src/books.cpp src/validateBook.cpp src/supplier.cpp src/suppliers.cpp)

target_include_directories(bookStore PUBLIC inc/)

message("Building done of BookStore binary done")

#Test book binary
#---------------------------------------------------------------------
add_executable(testbook test/testBook.cpp src/book.cpp src/books.cpp src/validateBook.cpp src/filterBook.cpp )

target_include_directories(testbook PUBLIC inc/)

message("Building done of BookStore testBook binary done")

#Test supplier binary
#---------------------------------------------------------------------
add_executable(testsupplier test/testSupplier.cpp src/supplier.cpp src/suppliers.cpp)

target_include_directories(testsupplier PUBLIC inc/)

message("Building done of BookStore testsupplier binary done")