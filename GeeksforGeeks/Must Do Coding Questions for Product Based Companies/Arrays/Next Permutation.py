#https://practice.geeksforgeeks.org/problems/next-permutation5226/1

#User function Template for python3

class Solution:
    def nextPermutation(self, N, arr):
        # code here
        if (arr==sorted(arr,reverse=True)):
            arr=sorted(arr)
            return arr
        else:    
            for i in range(N-1,0,-1):
                if(arr[i-1]<arr[i]):
                    arr=arr[0:i]+sorted(arr[i:N])
                    for j in range(i,N):
                        if(arr[i-1]<arr[j]):
                            temp=arr[j]
                            arr[j]=arr[i-1]
                            arr[i-1]=temp
                            return arr
        return arr
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for i in range(N):
            arr[i] = int(arr[i])
        
        ob = Solution()
        ans = ob.nextPermutation(N, arr)
        for i in range(N):
            print(ans[i],end=" ")
        print()
# } Driver Code Ends
