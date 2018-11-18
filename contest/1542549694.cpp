#include <bits/stdc++.h>

using namespace std;

int n;
string pass;
string c[105];

int flag;
int flag2;
int flag3;

int main()
{
    cin>>pass;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(pass==c[i]){
            flag=1;
        }
        if(c[i][0]==pass[1]){
            flag2=1;
        }
        if(c[i][1]==pass[0]){
            flag3=1;
        }
    }
    if(flag||(flag2&&flag3))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
        		 	  	   		 	 		 		 	