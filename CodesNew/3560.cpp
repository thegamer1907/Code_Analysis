#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>
#include <algorithm>
 #define loop(i,j,n) for(int i=j;i<n;i++)
using namespace std;
// Problem link https://codeforces.com/problemset/problem/1042/A
int main() 
{
	int n=0,m=0;
	cin>>n>>m;
	int a[n];

int kmax=0,kmin=0;
	loop(i,0,n) cin>>a[i];

int cp[n];

loop(i,0,n) cp[i]=a[i];

sort(cp,cp+n);

kmax=m+cp[n-1];

loop(i,0,m)
{
	sort(a,a+n);
	a[0]=a[0]+1;

}
sort(a,a+n);

kmin=a[n-1];

cout<<kmin<<" "<<kmax<<endl;

	return 0;
}