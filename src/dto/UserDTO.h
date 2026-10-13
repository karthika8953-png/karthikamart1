
#ifndef USER_DTO_H
#define USER_DTO_H

#include <string>

struct UserDTO {
    int id = 0;
    std::string name;
    std::string email;
    std::string role;
};

#endif