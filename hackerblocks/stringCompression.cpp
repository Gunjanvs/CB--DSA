#include <iostream>
#include <vector>
using namespace std;

void compi(string s) {
    int size = s.size();

    // create freq array
    vector<int> freq(26, 0);

    for (int i = 0; i < size; i++) {
        int index = s[i] - 'a';
        freq[index]++;
    }

    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] != 0) {
            cout << char(i + 'a') << freq[i];
        }

    }
    cout << endl;
}

int main() {
    string s = "aaabbccds";
    compi(s);
    return 0;
}
