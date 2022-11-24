class Solution
{
    public:
        /*[["A","B","C","E"], ["S","F","E","S"], ["A","D","E","E"]]
        "ABCESEEEFS"[["a","b"], ["c","d"]]
        "cdba"[["A","B","C","E"], ["S","F","C","S"], ["A","D","E","E"]]
        "ABCCED"[["A","B","C","E"], ["S","F","C","S"], ["A","D","E","E"]]
        "SEE"[["A","B","C","E"], ["S","F","C","S"], ["A","D","E","E"]]
        "ABCB"[["a","b"]]
        "ba"
        */
        int check[8][8];
    int rec(vector<vector < char>> &board, int i, int j, int k, string word)
    {
        if (i >= board.size() || j >= board[0].size() || i < 0 || j < 0)
            return 0;

        if (check[i][j] == 1)
            return 0;
        if (word[k] == board[i][j])
        {
            check[i][j] = 1;
            if (k == word.size() - 1)
                return 1;

            return check[i][j]=rec(board,i+1,j,k+1,word)||rec(board,i-1,j,k+1,word)||rec(board,i,j+1,k+1,word)||rec(board,i,j-1,k+1,word);
        }
        else
            return check[i][j] = 0;
    }
    bool exist(vector<vector < char>> &board, string word)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                memset(check, 0, sizeof(check));
                if (board[i][j] == word[0])
                    if (rec(board, i, j, 0, word))
                        return 1;
            }
        }
        return 0;
    }
};