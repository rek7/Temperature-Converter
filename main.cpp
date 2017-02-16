#include <iostream>

int main(){
    float temp;
    std::string user_choose; // wew we have rights!
    std::cout << "for fahrenheit to celsius type f for the inverse type c: ";
    std::cin >> user_choose;
    std::cout << "Enter your temperature: ";
    std::cin >> temp;
    if(user_choose=="f"){
        std::cout << "Converted " << temp << " fahrenheit to " << ((temp-32)*5)/9 << " celsius." << std::endl;
    }
    else{
        std::cout << "Converted " << temp << " celsius to " << ((temp*9)/5)+32 << " fahrenheit." << std::endl;
    }
    return 0;
}
