#include<iostream>
#include<list>
#include<vector>
#include<deque>
#include<queue>
#include<map>
using namespace std;
int main()
{

  map<string,int>m;
  m["tv"] = 100;
  m["laptop"] = 100;
  m["headphones"] = 50;
  m["tablet"] = 120;
  m["watch"] = 50;
  for(auto p: m){
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}
