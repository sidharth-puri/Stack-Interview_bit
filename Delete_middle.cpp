stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    int count=0;
    stack<int> p;
    while(count!=(sizeOfStack/2)+1) {
        int t=s.top();
        p.push(t);
        s.pop();
        count++;
    }
    p.pop();
    while(!p.empty()) {
        s.push(p.top());
        p.pop();
    }
    return s;
}
