//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_READYTODRINKMILK_H
#define UNTITLED_READYTODRINKMILK_H
#include "Product.h"

class ReadyToDrinkMilk : public Product {
private:
    int volume;
    const int PACKAGING = 48; // Each carton contains 6 packs, and each pack contains 8 boxes

public:
    // Constructor
    ReadyToDrinkMilk(string code, string name, string prodDate, string expDate, string prodPlace, int purchase, int selling, int v) :
            Product(code, name, prodDate, expDate, prodPlace, purchase, selling), volume(v) {}

    // Getter methods
    int getVolume() { return volume; }

    // Other methods
    void displayInfo() {
        Product::displayInfo(); // Call base class method
        cout << "Volume: " << volume << "ml" << endl;
        cout << "Packaging: " << PACKAGING << " boxes per carton" << endl;
    }
};
#endif //UNTITLED_READYTODRINKMILK_H
