#include <iostream>
#include <vector>
using namespace std;
vector<int> aa;
vector<int> bb;
int main() {
    string s;
    cin>>s;
    int fira=-1;
    int firb=-1;
    int seca=-1;
    int secb=-1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            if(fira==-1)
            {
                fira=i;
            }
            seca=i;
        }
        if(s[i]=='B' && s[i+1]=='A')
        {
            if(firb==-1)
            {
                firb=i;
            }
            secb=i;
        }
    }
    if(fira==-1||firb==-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(abs(fira-firb)>=2 || abs(seca-secb)>=2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(secb!=firb)
        {
            if(abs(secb-fira)>=2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        if(seca!=fira)
        {
            if(abs(seca-firb)>=2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}