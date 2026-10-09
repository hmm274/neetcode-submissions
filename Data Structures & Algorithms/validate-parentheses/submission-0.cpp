class Solution {
public:
    bool isValid(string s) {
        vector<char> stack = {};
        int stackPointer = -1;
        for (char c : s){
            if (stackPointer==-1 && (c==']' || c=='}' || c==')')){
                return false;
            }
            if (stackPointer>=0){
                if (c==')'){
                    if (stack[stackPointer]!='('){
                        return false;
                    } else {
                        stack.pop_back();
                        stackPointer--;
                    }
                }
                if (c=='}'){
                    if (stack[stackPointer]!='{'){
                        return false;
                    } else {
                        stack.pop_back();
                        stackPointer--;
                    }
                }
                if (c==']'){
                    if (stack[stackPointer]!='['){
                        return false;
                    } else {
                        stack.pop_back();
                        stackPointer--;
                    }
                }
            }
            if (c!=']' && c!='}' && c!=')'){
                stack.push_back(c);
                stackPointer++;
            }
        }
        return stack.empty();
    }
};
