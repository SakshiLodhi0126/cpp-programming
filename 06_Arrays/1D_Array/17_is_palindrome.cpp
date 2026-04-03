#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], array[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Reverse copy
    for(int i = 0; i < n; i++){
        array[i] = arr[n - 1 - i];
    }

    // Compare
    bool isPalindrome = true;

    for(int i = 0; i < n; i++){
        if(arr[i] != array[i]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome){
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }

    return 0;
}