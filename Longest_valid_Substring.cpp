#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,k;
    cin>>t;
    for(k=0;k<t;k++) {
        string s;
        cin>>s;
        stack<int> stk;
        stk.push(-1);
        int i,count=0,result=0;
        for(i=0;i<s.length();i++) {
           if(s[i]=='(') {
               stk.push(i);
           }
           else {
             stk.pop();
             if(!stk.empty()) {
                 result=max(result,i-stk.top());
             }
             else {
                 stk.push(i);
             }
           }
         
        }
        cout<<result<<endl;
    }
}
