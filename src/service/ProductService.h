
#ifndef PRODUCT_SERVICE_H
#define PRODUCT_SERVICE_H

#include <vector>
#include "../model/Product.h"

class ProductService {
public:
    void addProduct(const Product& product);

    std::vector<Product> getAllProducts() const;

private:
    std::vector<Product> products;
};

#endif