#include <iostream>
#include <iostream>

void compress(std::string str){
    std::string res = "";
    for(int i = 0; i < str.size(); i++){
        int count = 0;
        for(int j = i; str[j] == str[i] ; j++){
            count++;
        }
        res += str[i];
        res += char(count + 48);
        
        i += count - 1;

    }
    if(res.size() < str.size()){
        std::cout << res << std::endl;
    }else{
        std::cout << str;
    }
}

int main(){
    std::string str;
    std::cout << "Enter the line" << std::endl;
    std::cin >> str;

    compress(str);

    return 0;
}