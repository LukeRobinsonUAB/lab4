#include <string>
#include <vector>
#include "user.h"
#include <iostream>

User::User() {
    userName = "";
    email = "";
    friendList = {};
}

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
    
void User::addFriend(User* newfriend) {
    friendList.push_back(newfriend);
}

void User::removeFriend(std::string friendToRemove) {
    for (auto it = friendList.begin(); it != friendList.end(); ++it) {
            if ((*it)->getuserName() == friendToRemove) {
                friendList.erase(it);
                break;
            }
        }
}

int User::numFriends() {
    return friendList.size(); //warning conversion size_t -> int
}

User* User::getFriendAt(int i) {
    if (i >= 0 && i < friendList.size())
            return friendList[i];
    return nullptr;
}