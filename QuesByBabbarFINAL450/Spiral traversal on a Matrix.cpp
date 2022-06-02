//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){
        // code here
        vector<int>res;
        pair<int,int>s,e;
        s.first = 0;
        s.second = 0;
        e.first = r-1;
        e.second = c-1;
        while(s.first<=e.first&&s.second<=e.second){
            for(int i=s.second;i<=e.second;i++)
            res.push_back(matrix[s.first][i]);
            s.first++;
            
            for(int i=s.first;i<=e.first;i++)
            res.push_back(matrix[i][e.second]);
            e.second--;
            
            if(s.first<=e.first){
                for(int i=e.second;i>=s.second;i--)
                res.push_back(matrix[e.first][i]);
                e.first--;
            }
            
            if(s.second<=e.second){
                for(int i=e.first;i>=s.first;i--)
                res.push_back(matrix[i][s.second]);
                s.second++;
            }
        }
        return res;
    }
