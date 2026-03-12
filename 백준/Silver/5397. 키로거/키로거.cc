#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        list<char> L;
        auto cursor = L.begin();

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '<') {
                if (cursor != L.begin()) cursor--;
            }
            else if (str[i] == '>') {
                if (cursor != L.end()) cursor++;
            }
            else if (str[i] == '-') {
                if (cursor != L.begin()) cursor = L.erase(--cursor);
            }
            else L.insert(cursor, str[i]);
        }

        for (auto c : L) {
            cout << c;
        }
        cout << "\n";

    }

    return 0;
}