#include<iostream>
using namespace std;
int main()
{
	string m;
	cin>>m;
	int flg=0;
    for(int i=0;i<m.length();i++)
    {
    	if(m[i]==m[i+1] and m[i]==m[i+2] and m[i]==m[i+3] and m[i]==m[i+4] and m[i]==m[i+5] and m[i]==m[i+6])
    	{
    		flg=1;
    		break;
    	}
	}
	if(flg)cout<<"YES";
	else cout<<"NO";
	return 0;
}
