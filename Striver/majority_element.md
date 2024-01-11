# [Majority Element](https://www.codingninjas.com/studio/problems/majority-element_6783241)

## Naive Approach

```cpp
int majorityElement(vector<int> v) {

  int n = v.size();

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (v[j] == v[i]) {
        cnt++;
      }
    }
    if (cnt > (n / 2))
      return v[i];
  }

  return -1;
}
```

## Hash Map Approach

```cpp
#include <bits/stdc++.h>


int majorityElement(vector<int> v) {

    int n = v.size();

    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }

    return -1;
}
```

## Moore’s Voting Algorithm

```cpp
int majorityElement(vector<int> v) {

  int n = v.size();
  int cnt = 0;
  int el;  

  for (int i = 0; i < n; i++) {
    if (cnt == 0) {
      cnt = 1;
      el = v[i];
    } else if (el == v[i])
      cnt++;
    else
      cnt--;
  }

  int cnt1 = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == el)
      cnt1++;
  }

  if (cnt1 > (n / 2))
    return el;
  return -1;
}
```

## Moore's Voting Algorithm modified


<div style="display: flex; align-items: center; flex-wrap: wrap">
  <img src="https://takeuforward.org/wp-content/uploads/2023/03/Screenshot-2023-03-18-163852.png" />
  <img src="https://takeuforward.org/wp-content/uploads/2023/03/image.png" />
  <img src="https://takeuforward.org/wp-content/uploads/2023/03/Screenshot-2023-03-18-164012.png" />
  <img src="https://takeuforward.org/wp-content/uploads/2023/03/Screenshot-2023-03-18-164100.png" />
</div>


> If it's mentioned in question that majority element exists then only use this approach


```cpp
int majorityElement(vector<int> v) {

  int n = v.size();
  int cnt = 0;
  int el;  

  for (int i = 0; i < n; i++) {
    if (cnt == 0) {
      cnt = 1;
      el = v[i];
    } else if (el == v[i])
      cnt++;
    else
      cnt--;
  }
  return el;
  
}
```