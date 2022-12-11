#include<bits/stdc++.h>
using namespace std;
void graphDisplay(vector<int> v[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<"-->";

    for(int j=0;j<v[i].size();j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }
}

int main()
{
    vector<int> vec[100];
     int node, edge;
    cin>>node>>edge;
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);

    }
    graphDisplay(vec,node);
}
