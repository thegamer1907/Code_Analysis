#include<bits/stdc++.h>
#include <sstream>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define mod  1000000007
#define N 1000000
#define pb push_back
#define mp make_pair
#define pf printf
#define sf scanf
#define mem memset(a,0,n)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mx 20000000
ll a[1000005];
 main()
{
    char s[100005], *p;
    int x;
    cin>>s;
    if((p=strstr(s,"AB"))&&(strstr(p+2,"BA"))){
        pf("YES\n");
    }
    else if((p=strstr(s,"BA"))&&(strstr(p+2,"AB"))){
        pf("YES\n");
    }
    else{
        pf("NO\n");
    }
    return 0;
}
/*In C++, std::strstr() is a predefined function used for string handling.
 string.h is the header
 file required for string functions.

This function takes two strings s1 and s2 as an argument and
 finds the first occurrence of the 
sub-string s2 in the string s1. The
 process of matching does not include
  the terminating null-characters(‘\0’), but function stops there*/