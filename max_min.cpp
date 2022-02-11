#include<iostream>
using namespace std;
void max_min(int arr[], int end)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<end;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;
}
int main()
{
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    max_min(arr, s);
}