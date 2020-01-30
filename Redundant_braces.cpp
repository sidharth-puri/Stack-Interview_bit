int Solution::braces(string A) {
    stack<int> s;
    int i,flag;
    for(i=0;i<A.length();i++){
        if(A[i]=='('){
            s.push(A[i]);
        }
        else if(A[i]==')'){
            flag=0;
            if(s.top()=='('){
                return 1;
            }
            else if(s.empty()){
                return 1;
            }
            
            else {
                while(!s.empty() && s.top()!='('){
                 
                    if(s.top()=='+' || s.top()=='-' ||s.top()=='*' ||s.top()=='/'){
                        flag=1;
                    }
                       s.pop();
                }
                if(s.top()=='('){
                    s.pop();
                }
                
                if(flag==0){
                    return 1;
                }
                
            }
        }
        else if(A[i]=='+' ||A[i]=='-' ||A[i]=='*' ||A[i]=='/'){
            s.push(A[i]);
        }
       
    }
    return 0;
}
