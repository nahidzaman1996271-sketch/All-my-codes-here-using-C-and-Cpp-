class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int vertical_sum = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] != 0) {
                    vertical_sum += 6 * grid[i][j] 
                                  - 2 * (grid[i][j] - 1);
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(j != 0) {
                    vertical_sum -= 2 * min(grid[i][j], grid[i][j-1]);
                }

                if(i != 0) {
                    vertical_sum -= 2 * min(grid[i][j], grid[i-1][j]);
                }
            }
        }

        return vertical_sum;
    }
};