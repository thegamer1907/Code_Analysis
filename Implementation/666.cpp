#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    int numberAdequateAnswer = 0;
    for(int i=0;i<n;i++) {
    cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        if (a[i]>=a[k-1] && a[i]>0) {
            numberAdequateAnswer++;
        }
    }
    cout << numberAdequateAnswer;
}
