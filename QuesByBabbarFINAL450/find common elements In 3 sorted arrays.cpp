//https://practice.geeksforgeeks.org/problems/common-elements1132/1#

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0,j=0,k=0;
            int last=INT_MIN;
            vector<int>vec;
            for(i=0,j=0,k=0;i<n1&&j<n2&&k<n3;)
            {
                if(A[i]==B[j]&&C[k]==A[i]&&last!=A[i])
                {
                    last=A[i];
                    vec.push_back(A[i]);
                    i++;j++;k++;
                }
                else if(A[i]==min({A[i],B[j],C[k]}))
                i++;
                else if(B[j]==min({A[i],B[j],C[k]}))
                j++;
                else
                k++;
            }
            return vec;
        }

};
