#include <iostream>

using namespace std;


int main()
{
    int n, v1,v2,v3, t1=0,t2=0,t3=0;

    cin >> n;

    for(int i=0 ; i<n ; i++)
    {
        cin >> v1 >> v2 >> v3;


        t1+=v1;
        t2+=v2;
        t3+=v3;
    }

    if(t1==0 && t2==0 && t3==0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}