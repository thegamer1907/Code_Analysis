#include <iostream>

using namespace std;

int main()
{
    int x,y,i,count=0;

    cin >> x >> y;
    int t[x];

    for(i=0;i<x;i++)
    {
    cin >> t[i];
    }

    for(i=0;i<x;i++)
    {


        if(t[i]>0 && t[i]>=t[y-1])
        {
         count++;
        }


    }
    cout<< count << "\n";
    return 0;


}
