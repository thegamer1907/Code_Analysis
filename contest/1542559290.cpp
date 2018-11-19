#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str[1000];
	int flag=0,flag2=0,n;
	cin>>str1;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>str[i];
	for(int i=1;i<=n;i++)
	{
		if(str[i]==str1)  {
			cout<<"YES";
			return 0;
			flag=1;
			break;
		}
		if(str[i][1]==str1[0]) flag=1;
        if(str[i][0]==str1[1])  flag2=1;
         if(flag==1&&flag2==1)
         	 {
         	 	cout<<"YES"<<endl;
         	 	return 0;
         	 	break;
         	 }
	}
	if(!flag or !flag2)
		cout<<"NO"<<endl;

}