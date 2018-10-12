#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <cmath>
#include <stdio.h>
#include <queue>

using namespace std;

int n,m;
int a[101];

int main()
{
    cin>>n>>m;

    int naj = -1;
    int suma = 0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        naj = max(naj, a[i]);
        suma+=a[i];
    }

    cout<<max(naj, (suma + m- 1)/n+1)<<" "<<naj+m<<endl;
    return 0;
}
