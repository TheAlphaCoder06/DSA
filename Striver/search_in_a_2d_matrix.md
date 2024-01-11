# [Search In A 2D Matrix](https://www.codingninjas.com/studio/problems/search-in-a-2d-matrix_980531?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1&leftPanelTabValue=PROBLEM)

## Naive Approach

```cpp

//Time Complexity: O(n*m)
//Space Complexity: O(1)

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size(), n = mat[0].size();
    
    bool isPresent = false;
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == target) isPresent = true;
        }
    }

    return isPresent;
}
```

## Better Approach

```cpp

//Time Complexity: O(n + log(m))
// Space Complexity: O(1)

bool searchMatrix(vector<vector<int>> &mat, int target) {
  int m = mat.size(), n = mat[0].size();

  int row = -1;

  for (int i = 0; i < m; i++) {
    if (mat[i][0] <= target && mat[i][n - 1] >= target) {
        row = i;
        break;
    }
  }
  if(row == -1) return false;

  int start = 0, end = n - 1;

  while(start <= end) {
      int mid = (end - start) / 2 + start;

      if(mat[row][mid] == target) return true;
      else if (mat[row][mid] > target) end = mid - 1;
      else start = mid + 1;
  }
  

  return false;
}
```

## Optimal Appraoch

```cpp

// Time Complexity: O(log(n*m)
// Space Complexity: O(1)

bool searchMatrix(vector<vector<int>> &mat, int target) {
  int m = mat.size(), n = mat[0].size();

  int start = 0, end = m * n - 1;

  while( start <= end ) {
    int mid = (end - start) / 2 + start;
    int temp = mid;
    int j = temp % n;
    int i = temp / n;

    if(mat[i][j] == target) return true;
    else if(mat[i][j] > target) end = mid - 1;
    else start = mid + 1;
  }

  return false;
}
```