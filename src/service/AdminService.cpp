
#include "AdminService.h"

bool AdminService::isAdmin(const std::string& role) const {
    return role == "ADMIN";
}