#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 bool can=false;
 string password;
 cin>>password;

 cin>>n;

 string pass[n];

 for(int i=0; i<n; i++)
 {
  cin>>pass[i];
 }

 for(int i=0; i<n; i++){

 if(pass[i]==password) can=true;

 else if(pass[i][0]==password[1])
 {
    for(int j=0; j<n; j++)
    {
        if(pass[j][1]==password[0])
          can=true;
    }
 }

}

if(!can) cout<<"NO";
else cout<<"YES";
}







