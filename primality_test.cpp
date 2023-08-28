#include <iostream>

using namespace std;

int main(){
    int num;
    int counter;
    cout << "Test de primalité" << endl;
    cout << "Choissisez un nombre" << endl;
    while(!(cin>>num)){
        cout << "Entrée incorrecte. Réessayez." << endl;
        cin.clear();
        cin.ignore(255, '\n');
    }
    while(true){
        counter = 2;
        if(counter <= num){
            if((num % counter)==0 && counter != num){
                cout << "Ton nombre n'est pas premier.";
                break;
            }else{
                cout << "Ton nombre est premier!";
                break;
            }
        }
    }
    return 0;
}
