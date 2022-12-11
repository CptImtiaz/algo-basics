#include <bits/stdc++.h>
using namespace std;



int main()
{
    int adj[100][100];
    int node,edge;
    cin>>node>>edge;
    int u, v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;
    }
  for(int i=0;i<node;i++){
        for(int j =0;j<node;j++){
            cout<<adj[i][j]<<" ";
        }cout<<endl;
       }

}
