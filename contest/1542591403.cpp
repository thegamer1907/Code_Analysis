#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef vector< ii > vii;


int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string A;
    cin>>A;
    int n;
    cin>>n;
    string B;
    int f1=0,f2=0;
    for(int i=0;i<n;i++)
    {
        cin>>B;
        if(A[0]==B[0] && A[1]==B[1])
        {
            f1=1;
            f2=1;
        }
        if(A[0]==B[1])
            f1=1;
        if(A[1]==B[0])
            f2=1;
    }
    if(f1 && f2)
    {
        printf("YES");
    }
    else
        cout<<"NO";
    return 0;
}