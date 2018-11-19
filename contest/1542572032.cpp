#include <stdio.h>
#include "bits/stdc++.h"

typedef long long ll;
typedef long double ld;
using namespace std;
const int maxN = 100500;
int a[2][2][2][2];
vector<pair<int,int>> h;
unordered_set<int> g;
int main()
{
    ios::sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    for(int i=0; i<=1; i++)for(int j=0; j<=1; j++)for(int k=0; k<=1; k++)for(int l=0; l<=1; l++)a[i][j][k][l]=0;
    for(int i=0; i<n; i++)
    {
        int u[4];
        for(int j=0; j<4; j++)
        {
            int x = 0;
            if(j<k)cin>>x;
            u[j]=x;
        }
        a[u[0]][u[1]][u[2]][u[3]]++;
    }
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            for(int k=0; k<=1; k++)
            {
                for(int l=0; l<=1; l++)
                {
                    for(int u=0; u<=1; u++)
                    {
                        for(int t=0; t<=1; t++)
                        {
                            for(int e=0; e<=1; e++)
                            {
                                for(int w=0; w<=1; w++)
                                {
                                    if(!(i&u) && !(j&t) && !(k&e) && !(l&w))
                                    {
                                        if(a[i][j][k][l]>0 && a[u][t][e][w]>0)
                                        {
                                            printf("YES");
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("NO");
    return 0;
}
