int Solution::evalRPN(vector<string> &A) {
    stack<string> s;
    int i;
    for(i=0;i<A.size();i++) {
        s.push(A[i]);
      //  cout<<s.top()<<" ";
        if(A[i]=="+") {
            s.pop();
            int a=stoi(s.top());
            s.pop();
            int b=stoi(s.top());
            s.pop();
            s.push(to_string(a+b));
        }
         if(A[i]=="-") {
            s.pop();
            int a=stoi(s.top());
            s.pop();
            int b=stoi(s.top());
            s.pop();
            s.push(to_string(b-a));
        }
         if(A[i]=="/") {
            s.pop();
            int a=stoi(s.top());
            s.pop();
            int b=stoi(s.top());
            s.pop();
            s.push(to_string(b/a));
        }
         if(A[i]=="*") {
            s.pop();
            int a=stoi(s.top());
            s.pop();
            int b=stoi(s.top());
            s.pop();
            s.push(to_string(a*b));
        }
        
    }
    return stoi(s.top());

}
