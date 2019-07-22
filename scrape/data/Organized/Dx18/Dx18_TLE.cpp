#include <bits/stdc++.h>

typedef int32_t i32;
typedef int64_t i64;

using namespace std;

template <typename T>
inline T read() {
    T result;
    cin >> result;
    return result;
}

template <typename T>
inline void print_elements(T begin, T end) {
    for (T iter = begin; iter != end; iter++)
        cout << *iter << " ";
    cout << endl;
}

int main() {
    i64 total_count = read<i64>();
    i32 count = read<i32>(), per_page = read<i32>();

    i32 items[count];
    for (i32 item = 0; item < count; item++)
        items[item] = read<i32>();
    
    i32 thrown = 0;
    i32 shift = 0;
    i32 actions = 0;
    while (thrown < count) {
        i32 start = items[thrown];
        i32 end_index = upper_bound(
            items + thrown,
            items + count,
            (start - shift - 1) / per_page * per_page + per_page + shift
        ) - items;

        actions++;
        shift = (shift + end_index - thrown) % per_page;
        thrown = end_index;
    }

    cout << actions << endl;

    return 0;
}