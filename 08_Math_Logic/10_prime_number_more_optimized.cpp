#include <iostream>
#include<math>
using namespace std;
int main (){
    //flag or monitor
    int n; 
    cout<<"Enter the number: ";
    cin>>n;
    bool ans = true;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
        ans = false;
        break;   
        }
    }
    if(!ans){
        cout<<"Not a Prime";
    }
    else{
    cout<<"Prime";
    }
    return 0;
}