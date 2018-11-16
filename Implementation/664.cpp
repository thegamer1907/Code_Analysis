#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c[a];
    for(int i=0; i<a; i++)
    {
        cin >> c[i];
    }
    int d=0;
    for(int i=0; i<a; i++)
    {
        if(c[i]>=c[b-1] && c[i]) d++;
    }
    cout << d << endl;
}