#include <bits/stdc++.h>

using namespace std;

const long long MAX = 200003;

long long A[MAX];
long long A1[MAX];
long long B[MAX];
long long P[MAX];

main()
{
    long long k, m, n;

    cin >> k >> n;

    for(int i = 1; i <= k; i++)
        cin >> A[i], P[i] = A[i] + P[i-1], A1[i] = A[i];

    for(int i = 1; i <= n; i++)
        cin >> B[i];

    long long l, r, st, mid, buf;
    st = 1;
    for(int  i = 1; i <= n; i++)
    {
        buf = B[i] - A1[st];

        /*for(int j = 1; j <= k; j++)
            cout << A1[j] << ' ';
        cout << endl;*/

        //cout << -buf << endl;
        if(buf <= 0)
            {
                A1[st] -= B[i];

                if(A1[st] <= 0)
                    A1[st] = A[st], st++;
                if(st > k)
                {
                    /*for(int j = 1; j <= k; j++)
                        A1[j] = A[j];*/
                    A1[st] == A[st];
                    st = 1;

//                    cout << st-1 << endl;
                }

                cout << k - st + 1 << endl;
                continue;
            }

        /*for(r = st+1; r <= k+1; r++)
            if(P[r] - P[st] > buf)
                break;*/

        l = st+1; r = k;
        while(r > l)
        {
            mid = (r+l)/2;

            if(P[mid] - P[st] > buf)
                r = mid;
            else
                l = mid+1;
        }

        if(P[r] - P[st] <= buf) r++;
        //cout << r << endl;
        if(r > k)
            {
                cout << k << endl;
                //cout << " TOR" << endl;

                /*for(int j = 1; j <= k; j++)
                    A1[j] = A[j];*/

//                cout << st-1 << endl;
                A1[st] = A[st];
                st = 1;

                continue;
            }


        //cout << P[r];
        A1[r] = (P[r] - P[st] - buf);
        A1[st] = A[st];
        st = r;

        if(A1[st] == 0)
            A1[st] = A[st], st++;

        if(st > k)
            {
                /*for(int j = 1; j <= k; j++)
                    A1[j] = A[j];*/

//                cout << st-1 << endl;
                A1[st] = A[st];
                st = 1;
            }
        else
            cout << k-st+1 << endl;
    }
return 0;
}
