#ifndef _USERH_
#define _USERH_

#include <string>
#include <vector>

class User {
    public:

        User();

        void setuserName(std::string user);

        void setEmail(std::string mail);

        std::string getuserName();

        std::string getEmail();
    
        void addFriend(User* newfriend);

        void removeFriend(std::string friendToRemove);

        int numFriends();

        User* getFriendAt(int i);


    private:
        std::string userName;
        std::string email;
        std::vector<User*> friendList;

};















#endif