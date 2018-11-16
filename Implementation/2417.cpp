#include <iostream>

using namespace std;

int main() {
	int n,k;
    int time_left = 0;
    cin>>n>>k;
    time_left = 240 - k;
    int problems = 0;
    for(int i=1;i<=n;i++)
    {
        time_left -= 5*i;
        if (time_left>=0)
            problems ++;
        else
            break;
    }
    cout<<problems;
    return 0;
}