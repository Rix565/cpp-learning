#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<string> someTable {};
    string element = "";
    cout << "Add as many element to the table as you want to. Type \"stopadding\" to stop adding elements to the table." << endl;
    while(true){
        if(cin>>element){
            if(element=="stopadding"){
                cout << "Ok, stopping adding elements." << endl;
                break;
            }
            someTable.push_back(element);
            cout << "Added the element " << element << "." << endl;
        }else{
            cout << "Wrong input. Try again." << endl;
        }
    }
    for(auto element : someTable){
        cout << element << " ";
    }
    return 0;
}
