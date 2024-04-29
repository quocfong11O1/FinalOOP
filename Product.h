//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_PRODUCT_H
#define UNTITLED_PRODUCT_H
#include <string>
#include <iostream>

using namespace std;

class Product{
private:
    string productCode;
    string productName;
    string productDate;
    string productExpiryDate;
    string placeOfProduction;
    int purchasePrice;
    int sellingPrice;

public:
    Product(){
    }
    Product(string productCode, string productName, string productDate, string productExpiryDate, string placeOfProduction, int purchasePrice, int sellingPrice){
        this->productCode = productCode;
        this->productName = productName;
        this->productDate = productDate;
        this->productExpiryDate = productExpiryDate;
        this->placeOfProduction = placeOfProduction;
        this->purchasePrice = purchasePrice;
        this->sellingPrice = sellingPrice;
    }
    void setProductCode(string productCode){
        this->productCode = productCode;
    }
    string getProductCode(){
        return productCode;
    }
    void setProductName(string productName){
        this->productName = productName;
    }
    string getProductName(){
        return productName;
    }

    void setProductDate(string productDate){
        this->productDate = productDate;
    }
    string getProductDate(){
        return productDate;
    }
    void setProductExpiryDate(string productExpiryDate){
        this->productExpiryDate = productExpiryDate;
    }
    string getProductExpiryDate(){
        return productExpiryDate;
    }
    void setPlaceOfProduction(string placeOfProduction){
        this->placeOfProduction = placeOfProduction;
    }
    string getPlaceOfProduction(){
        return placeOfProduction;
    }
    void setPurchasePrice(int purchasePrice){
        this->purchasePrice = purchasePrice;
    }
    int getPurchasePrice(){
        return purchasePrice;
    }

    void setSellingPrice(int sellingPrice){
        this->sellingPrice = sellingPrice;
    }
    int getSellingPrice() const {
        return sellingPrice;
    }

    void inputInformation() {
        cout << "Enter Item Code: ";
        cin >> productCode;
        cout << "Enter Item Name: ";
        cin.ignore();
        getline(cin, productName);
        cout << "Enter Production Date: ";
        cin >> productDate;
        cout << "Enter Expiration Date: ";
        cin >> productExpiryDate;
        cout << "Enter Production Place: ";
        cin.ignore();
        getline(cin, placeOfProduction);
        cout << "Enter Purchase Price: ";
        cin >> purchasePrice;
        cout << "Enter Selling Price: ";
        cin >> sellingPrice;
    }

    void displayInfo(){
        cout << "Item Code: " << getProductCode() << endl;
        cout << "Item Name: " << getProductName() << endl;
        cout << "Production Date: " << getProductDate() << endl;
        cout << "Expiration Date: " << getProductExpiryDate() << endl;
        cout << "Production Place: " << getPlaceOfProduction() << endl;
        cout << "Purchase Price: " << getPurchasePrice() << endl;
        cout << "Selling Price: " << getSellingPrice() << endl;
    }
};
#endif //UNTITLED_PRODUCT_H
