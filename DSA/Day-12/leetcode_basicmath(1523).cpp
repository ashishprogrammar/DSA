
---

## 🧾 2. Brute-Force Code (C++)

```cpp
class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        int num = low;
        while (num <= high) {
            if (num % 2 != 0) {
                count++;
            }
            num++;
        }
        return count;
    }
};


class Solution {
public:
    int countOdds(int low, int high) {
        int total = high - low + 1;

        // If total elements is even, there are total/2 odd numbers
        // If total elements is odd, and low is odd, we start with an odd, so (total + 1)/2
        // Otherwise, if low is even, then it still works the same.
        if (total % 2 == 0) {
            return total / 2;
        } else {
            return (low % 2 == 0) ? total / 2 : total / 2 + 1;
        }
    }
};
