//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_ORDERITEM_H
#define UNTITLED_ORDERITEM_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Order Item class
class OrderItem {
public:
    string itemCode;
    int quantity;
};

// Order class
class Order {
private:
    string orderCode;
    string purchaseDate;
    string customerPhoneNumber;
    vector<OrderItem> items;
    float totalAmount;
    float discount;
    float finalAmount;

public:
    // Constructor
    Order(string code, string date, string phone) :
            orderCode(code), purchaseDate(date), customerPhoneNumber(phone), totalAmount(0), discount(0), finalAmount(0) {}

    // Methods to manipulate items
    void addItem(string itemCode, int quantity) {
        OrderItem item;
        item.itemCode = itemCode;
        item.quantity = quantity;
        items.push_back(item);
    }

    // Method to calculate the total amount
    void calculateTotalAmount() {
        // Implementation to calculate total amount from items
    }

    // Method to apply discounts
    void applyDiscounts() {
        // Implementation to apply bulk purchase discounts and VIP discounts
    }

    // Method to calculate final amount after discounts
    void calculateFinalAmount() {
        finalAmount = totalAmount - discount;
    }

    // Method to display order details
    void displayOrderDetails() {
        // Implementation to display order details
    }
};
#endif //UNTITLED_ORDERITEM_H