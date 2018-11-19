/*input
ha
1
ha
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
char pwd[3];
cin>>pwd;

int n;
cin>>n;

char ch[202][3];
int u=0;

for(int i=0;i<n;i++)
{
cin>>ch[u];
ch[u+1][0]=ch[u][0];
ch[u+1][1]=ch[u][1];
u=u+2;
}

int sol=0;
for(int i=0;i<u;i++)
{
  for(int j=0;j<u;j++)
  {
  	if((ch[i][0]==pwd[0] && ch[i][1]==pwd[1])||(ch[i][1]==pwd[0] && ch[j][0]==pwd[1])||(ch[j][1]==pwd[0] && ch[i][0]==pwd[1]))
  		{
  			sol=1;
  			break;
        }
  }
}

if(sol)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;

return 0;
}
