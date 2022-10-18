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
void merge1(int *arr, int left, int mid, int right) {

  int n1 = mid - left + 1;
  int n2 = right - mid;

  int leftArr[n1], rightArr[n2];

  for (int i = 0; i < n1; i++)
    leftArr[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    rightArr[j] = arr[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = left;

  while (i < n1 && j < n2) {
    if (leftArr[i] < rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
      k++;
    } else {
      arr[k] = rightArr[j];
      j++;
      k++;
    }

  }

  while (i <= n1-1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j <= n2-1) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }

}

void mergeSort(int *arr, int left, int right) {
  if (left < right) {
    int mid =  (right + left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge1(arr, left, mid, right);
  }
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
    int a[]={12,45,11,14,12,2};
    int b[]={6,4,7,9,3};
    printList(b,5);
    printList(a,6);

    mergeSort(a,0,5);
    mergeSort(b,0,4);
    int *m = mergelist(a,b,6,5);
    printList(m,11);
    return 0;
}

