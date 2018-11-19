#include <iostream>

using namespace std;

int main()
{
    char a,b;
    while(cin>>a>>b)
    {
        int n = 0;
        cin>>n;
        int x = 0, y = 0;
        int m = 0;
        char ele1,ele2;
        for(int i=0;i<n;i++)
        {
            cin>>ele1>>ele2;
            if(ele1 == a && ele2 ==b)
            {
                m = 1;
            }
            if(ele2 == a)
            {
                x = 1;
            }
            if(ele1 == b)
            {
                y = 1;
            }
        }
        if(x == 1 && y == 1)
        {
            m = 1;
        }
        if(m == 0)
        cout<<"NO"<<endl;
        else if(m == 1)
        cout<<"YES"<<endl;
    }
    return 0;
}
