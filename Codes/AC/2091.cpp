#include<bits/stdc++.h>

using namespace std;

long long n, love, diff, cou, otv;

int main()
{
    //ifstream cin("input.txt");
    //ofstream cout("output.txt");

    cin >> n >> love;

    vector<int> Psl(n);
    set<int> s;

    for(int i = 0; i < n; i++)
    {
        cin >> Psl[i];
        s.insert(Psl[i]);
    }

    diff = s.size();
    vector<int> Razl(diff), Ost1(diff), Ost2(diff);

    cou = 0;
    for(auto i : s)
    {
        Razl[cou] = i;
        cou++;
    }

    for(int i = 0; i < n; i++)
    {
        Ost1[lower_bound(Razl.begin(), Razl.end(), Psl[i]) - Razl.begin()]++;
        Ost2[lower_bound(Razl.begin(), Razl.end(), Psl[i]) - Razl.begin()]++;
    }




    vector<long long> Beg2(n), End2(n);
    vector<long long> Res(n);
    for(int i = 0; i < n; i++)
    {
        Ost1[lower_bound(Razl.begin(), Razl.end(), Psl[i]) - Razl.begin()]--;
        if(s.count(Psl[i] * love))
        {
            Beg2[i] =  Ost1[lower_bound(Razl.begin(), Razl.end(), Psl[i] * love) - Razl.begin()];
        }
    }

    for(int i = n - 1; i >= 0; i--)
    {
        Ost2[lower_bound(Razl.begin(), Razl.end(), Psl[i]) - Razl.begin()]--;

        if(!(Psl[i] % love))
        {
            if(s.count(Psl[i] / love))
            {
                End2[i] = Ost2[lower_bound(Razl.begin(), Razl.end(), Psl[i] / love) - Razl.begin()];
            }
        }
    }

    otv = 0;
//    for(int i = 0; i < n; i++)
//    {
//        cout << Psl[i] << ' ';
//    }
//
//    cout << "\n";
//    for(int i = 0; i < n; i++)
//    {
//        cout << Beg2[i] << ' ';
//    }
//
//    cout << "\n";
//
//    for(int i = 0; i < n; i++)
//    {
//        cout << End2[i] << ' ';
//    }
//
//    cout << "\n";
    for(int i = 0; i < n; i++)
    {
        Res[i] = Beg2[i] * End2[i];
       // cout << Res[i] << ' ';
        otv+=Res[i];
    }

    cout  << otv;


}
