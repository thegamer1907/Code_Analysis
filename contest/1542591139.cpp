#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define READ ios_base::sunc_with_stdio(0);cin.tie(0);
#define ld long double
using namespace std;
ll const MAS= 1e5 + 1 ;
ll n , m, mas[MAS],ans;
string s,ss[100001];
int main()
{
    cin>>s>>n;

    for (int i = 0 ; i < n ; ++i)
        cin>>ss[i];

    for (int i = 0 ; i < n ; i ++){
            string check,check1;
        for (int j = i ; j < n ; ++j){
            check = ss[i] + ss[j];
            check1 = ss[j] + ss[i];
            m = check.size();
            for (int ij = 0 ; ij < m - 1 ; ++ij){
            if (check[ij] == s[0] && check[ij + 1] == s[1])return cout<<"YES",0;
            if (check1[ij] == s[0] && check1[ij + 1] == s[1])return cout<<"YES",0;
            }
//            cout<<check<<" " ;
            check = "";
            check = ss[i];
        }
    }

    cout<<"NO";


}
