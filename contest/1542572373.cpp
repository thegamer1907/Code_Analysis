#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    s2=s1[1]+s1[0];

    int n;
    cin>>n;
    string s[n*2];
    int j=n;
    for(int i=0;i<n;i++){
        cin>>s[i];
        s[j]=s[i];
        j++;
    }
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            if(i==j){
                if(s[i]==s1){
                    cout<<"YES";
                    return 0;
                }
                continue;
            }
            ///s[i] -> s[j]
            if(s[i][1]==s1[0]&&s[j][0]==s1[1]){
                cout<<"YES";
                return 0;
            }
            if(s[j][1]==s1[0]&&s[i][0]==s1[1]){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";

    return 0;
}
