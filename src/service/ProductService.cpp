
#include "ProductService.h"

void ProductService::addProduct(const Product& product) {
    products.push_back(product);
}

std::vector<Product> ProductService::getAllProducts() const {
    return products;
}