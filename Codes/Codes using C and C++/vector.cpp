#include<iostream>
#include<list>
#include<vector>
#include<deque>
using namespace std;
int main()
{

  vector<pair<int, int>> vec = {{1,2},{2,3},{3,4}};
  vec.push_back({4,5});
  vec.emplace_back(5,10);
  for(auto p : vec){
    cout << p.first << " " << p.second << endl;

  }
  return 0;
}

