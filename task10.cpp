#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    system("chcp 65001");
    vector<string> words = {"banana", "apple", "cherry", "watermelon", "date", "elderberry", "fig", "grape"};

    auto longestWord = max_element(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.size() < b.size();
    });
    cout << "Самое длинное слово: " << *longestWord;
    return 0;
}
