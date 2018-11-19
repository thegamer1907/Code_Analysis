#include <iostream>

using namespace std;
char a,b,A,B;
int main()
{
    int n,q=0,w=0;
    cin>>a>>b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A>>B;
        if(A==a&& B == b)
        {
            cout<<"YES";
            return 0;
        }

        if(B == a)
            q= 1;
        if(A == b)
            w =1;
    }

    if(q && w)
{

    cout<<"YES";

}
else
    cout<<"NO";
    return 0;
}
