#include <iostream>
using namespace std;

int main() 
{
string s;
cin>>s;
int i;
for(i=0;s[i+1]!='\0';i++)
{
	if(s[i]=='A' && s[i+1]=='B')
	{
		i+=2;
		break;
	}
}

for(;s[i+1]!='\0';i++)
{
	if(s[i]=='B' && s[i+1]=='A')
	{
		printf("YES");
		return 0;
	}
}



for(i=0;s[i+1]!='\0';i++)
{
	if(s[i]=='B' && s[i+1]=='A')
	{
		i+=2;
		break;
	}
}

for(;s[i+1]!='\0';i++)
{
	if(s[i]=='A' && s[i+1]=='B')
	{
		printf("YES");
		return 0;
	}
}



printf("NO");



	return 0;
}