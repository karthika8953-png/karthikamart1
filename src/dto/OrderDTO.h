
#ifndef ORDER_DTO_H
#define ORDER_DTO_H

#include <string>

struct OrderDTO {
    int id = 0;
    int buyerId = 0;
    double totalAmount = 0.0;
    std::string status;
};

#endif