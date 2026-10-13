
#ifndef PAYMENT_SERVICE_H
#define PAYMENT_SERVICE_H

#include <string>

class PaymentService {
public:
    bool processPayment(double amount);
    std::string getPaymentStatus() const;

private:
    std::string paymentStatus = "PENDING";
};

#endif