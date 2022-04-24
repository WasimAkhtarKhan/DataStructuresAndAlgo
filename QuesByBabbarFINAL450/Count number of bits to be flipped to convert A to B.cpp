//https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1

int countBitsFlip(int a, int b){
        
        // Your logic here
        int count = 0;
        while(b||a){
            if((a&1)^(b&1))
            count++;
            a = a>>1;
            b = b>>1;
        }
        return count;
    }
