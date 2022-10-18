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
int *mergelist(int *a,int *b,int n,int m)
{
    int *c =new int [n+m];
    int i=0;int j=0;int k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<=n-1)
    {
        c[k]=a[i];
        k++;
        i++;

    }
    while (j<=m-1) {
       c[k] = b[j];
       k++;
       j++;
    }
    return c;
}

int main()
{
    int a[]={2,5,6,9,15,30};
    int b[]={1,4,7,8,12};
    printList(b,5);
    printList(a,6);
    int *m = mergelist(a,b,6,5);
    printList(m,11);
}
