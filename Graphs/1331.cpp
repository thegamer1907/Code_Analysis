#include<bits/stdc++.h>
#include <windows.h>

using namespace std;
bool moo[30002];
int n,a,ar[30002];

int main(){
	cin>>n>>a;
	for (int i = 1; i <a; ++i)
	{
		cin>>ar[i];
	}
    int w=1;
   while(!moo[w]){

    moo[w]=true;
    w=w+ar[w];
   }

   if (moo[a])cout<<"YES";
   else cout<<"NO";
}