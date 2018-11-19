#include <bits/stdc++.h>

using namespace std;
const int inf = 10e5;
int n;
bool st = false , st2=false;

string s , a[inf];
int main()
{
    cin>>s;
    cin>>n;
    for(int i = 0 ; i< n ;i++){
        cin>>a[i];
        if(s==a[i]){
            cout<<"YES";
            return 0;
        }
    }

    for(int i = 0 ; i<n ; i++){
        if(a[i][0]==s[1]){
            st=true;
            break;
        }
    }

    for(int i = 0 ; i<n ; i++){
        if(a[i][1]==s[0]){
            st2=true;
            break;
        }
    }

    if(st && st2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
