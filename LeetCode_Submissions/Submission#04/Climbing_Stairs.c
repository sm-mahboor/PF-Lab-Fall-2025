int memHash[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int climbStairs(int n) {
    if (n==1){
        return 1;
    } else if (n==2){
        return 2;
    }
    if (memHash[n] != -1){
        return memHash[n];
    }
    memHash[n] = climbStairs(n-1) + climbStairs(n-2);
    return memHash[n]; 
}
