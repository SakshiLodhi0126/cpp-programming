#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> v)
{
    int ans = 0;

    for(int i=0;i<v.size();i++)
    {
        ans = ans ^ v[i];
    }

    return ans;
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

    int result = findUnique(v);

    cout<<"Unique element = "<<result;

    return 0;
}