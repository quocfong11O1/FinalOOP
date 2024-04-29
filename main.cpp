#include <iostream>
#include "Product.h"
#include "PowderedMilk.h"
#include "ReadyToDrinkMilk.h"
#include "CondensedMilk .h"
using namespace std;


int main() {
    PowderedMilk powderedMilk("001", "Powdered Milk", "01/01/2023", "01/01/2024", "Vietnam", 10000, 20000, 500);
    powderedMilk.displayInfo();

    cout << endl;

    ReadyToDrinkMilk readyToDrinkMilk("002", "Ready-to-Drink Milk", "01/01/2023", "01/01/2024", "Vietnam", 15000, 25000, 1000);
    readyToDrinkMilk.displayInfo();

    cout << endl;

    CondensedMilk condensedMilk("003", "Condensed Milk", "01/01/2023", "01/01/2024", "Vietnam", 8000, 18000, 400);
    condensedMilk.displayInfo();
    return 0;
}
