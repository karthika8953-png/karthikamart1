
#include "OrderService.h"

void OrderService::createOrder(const Order& order) {
    orders.push_back(order);
}

std::vector<Order> OrderService::getAllOrders() const {
    return orders;
}