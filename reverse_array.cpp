#include<iostream>
using namespace std;

void reverse(int arr[], int n, int start)
{
    if(start>=n)
        return;
    int temp=arr[start];
    arr[start]=arr[n];
    arr[n]=temp;


    reverse(arr,n-1,start+1);
}
int main()
{
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    // array reverse using recusrion
    reverse(a,s-1,0);
    for(int i=0;i<s;i++)
    {
        // printf("%d",&a[i]);
        cout<<a[i]<<" ";
    }
    return 0;
}