#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
     cin>>arr[i];

    for(int i=0;i<n-1;i++)
     for(int j=0;j<n-1-i;j++)
      if(arr[j]<arr[j+1])
        swap(arr[j],arr[j+1]);


    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}