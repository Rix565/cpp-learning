#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<string> someTable {"hi", "this", "is", "a", "sentence", "written", "in", "a", "table"};
    auto tableSize = std::size(someTable);
    //warning between int and long unsigned int its weird
    for(int i=0; i<tableSize; i++){
        cout << someTable[i] << " ";
    }
    return 0;
}
