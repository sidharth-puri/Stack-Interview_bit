#include <stack>
vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> s;
    int i;
    vector<int> arr;
    for(i=0;i<A.size();i++){
        if(s.empty()){
            arr.push_back(-1);
        }
        else if(s.top()<A[i]){
            arr.push_back(s.top());
        }
        else if(s.top()>=A[i]){
            while(!s.empty() && s.top()>=A[i]){
                s.pop();
            }
            if(s.empty()){
                arr.push_back(-1);
            }
            else {
                arr.push_back(s.top());
            }
        }
        s.push(A[i]);
    }
    return arr;
}
