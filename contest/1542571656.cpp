#include<iostream>

using namespace std;

int main()
{
	char A[101][2],password[2];
	int n,i,flag=0,j;
	cin>>password>>n;
	for(i=0;i<n;i++) cin>>A[i];
	for(i=0;i<n;i++) if(password[0]==A[i][0] && password[1]==A[i][1])
	{
	cout<<"yes"<<endl;
	return 0;
    }
	for(i=0;i<n;i++) for(j=0;j<n;j++) if(password[0]==A[i][1] && password[1]==A[j][0]) {
	cout<<"yes"<<endl;
	return 0;
	}
    cout<<"no"<<endl;
    return 0;
}
