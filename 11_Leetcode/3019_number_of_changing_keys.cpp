#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;

        for (int i = 1; i < s.size(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    string s;
    
    cout << "Enter string: ";
    cin >> s;

    Solution obj;
    int result = obj.countKeyChanges(s);

    cout << "Number of key changes: " << result << endl;

    return 0;
}