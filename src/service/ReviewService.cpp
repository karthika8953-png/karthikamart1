
#include "ReviewService.h"

void ReviewService::addReview(const Review& review) {
    reviews.push_back(review);
}

std::vector<Review> ReviewService::getAllReviews() const {
    return reviews;
}