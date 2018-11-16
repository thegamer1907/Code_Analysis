
#include <iostream>

using namespace std ;
int main ()
{
    int n , k ,ans = 0;
    cin>>n;
    cin>>k;
    int scores[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>scores[i];
    }
    if( scores[k-1] > 0)
    {
        ans = k ;
        for(int i = k; i < n; i++)
        {
            if(scores[i] == scores[k-1])
            {
                ans++;
            }
        }
    }
    else
    {
        for(int i = 0; i < k-1 ; i++ )
        {
            if (scores[i] > 0)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;

}
