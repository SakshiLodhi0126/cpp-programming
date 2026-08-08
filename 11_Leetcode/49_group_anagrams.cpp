#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to group anagrams together
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagram_groups;
    
    for (const string& s : strs) {
        string key = s;
        sort(key.begin(), key.end()); // Sorted string acts as the unique key
        anagram_groups[key].push_back(s);
    }
    
    vector<vector<string>> result;
    for (auto& pair : anagram_groups) {
        result.push_back(pair.second);
    }
    
    return result;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    vector<string> strs(n);
    cout << "Enter " << n << " strings separated by space or newline:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }
    
    vector<vector<string>> grouped = groupAnagrams(strs);
    
    cout << "\nGrouped Anagrams:" << endl;
    cout << "[" << endl;
    for (const auto& group : grouped) {
        cout << "  [ ";
        for (const string& str : group) {
            cout << "\"" << str << "\" ";
        }
        cout << "]" << endl;
    }
    cout << "]" << endl;
    
    return 0;
}