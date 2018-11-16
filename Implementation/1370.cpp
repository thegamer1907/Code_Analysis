#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void changeOrder(vector<char> positions, int n, int t){
    for(int j=0; j<t;j++){
        for(int i=0; i<n-1;){
            if(positions[i] == 'B' && positions[i+1]=='G')
                {
                    char temp;
                    temp = positions[i+1];
                    positions[i+1] = positions[i];
                    positions[i] = temp;
                    i+=2;
                }
            else{
                i+=1;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout << positions[i];
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<char> positions;
    for(int i=0; i<n; i++){
        char x;
        cin >> x;
        positions.push_back(x);
    }
//    for(int i=0; i<t; i++)
    changeOrder(positions, n, t);


}
