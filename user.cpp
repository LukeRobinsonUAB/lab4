#include <string>
#include <vector>

class User {
    public:
        void setusername(std::string user) {
            this->userName = user;
        }

        void setemail(std::string mail) {
            this->email = mail;
        }

        std::string getuserName() {
            return this->userName;
        }

        std::string getemail() {
            return this->email;
        }
    
        void addFriend() {

        }

        void removeFriend() {

        }

        void numFriends() {

        }


    private:
        std::string userName;
        std::string email;
        std::vector<User*> friendList;

};