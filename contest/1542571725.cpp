#include<bits/stdc++.h>
using namespace std ;

int main()
{
	int n ;
	bool ans=0 , l=0 , f=0 ;
	char pass[3];
	cin>>pass;
	cin>>n;
	while(n--){
		char bark[3];
		cin>>bark;
		if(!ans){
			if( (bark[0]==pass[0] && bark[1]==pass[1] ) || (bark[0]==pass[1] && bark[1]==pass[0] ))
				ans=1;
			else{
				if(bark[0]==pass[1])
					l=1;
				if(bark[1]==pass[0])
					f=1;
				ans=(f*l);
			}
		}
	}
	if(ans)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
		
	return 0;
}
