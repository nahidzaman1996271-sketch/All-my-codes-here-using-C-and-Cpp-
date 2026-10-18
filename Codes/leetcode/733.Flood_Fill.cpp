
class Solution {
public:

    bool isValidPos(vector<vector<int>>& image, int r, int c) {
        if (r < 0 || r >= image.size()) return false;
        if (c < 0 || c >= image[0].size()) return false;
        return true;
    }

    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
        if (!isValidPos(image, r, c)) return;
        if (image[r][c] != oldColor) return;

        image[r][c] = newColor;

        dfs(image, r + 1, c, oldColor, newColor);
        dfs(image, r - 1, c, oldColor, newColor);
        dfs(image, r, c + 1, oldColor, newColor);
        dfs(image, r, c - 1, oldColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];

        if (oldColor == color) return image;

        dfs(image, sr, sc, oldColor, color);

        return image;
    }
};
