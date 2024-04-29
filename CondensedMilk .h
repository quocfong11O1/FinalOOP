//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_CONDENSEDMILK_H
#define UNTITLED_CONDENSEDMILK_H
#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class CondensedMilk : public Product {
private:
    int weight;
    const int PACKAGING = 4; // Each box contains 4 cans

public:
    // Constructor
    CondensedMilk(string code, string name, string prodDate, string expDate, string prodPlace, int purchase, int selling, int w) :
            Product(code, name, prodDate, expDate, prodPlace, purchase, selling), weight(w) {}

    // Getter methods
    int getWeight() { return weight; }

    // Other methods
    void displayInfo() {
        Product::displayInfo(); // Call base class method
        cout << "Weight: " << weight << "g" << endl;
        cout << "Packaging: " << PACKAGING << " cans per box" << endl;
    }
};

#endif //UNTITLED_CONDENSEDMILK_H
