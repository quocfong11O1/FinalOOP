//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_CUSTOMERLIST_H
#define UNTITLED_CUSTOMERLIST_H
#include <vector>
#include "Customer.h" // Assuming Customer.h is defined previously

class CustomerList {
private:
    std::vector<Customer> customers;

public:
    // Add customer (checks for duplicate phone number)
    void addCustomer(const Customer& customer) {
        for (const Customer& existing : customers) {
            if (existing.getPhoneNumber() == customer.getPhoneNumber()) {
                std::cout << "Error: Customer with phone number " << customer.getPhoneNumber() << " already exists." << std::endl;
                return;
            }
        }
        customers.push_back(customer);
    }

    // Remove customer by phone number
    bool removeCustomer(const std::string& phoneNumber) {
        for (size_t i = 0; i < customers.size(); ++i) {
            if (customers[i].getPhoneNumber() == phoneNumber) {
                customers.erase(customers.begin() + i);
                return true;
            }
        }
        return false;
    }

    // Update customer information by phone number
    bool updateCustomer(const std::string& phoneNumber, const Customer& newInfo) {
        for (size_t i = 0; i < customers.size(); ++i) {
            if (customers[i].getPhoneNumber() == phoneNumber) {
                customers[i] = newInfo;
                return true;
            }
        }
        return false;
    }

    Customer findMostFrequentCustomer(int year) const {
        Customer mostFrequent;
        int maxPurchases = 0;
        for (const Customer& customer : customers) {
            int numPurchases = getCustomerPurchaseCount(customer.getPhoneNumber(), year);
            if (numPurchases > maxPurchases) {
                mostFrequent = customer;
                maxPurchases = numPurchases;
            }
        }
        return mostFrequent;
    }

private:
    int getCustomerPurchaseCount(const std::string& phoneNumber, int year) const; // Needs implementation based on Order class
};

#endif //UNTITLED_CUSTOMERLIST_H
