//https://www.hackerrank.com/challenges/2d-array/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

int i=0,j=0,k=0,count=0,hgsum=0,sum;
sum=arr[0][0]+arr[0][1]+arr[0][2]+arr[2][0]+arr[2][1]+arr[2][2]+arr[1][1];
for(i=0;i<4;i++)//yaha se row change karo
{
   
    for(j=0;j<4;j++)  //yaha se column change kar
    {
         hgsum=0;
        hgsum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]+arr[i+1][j+1];
    
    if(hgsum>=sum)
       sum=hgsum;
      
    }
}
return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
