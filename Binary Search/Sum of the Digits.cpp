//https://binarysearch.com/problems/Sum-of-the-Digits

int solve(int num) {
    int sum=0;
    while(num)
    {
        sum += (num%10);
        num /= 10;
    }
    return sum;
}
