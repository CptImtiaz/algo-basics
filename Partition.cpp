#include<bits/stdc++.h>
using namespace std;

void printList(int *p, int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int partiton(int *a,int start,int end)
{
    int pivot=a[end];
   int  pindex=start;
    for(int i=start;i<end-1;i++)
    {
        if(a[i]<pivot)
        {
            swap(a[i],a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex],a[end]);
    return pindex;
}
int main()
{
    int a[]={2,5,6,9,15,30};
    printList(a,6);
    int p = partiton(a,0,5);
    cout<<p<<" "<<a[p]<<endl;
    printList(a,6);
}
