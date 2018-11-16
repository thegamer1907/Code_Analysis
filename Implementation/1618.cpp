#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s ;
    cin>>s;
    int ln = s.length();
    bool ifTrue = 0 ;
    for(int i=0; i<ln; i++){
        int ones = count(s.begin()+i,s.begin()+i+7,'1');
        int zeros = count(s.begin()+i,s.begin()+i+7,'0');

        if(ones >= 7|| zeros >= 7)
            ifTrue =1;
    }
    if(ifTrue)
        cout<<"YES";
    else cout<<"NO";
        return 0;
}
