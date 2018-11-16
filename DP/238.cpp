#include <iostream>
#include <algorithm>
#define F(a) for (int i=0;i<a;i++)
using namespace std;

int main ()
{
    int boys, girls, p, ans=0;
    cin >> boys;
    int arrB [boys];
    F (boys) cin >> arrB [i];
    cin >> girls;
    int arrG [girls];
    F (girls) cin >> arrG [i];
    sort (arrB,arrB+boys);
    sort (arrG,arrG+girls);
    for (int l=0,k=0;l<boys && k<girls;)
    {
        p = arrB[l]-arrG[k];
        if (p==0 || p==-1 || p==1) { ans++; l++; k++; }
        else if (p>1) k++;
        else l++;
    }
    cout << ans << endl;
    return 0;
}
