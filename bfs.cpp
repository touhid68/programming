/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;
///--------------------------Chapter 8--------------------------------------///
///------------------Graphs And Their Applications--------------------------///

//-----------------Breadth First Search or BFS for a Graph-------------------//

/*
vector<int>graph[100];
bool visited[100];
int dis[100];

int BFS(int source)
{
    visited[source]=true;
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(visited[v]==false)
            {
                q.push(v);
                visited[v]=true;
                dis[v]=dis[u]+1;
            }
        }
    }
}

int main()
{
    int node,edge;
    cout<<"Enter Node and Edge : ";
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int source;
    cout<<"Enter Source Node : ";
    cin>>source;
    BFS(source);
    cout<<"Source Node: "<<source<<endl;
    cout<<"Node"<<"\t"<<"Distance(from source node)"<<endl;
    for(int i=1; i<=node; i++)
    {
            cout<<i<<"\t"<<dis[i]<<endl;
    }
}
*/
