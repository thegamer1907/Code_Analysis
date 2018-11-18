#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <queue>
using namespace std;
#define ll long long int

int main(){
    string s; cin>>s;
    int n; cin>>n;
    vector<string> strs(n,"");
    for(auto& ele:strs) cin>>ele;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string con1,con2;
            con1 = strs[i]+strs[j];
            con2 = strs[j]+strs[i];
            if (con1.find(s) != string::npos || con2.find(s) != string::npos)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}