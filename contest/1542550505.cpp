#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;

map<int,int> m;
int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
            int x = 0;
        for(int j = 0 ; j < k ; j++){
            int y;
            cin >> y;
            x += pow(2,j)*y;
        }
        m[x]++;
    }
    for(auto i : m){
        for(auto j : m){
            //cout << i.first << " " << j.first << " " << (i.first&j.first) << endl;
            if((i.first & j.first) == 0){
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";
    return 0;


}
