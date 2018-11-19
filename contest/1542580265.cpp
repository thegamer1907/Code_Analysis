#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string pw;
	int n;
	cin>>pw;
	char first = pw[0];
	char scn = pw[1];
	cin>>n;
	int f = 0;
	int s = 0;
	for(int i=0;i<n;i++){
		string bark;
		cin>>bark;
		if(bark[1]==first){
			f = 1;
		}if(bark[0]==scn){
			s = 1;
		}
                if(bark[0]==first & bark[1]==scn){
			s = 1;
                        f=1;
		}
                
	}
	if(f==1 & s==1){
		cout<<"YES"<<endl;;
	}else{
		cout<<"NO"<<endl;
	}
}