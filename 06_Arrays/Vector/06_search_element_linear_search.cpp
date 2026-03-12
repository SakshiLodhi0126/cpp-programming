#include <iostream>
#include <vector>
using namespace std;

void searchElement(vector<int> v,int key)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {
            cout<<"Found at index "<<i;
            return;
        }
    }

    cout<<"Not Found";
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

    int key;
    cout<<"Enter element to search: ";
    cin>>key;

    searchElement(v,key);
}