# [Longest Successive Elements](https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740)

## Naive Approach




## Better Approach(Using Sorting)

```cpp

// Time Complexity: O(N) + O(NlogN)
// Spce Complexity: O(1)

int longestSuccessiveElements(vector<int> &a) {
  sort(a.begin(), a.end());
  int ans = 0, curr = 0;

  for (int i = 0; i < a.size() - 1; i++) {
    if (a[i + 1] - a[i] == 1) {
      curr++;
    } else if (a[i + 1] == a[i]) {
      continue;
    } else {
      curr = 0;
      continue;
    }
    ans = max(ans, curr);
  }

  return ans + 1;
}
```

