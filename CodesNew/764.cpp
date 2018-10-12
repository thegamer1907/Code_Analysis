#include <iostream>
#include <set>
using namespace std;

int main()
{
    int Poland_words , Enemy_words;
    string word;
    bool PolWin = true;
    set < string > total_list;
    cin >> Poland_words >> Enemy_words;
    for (int i = 0; i < Poland_words+Enemy_words; i++){
        cin >> word;
        total_list.insert(word);
    }
    if (Poland_words < Enemy_words) {
        PolWin = false;
    }
    else if (Poland_words == Enemy_words){
        if (total_list.size() % 2 == 0){
                PolWin = false;
        }
    }
    if (PolWin){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
