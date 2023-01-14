#include <iostream>
#include <string>

int main(){
    std::string nimi;
    std::cout << "Anna nimesi" << std::endl;
    // std::cin >> nimi; // luetaan teksti ilman väliä
    std::getline(std::cin,nimi); // luetaan teksti välien kanssa
    std::cout << "Hei " << nimi <<std::endl;
    
    int age{23}; // declare and initialize
    std::cout << age << std::endl;
    age = 23; // assign

    std::cerr << "Error" << std::endl;
    std::clog << "Log" << std::endl;

    return 0;
}