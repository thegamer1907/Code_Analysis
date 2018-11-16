#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int t1,t2,t3,s1=0,s2=0,s3=0;
	for(int i=0;i<n;i++)
	{
		cin>>t1>>t2>>t3;
		s1+=t1;
		s2+=t2;
		s3+=t3;
	}
	if(s1==0&&s2==0&&s3==0)
	cout<<"YES";
	else
	cout<<"NO";
}