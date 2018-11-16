#include<bits/stdc++.h>
using namespace std;

 int t,a,b,c,T[3];
 int main(int argc, char const *argv[])
{
	 scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",T,T+1,T+2);
        a+=T[0];
        b+=T[1];
        c+=T[2];
    }
    if(!a && !b && !c) cout << "YES";
    else cout << "NO";
	
	return 0;
}