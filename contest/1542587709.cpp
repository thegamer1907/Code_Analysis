#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


int main() {
    
    string target;
    
    cin >> target;
    int num;
    
    cin >> num;
    
    bool front = false;
    bool back = false;
    for (int i = 0 ;i < num; i++) {
        string temp;
        cin >> temp;
        
        if (temp.at(1) == target.at(0))
            front = true;
        if (temp.at(0) == target.at(1))
            back = true;
        
        if (front && back)
            break;
        
        if (temp == target) {
            front = true;
            back = true;
            break;
        }
    }
    
    if (front && back)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    return 0;
}