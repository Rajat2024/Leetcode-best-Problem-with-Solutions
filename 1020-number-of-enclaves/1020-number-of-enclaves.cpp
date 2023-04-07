class Solution {
public:
    
    int rowchild[4] = {1,-1,0,0};
    int colchild[4] = {0,0,-1,1};
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        // count total lands
        int t_nodes = 0;        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
                    t_nodes+=grid[i][j];
        }
        
        
        // insert boundary nodes in to BFS queue
        int t_boundary = 0;        
        queue<vector<int>>Q;        
        for(int i=0;i<col;i++)
        {
            if(grid[0][i])
                    Q.push({0,i}),grid[0][i]=0;            
            if(grid[row-1][i])
                    Q.push({row-1,i}),grid[row-1][i]=0;
        }
        
        for(int i=0;i<row;i++)
        {
            if(grid[i][0])Q.push({i,0}),grid[i][0]=0;            
            if(grid[i][col-1])Q.push({i,col-1}),grid[i][col-1]=0;
        }

        // Flood BFS from boundary nodes and count total nodes connected to boundary
        int k,nx,ny,px,py;
        while(!Q.empty())
        {
            k = Q.size();
            t_boundary += k;
            
            while(k--)
            {
                nx = Q.front()[0];
                ny = Q.front()[1];
                Q.pop();
                
                for(int k=0;k<4;k++)
                {
                    px = nx + rowchild[k];
                    py = ny + colchild[k];

                    if(px>=0 && px<row && py>=0 && py<col && grid[px][py]==1)
                    {
                        Q.push({px,py});
                        grid[px][py]=0;  
                    }
                }
            }
        }
        
        // return total lands not conencted to boundary
        return t_nodes - t_boundary;
    }
};