#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void login();
void registracia();
void start();
class Register {         // creates a Registry class

 
    private:
    string username="";
    string password="";
public:
    void setusername(string us){
    username=us;
}
string getusername(){
    return username;
}
void setpassword(string ps){
    password=ps;
}
string getpassword(){
    return password;
}
};  
  
