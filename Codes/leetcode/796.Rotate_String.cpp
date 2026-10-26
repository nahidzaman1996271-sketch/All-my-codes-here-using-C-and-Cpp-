class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
        return false;

        string res= s+s;
        cout<<res<<endl;

        int idx = res.find(goal);

        if(idx != string::npos)
        return true;
        else
        return false;
    }
};