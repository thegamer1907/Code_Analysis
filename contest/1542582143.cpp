#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
static const int INF = 0x3f3f3f3f;
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


    int main()
    {
        string s;
        string A[101];
        map<string,int> M;
        cin>>s;
        int n;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>A[i];
            M[A[i]] = 1;
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                string t;
                t.push_back(A[i][1]);
                t.push_back(A[j][0]);
                M[t] = 1;
            }
        }
        if( M[s] == 1)
            printf("yes\n");
        else
            printf("no\n");
        return 0;
    }
