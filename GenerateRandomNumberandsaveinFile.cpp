#include <bits/stdc++.h>

using namespace std;

void GenerateRandomint(int *arr, int n)
{
   for(int i=0; i<n ; i++)
    {
        arr[i] = rand() % 1000;
    }
}
void BubbleSort(int *arr , int n)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++ )
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }

        }

    }

}


int main()
{
    srand(time(0));
    int n=10;
    int *arr = new int[n];
    GenerateRandomint(arr, n);
    //BubbleSort(arr, n);
    freopen("RandomNumber.txt","w",stdout);
    //freopen("RandomNumber.txt","r",stdin);

    for(int i=0; i<n ; i++)
    {
        //cin>>arr[i];
        cout<<arr[i]<<endl;
    }





}
