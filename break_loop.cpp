#include <iostream>

int main(){
    int i = 0;
    while(true){
        if(i == 10){
            std::cout << "on a cassé la boucle";
            break;
        }
        i++;
    }
    return 0;
}
