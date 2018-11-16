#include <iostream>

using namespace std;



int main() {
	// your code goes here
	int n,t,k=0;
	cin>>n>>t;
	string a,b;
	cin>>a;
	for(int j=0;j<t;j++)
	{
	
int i=0;
while(i<n)
{
    if(a[i]=='B'&&a[i+1]=='G')
    {
    swap(a[i],a[i+1]);
    i=i+2;
    }
    else{
        i++;
    }
}
	}
	cout<<a;

	return 0;
}
