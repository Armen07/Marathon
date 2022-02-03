#include <iostream>
#include <string>

std::string mv_space(std::string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            str.erase(i, 1);
            str.insert(i, "%20");
        }
    }
    return str;
}

int main(){
    std::string str;
    std::cout << "Enter the bar" << std::endl;
    getline(std::cin, str);

    std::cout << mv_space(str) << std::endl;

    return 0;
}