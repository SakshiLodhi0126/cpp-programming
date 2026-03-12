#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> v;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    printVector(v);
}