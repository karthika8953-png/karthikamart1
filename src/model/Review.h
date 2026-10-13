
#ifndef REVIEW_H
#define REVIEW_H

#include <string>

class Review {
public:
    int id;
    int userId;
    int productId;
    int rating;
    std::string comment;
};

#endif