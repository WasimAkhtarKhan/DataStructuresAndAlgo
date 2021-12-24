//https://leetcode.com/problems/flood-fill/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oc = image[sr][sc];
        if(oc==newColor)
            return image;
        queue<pair<int,int>>q;
        q.push(make_pair(sr,sc));
        image[sr][sc] = newColor;
        int r = image.size();
        int c = image[0].size();
        
        while(!q.empty()){
            pair<int,int>p = q.front();
            q.pop();
            
            vector<vector<int>> v = { {1, 0}, {0, -1}, {-1, 0}, {0, 1} };
            for(int i=0;i<4;i++){
                int nx = p.first + v[i][0];
                int ny = p.second + v[i][1];
                if(nx>=0&&nx<r&&ny>=0&&ny<c&&image[nx][ny]==oc){
                    image[nx][ny] = newColor;
                    q.push(make_pair(nx,ny));
                }
            }
        }
        return image;
    }
};
