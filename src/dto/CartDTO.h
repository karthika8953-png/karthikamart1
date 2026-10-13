
#ifndef CART_DTO_H
#define CART_DTO_H

struct CartDTO {
    int userId = 0;
    int productId = 0;
    int quantity = 1;
    double price = 0.0;
};

#endif