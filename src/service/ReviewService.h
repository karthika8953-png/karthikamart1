
#ifndef REVIEW_SERVICE_H
#define REVIEW_SERVICE_H

#include <vector>
#include "../model/Review.h"

class ReviewService {
public:
    void addReview(const Review& review);

    std::vector<Review> getAllReviews() const;

private:
    std::vector<Review> reviews;
};

#endif