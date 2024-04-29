//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_POWDEREDMILK_H
#define UNTITLED_POWDEREDMILK_H
#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

class PowderedMilk : public Product {
private:
    int weight;
    const int PACKAGING = 6; // Each box contains 6 cans

public:
    // Constructor
    PowderedMilk(string code, string name, string prodDate, string expDate, string prodPlace, int purchase, int selling, int w) :
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
#endif //UNTITLED_POWDEREDMILK_H
