//DFS program
#include<iostream>
using namespace std;
void display(int N,int start,int** edge,bool* visited,int* path)
{
	visited[start]=true;
	if(start==dist)
	{
		path
	}
	for(int i=0;i<N;i++)
	{
		if(i==start)
		{
			continue;
		}
		if(edge[start][i]==1)
		{
			if(visited[i])
			{
				continue;
			}
		
			display(N,i,edge,visited,path);
			
		}
			
		
	}
}
int main()
{
	int N,E;
	cout<<"enter no of edges: ";
	cin>>E;
	cout<<"enter no of vertex";
	cin>>N;
	int** edge=new int*[N];
		for(int i=0;i<N;i++)
	{
		edge[i]=new int[N];
		for(int j=0;j<N;j++)
		{
			edge[i][j]=0;
		}
	}
	for(int i=0;i<E;i++)
	{
		cout<<"enter start and end point";
		int f,s;
		cin>>f>>s;
		edge[f][s]=1;
	}
	bool* visited=new bool[N];
		for(int i=0;i<N;i++)
		{
			visited[i]=false;
		}
	int* path = new int[N];
		for(int i=0;i<N;i++)
		{
			path[i]=0;
		}
	
	int start;
	cout<<"enter the start point";
	cin>>start;
	display(N,start,edge,visited,path);

}











