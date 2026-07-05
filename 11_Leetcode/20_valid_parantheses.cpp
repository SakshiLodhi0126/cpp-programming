#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check if the parentheses are valid
bool isValid(string s) {
    stack<char> brackets;
    
    for (char c : s) {
        // If it's an opening bracket, push it onto the stack
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        } 
        // If it's a closing bracket, check for a valid match
        else {
            // If the stack is empty, there is no matching opening bracket
            if (brackets.empty()) return false;
            
            char top = brackets.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                brackets.pop(); // Valid match found, remove from stack
            } else {
                return false; // Mismatched bracket
            }
        }
    }
    
    // If the stack is empty, all brackets were properly matched
    return brackets.empty();
}

int main() {
    string userInput;
    
    cout << "Enter a string of brackets to check: ";
    cin >> userInput;
    
    if (isValid(userInput)) {
        cout << "Result: True (The parentheses are valid!)" << endl;
    } else {
        cout << "Result: False (The parentheses are invalid.)" << endl;
    }
    
    return 0;
}