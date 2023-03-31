#include <iostream>

int fib(int n) {
    if (n == 1) 
        return 0;
    else if (n == 2)
        return 1;
    else {
        int prev1 = 0;
        int prev2 = 1;
        int result = 0;
        for (int i = 2; i <= n; i++) {
	    std::cout << result << std::endl;
            result = prev1 + prev2;
            prev1 = prev2;
            prev2 = result;
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    fib(10);
    return 0;
    
}
