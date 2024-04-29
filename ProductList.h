//
// Created by DELL on 29/04/2024.
//

#ifndef UNTITLED_PRODUCTLIST_H
#define UNTITLED_PRODUCTLIST_H
#include <algorithm>
#include <vector>
#include "Product.h"

class ProductList {
private:
    vector<Product> productList;

public:
    void addProduct(const Product &product) {
        productList.push_back(product);
    }

    void removeProduct(string productCode) {
        productList.erase(std::remove_if(productList.begin(), productList.end(),
                                         [productCode](Product product) { return product.getProductCode() == productCode; }),
                          productList.end());
    }

    void updateProduct(string productCode, const Product &updatedProduct) {
        auto it = std::find_if(productList.begin(), productList.end(),
                               [productCode](Product product) { return product.getProductCode() == productCode; });
        if (it != productList.end()) {
            *it = updatedProduct;
        }
    }

    void sortBySellingPriceAscending() {
        std::sort(productList.begin(), productList.end(),
                  [](const Product &a, const Product &b) { return a.getSellingPrice() < b.getSellingPrice(); });
    }
};

#endif //UNTITLED_PRODUCTLIST_H
