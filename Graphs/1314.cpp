#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return !a ? b : gcd(b % a, a); }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
const int MAX=(3*10000)+20;
int n,m,arr[MAX];
bool valid=false;
void dfs(int position)
{
    if(position>m)
    {
        return;
    }
    if(position==m)
    {
        valid=true;
        return;
    }
    dfs(position+arr[position-1]);
}
int main() {
    scanf("%d%d",&n,&m);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    dfs(1);
    if(valid)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
	return 0;
}