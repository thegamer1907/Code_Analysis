#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, cnt = 0;
    int boy, girl;
    vector<int> bo;
    vector<int> :: iterator it_b;
    vector<int> gr;
    vector<int> :: iterator it_g;

    cin>>boy;

    for (i = 0; i < boy; i++)
    {
        cin>>k;
        bo.push_back(k);
    }


    cin>>girl;

    for (i = 0; i < girl; i++)
    {
        cin>>k;
        gr.push_back(k);
    }

    sort(bo.begin(), bo.end());
    sort(gr.begin(), gr.end());

    while (!bo.empty())
    {
        it_b = bo.begin();
        //cout<<"*it_b > "<<*it_b<<endl;

        for (it_g = gr.begin(); it_g != gr.end(); it_g++)
        {
            if (fabs(*it_b - *it_g) == 1 || (*it_b - *it_g) == 0)
            {
                cnt++;
                gr.erase(it_g);
                break;
            }
        }
        bo.erase(it_b);
    }

//    cout<<bo.size()<<endl;
//    cout<<gr.size()<<endl;

    cout<<cnt<<endl;


    return 0;
}

