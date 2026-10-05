class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>> cols(9);
        vector<vector<char>> boxes(9);
        int row_num = 0;
        for (vector<char> row : board){
            unordered_set<char> row_map = {};
            int col_num = 0;
            for (char element : row){
                if (element != '.'){
                    if (row_map.contains(element)){
                        return false;
                    } else {
                        row_map.insert(element);
                        cols[col_num].push_back(element);
                        int box = (col_num/3)+(row_num/3)*3;
                        boxes[box].push_back(element);
                    }
                }
                col_num++;
            }
            row_num++;
        }
        for (vector<char> col : cols){
            unordered_set<char> col_map = {};
            for (char element : col){
                if (col_map.contains(element)){
                    return false;
                } else {
                    col_map.insert(element);
                }
            }
        }
        for (vector<char> box : boxes){
            unordered_set<char> box_map = {};
            for (char element: box){
                if (box_map.contains(element)){
                    return false;
                } else {
                    box_map.insert(element);
                }
            }
        }
        return true;
    }

};
