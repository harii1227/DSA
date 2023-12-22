#include<iostream>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
      int sum=0 , zero=0 ,ans=0; 
      for(auto x : s){
          sum +=(x - '0');
      } 
      for(int i=0 ; i<s.size() - 1; i++){
          zero += (s[i] == '0');
          sum -= (s[i] - '0');
          ans = max(sum + zero, ans);
      }
      return ans;
    }
};