
#include "PaymentService.h"

bool PaymentService::processPayment(double amount) {
    if (amount > 0) {
        paymentStatus = "SUCCESS";
        return true;
    }

    paymentStatus = "FAILED";
    return false;
}

std::string PaymentService::getPaymentStatus() const {
    return paymentStatus;
}