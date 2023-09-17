#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> graphInp(e,vector<int>(2));
    for(int i=0;i<e;i++)
    for(int j=0;j<2;j++)
    cin>>graphInp[i][j];


    //Matrix Representation
    vector<vector<int>> matrixRep(n+1,vector<int>(n+1,0));

 

    for(int i=0;i<e;i++)
    {
        int row=graphInp[i][0];
        int col=graphInp[i][1];
        matrixRep[row][col]=1;
        matrixRep[col][row]=1;
    }


       for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<matrixRep[i][j]<<" ";
        }
        cout<<"\n";
    }
    //List Representation

    vector<int> adj[n+1];
    for(int i=0;i<e;i++)
    {
        int row=graphInp[i][0];
        int col=graphInp[i][1];
        adj[row].push_back(col);
        adj[col].push_back(row);
    }
    for(int i=0;i<=n;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
            cout<<adj[i][j]<<" ";
        cout<<"\n";
    }


   

}