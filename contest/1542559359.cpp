#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool a=false,b=false;
    string word[100],pass;int n;
    cin>>pass>>n;
    for (int i=0;i<n;i++){
        cin>>word[i];
    }
    for (int i=0;i<n;i++){

        if (word[i]==pass) {cout<<"YES";return 0;}
        if (word[i][0]==pass[1]) a=true;
        if (word[i][1]==pass[0])b=true;
        if (a&&b) {cout<<"YES";return 0;}}
    cout <<"NO";

    return 0;
}
