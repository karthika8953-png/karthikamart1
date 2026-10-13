
#ifndef PRODUCT_REPOSITORY_H
#define PRODUCT_REPOSITORY_H

#include <vector>
#include "../model/Product.h"

class ProductRepository {
public:
    void save(const Product& product);

    std::vector<Product> findAll() const;

private:
    std::vector<Product> products;
};

#endif