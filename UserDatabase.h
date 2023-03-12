#ifndef USERDATABASE_INCLUDED
#define USERDATABASE_INCLUDED
#include "treemm.h"
#include <string>

class User;

class UserDatabase
{
public:
    UserDatabase();
    bool load(const std::string& filename);
    User* get_user_from_email(const std::string& email) const;
    ~UserDatabase();

private:
    TreeMultimap<std::string, User*> m_map;
    std::vector<std::string> m_emails;
    bool m_loaded;
};

#endif // USERDATABASE_INCLUDED