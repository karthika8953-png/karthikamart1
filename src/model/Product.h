
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    int id;
    int sellerId;
    std::string name;
    std::string description;
    double price;
    int stock;
    std::string category;
};

#endif