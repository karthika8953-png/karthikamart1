
#ifndef PRODUCT_DTO_H
#define PRODUCT_DTO_H

#include <string>

struct ProductDTO {
    int id = 0;
    std::string name;
    std::string description;
    double price = 0.0;
    int stock = 0;
    std::string category;
};

#endif