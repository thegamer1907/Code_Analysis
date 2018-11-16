#include <iostream>
#include <stdio.h>

using namespace std;

#define MAXN 101

int boys[MAXN];
int girls[MAXN];

int main()
{
    for(int i=0 ; i<MAXN ; i++) boys[i] = girls[i] = 0;
    int n, m;

    cin >> n;

    for(int i=0 ; i<n ; i++){int x; cin >> x; boys[x]++;};

    scanf("%d", &m);

    for(int i=0 ; i<m ; i++){int x; cin >> x; girls[x]++;};

    int poss = 0;

    for(int i=0 ; i<MAXN ; i++)
    {
        int aux;
        
        if(i > 1)
        {
            aux = min(boys[i], girls[i-1]);

            boys[i] -= aux;
            girls[i-1] -= aux;
            poss += aux;
        }

        aux = min(boys[i], girls[i]);
        
        boys[i] -= aux;
        girls[i] -= aux;
        poss += aux;

        
        if(i < 100)
        {
            aux = min(boys[i], girls[i+1]);

            boys[i] -= aux;
            girls[i+1] -= aux;
            poss += aux;
        }
    }
    for(int i=0 ; i<MAXN ; i++)
    {
        int aux;

        if(i > 1)
        {
            aux = min(girls[i], boys[i-1]);

            girls[i] -= aux;
            boys[i-1] -= aux;
            poss += aux;
        }
        if(i < 100)
        {
            aux = min(girls[i], boys[i+1]);

            girls[i] -= aux;
            boys[i+1] -= aux;
            poss += aux;
        }
    }

    cout << poss << endl;

    return 0;
}