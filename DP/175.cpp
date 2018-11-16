#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int boys, girls;
    int pairs = 0;
    cin >> boys;

    vector<int>Skill;
    vector<int>Skill2;

    for (int i = 0; i < boys; i++){
        int x;
        cin >> x;
        Skill.push_back(x);
    }

    cin >> girls;

    for (int i = 0; i < girls; i++){
        int x;
        cin >> x;
        Skill2.push_back(x);
    }

    sort(Skill.begin(), Skill.end());
    sort(Skill2.begin(), Skill2.end());

    int pos = 0;

    for (int i = 0; i < boys; i++){
        for (int j = 0; j < girls; j++){
            if (Skill2[j] == -1){
                continue;
            }
            if (abs(Skill[i] - Skill2[j]) > 1){
                continue;
            }else{
                pairs++;
                Skill2[j] = -1;
                break;
            }
        }
    }

    cout << pairs << endl;


    return 0;
}
