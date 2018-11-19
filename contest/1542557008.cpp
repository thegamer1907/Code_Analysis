#include<iostream>
using namespace std;

int main()
{
	char start,end,tempe,temps;
	bool bend=0,bstart=0;
	int n;
	cin>>start>>end;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>temps;
		if(temps==end) bstart=1;
		cin>>tempe;
		if(tempe==start) bend=1;
		if(temps==start && tempe==end) {bstart=1;bend=1;
		}
	}
	if(bend && bstart) cout<<"YES";
	else cout<<"NO";
	return 0;
}
 					   			  	 	 	 	   	 	 		