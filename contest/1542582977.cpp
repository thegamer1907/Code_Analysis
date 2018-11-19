#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	char a[107][2];
	scanf("%s",a[0]);
    int n;
    int starting=0,ending=0,both=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
    	scanf("%s",a[i]);
    	
    	if(a[0][1] == a[i][0])
    	starting++;
    	if(a[0][0] == a[i][1])
    	ending++;
    	
    	if((a[i][0]==a[0][0] && a[i][1]==a[0][1]) || (a[i][0]==a[0][1] && a[i][1]==a[0][0]))
    	both++;
    	
	}
	if((starting!=0 && ending!=0) || both!=0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
    
    return 0;
}
