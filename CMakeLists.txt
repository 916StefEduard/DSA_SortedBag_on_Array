cmake_minimum_required(VERSION 3.17)
project(untitled28)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled28 main.cpp Tests/ShortTest.h Tests/ShortTest.cpp Tests/ExtendedTest.h Tests/ExtendedTest.cpp Node/BSTNode.cpp Node/BSTNode.h Iterator/SortedBagIterator.h Iterator/SortedBagIterator.cpp SortedBag/SortedBag.h SortedBag/SortedBag.cpp)