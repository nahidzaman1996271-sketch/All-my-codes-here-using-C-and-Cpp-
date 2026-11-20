class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;

        for(auto u:deck){
            mp[u]++;
        }

        int x = mp[deck[0]];

        for(auto u:mp){
            x = __gcd(x,u.second);
        }

        if(x==1) return false;
        return true;
    }
};