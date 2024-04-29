cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Product.h
        ReadyToDrinkMilk.h
        PowderedMilk.h
        "CondensedMilk .h"
        Customer.h
        ProductList.h
        OrderItem.h
        CustomerList.h
        OrderList.h)
