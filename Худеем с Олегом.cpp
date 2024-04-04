#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int days_num{}, min_cup{}, max_cup{}, cup{};
    cin >> days_num >> min_cup >> max_cup;
    for (int i{}; i < days_num - 1; ++i) {
        cin >> cup;
        v.push_back(cup);
    }
    if (find(v.begin(), v.end(), min_cup) == v.end() and find(v.begin(), v.end(), max_cup) != v.end()) {
        cout << min_cup;
    }
    else if (find(v.begin(), v.end(), min_cup) != v.end() and find(v.begin(), v.end(), max_cup) == v.end()) {
        cout << max_cup;
    }
    else if (find(v.begin(), v.end(), min_cup) == v.end() and find(v.begin(), v.end(), max_cup) == v.end()) {
        cout << -1;
    }
    else if (find(v.begin(), v.end(), min_cup) != v.end() and find(v.begin(), v.end(), max_cup) != v.end()) {
        for (int f{ min_cup }; f <= max_cup; ++f) {
            cout << f << " ";
        }
    }
}
