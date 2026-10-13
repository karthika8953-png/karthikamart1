
#ifndef ORDER_SERVICE_H
#define ORDER_SERVICE_H

#include <vector>
#include "../model/Order.h"

class OrderService {
public:
    void createOrder(const Order& order);

    std::vector<Order> getAllOrders() const;

private:
    std::vector<Order> orders;
};

#endif