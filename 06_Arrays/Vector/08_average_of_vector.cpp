#include <iostream>
#include <vector>
using namespace std;

double average(vector<int> v)
{
    int sum=0;

    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }

    return (double)sum/v.size();
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

    cout<<"Average = "<<average(v);
}