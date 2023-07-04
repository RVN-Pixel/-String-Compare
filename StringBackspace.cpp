#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
  int i=s.size()-1;
  int j=t.size()-1;
  while(i>=0 || j>=0){
      if(s[i]=='#' || t[j]=='#'){
          if(s[i]=='#'){
              int backcount=2;
              while(backcount>0){
                  i--;
                  backcount--;
                  if(s[i]=='#'){
                      backcount+=2;
                  }
              }
          }
          if(t[j]=='#'){
              int backcount=2;
              while(backcount>0){
                  j--;
                  backcount--;
                  if(t[j]=='#'){
                      backcount+=2;
                  }
              }
          }
      }
      else{
          if(s[i]!=t[j]){
              return false;
          }
          else{
              i--;
              j--;
          }
      }
  }
  return true;
}
int main() {
  backspaceCompare("abc#z" , "abdd##z");
  
}