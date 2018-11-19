#include<bits/stdc++.h>
using namespace std;

vector<string> tot;
string S[100050];
int main(){
    int n;
    string f;
    cin >> f;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> S[i];
    }   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            tot.push_back(S[i]+S[j]);
        }
    }
    for(string s:tot){
        int ss = s.find(f);
        if(ss!=string::npos){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO";
}