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

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int i;
    stack<char> stk;
    for(i=0;i<s.length();i++){
        if(stk.empty()){
            stk.push(s[i]);
        }
        else if(stk.top()==s[i]){
            stk.pop();
        }
        else {
            stk.push(s[i]);
        }
    }
    string n="";
    while(!stk.empty()){
        n+=stk.top();
        stk.pop();
    }
    reverse(n.begin(),n.end());
    if(n==""){
        cout<<"Empty String";
    }
    cout<<n;
}
