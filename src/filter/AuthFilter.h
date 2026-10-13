
#ifndef AUTH_FILTER_H
#define AUTH_FILTER_H

#include <string>

class AuthFilter {
public:
    bool isAuthenticated(const std::string& token) const;
};

#endif