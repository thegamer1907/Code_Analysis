#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int cnt=0,curr=0,cnt2=0,curr2=0;
    for(int i=0;i<a.size();i++)
    {
        (a[i]=='1')?curr+=1:curr=0;
        (a[i]=='0')?curr2+=1:curr2=0;
        cnt2=max(cnt2,curr2);
        cnt=max(cnt,curr);
    }
    if(cnt2>=7 or cnt>=7)
        cout<<"YES";
    else
        cout<<"NO";
}