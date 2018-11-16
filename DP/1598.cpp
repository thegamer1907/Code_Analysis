#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int i,j;
    cin>>s;
    if(s.find("AB")!=-1 && s.find("BA",s.find("AB")+2)!=-1 || s.find("BA")!=-1 && s.find("AB",s.find("BA")+2)!=-1)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}
