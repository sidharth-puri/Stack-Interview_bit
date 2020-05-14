#include <iostream>
using namespace std;
#include <stack>
void stock(int a[],int l){
    stack<int> s;
    s.push(0);
    cout<<"1"<<" ";
    int i=1,count;
    while(i<l){
        while(!s.empty() && a[i]>=a[s.top()]){
            s.pop();
        }
        if(s.empty()){
        count=i+1;}
        else {
        count=i-s.top();}
        cout<<count<<" ";
        s.push(i);
        i++;
    }
    cout<<"\n";
}
int main() {
    int t;
    cin>>t;
    int k;
    for(k=0;k<t;k++){
	int l;
	cin>>l;
	int arr[l];
	int i;
	for(i=0;i<l;i++){
	    cin>>arr[i];
	}
	stock(arr,l);
    }
	return 0;
}
