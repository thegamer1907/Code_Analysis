#include <iostream>
#define MAX_ARRAY 50
using namespace std;

int main() {
    int i;
    int n, k, count = 0;
    int array[MAX_ARRAY] = {0};
    
    cin >> n >> k;
    
    for (i = 0; i < n; i++)
        cin >> array[i];
    
    
    for (i = 0; i < n; i++)
    {
        if (array[i]>0 && array[i]>=array[k-1])
            count++;
    }
    
    cout << count << endl;
    return 0;
}
