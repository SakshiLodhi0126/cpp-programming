#include <iostream>
#include <vector>
using namespace std;

void countEvenOdd(vector<int> v)
{
    int even=0,odd=0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        even++;
        else
        odd++;
    }

    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    countEvenOdd(v);
}