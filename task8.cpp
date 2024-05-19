/*Дан вектор слов, необходимо вывести все слова-палиндромы.*/

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

bool isPalindrome(const string& word) {
    return equal(word.begin(), word.begin() + word.size() / 2, word.rbegin());
}

int main() {
    system("chcp 65001");
    vector<string> words = {"radar", "level", "world", "civic", "hello"};

    vector<string> palindromes;
    copy_if(words.begin(), words.end(), back_inserter(palindromes), isPalindrome);

    cout << "Слова-палиндромы:" << endl;
    for (const auto& word : palindromes) {
        cout << word << " ";
    }

    return 0;
}
