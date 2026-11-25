class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {}
    
    int ping(int t) {
        
        int time = t-3000;

        while(!q.empty() && time>q.front()){
            q.pop();
        }

        q.push(t);

        return q.size();
    }
};
