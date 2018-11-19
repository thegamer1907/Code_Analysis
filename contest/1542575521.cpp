#include <iostream>
#include <string>
using namespace std;

int main() {
	int sum1=0,sum2=0;
string RR[2][501];
int n;
cin>>RR[1][0]>>n;
for (int i=0; i<n;i++)
cin>>RR[0][i];
for (int i=0; i<n;i++){
	if (RR[0][i][0]==RR[1][0][1]&& sum1==0)
	sum1++;
	if (RR[0][i][1]==RR[1][0][0]&& sum2==0)
	sum2++;
	if (RR[0][i][0]==RR[1][0][0] && RR[0][i][1]==RR[1][0][1] )
		sum1+=2;
}
if ((sum1+sum2)>=2)
cout <<"YES"<<endl;
else 
cout <<"NO"<<endl;

	return 0;
}