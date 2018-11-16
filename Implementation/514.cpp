#include <iostream>

using namespace std;
int n, k, c;
int main()
{
    cin>>n>>k;
    int scr[n+1];;
    for(int i=1; i<=n; i++)
        cin>>scr[i];

    for(int i=1; i<=n; i++)
        if(scr[i]>0 && scr[i]>=scr[k]) c++;

    cout << c << endl;
    return 0;
}
