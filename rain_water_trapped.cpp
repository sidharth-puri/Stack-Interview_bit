int Solution::trap(const vector<int> &A) {
    int arr1[A.size()];
    int arr2[A.size()];
    int i;
    arr1[0]=A[0];
    for(i=1;i<A.size();i++) {
        arr1[i]=max(A[i],arr1[i-1]);
    }
    arr2[A.size()-1]=A[A.size()-1];
    for(i=A.size()-2;i>=0;i--) {
        arr2[i]=max(A[i],arr2[i+1]);
    }
    int area=0;
    for(i=0;i<A.size();i++){
        area =area + (min(arr1[i],arr2[i])-A[i]);
        
    }
    return area;
}
