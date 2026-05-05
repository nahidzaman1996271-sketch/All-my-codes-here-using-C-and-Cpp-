#include<iostream>
#include<list>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<unordered_set>
#include<algorithm>
#include<set>
using namespace std;
bool comparator(pair<int, int>p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

       }
int main()
{
    /* vector<int>vec = {1,2,3,4,5};
    reverse(vec.begin(),vec.end());
    for(auto val: vec){
        cout << val << " ";
    }
    cout << endl;
    */

    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout << s << end;
    return 0;
}
