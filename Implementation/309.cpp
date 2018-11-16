#include<iostream>
#include<vector>
using namespace std;
//#include<algorithm>

int main()
{
    int n, k, i, c=0;;
    cin>> n>> k;
    vector<int> scores(n);
    for(i=0;i<n;i++)
    {
        cin>> scores[i];
    }
    int score= scores[k-1];
    for(i=0;i<n;i++)
    {
        if(scores[i]>=score && scores[i]>0)
        c++;
    }
    cout << c<< endl;
    return 0;
}