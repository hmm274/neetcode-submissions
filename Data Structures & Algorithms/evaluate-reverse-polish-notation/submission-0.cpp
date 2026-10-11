class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> results = {};
        for (int i = 0; i<tokens.size(); i++){
            string c = tokens[i];
            if (c == "/"){
                results[results.size()-2] = results[results.size()-2] / results[results.size()-1];
                results.pop_back();
            } else if (c=="*"){
                results[results.size()-2] = results[results.size()-2] * results[results.size()-1];
                results.pop_back();
            } else if (c=="+"){
                results[results.size()-2] = results[results.size()-2] + results[results.size()-1];
                results.pop_back();
            } else if (c=="-"){
                results[results.size()-2] = results[results.size()-2] - results[results.size()-1];
                results.pop_back();
            } else {
                results.push_back(stoi(c));
            }
        }
        return results[0];
    }
};
