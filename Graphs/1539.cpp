# include <iostream>
using namespace std;
int main()
{
	int  n,k;
	cin>>n>>k;
	int *arr =new int[1000000];
   for(int i = 1 ;i< n;i++)
	   cin>>arr[i];
   int count =1;
int ok =0;
//int  s= 0 ;
while(1)
{
//	cout<<count<<endl;
	if(count == k)
	{ok =1;
	break;
	}
	else if(count >k )
	{
		ok =0;
		break;
	}
	else
	{
		count=count+arr[count];
	}
}
  if(ok)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;

}