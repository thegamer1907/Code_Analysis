#include <iostream>
#include<utility>

using namespace std;

int main()
{
    int t,n;
    cin>>n>>t;
    
    char queue[50];
    int i;
    for (i=0;i<n;i++) {
        cin>>queue[i];
    }
    queue[i] = 0;
    while (t--) {
        for (int i=0;i<n-1;i++) {
            if (queue[i] == 'B' && queue[i+1] == 'G') {
                swap(queue[i],queue[i+1]);
                i++;
            }
        }
    }
    cout<<queue<<endl;
}