//https://practice.geeksforgeeks.org/problems/special-stack/1#
//Expected Time Complexity: O(N) for getMin, O(1) for remaining all 4 functions.
//Expected Auxiliary Space: O(1) for all the 5 functions.

void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	return true;
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size()==0)
	return true;
	return false;
}

int pop(stack<int>& s){
	// Your code goes here
	int x=-1;
	if(s.size()){
	    x = s.top();
	    s.pop();
	}
	return x;
}

int getMin(stack<int>& s){
	// Your code goes here
	int m = 10000000;
	while(s.size()){
	    m = min(m,s.top());
	    s.pop();
	}
	return m;
}
