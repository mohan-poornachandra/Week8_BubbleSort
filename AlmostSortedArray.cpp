#include<iostream>
#include<vector>

using namespace std;

int main()
{ 
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
      cin>>v[i];
    int count=0;
    bool flag=true;
    for(int k=0;k<2;k++){
        flag=true;
      for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1]){
              flag=false;
              count++;
              swap(v[i],v[i+1]); 
            }  
        }
        if(flag&&count==1) {
            cout<<"Array is almost sorted"<<endl;
            break;
        }
      
    }
    if(!flag||count>1) 
      cout<<"Array is not almost sorted"<<endl;

}