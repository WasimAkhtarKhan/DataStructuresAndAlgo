//https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1#
//https://www.geeksforgeeks.org/sudoku-backtracking-7/

bool isValid(int num,int grid[][9],int i,int j){
        for(int k=0;k<9;k++){
            if(grid[k][j]==num)
            return false;
        }
        for(int k=0;k<9;k++){
            if(grid[i][k]==num)
            return false;
        }
        
        if(i<3)
        i=0;
        else if(i<6)
        i=3;
        else if(i<9)
        i=6;
        
        if(j<3)
        j=0;
        else if(j<6)
        j=3;
        else if(j<9)
        j=6;
        
        for(int a=i;a<i+3;a++){
            for(int b=j;b<j+3;b++){
                if(grid[a][b]==num)
                return false;
            }
        }
        return true;
    }
    
    bool SudokuNotFull(int grid[N][N],int&r,int&c){
        for(r=0;r<9;r++){
            for(c=0;c<9;c++){
                if(grid[r][c]==UNASSIGNED)
                return true;
            }
        }
        return false;
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int r,c;
        if(!SudokuNotFull(grid,r,c))
        return true;
        
        for(int n=1;n<=9;n++){
            if(isValid(n,grid,r,c)){
                grid[r][c] = n;
                if(SolveSudoku(grid))
                return true;
                grid[r][c]=UNASSIGNED;
            }
        }
        return false;
    }
