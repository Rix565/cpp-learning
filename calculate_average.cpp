//fork of add_as_many_table.cpp
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<double> someTable {};
    double element = 0;
    double total = 0;
    double average = 0;
    cout << "Add as many numbers to the table as you want to. Type a negative number to stop adding numbers to the table." << endl;
    while(true){
        while(!(cin>>element)){
            cout << "Wrong input. Try again.";
            cin.clear();
            cin.ignore(255, '\n');
        }
        if(element<0){
            cout << "Ok, stopping adding numbers." << endl;
            break;
        }
        someTable.push_back(element);
        cout << "Added the element " << element << "." << endl;
    }
    //cant define it earlier else table would be empty and if i didnt initialize it compiler would be mad at me
    auto size_of_table = size(someTable);
    //cant do auto something: someTable for reasons i cant even remember of lol
    for(int i=0; i<=size_of_table; i++){
        total += someTable[i];
        if(i==size_of_table){
            //we got to the end of the table
            average = total / size_of_table;
        }
    }
    cout << "The average is " << average;
    return 0;
}
