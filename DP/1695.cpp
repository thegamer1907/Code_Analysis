#include <iostream>

using namespace std;

int mod(int a, int b){
    if(a > b)
        return a-b;
    return b-a;
}

int main ()
{
    string str;
    cin >> str;
    int length = str.length();
    int startingPoints[length/2 + 1];
    int endingPoints[length/2 + 1];
    for(int i = 0; i < length/2 + 1; i++){
        startingPoints[i] = -1;
    }
    for(int i = 0; i < length/2 + 1; i++){
        endingPoints[i] = -1;
    }
    int startingIndex = 0, endingIndex = 0;
    for(int i = 0; i < length; i++) {
        if(str[i] == 'A' && str[i+1] == 'B'){
            startingPoints[startingIndex] = i;
            startingIndex++;
        }
        if(str[i] == 'B' && str[i+1] == 'A'){
            endingPoints[endingIndex] = i;
            endingIndex++;
        }
    }

    if(startingPoints[0] == -1 || endingPoints[0] == -1) {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = false;
    for(int i = 0; i < startingIndex; i++){
        for(int j = 0; j < endingIndex; j++){
            if(mod(startingPoints[i], endingPoints[j]) != 1){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

}
















