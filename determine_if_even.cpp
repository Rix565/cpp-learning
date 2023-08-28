#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Choose a number" << endl;
    while(!(cin>>num)){
        cout << "Incorrect value." << endl;
        cin.clear();
        cin.ignore(255, '\n');
    }
    if((num % 2)!=0){
        cout << "The number isn't a even number.";
    }else{
        cout << "The number is a even number.";
        
    }
    return 0;
}
