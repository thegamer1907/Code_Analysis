#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
    ll N, K, zero_min, zero_max, one_min, one_max;
    string S;
    vector<ll> zeros, ones;
    cin >> N >> K;
    cin >> S;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == '0')
        {
            zeros.push_back(i);
        }
        else
        {
            ones.push_back(i);
        }
    }

    if (zeros.empty() || ones.empty())
    {
        cout << "tokitsukaze" << endl;
    }
    else
    {
        zero_min = zeros[0];
        zero_max = zeros[zeros.size() - 1];
        one_min = ones[0];
        one_max = ones[ones.size() - 1];
        if (zero_max - zero_min + 1 <= K || one_max - one_min + 1 <= K)
        {
            cout << "tokitsukaze" << endl;
        }
        else
        {
            for (ll i = 0; i < N - K; i++)
            {
                ll zeros_from = lower_bound(zeros.begin(), zeros.end(), i) - zeros.begin();
                ll zeros_to = lower_bound(zeros.begin(), zeros.end(), i + K) - zeros.begin();
                ll ones_from = lower_bound(ones.begin(), ones.end(), i) - ones.begin();
                ll ones_to = lower_bound(ones.begin(), ones.end(), i + K) - ones.begin();

                cerr << i << "-" << i+K-1 << endl;
                cerr << "zeros_from" << zeros_from << endl;
                cerr << "zeros_to" << zeros_to << endl;
                cerr << "ones_from" << ones_from << endl;
                cerr << "ones_to" << ones_to << endl;
                ll current_zero_min,
                    current_zero_max,
                    current_one_min,
                    current_one_max;
                // zeroに変更
                current_zero_min = min(zero_min, i);
                current_zero_max = max(zero_max, i + K - 1);
                if (ones_from != 0)
                {
                    current_one_min = one_min;
                }else if (ones_to != ones.size() ){
                    current_one_min = ones[ones_to];
                }else{
                    current_one_min = N;
                }

                if (ones_to < ones.size())
                {
                    current_one_max = one_max;
                }else if (ones_from != 0){
                    current_one_max = ones[ones_from - 1];
                }else{
                    current_one_max = -1;
                }

                cerr << "current_one_min" << current_one_min << endl;
                cerr << "current_one_max" << current_one_max << endl;
                cerr << "current_zero_min" << current_zero_min << endl;
                cerr << "current_zero_max" << current_zero_max << endl;
                if ( !(current_one_max - current_one_min + 1 <= K) && !(current_zero_max - current_zero_min + 1 <= K) ){
                    cout << "once again" << endl;
                    return 0;
                }
                // oneに変更
                current_one_min = min(one_min, i);
                current_one_max = max(one_max, i + K - 1);
                if (zeros_from != 0)
                {
                    current_zero_min = zero_min;
                }else if (zeros_to != zeros.size() ){
                    current_zero_min = zeros[zeros_to];
                }else{
                    current_zero_min = N;
                }

                if (zeros_to < zeros.size())
                {
                    current_zero_max = zero_max;
                }else if (zeros_from != 0){
                    current_zero_max = zeros[zeros_from - 1];
                }else{
                    current_zero_max = -1;
                }

                cerr << "current_one_min" << current_one_min << endl;
                cerr << "current_one_max" << current_one_max << endl;
                cerr << "current_zero_min" << current_zero_min << endl;
                cerr << "current_zero_max" << current_zero_max << endl;
                if ( !(current_one_max - current_one_min + 1 <= K) && !(current_zero_max - current_zero_min + 1 <= K) ){
                    cout << "once again" << endl;
                    return 0;
                }
            }

            cout << "quailty" << endl;
        }
    }
    return 0;
}