class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector <int> d = deck;
        sort(d.begin(), d.end());
        deque <int> q ;
        for(int i = d.size()-1 ; i >= 0 ; i-- ){
            if (!q.empty()){
                 int last = q.back(); 
                q.pop_back();
                q.push_front(last);
            }
            q.push_front(d[i]);
        }
        return vector<int>(q.begin(), q.end());
    }
};