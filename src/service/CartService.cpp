
#include "CartService.h"

void CartService::addToCart(const CartItem& item) {
    items.push_back(item);
}

std::vector<CartItem> CartService::getCartItems() const {
    return items;
}

void CartService::clearCart() {
    items.clear();
}