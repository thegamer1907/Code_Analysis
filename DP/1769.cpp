#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mk make_pair
#define inf 0x3f3f3f3f
#define mod 1000000007
using namespace std;
const int N=1e5+10;

int main()
{
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    int pp=-1;
    for(int i=0;i<str.size();i++){
        if(pp==-1)
        {
            if(i!=str.size()-1&&str[i]=='A'&&str[i+1]=='B')
                pp=1,i++;

        }
        else  if(i!=str.size()-1&&str[i]=='B'&&str[i+1]=='A'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    pp=-1;
    for(int i=0;i<str.size();i++){
        if(pp==-1)
        {
            if(i!=str.size()-1&&str[i]=='B'&&str[i+1]=='A')
                pp=1,i++;

        }
        else  if(i!=str.size()-1&&str[i]=='A'&&str[i+1]=='B'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
