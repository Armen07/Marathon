#include <iostream>
#include <string>

bool can_be_same(std::string str, std::string mtr){
    int count = 0;
    for(int i = 0; i < str.size(); i++){
        for(int j = 0; j < str.size(); j++){
            if(str[i] == mtr[j]){
                count++;
            }
        }
    }
    if(count == str.size()){
        return true;
    }
    return false;
}

int main(){

    std::string str;
    std::string mtr;
    std::cout << "Enter the first string" << std::endl;
    std::cin >> str;
    std::cout << "Enter the second string" << std::endl;
    std::cin >> mtr;

    std::cout << std::boolalpha << can_be_same(str, mtr);

    return 0;
}