#include <bits/stdc++.h>

using namespace std;

int OneD_Eraser(string s, int size)
{

  int cnt = 0;
  for (int i = 0; i < s.length();)
  {
    while (s[i] == 'W')
    {
      i++;
      if (i > s.length() - 1)
        return cnt;
    }
    i += size;
    cnt++;
  }

  return cnt;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    cout << OneD_Eraser(s, k) << endl;
  }

  return 0;
}