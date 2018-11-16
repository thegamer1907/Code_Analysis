#include <bits/stdc++.h>
using namespace std;
string f(vector<int> & vec){
    for (int i=0; i<vec.size(); i++){
        if(vec[i]>=7)
            return "YES";
    }
    return "NO";
}
int main(int argc, char const *argv[]) {
    string s;
    cin>>s;
    int n = s.size();
    int i=0; 
    vector<int> vec;
    while(i<n){
        char curr = s[i];
        int count = 1;
        while(s[i+1]==curr && i<n){
            count++;
            i++;
        }
        i++;
        vec.push_back(count);
    }
    cout<<f(vec);
}
