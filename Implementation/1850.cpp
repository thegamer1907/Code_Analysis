#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const double pi=3.141592653589793;
int main()
{	fast;
	long long int n,sum1= 0,sum2=0,sum3=0,t,total = 0,a,b,c;
	
	cin>>n;
	for(int i = 0 ; i<n; i++)
	{
		cin>>a>>b>>c;
		sum1+=a;
		sum2+=b;
		sum3+=c;
	
	
	}
	
	if(sum1==0&&sum2==0&&sum3==0)
	cout<<"YES";
	else
	cout<<"NO";
}
/*


">" ??? 1000,8 
"<" ??? 1001, 9
"+" ??? 1010, 10
"-" ??? 1011, 
"." ??? 1100, 
"," ??? 1101, 
"[" ??? 1110, 
"]" ??? 1111. 

*/

