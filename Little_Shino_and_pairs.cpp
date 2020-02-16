/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i,arr[n];
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	stack<int> s;
	int j,count=0;

	for(i=0;i<n-1;i++){
	    while(!s.empty()){
	        s.pop();
	    }
	    for(j=i+1;j<n;j++){
	       if(arr[j]<arr[i]){
	           if(s.empty()){
	               count++;
	               s.push(arr[j]);
	           }
	           else {
	           if(arr[j]>s.top()){
	               s.push(arr[j]);
	               count++;
	           }
	           }
	       }
	       else {
	           count++;
	           break;
	       }
	    }
	}
	cout<<count;
}
