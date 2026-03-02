#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // Upper part
    for(int i = 1; i <= (n+1)/2; i++){
        // Spaces
        for(int j = 1; j <= (n+1)/2 - i; j++){
            cout << "  ";
        }
        // Stars
        for(int j = 1; j <= 2*i - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    // Lower part
    for(int i = (n-1)/2; i >= 1; i--){
        // Spaces
        for(int j = 1; j <= (n+1)/2 - i; j++){
            cout << "  ";
        }
        // Stars
        for(int j = 1; j <= 2*i - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
