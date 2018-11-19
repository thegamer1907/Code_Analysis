#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<iterator>
#include<unordered_map>
#include<unordered_set>
#include<assert.h>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector <string> vs;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        vs.push_back(s);
        
    }
    int u = find(vs.begin(),vs.end(),s)-vs.begin();
    if(u < vs.size()){
        cout << "YES" << endl;
        
    }
    else{
        bool found = false;
        for(int i=0;i<vs.size();i++){
            for(int j=0;j<vs.size();j++){
                char a = vs[i][0];
                char b = vs[j][1];
                string s2;
                s2+=b;
                s2+=a;
                if(s2==s){
                    found = true;
                }
            }
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
