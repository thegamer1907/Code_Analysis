#include <iostream>
using namespace std;

int _memo[100005];
int main(int argc, const char * argv[]) {
    string inputString, buildingString;
    cin >> inputString;
    
    for(int i = 1; i < inputString.length(); i++){
        if (inputString[i-1] == (i < inputString.length() ? inputString[i] : ' ')){
            _memo[i] = (i-1 >= 0 ? _memo[i-1] : 0 ) + 1;
        } else{
            _memo[i] = (i-1 >= 0 ? _memo[i-1] : 0 );
        }
    }
    
    int queries;
    cin >> queries;
    
    for (int i = 0; i < queries; i++) {
        int leftIndex, rightIndex;
        cin >> leftIndex >> rightIndex;
        buildingString += to_string(_memo[rightIndex-1] - _memo[leftIndex-1]) + "\n";
    }
    
    cout << buildingString << endl;
}