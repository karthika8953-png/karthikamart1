
#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
public:
    int id;
    int buyerId;
    double totalAmount;
    std::string status;
    std::string createdAt;
};

#endif