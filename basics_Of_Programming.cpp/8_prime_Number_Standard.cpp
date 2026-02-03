#include <iostream>
using namespace std;
int main (){
    //flag or monitor
    int n; 
    bool ans = true;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
        ans = false;
        break;   
        }
    }
    if(ans){
        cout<<"Prime";
    }
    else{
    cout<<"Not Prime";
    }
    return 0;
}