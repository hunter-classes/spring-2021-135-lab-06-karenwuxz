#include<iostream>

int main(){
    std::string input;
    std::cout << "Please enter a sentence: ";
    getline(std::cin, input);
    for(int i = 0; i < input.length(); i++){
        std::cout << input[i] << " " << int(input[i]) << std::endl;
    }
    return 0;
}