#include <climits>
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
            int digit = x %10;
            if((ans > INT_MAX/10)||(ans < INT_MIN/10)){
                return 0;
            }
            ans = (ans*10)+digit;
            x= x/10;
        }
        return ans;
        
    }
};


// ### Code Explanation

// 1. **Initialization:**
//    ```cpp
//    int ans = 0;
//    ```
//    - `ans` is initialized to 0. This variable will store the reversed integer.

// 2. **Loop Through Digits:**
//    ```cpp
//    while(x != 0) {
//        int digit = x % 10;
//        ...
//        x = x / 10;
//    }
//    ```
//    - The `while` loop runs as long as `x` is not zero.
//    - `int digit = x % 10;` extracts the last digit of `x` using the modulus operator (`%`).
//    - `x = x / 10;` removes the last digit from `x` by performing integer division.

// 3. **Check for Overflow:**
//    ```cpp
//    if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
//        return 0;
//    }
//    ```
//    - Before updating `ans`, it checks if multiplying `ans` by 10 would cause overflow.
//    - `INT_MAX` and `INT_MIN` are constants representing the maximum and minimum values for a 32-bit integer. If `ans` exceeds these bounds after adding the new digit, it means reversing the integer would lead to an overflow.
//    - If overflow is detected, the function returns 0, which is a common way to indicate that the result is not valid due to overflow.

// 4. **Update the Result:**
//    ```cpp
//    ans = (ans * 10) + digit;
//    ```
//    - This updates `ans` by shifting its digits to the left (multiplying by 10) and adding the new last digit.

// 5. **Return the Reversed Integer:**
//    ```cpp
//    return ans;
//    ```
//    - After the loop finishes, the reversed integer stored in `ans` is returned.