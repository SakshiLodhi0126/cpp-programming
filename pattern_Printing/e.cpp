#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        if(i==1){
            for(int i=1;i<=n;i++){
                cout<<"* ";
            }

        }else{
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }

        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        if(i==1){
            for(int i=1;i<=n;i++){
                cout<<"* ";
            }

        }else{
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }

        }
        cout<<endl;
    }
    return 0;
}