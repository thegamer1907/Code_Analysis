/***********************************************************|
|          /\           /-------|   -----    |-----------|  |
|         /  \         /              |      |              |
|        /    \       |               |      |              |
|       /      \      |----|          |      |-------|      |
|      / ------ \          |-----|    |      |              |
|     /          \               |    |      |              |
|    /            \              /    |      |              |
|  ---            --- |---------/   -----  -----            |
|                                                           |
|   Codeforces = Asif_Watson  ||  Codechef = asif_watson    |
|   Mail = ashfaqislam33@gmail.com                          |
|   CSTE,Noakhali Science and Technology University(11)     |
|                                                           |
************************************************************/


#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

set<long long>st;

int main()
{
    IOS
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[m+2];
    for(int i=1;i<=m;i++)cin>>a[i];

    long long op_type=1,last_element_in_page=k,value_erased=0;
    for(int i=1;i<=m;i++)
    {
        if(a[i]<=last_element_in_page)
        {
            st.insert(op_type);
            value_erased++;
        }
        else
        {
            if(value_erased==0)
            {
                last_element_in_page+=(((a[i]-last_element_in_page-1)/k)*k)+k;
            }
            else last_element_in_page+=value_erased;
            op_type++;
            value_erased=0;
            i--;
        }
    }
    cout<<st.size()<<endl;
    return 0;
}