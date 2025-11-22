int memHash[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int tribonacci(int n) {
    if (n==0){
        return 0;
    } else if (n==1 || n==2){
        return 1;
    }
    if (memHash[n] != -1){
        return memHash[n];
    }
    memHash[n] = tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
    return memHash[n];
}
