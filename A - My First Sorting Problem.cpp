#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
     int n=2;
     vector<int> nums(n);
  for(int i = 0; i < n; i++)
    cin >> nums[i];
  sort(nums.begin(), nums.end());
  for(int i = 0; i < n; i++)
    cout << nums[i] << " ";
    
    }
    return 0;
}
