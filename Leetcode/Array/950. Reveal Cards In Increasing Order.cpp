//https://leetcode.com/problems/reveal-cards-in-increasing-order/


class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        if(n<=2)
            return deck;
        
        deque<int>de;
        sort(deck.begin(),deck.end());
        int a=deck.back();
        de.push_front(a);
        deck.pop_back();
        n=n-2;
        while(n)
        {
            int a=deck.back();
            de.push_front(a);
            deck.pop_back();
            int j=de.back();
            de.pop_back();
            de.push_front(j);
            n--;
        }
        a=deck.back();
        de.push_front(a);
        vector<int> ans(de.begin(), de.end());
        return ans;
    }
};
