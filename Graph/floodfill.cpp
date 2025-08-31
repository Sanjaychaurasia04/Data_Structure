class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size();
        int col = image[0].size();

        int startcolor = image[sr][sc];
        if(startcolor == color){
            return image;
        }

        queue<pair<int,int>>q;
        q.push({sr , sc});
        image[sr][sc] = color;

        vector<int>dir = {0,-1,0,1,0};

        while(!q.empty()){
            int size = q.size();

            while(size--){
                auto[u ,v] = q.front();
                q.pop();

                for(int i =0;i<4;i++){
                    int nr = u + dir[i];
                    int nc= v + dir[i+1];
                    if(nr >= 0 && nc >= 0 && nr<row && nc < col && image[nr][nc] == startcolor){
                        image[nr][nc] = color;
                        q.push({nr ,nc});
                    }
                }
            }
        }
        return image;
        
    }
};
