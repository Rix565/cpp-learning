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
    cout << "Here is the list of non-even numbers between 0 and your number:";
    for(int i=0;i<num;i++){
        if((i % 2)!=0){
            cout << i << ", ";
        }
    }
    return 0;
}
