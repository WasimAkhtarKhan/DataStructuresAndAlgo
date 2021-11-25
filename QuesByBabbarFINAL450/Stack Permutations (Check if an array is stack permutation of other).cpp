//https://leetcode.com/problems/validate-stack-sequences/
//https://www.geeksforgeeks.org/stack-permutations-check-if-an-array-is-stack-permutation-of-other/

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int i=0,j=0;
        while(j<popped.size()){
            if(s.size()==0){
                s.push(pushed[i++]);
            }
            if(s.top()!=popped[j])
            {
                if(i<pushed.size())
                    s.push(pushed[i++]);
                else
                    return false;
            }
            else{
                s.pop();
                j++;
            }
        }
        return true;
    }
