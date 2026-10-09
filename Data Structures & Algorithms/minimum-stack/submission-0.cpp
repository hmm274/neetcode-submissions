class MinStack {
public:
    vector<int> mainStack;
    vector<int> minStack;

    MinStack() {
        mainStack = {};
        minStack = {};
    }
    
    void push(int val) {
        mainStack.push_back(val);
        if (minStack.size()==0){
            minStack.push_back(val);
        } else {
            if (minStack[minStack.size()-1]>=val){
                minStack.push_back(val);
            }
        }
    }
    
    void pop() {
        if (minStack[minStack.size()-1] == mainStack[mainStack.size()-1]){
            minStack.pop_back();
        }
        mainStack.pop_back();
    }
    
    int top() {
        return mainStack[mainStack.size()-1];
    }
    
    int getMin() {
        return minStack[minStack.size()-1];
    }
};
