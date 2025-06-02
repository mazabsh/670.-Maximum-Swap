#include<iostream>
#include<string> 
#include<algorithm> 
#include<vector> 


using namespace std; 

class Solution{
public: 
      int maximumSwap(int num){
        string s = to_string(num); 
        int n = s.size(); 
        vector<int> lastPos(10,-1); 
        for(int i=0; i<n ; ++i){
          lastPos[s[i]-'0']=i; 
        }
        for(int i=0; i<n; ++i){
          for(int d=9; d>(s[i]-'0'); --d){
            if(lastPos[d]>i){
              swap(s[lastPos[d]], s[i]); 
              return stoi(s); 
            }
          }
        }
        return num;  
      }
};
int main(){
  int num = 1993; 
  Solution sol; 
  cout << sol.maximumSwap(num) << endl;
  return 0; 
}

