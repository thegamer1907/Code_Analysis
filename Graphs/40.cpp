#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;

    scanf("%d %d", &n, &t);

    string Q;

    cin >> Q;

    for(int i = 0; i < t; i++){

        int j = 0;
        while(j < n - 1){

            if(Q[j] == 'B' && Q[j + 1] == 'G'){
                Q[j] = 'G';
                Q[j + 1] = 'B';
                j += 2;

                //cout << Q[j] << " " << Q[j + 1] << endl;
            }
            else j++;
        }
    }

    cout << Q << endl;

    return 0;
}
