#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,k;
	cin>>t;
	for(k=0;k<t;k++) {
	    int n;
	    cin>>n;
	    stack<int> s;
	    int i,arr[n];
	    for(i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++) {
	        if(s.empty()) {
	            s.push(arr[i]);
	            cout<<"-1 ";
	        }
	        else if(s.top()<arr[i]) {
	            cout<<s.top()<<" ";
	            s.push(arr[i]);
	        }
	        else if(s.top()>=arr[i]) {
	            while(!s.empty() && s.top()>=arr[i]) {
	                s.pop();
	            }
	            if(s.empty()) {
	                s.push(arr[i]);
	                cout<<"-1 ";
	            }
	            else {
	                cout<<s.top()<<" ";
	                s.push(arr[i]);
	            }
	        }
	    }
	    cout<<endl;
	}
}
