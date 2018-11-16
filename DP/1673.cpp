#include<bits/stdc++.h>
using namespace std;
int main(){
 char s[1000000];
 char *a;
 cin>>s;
 if((a = strstr(s,"AB")) && strstr(a+2,"BA")){ cout<<"YES";}
 else if((a = strstr(s,"BA")) && strstr(a+2,"AB")){ cout<<"YES";}
 else{ cout<<"NO";}


}
