# [Majority Element](https://www.codingninjas.com/studio/problems/majority-element_6915220)

## Naive Approach

```cpp
vector<int> majorityElement(vector<int> v) {
    int n = v.size(); 
    vector<int> ls;

    for (int i = 0; i < n; i++) {
        if (ls.size() == 0 || ls[0] != v[i]) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (v[j] == v[i]) {
                    cnt++;
                }
            }

            if (cnt > (n / 3))
                ls.push_back(v[i]);
        }

        if (ls.size() == 2) break;
    }

    return ls;
}
```

## Hash Map Approach


```cpp
#include <bits/stdc++.h>

vector<int> majorityElement(vector<int> v) {
  vector<int> ans;
  map<int, int> mpp;

  for (int i = 0; i < v.size(); i++) {
    mpp[v[i]]++;
  }
  for (auto it : mpp) {
    if (it.second > (v.size() / 3)) {
      ans.push_back(it.first);
    }
    if(ans.size() == 2) break;
  }

  return ans;
}
```

## Extended Boyer Moore’s Voting Algorithm

<div style="display: flex; align-items: center; flex-wrap: wrap; justify-content: center">
  <img src="https://takeuforward.org/wp-content/uploads/2023/04/Screenshot-2023-04-20-224857.png" />
  <img src="https://takeuforward.org/wp-content/uploads/2023/04/Screenshot-2023-04-20-225002.png" />
</div>

```cpp

vector<int> majorityElement(vector<int> v) {
    int n = v.size(); //size of the array

    int cnt1 = 0, cnt2 = 0; // counts
    int el1 = INT_MIN; // element 1
    int el2 = INT_MIN; // element 2

    // applying the Extended Boyer Moore's Voting Algorithm: for (int i = 0; i <
    n; i++) { if (cnt1 == 0 && el2 != v[i]) { cnt1 = 1; el1 = v[i]; } else if
    (cnt2 == 0 && el1 != v[i]) { cnt2 = 1; el2 = v[i]; } else if (v[i] == el1)
    cnt1++; else if (v[i] == el2) cnt2++; else { cnt1--, cnt2--; } }

    vector<int> ls; // list of answers

    // Manually check if the stored elements in
    // el1 and el2 are the majority elements:
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el1) cnt1++;
        if (v[i] == el2) cnt2++;
    }

    int mini = int(n / 3) + 1; if (cnt1 >= mini) ls.push_back(el1); if (cnt2 >=
    mini) ls.push_back(el2);

    // Uncomment the following line
    // if it is told to sort the answer array:
    // sort(ls.begin(), ls.end()); //TC --> O(2*log2) ~ O(1);

    return ls; } ```