#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define ll long long
#define MAXN 1000001

int alpha[2] = {37, 53};
int MOD[2] = {1000000007, 1000000009};
vector <int> powAlpha[2];

int mult(int a, int b, int t)
{
    ll res = ((ll) a * b) % MOD[t];
    return res;
}

void precompute()
{
    for (int t = 0; t < 2; t++)
    {
        powAlpha[t].resize(MAXN);
        powAlpha[t][0] = 1;
        for (int i = 1; i < MAXN; i++)
        {
            powAlpha[t][i] = mult(alpha[t], powAlpha[t][i - 1], t);
        }
    }
}

struct subHash
{
    int hashValue;

    subHash(int hashing, int power, int t)
    {
        hashValue = mult(hashing, powAlpha[t][MAXN - power], t);
    }

    bool operator == (subHash o) const
    {
        return hashValue == o.hashValue;
    }
};

struct hasher
{
    int len;
    vector <int> prefixHash[2];

    void add(char c)
    {
        for (int t = 0; t < 2; t++)
            prefixHash[t].push_back((prefixHash[t][len] + mult(powAlpha[t][len + 1], (c - 'a' + 1), t)) % MOD[t]);
        len++;
    }

    void initialize(string &s)
    {
        len = 0;
        prefixHash[0] = {0}, prefixHash[1] = {0};
        for (int i = 0; i < s.size(); i++) add(s[i]);
    }

     pair <subHash, subHash> query(int l, int r)
    {
        return {subHash((prefixHash[0][r] - prefixHash[0][l - 1] + MOD[0]) % MOD[0], l, 0),
        subHash((prefixHash[1][r] - prefixHash[1][l - 1] + MOD[1]) % MOD[1], l, 1)};
    }
};

hasher textHash;
string text;

bool test(int wordLen)
{
    auto subtext = textHash.query(1, wordLen);
    for (int i = 2; i + wordLen - 1 <= text.length() - 1; i++)
    {
        auto subword = textHash.query(i, i + wordLen - 1);
        if (subtext == subword)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    cin>>text;
    textHash.initialize(text);

    vector <int> candidates;

    for (int i = 1; i <= text.length() - 1; i++)
    {
        auto prefix = textHash.query(1, i);
        auto suffix = textHash.query(text.length() - i + 1, text.length());

        if (prefix == suffix)
        {
            candidates.push_back(i);
        }
    }

    if (candidates.size() > 0)
    {
        int l = 0;
        int r = candidates.size() - 1;

        while (l < r)
        {
            int m = (l + r + 1) / 2;
            bool res = test(candidates[m]);

            if (res)
            {
                l = m;
            }
            else
            {
                r = m - 1;
            }
        }

        if (test(candidates[l]))
        {
            cout<<text.substr(0, candidates[l])<<'\n';
            return 0;
        }
    }

    cout<<"Just a legend"<<'\n';

    return 0;
}
