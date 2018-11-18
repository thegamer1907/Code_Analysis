  #include <bits/stdc++.h>


      using namespace std;
    //  #include<iostream>
    //  #include<vector>
    //  #include<queue>
                    #define pb push_back
                    #define ll long long
                    #define ld long double
                    #define mp make_pair
                    #define pi 3.14159265358979323846



    const int inf=(1e9)+5;
    using namespace std;
    int main() {

      //  ios::sync_with_stdio(false);
       // cin.tie(nullptr);
//        cout.tie(nullptr);

int n,m,k,l,p;
string s;
cin>>s;
cin>>n;
int a[3]={};
for (int i=0; i<n; i++)
{
    string q;
    cin>>q;
    if (q[0]==s[1])
        a[1]=1;
    if (q[1]==s[0])
        a[0]=1;
        if (q==s) {cout<<"YES";return 0;}
}
if (a[0]+a[1]==2) cout<<"YES"; else cout<<"NO";



}