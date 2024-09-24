#include <string>
#include <vector>
#include "user.h"


    void User::setuserName(std::string user) {
        this->userName = user;
    }

    void User::setEmail(std::string mail) {
        this->email = mail;
    }

    std::string User::getuserName() {
        return this->userName;
    }

    std::string User::getEmail() {
        return this->email;
    }
    
    void User::addFriend() {
        
    }

    void User::removeFriend() {

    }

    void User::numFriends() {

    }

    User* User::getFriendAt(int i) {

    }