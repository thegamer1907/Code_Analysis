/*
    #########    #########    ####      ###    #########
    #########    #########    #####     ###    ##########
    ###          ###          ######    ###    ###     ###
    ###          ###          ### ###   ###    ###      ###
    #########    #########    ###  ###  ###    ###      ###
    #########    #########    ###   ### ###    ###      ###
          ###    ###          ###    ######    ###      ###
          ###    ###          ###     #####    ###     ###
    #########    #########    ###      ####    ##########
    #########    #########    ###       ###    #########


    ####      ###    ###      ###    #########       #########    #########
    #####     ###    ###      ###    ##########      #########    #########
    ######    ###    ###      ###    ###     ###     ###          ###
    ### ###   ###    ###      ###    ###      ###    ###          ###
    ###  ###  ###    ###      ###    ###      ###    #########    #########
    ###   ### ###    ###      ###    ###      ###    #########    #########
    ###    ######    ###      ###    ###      ###    ###                ###
    ###     #####    ###      ###    ###     ###     ###                ###
    ###      ####    ############    ##########      #########    #########
    ###       ###     ##########     #########       #########    #########
....................
https://t.me/bkonopl
....................
*/
#include<bits/stdc++.h>

#define ll long long
#define fi first
#define se second
#define sqr(flf) ((flf)*(flf))
#define endl "\n"
#define y1 pisos
#define ld long double

using namespace std;
ll i,j,x,n,ans[200000];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        ans[x]=i;
    }
    for(i=1; i<=n; i++) cout<<ans[i]<<" ";
    return 0;
}