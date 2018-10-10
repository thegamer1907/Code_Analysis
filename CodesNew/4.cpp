#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    short int n,i;
    int *lamp,max=0,length;
    double distance;
    
    cin >> n >> length;
    lamp = new int[n];
    for(i=0 ; i<n ; i++)
    {
        cin >> lamp[i];
    }
    
    sort(lamp , lamp+n);
    
    for(i=0 ; i<n-1 ; i++)
    {
        if(lamp[i+1]-lamp[i] > max)
        {
            max = lamp[i+1]-lamp[i];
        }
    }
    distance = max/2.0;
    if(lamp[0] > distance)
    {
        distance = lamp[0];
    }
    if((length-lamp[n-1]) > distance)
    {
        distance = length-lamp[n-1];
    }
    
    cout << fixed << setprecision(9) << distance;
    
    delete[] lamp;
    return 0;
}