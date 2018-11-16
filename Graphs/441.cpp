#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool myfunc(int a,int b){
    return a>b;
}

void mulkaj(char a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]=='B' && a[i+1]=='G'){swap(a[i],a[i+1]);
        i++;}
    }
}

int main()
 {
    char c[55];
    int n,t,i;
    cin >> n >> t >> c;
    for(i=1;i<=t;i++)
    {
        mulkaj(c,n);
    }
    cout << c << endl;

}

