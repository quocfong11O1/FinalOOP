//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_CUSTOMER_H
#define UNTITLED_CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;
class Customer {
private:
    string phoneNumber;
    string name;
    string address;
    string typeOfCustomer; // VIP or normal customer
public:
    // Constructors
    Customer();
    Customer(string phoneNumber, string name, string address, string typeOfCustomer) :
            phoneNumber(phoneNumber), name(name), address(address), typeOfCustomer(typeOfCustomer) {}

    // Getters and setters
    void setPhoneNumber(string phoneNumber) {
        this->phoneNumber = phoneNumber;
    }
    string getPhoneNumber() const {
        return phoneNumber;
    }

    void setName(string name) {
        this->name = name;
    }
    string getName() const {
        return name;
    }

    void setAddress(string address) {
        this->address = address;
    }
    string getAddress() const {
        return address;
    }

    void setTypeOfCustomer(string typeOfCustomer) {
        this->typeOfCustomer = typeOfCustomer;
    }
    string getTypeOfCustomer() const {
        return typeOfCustomer;
    }
};

// VIP Customer class
class VipCustomer : public Customer {
public:
    // Constructors
    VipCustomer() : Customer() {}
    VipCustomer(string phoneNumber, string name, string address) : Customer(phoneNumber, name, address, "VIP") {}
};

// Normal Customer class
class NormalCustomer : public Customer {
public:
    // Constructors
    NormalCustomer() : Customer() {}
    NormalCustomer(string phoneNumber, string name, string address) : Customer(phoneNumber, name, address, "Normal") {}
};


#endif //UNTITLED_CUSTOMER_H
