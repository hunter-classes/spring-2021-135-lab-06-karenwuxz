#include<iostream>

int main(){
    std::string input = "Hi my name is Karen!";
    for(int i = 0; i < input.length(); i++){
        std::cout << input[i] << " " << int(input[i]) << std::endl;
    }
    return 0;
}