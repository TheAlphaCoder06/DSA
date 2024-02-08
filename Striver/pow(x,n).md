# [Pow(x, n)](https://leetcode.com/problems/powx-n/)

## Brute Force

```cpp

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        for(int i = 0; i < abs(n); i++) {
            ans = ans * x;
        }
        if(n < 0) {
            ans = 1 / ans;
        }
        return ans;
    }
};
```

## Binary Exponentiation

```cpp
//Time Complexity: O(logN)
//Space Complexity: O(1)

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        if(n < 0) nn = nn * -1;
        while(nn) {
            if(nn % 2) {
                ans = ans * x;
                nn--;
            } else {
                x *= x;
                nn = nn / 2;
            }
        }
        if(n < 0) ans = double(1.0) / double(ans);

        return ans;
    }
};
```