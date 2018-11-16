#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    vector <char > qv;
    for (int i=0; i<n; i++)
        qv.push_back(q[i]);
    /*for (int i=0; i<n; i++)
        cout << qv[i];
    cout << endl;*/
    for (int j=0; j<t; j++)
        for (int i=0; i<n-1; i++)
            if ((qv[i] == 'B') && (qv[i+1] == 'G')) {
                qv[i] = 'G';
                qv[i+1] = 'B';
                i++;
            };
    for (int i=0; i<n; i++)
        cout << qv[i];
    return 0;
}
