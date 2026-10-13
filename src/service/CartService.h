
#ifndef CART_SERVICE_H
#define CART_SERVICE_H

#include <vector>
#include "../model/CartItem.h"

class CartService {
public:
    void addToCart(const CartItem& item);

    std::vector<CartItem> getCartItems() const;

    void clearCart();

private:
    std::vector<CartItem> items;
};

#endif