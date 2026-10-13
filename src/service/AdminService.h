
#ifndef ADMIN_SERVICE_H
#define ADMIN_SERVICE_H

#include <string>

class AdminService {
public:
    bool isAdmin(const std::string& role) const;
};

#endif