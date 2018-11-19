#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <set>
#include <queue>
typedef long long ll;

using namespace std;

string ori;
int n;
string s;

vector<string> v;


int main(){
    cin >> ori;
    cin >> n;
    bool c = false;
    for(int i=1;i<=n;i++){
        cin >>s;
        if(s == ori)c = true;
        v.push_back(s);
    }
    if(c){
        cout << "YES\n";
        return 0;
    }
    

    for(int i=0;i<v.size();i++){
        if(v[i][1] == ori[0]){
            for(int j=0;j<v.size();j++){
                //   cout << v[j][0]<<" " << ori[1]<<endl;
                if(v[j][0] == ori[1]){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    
    cout << "NO\n";
    
    
    
    return 0;
}