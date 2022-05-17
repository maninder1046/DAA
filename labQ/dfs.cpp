#include<iosteam>
#include<vector>
#include<queue>
using namespace std;
void addedge(vector<int> adj[],int u,int v){
  adj[u].push_back(v);
  adj[v].puch_back(u);
} 
//dfs
void dfs(vector<int> adj[],int u,bool visited[])
{
  visited[u]==TRUE;
  cout<<u;
  for(auto it =adj[u].begin();it!=adj[u].end();it++)   //scall all neighbours
  {
    if(!visited[*it])
     dfs(adj,*it,visited);
  }
 // for(auto v:adj[u]){
   // if(!visited[v])
    // dfs(adj,v,visited)'
  }
}
int main()
{
  int i,v,e;
  cout<<"enter no. of vertices ";
  cin>>v;
  cout<<"enter no. of egdes  ";
  cin>>e;
  vector<int>adj[v];
  bool visited[v];
  for(i=0;i<e;i++)
  {
   int u,v;
   cin>>u>>v;
   addedge(adj,u,v);
  }
  cout<<"vertices in dfs traversal ";
  for(i=o;i<v;i++)
  {
    if(!visited[i])
     dfs(adj,i,visited);
  }
return 0;
}
