#include <bits/stdc++.h>
using namespace std;
vector <string> v;

int main() {
	bool flag=false,f0=false,f1=false;
	string s;
	cin>>s;
    int t;
    cin>>t;
    while(t--)
    {
    	string str;
    	cin>>str;
    	v.push_back(str);
    }
    char c1,c2;
    c1=s[0];
    c2=s[1];
    for(int i=0;i<v.size();i++)
    {
    	if(v[i]==s)
    	{
    		flag=true;
    		break;
        }
        if(v[i][1]==c1)
        {
        	f1=true;
        }
        if(v[i][0]==c2)
        f0=true;
    }
    if(f1&&f0)
    flag=true;
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
	return 0;
}