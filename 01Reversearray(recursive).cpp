

#include <iostream>

using namespace std;


void printarray(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversearray(int a[], int start, int end)
{
    if(start>=end)
    return;

    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;

    reversearray(a,start+1,end-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    printarray(a,n);
    reversearray(a,0,n-1);
    printarray(a,n);
    return 0;
}
