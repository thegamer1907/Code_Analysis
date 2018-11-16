#include<bits/stdc++.h>
using namespace std;
std::list<int> ab[250005];
int i,j,n,m,k,mas[505][505],apsk[250005];
char c;
void dfs(int u)
{
    apsk[u]=1;
    for (int y:ab[u])
    {
        if (apsk[y]==0)
        {
            dfs(y);
            if ((k>0)and(mas[y/m][y%m]==1))
            {
                mas[y/m][y%m]=2;
                k=k-1;
            }
        }
    }
}
int main()
{
    cin >> n >> m >> k;
    i=0;
    while (i<n)
    {
        j=0;
        while (j<m)
        {
            cin >> c;
            if (c==46)
            {
                mas[i][j]=1;
                if (mas[i-1][j]==1)
                {
                    ab[i*m+j].push_back((i-1)*m+j);
                    ab[(i-1)*m+j].push_back(i*m+j);
                }
                if (mas[i][j-1]==1)
                {
                    ab[i*m+j].push_back(i*m+j-1);
                    ab[i*m+j-1].push_back(i*m+j);
                }
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while (i<n*m)
    {
        if ((apsk[i]==0)and(mas[i/m][i%m]==1))
        {
            dfs(i);
        }
        i=i+1;
    }
    i=0;
    while (i<n)
    {
        j=0;
        while (j<m)
        {
            if (mas[i][j]==1)
            {
                cout << ".";
            }
            if (mas[i][j]==2)
            {
                cout << "X";
            }
            if (mas[i][j]==0)
            {
                cout << "#";
            }
            j=j+1;
        }
        cout << "\n";
        i=i+1;
    }

    return(0);
}
