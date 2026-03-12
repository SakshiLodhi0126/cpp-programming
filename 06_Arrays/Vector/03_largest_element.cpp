#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> v)
{
    int max=v[0];

    for(int i=1;i<v.size();i++)
    {
        if(v[i]>max)
        max=v[i];
    }

    return max;
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

    cout<<"Largest = "<<largest(v);
}