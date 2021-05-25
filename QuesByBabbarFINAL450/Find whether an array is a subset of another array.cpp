//https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#

string isSubset(int a1[], int a2[], int n, int m) {
    
    set<int>s1;
    for(int i=0;i<n;i++)
    {
        s1.insert(a1[i]);
    }
    
    for (int i=0;i<m;i++)
    {
        if(s1.find(a2[i])==s1.end())
        return "No";
    }
    return "Yes";
    
}
