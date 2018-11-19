#define ph(a)           push(a)
#define pb(a)           push_back(a)
#define scd(a)          scanf("%d",&a)
#define scdd(a,b)       scanf("%d %d",&a,&b)
#define ll              long long int
#define scl(w)          scanf("%I64d",&w)
#define scll(a,b)       scanf("%I64d %I64d",&a,&b)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string original;
    bool tut=false;
    cin >> original;
    int n,fst=0,sec=0;
    cin >> n;
    for (int i=0;i<n;i++){
        string a;
        cin >> a;
        if (a==original)tut=true;
        if (a[1]==original[0])fst=1;
        if (a[0]==original[1])sec=1;
    }
    tut = tut || (fst && sec);
    cout << (tut ? "YES":"NO") << endl;

    return 0;
}

