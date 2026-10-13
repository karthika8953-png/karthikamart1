
#include "AuthFilter.h"

bool AuthFilter::isAuthenticated(const std::string& token) const {
    return !token.empty();
}
