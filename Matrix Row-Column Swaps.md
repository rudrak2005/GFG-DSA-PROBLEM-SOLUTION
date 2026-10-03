## 01. Matrix Row-Column Swaps

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/matrix-row-column-swaps/1)

### Problem Description

**Task:** You are given two integers m and n, representing the number of rows and columns of a grid. Initially, the grid is filled with integers from 1 to m × n, arranged sequentially from left to right, top to bottom.In other words, the first row contains the first n numbers, the second row contains the next n, and so on.You are also given a 2D vector queries[][] of size q, where each element is a list of three integers [type, a, b], representing an operation:
type = 1 → Exchange the entire a-th row with the b-th row.
type = 2 → Exchange the entire a-th column with the b-th column.
type = 3 → Report the value currently present at position (a, b) in the grid.
Your task is to process all the operations in the given order and return the results for every query of type 3.

#### Examples

##### Example 1

- **Input:**
```text
n = 3, m = 3, q = 6, queries[][] = [[1, 0, 1], [3, 0, 0], [3, 1, 0], [2, 0, 1], [3, 0, 0], [3, 1, 0]]
```
- **Output:**
```text
[4, 1, 5, 2]Explanation: Initially, the grid is filled in row-major order as a 3 × 3 matrix: [[1, 2, 3], [4, 5, 6], [7, 8, 9]]. The first query swaps row 0 and row 1, resulting in [[4, 5, 6], [1, 2, 3], [7, 8, 9]]. The next two queries ask for values at positions (0,0) and (1,0), which are 4 and 1 respectively. Then, a column swap between column 0 and column 1 transforms the grid into [[5, 4, 6], [2, 1, 3], [8, 7, 9]]. Finally, the last two queries request values at positions (0,0) and (1,0), which are 5 and 2. Therefore, the resulting output is [4, 1, 5, 2].
```

##### Example 2

- **Input:**
```text
n = 2, m = 3, q = 4, queries[][] = [[2, 0, 2], [3, 0, 0], [1, 0, 1], [3, 0, 0]]
```
- **Output:**
```text
[3, 6]
```

#### Constraints

- **1.** `1 ≤ m*n ≤ 10⁹¹ ≤ q ≤ 10⁵`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** Not found
- **Expected Auxiliary Space Complexity:** Not found

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-03 22:20:37
- **Status:** Correct
- **Marks:** 0

```cpp
#include <vector>
#include <numeric>

class Solution {
public:
    std::vector<int> solveQueries(int m, int n, std::vector<std::vector<int>>& queries) {
       
        std::vector<int> rowMapping(m);
        std::vector<int> colMapping(n);

        
        std::iota(rowMapping.begin(), rowMapping.end(), 0);
        std::iota(colMapping.begin(), colMapping.end(), 0);

        std::vector<int> result;

        for (const auto& q : queries) {
            int type = q[0];
            int a = q[1];
            int b = q[2];

            if (type == 1) {
               
                std::swap(rowMapping[a], rowMapping[b]);
            } else if (type == 2) {

                std::swap(colMapping[a], colMapping[b]);
            } else if (type == 3) {
              
                long long origRow = rowMapping[a];
                long long origCol = colMapping[b];
                int val = origRow * n + origCol + 1;
                result.push_back(val);
            }
        }

        return result;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-03 21:09:18
- **Status:** Correct
- **Marks:** 4

```cpp
#include <vector>
#include <numeric>

class Solution {
public:
    std::vector<int> solveQueries(int m, int n, std::vector<std::vector<int>>& queries) {
       
        std::vector<int> rowMapping(m);
        std::vector<int> colMapping(n);

        
        std::iota(rowMapping.begin(), rowMapping.end(), 0);
        std::iota(colMapping.begin(), colMapping.end(), 0);

        std::vector<int> result;

        for (const auto& q : queries) {
            int type = q[0];
            int a = q[1];
            int b = q[2];

            if (type == 1) {
               
                std::swap(rowMapping[a], rowMapping[b]);
            } else if (type == 2) {

                std::swap(colMapping[a], colMapping[b]);
            } else if (type == 3) {
              
                long long origRow = rowMapping[a];
                long long origCol = colMapping[b];
                int val = origRow * n + origCol + 1;
                result.push_back(val);
            }
        }

        return result;
    }
};
```

*Generated on: 10/3/2026, 10:20:47 PM*