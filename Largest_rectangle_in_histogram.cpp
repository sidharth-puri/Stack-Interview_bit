int Solution::largestRectangleArea(vector<int> &arr) {
    stack<int> s;
    int i;
    int max=INT_MIN;
    int area,t;
    for(i=0;i<arr.size();){
        
       if(s.empty()){
            s.push(i);
            ++i;
        }
        else if(arr[i]>=arr[s.top()]) {
              s.push(i);
            ++i;
        }
        
        else {
             
                t=s.top();
                s.pop();
                
                if(!s.empty())
                  area= arr[t] *(i-s.top()-1);
                 if(s.empty()){
                     area = arr[t]*(i);
                 }
                 if(area>max){
                     max=area;
                 }
            
        }
    }
        while(!s.empty()){
              t=s.top();
                
                s.pop();
                if(!s.empty())
                  area= arr[t] *(i-s.top()-1);
                 if(s.empty()){
                     area = arr[t]*(i);
                 }
                 if(area>max){
                     max=area;
                 }
        }
    
    return max;
}
