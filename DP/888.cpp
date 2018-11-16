#include <iostream>
#include <math.h>
#include <algorithm>
#include <unordered_map>
using namespace std;
int n;
int arr[101];

int main()
{
    unordered_map<int, int> cookie;
    cookie[0] = 1;
    cookie[1] = 0;

    scanf("%d", &n);
    int d;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        // arr[i] = cookie[d];
    }
    int maxsum = 0;
    int currentsum = 0;
    int maxindex=0;
    int maxcounter=0;
    int onecounter=0;
    int currentindex=0;
    int currentend= 0;
    int maxend = 0;
    int xd ;
    for(int i=0; i< n; i++)
    {
        currentend = i;
        xd = arr[i];
        currentsum += xd == 0 ? 1 : -1;
        if(currentsum < 0)
        {
            currentindex = i+1;
            currentsum = 0;
        }
        if(currentsum > maxsum)
        {
            maxindex = currentindex;
            maxsum = currentsum;
            maxend = currentend;
        }
    }
    // printf("maxindex is %dmaxend is %d\n", maxindex, maxend);
    
    for(int i = maxindex; i<= maxend; i++)
    {
        arr[i] = cookie[arr[i]];
    }
    int dumb = 0;
    for(int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        dumb += arr[i];
    }
    printf("%d\n", dumb);
    return 0;
}