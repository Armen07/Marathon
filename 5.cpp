#include <iostream>
#include <string>

bool is_posible(std::string str, std::string mtr){
    std::string str1 = str;
    std::string str2 = str;

    if(str == mtr){
        return true;
    }

    for(int i = 0; i < mtr.size(); i++){
        if(str[i] != mtr[i]){
            str[i] = mtr[i];
            str1.erase(i, 1);
            str2.insert(i, 1, mtr[i]);
            break;
        }
    }

    if(str == mtr || str1 == mtr || str2 == mtr){
        return true;
    }

    return false;
    
}

int main(){
    std::string str;
    std::string mtr;
    std::cout << "Enter the first line" << std::endl;
    getline(std::cin, str);
    std::cout << "Enter the second line" << std::endl;
    getline(std::cin, mtr);


    std::cout << std::boolalpha << is_posible(str, mtr) << std::endl;

    return 0;
}