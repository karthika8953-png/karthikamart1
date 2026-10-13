
#ifndef REVIEW_DTO_H
#define REVIEW_DTO_H

#include <string>

struct ReviewDTO {
    int userId = 0;
    int productId = 0;
    int rating = 0;
    std::string comment;
};

#endif