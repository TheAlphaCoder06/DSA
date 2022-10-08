#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int> time, int n, int m, unsigned long long mid){
    unsigned long long sum = 0;
    unsigned long long daysCnt = 1;
    for(int i = 0; i < m; i++){
        if( (sum + time[i]) <= mid){
            sum += time[i];
        }
        else{
            daysCnt++;
            if(daysCnt > n or time[i] > mid)
                return false;
            sum = time[i];
        }
    }
    return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
    unsigned long long sum = 0;
    for(int i = 0; i < m; i++)
            sum += time[i];
    unsigned long long s = 0, e = sum;
    unsigned long long ans = -1;
    unsigned long long mid = s + (e - s)/2;
    while(s<=e)
    {
        if(isPossible(time, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    vector<int> time = {2,2,3,3,4,4,1};
    int n = 4, m = 7;
    cout<<ayushGivesNinjatest(n, m, time);
    return 0;
}