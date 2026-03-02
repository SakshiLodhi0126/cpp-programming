#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter a number: ";
    cin >> n;
    int m= n/2+1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m-i; j++) {
            cout<<" ";
        }
        for(int j=1; j<=i; j++){   
        if(i==1 && j==m){
            cout<<i <<"1 ";
        }
        else{
            cout<<i <<" ";
        }
        cout << endl;
    }
}
    return 0;
}
