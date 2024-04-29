//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_ORDERLIST_H
#define UNTITLED_ORDERLIST_H
#include <iostream>
#include <vector>
#include "OrderItem.h" // Include the Order class header file
#include "Customer.h"
#include "Product.h"

using namespace std;

class OrderList {
private:
    vector<Order> orders;

public:
    // Method to add an order to the list
    void addOrder(const Order& order) {
        orders.push_back(order);
    }

    // Method to remove an order from the list
    void removeOrder(const string& orderCode) {
        // Find the order by its code and remove it from the vector
        for (auto it = orders.begin(); it != orders.end(); ++it) {
            if (it->getOrderCode() == orderCode) {
                orders.erase(it);
                break; // Exit the loop after removing the order
            }
        }
    }

    // Method to update an order in the list
    void updateOrder(const string& orderCode, const Order& updatedOrder) {
        // Find the order by its code and update it with the new order
        for (auto& order : orders) {
            if (order.getOrderCode() == orderCode) {
                order = updatedOrder;
                break; // Exit the loop after updating the order
            }
        }
    }

    // Method to sort the order list by customer phone number in ascending order
    void sortByCustomerPhoneNumber() {
        sort(orders.begin(), orders.end(), [](const Order& a, const Order& b) {
            return a.getCustomerPhoneNumber() < b.getCustomerPhoneNumber();
        });
    }

    // Method to sort the order list by final amount in descending order
    void sortByFinalAmountDescending() {
        sort(orders.begin(), orders.end(), [](const Order& a, const Order& b) {
            return a.getFinalAmount() > b.getFinalAmount();
        });
    }

    // Method to display the order list
    void displayOrderList() {
        for (const auto& order : orders) {
            order.displayOrderDetails();
        }
    }
};

int main() {
    // Example usage
    Order order1("ORD001", "2024-04-30", "123456789");
    order1.addItem("SKU001", 3);
    order1.addItem("SKU002", 2);

    Order order2("ORD002", "2024-05-01", "987654321");
    order2.addItem("SKU003", 1);

    OrderList orderList;
    orderList.addOrder(order1);
    orderList.addOrder(order2);

    // Display the order list
    orderList.displayOrderList();

    return 0;
}


#endif //UNTITLED_ORDERLIST_H
