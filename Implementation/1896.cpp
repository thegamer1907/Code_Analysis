#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,x1=0,y1=0,z1=0,x,y,z;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        x1+=x;
        y1+=y;
        z1+=z;
    }

    if((!x1&&!y1&&!z1))
        cout<<"YES";
    else
    cout << "NO" << endl;
    return 0;
}
