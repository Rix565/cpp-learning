#include <iostream>

int main(){
    int a;
    int b;
    int r;
    std::cout << "Calculateur de PGCD" << std::endl;
    std::cout << "Choissisez le premier nombre." << std::endl;
    if(std::cin >> a){
        std::cout << std::endl << "Choissisez le second nombre." << std::endl;
        if(std::cin >> b){
            r = a % b;
            while(r != 0){
                a = b;
                b = r;
                r = a % b;
            }
            std::cout << std::endl << "Voilà le PGCD du nombre: " << b;
        }else{
            std::cout << "Erreur.";
        }
    }else{
        std::cout << "Erreur.";
    }
    return 0;
}
