class Solution {
public:
   
       bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, int> row[9], col[9], box[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];
                if (num == '.') continue; 

                int n = num - '0'; 
                int boxIndex = (i / 3) * 3 + (j / 3); 

               
                if (row[i][n]++ > 0 || col[j][n]++ > 0 || box[boxIndex][n]++ > 0)
                    return false;
            }
        }
        return true;

    }
};
