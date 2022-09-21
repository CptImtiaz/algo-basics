
#include<bits/stdc++.h>
using namespace std;

int **Matrix(int r,int c)
{
int **m = new int*[r];
for(int i=0;i<c;i++)
{
    m[i]=new int[c];
}



 for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         m[i][j]=rand()%10;
     }
 }
 return m;
}
void printMatrix(int **m, int r,int c )
{
    for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         cout<<m[i][j]<<" ";
     }
     cout<<endl;
 }
}
int **sumOfTwoMatrix(int **a,int **b,int r,int c)
{
    int **m = new int*[r];
for(int i=0;i<c;i++)
{
    m[i]=new int[c];
}
     for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         m[i][j]=0;
        m[i][j]= a[i][j]+b[i][j];
     }

 } return m;
}
int main()

{
srand(time(0));
  int **A = Matrix(3,4);
  int **B = Matrix(3,4);
  printMatrix(A,3,4);
  cout<<"////////////////"<<endl;
  printMatrix(B,3,4);
  int **sum=sumOfTwoMatrix(A,B,3,4);
   cout<<"////////////////"<<endl;
  printMatrix(sum,3,4);

  return 0;
}
