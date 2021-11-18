class Solution {
private:
    std::unordered_map<int, int> memo;    
public:
    int fib(int n) {
        if(n < 2) {
            return n;
        }
        
        if(memo.find(n) != memo.end()) {
            return memo[n];
        }
        
        memo[n] = fib(n - 1) + fib(n - 2);
        return memo[n];
    }
};