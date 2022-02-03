#include <iostream>
#include <string>

bool is_unique(std::string str){

    for(int i = 0; i < str.size(); i++){
        for(int j = i + 1; j < str.size(); j++){
            if(str[i] == str[j]){
                return false;
            }
        }
    }
    return true;

}

int main(){
    std::string str;
    std::cout << "Enter the string to check if it's Unique" << std::endl;
    std::cin >> str;

    std::cout << std::boolalpha << is_unique(str);

    return 0;
}