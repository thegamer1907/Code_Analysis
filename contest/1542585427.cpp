#include <bits/stdc++.h>
using namespace std;

int main(){
    string pas;
    vector<string> inp;
    cin>>pas;
    int n;
    cin>>n;
    inp.resize(n);
    bool result = false;
    for(int i=0; i<n; i++){
        cin>>inp[i];
        if(inp[i].find(pas) < inp[i].size())
            result = true;
    }
    if(result){
        cout<<"YES";
        return 0;
    }
    string nul1 = "";
    string nul2 = "";
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            nul1.push_back(inp[j].back()); nul1.push_back(inp[i][0]);
            nul2.push_back(inp[i].back()); nul2.push_back(inp[j][0]);
            if(pas == nul1 || pas == nul2){
                cout<<"YES";
                return 0;
            }
            nul1 = "";
            nul2 = "";
        }
    }
    cout<<"NO";


    return 0;
}
