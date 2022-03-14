//https://www.geeksforgeeks.org/find-shortest-safe-route-in-a-path-with-landmines/
//https://www.codingninjas.com/codestudio/problems/shortest-safe-route-in-a-field-with-landmines_1164264?leftPanelTab=0
bool isValid(vector<vector<int>>&field,int x,int y){
    if(x>=0&&x<field.size()&&y>=0&&y<field[0].size()&&field[x][y]!=-1)
        return true;
    return false;
}
void backtrack(int x,int y,vector<vector<int>>&field,int c,int& res,int steps){
    if(y>=c-1){
        res = min(res,steps);
        return;
    }
    if(steps>res)
        return;
    
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    field[x][y] = -1;
    for(int i=0;i<4;i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(isValid(field,x1,y1)){
            backtrack(x1,y1,field,c,res,steps+1);
        }
    }
    field[x][y] = 1;
}

int shortestPath(vector<vector<int>> &field)
{
	// Write your code here.
    int r = field.size();
    int c = field[0].size();
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(field[i][j]==0){
                field[i][j] = -1;
                if(j!=c-1)
                    field[i][j+1] = -1;
                if(i!=0)
                    field[i-1][j] = -1;
                if(i!=r-1)
                    field[i+1][j] = -1;
                if(j!=0)
                    field[i][j-1] = -1;
            }
        }
    }
    
    int res = INT_MAX;
    for(int i=0;i<r;i++){
        if(field[i][0]==1){
            int steps = 0;
    		backtrack(i,0,field,c,res,steps);
            if(res==c-1)
                return res;
        }
    }
    if(res==INT_MAX)
        return -1;
    return res;
}
