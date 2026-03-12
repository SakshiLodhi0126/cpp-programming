#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> v)
{
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
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

    reverseVector(v);
}