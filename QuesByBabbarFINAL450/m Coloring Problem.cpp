//https://practice.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1#

bool isValid(bool graph[101][101], int color[101],int v, int c, int V) 
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i]) 
        return false;
    return true;
}

bool graphColoringUtil(bool graph[101][101], int m,int color[101],int v, int V)
{
    // your code here
    if(v==V)
    return true;
    
    for(int c=1;c<=m;c++){
        if(isValid(graph,color,v,c,V)){
            color[v] = c;
            if(graphColoringUtil(graph,m,color,v + 1,V)==true)
            return true;
            color[v] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    int *color = new int[V];
    for (int i = 0; i < V; i++) color[i] = 0;

    return graphColoringUtil(graph, m, color, 0, V);
}
