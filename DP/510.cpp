#include<bits/stdc++.h>
using namespace std;
int com[100005];
int n;
string s;
void comu()
{
    com[0]=0;

    for(int i=1;i<n;i++)
    if(s[i]==s[i-1])
            com[i]=com[i-1]+1;
            else com[i]=com[i-1];

}
int sum(int l,int r)
{
    if(com[r]-com[l]<0)
        return 0;
    return com[r]-com[l];

}
int main()
{
    cin>>s;
    n=s.size();
    int m;
    cin>>m;
    comu();
    int l,r;
    while(m--)
    {
        cin>>l>>r;

        cout<<sum(l-1,r-1)<<endl;
    }
    return 0;
}
