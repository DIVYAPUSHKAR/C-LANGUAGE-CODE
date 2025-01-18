#include<stdio.h>
# define N 20
int stack[N],vis[N]={0};
int adj[N][N],top=-1,n;
void dfs(int v)
{
  stack[++top]=v;
  vis[v]=1;
  printf("%d ",v);
  for(int i=1;i<=n;i++)
  {
    if(adj[v][i]==1 && !vis[i])
    dfs(i);
  }
}
void main()
{
  printf("enter no.of vertices:");
  scanf("%d",&n);
  printf("adjacency matrix\n");
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      scanf("%d",&adj[i][j]);
    }
  }
  int v;
  printf("enter start vertex:");
  scanf("%d",&v);
  dfs(v);
}
