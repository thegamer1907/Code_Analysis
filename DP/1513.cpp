#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int max = -1;
    int x,y;
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++){
            x = y = 0;
            for(int k=i; k<=j; k++){
                if(a[k] == 0)
                    x++;
                else
                    y++;
            }
            if(x-y > max)
                    max = x-y;
        }
    int one = 0;
    for(int i=0; i<n; i++)
        if(a[i] == 1)
            one++;
    cout<<one+max;
    return 0;
}
