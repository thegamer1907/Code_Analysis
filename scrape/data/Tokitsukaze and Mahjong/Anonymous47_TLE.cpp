#include<bits/stdc++.h>
using namespace std;

#define sz 1000006
#define ERROR 1e-9
#define PI acos(-1.0)
#define INF 10000007
#define LLINF 100000000000000007

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define all(x) x.begin(),x.end()

typedef long long ll;


int main()
{

    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    vector<int>P,M,S;

    if(s1[1] == 'p')   P.pb(s1[0]-'0');
    if(s1[1] == 'm')   M.pb(s1[0]-'0');
    if(s1[1] == 's')   S.pb(s1[0]-'0');

    if(s2[1] == 'p')   P.pb(s2[0]-'0');
    if(s2[1] == 'm')   M.pb(s2[0]-'0');
    if(s2[1] == 's')   S.pb(s2[0]-'0');

    if(s3[1] == 'p')   P.pb(s3[0]-'0');
    if(s3[1] == 'm')   M.pb(s3[0]-'0');
    if(s3[1] == 's')   S.pb(s3[0]-'0');

    int ans = 3;

    sort(all(P));
    sort(all(M));
    sort(all(S));

    if(P.size()==0) ans = min(ans,3);
    if(P.size()==1) ans = min(ans,2);
    if(P.size()==2)
    {

        if( P[0] == P[1] ) ans = min(ans,1);
        if( fabs(P[0]-P[1]) == 1 || fabs(P[0]-P[1]) == 2 ) ans = min(ans,1);
        else ans = min(ans,2);
    }

    if(P.size()==3)
    {
        if( P[0]== P[1] && P[1] == P[2] ) ans = 0;
        if( P[0] == (P[1]-1) && P[1] == (P[2]-1) ) ans = 0;
        if( fabs(P[0]-P[1]) == 1 || fabs(P[1]-P[2]) ==1 ) ans = min(ans,1);
        if( fabs(P[0]-P[1]) == 2 || fabs(P[1]-P[2]) == 2 ) ans = min(ans,1);
        else ans = min(ans,2);
    }

    if(S.size()==0) ans = min(ans,3);
    if(S.size()==1) ans = min(ans,2);
    if(S.size()==2)
    {

        if( S[0] == S[1] ) ans = min(ans,1);
        if( fabs(S[0]-S[1]) == 1 || fabs(S[0]-S[1]) == 2) ans = min(ans,1);
        else ans = min(ans,2);
    }
    if(S.size()==3)
    {
        if( S[0]== S[1] && S[1] == S[2] ) ans = 0;
        if( S[0] == (S[1]-1) && S[1] == (S[2]-1) ) ans = 0;
        if( fabs(S[0]-S[1])==1 || fabs(S[1]-S[2])==1) ans = min(ans,1);
        if( fabs(S[0]-S[1]) == 2 || fabs(S[1]-S[2]==2) ) ans = min(ans,1);
        else ans = min(ans,2);
    }

    if(M.size()==0) ans = min(ans,3);
    if(M.size()==1) ans = min(ans,2);
    if(M.size()==2)
    {

        if( M[0] == M[1] ) ans = min(ans,1);
        if( fabs(M[0]-M[1]) == 1 || fabs(M[0]-M[1]) == 2) ans = min(ans,1);
        else ans = min(ans,2);
    }


    if(M.size()==3)
    {
        if( M[0]== M[1] && M[1] == M[2] ) ans = 0;
        if( M[0] == (M[1]-1) && M[1] == (M[2]-1) ) ans = 0;
        if( fabs(M[0]-M[1])==1 || fabs(M[1]-M[2])==1) ans = min(ans,1);
        if( fabs(M[0]-M[1]) == 2 || fabs(M[1]-M[2]==2) ) ans = min(ans,1);
        else ans = min(ans,2);
    }
    cout<<ans<<endl;

    main();




    // return 0;
}