#include<iostream>
#include<string>
using namespace std;
string s;
int kmp[2100006];
size_t l;
int main(){
    cin >> s;
    l = s.size();
    kmp[0] = -1;
    int r = -1;
    
    for(int i=1;i<l;i++){
        while(r != -1 && s[i] != s[r+1])
            r = kmp[r];
        if(s[i] == s[++r])
            kmp[i] = r;
        else
            kmp[i] = r = -1;
    }
    if(kmp[l-1] == -1){
        cout<<"Just a legend\n";
        return 0;
    }
    int ans = kmp[kmp[l-1]];
    for(int i = 0; i < l-1; i++)
        if(kmp[i] == kmp[l-1])
            ans = kmp[l-1];
    if(ans == -1){
        cout<<"Just a legend\n";
        return 0;
    }
    for(int i=0;i<=ans;i++)cout<<s[i];
    cout << endl;
    return 0;
}
    
