#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define MAXN 1000005

int alpha = 37, MOD = 1000000007;
vector <int> powAlpha;

int mult(int a, int b)
{
    ll res = ((ll) a * (ll) b) % MOD;
    return res;
}

int abs(int i)
{
    return i > 0 ? i : -i;
}

void precompute()
{
    powAlpha.resize(MAXN);
    powAlpha[0] = 1;
    for (int i = 1; i < MAXN; i++)
    {
        powAlpha[i] = mult(alpha, powAlpha[i - 1]);
    }
}

struct subHash
{
    int hashvalue, power;

    bool operator == (subHash o) const
    {
        int hv1 = hashvalue, hv2 = o.hashvalue;
        //cout<<"before: "<<hv1<<" and "<<hv2<<endl;
        if (power > o.power) swap(hv1, hv2);
        hv1 = mult(hv1, powAlpha[abs(o.power - power)]);
        //cout<<hv1<<" vs "<<hv2<<endl;
        return hv1 == hv2;
    }
};

struct hasher
{
    int len;
    vector <int> prefixHash;

    hasher()
    {
        len = 0;
        prefixHash = {0};
    }

    void addChar(char c)
    {
        prefixHash.push_back((prefixHash[len] + mult(powAlpha[len + 1], (c - 'a' + 1))) % MOD);
        len++;
    }

    void initialize(string &s)
    {
        *this = hasher();
        for (int i = 0; i < s.size(); i++)
        {
            addChar(s[i]);
        }
    }

    subHash getHash(int l, int r)
    {
        return {(prefixHash[r] - prefixHash[l - 1] + MOD) % MOD, l};
    }
};

hasher textHash;
string text;

bool test(int wordLen)
{
    subHash subtext = textHash.getHash(1, wordLen);
    for (int i = 2; i + wordLen - 1 <= text.length() - 1; i++)
    {
        subHash subword = textHash.getHash(i, i + wordLen - 1);
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
        subHash prefix = textHash.getHash(1, i);
        subHash suffix = textHash.getHash(text.length() - i + 1, text.length());

        if (prefix == suffix)
        {
            candidates.push_back(i);
        }
    }

    if (candidates.size() == 0)
    {
        cout<<"Just a legend"<<'\n';
        return 0;
    }

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
    }
    else
    {
        cout<<"Just a legend"<<'\n';
    }

    return 0;
}
