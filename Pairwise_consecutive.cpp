bool pairWiseConsecutive(stack<int> s)
{
    if(s.size()%2==1) {
        s.pop();
    }
    int flag=1;
    while(!s.empty()) {
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(abs(a-b)!=1) {
            flag=0;
            break;
        }
    }
    if(flag==0) {
        return false;
    }
    else {
        return true;
    }
}
