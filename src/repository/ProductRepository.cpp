
#include "ProductRepository.h"

void ProductRepository::save(const Product& product) {
    products.push_back(product);
}

std::vector<Product> ProductRepository::findAll() const {
    return products;
}