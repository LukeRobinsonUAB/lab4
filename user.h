#ifndef _USERH_
#define _USERH_

#include <string>
#include <vector>

class User {
    public:
        void setuserName(std::string user);

        void setEmail(std::string mail);

        std::string getuserName();

        std::string getEmail();
    
        void addFriend();

        void removeFriend();

        void numFriends();

        User* getFriendAt(int i);


    private:
        std::string userName;
        std::string email;
        std::vector<User*> friendList;

};















#endif