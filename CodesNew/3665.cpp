#include <iostream>
#include <cmath>

using namespace std;

typedef double d;

int a[101];

int main()
{
    int n, m;
    int ansm, ansu=0;
    int i;
    
    cin >> n >> m;
    for(i=1;i<=n;i++)
        cin >> a[i], ansu=max(ansu, a[i]);
    
    int mm=m;
    for(i=1;i<=n;i++)
        m-=ansu-a[i];
    m=ceil(d(m)/d(n));
    
    ansm=ansu+max(m, 0);
    ansu+=mm;
    
    cout << ansm << " " << ansu << endl;
    
    return 0;
}