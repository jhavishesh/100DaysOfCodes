//https://leetcode.com/problems/maximum-frequency-stack/


//Solution:

class FreqStack {
public:
    
    map<int, int> hash;
    priority_queue<pair<int, pair<int, int>>> maxHeap;
    int pos = 0;
    
    void push(int val) {
        hash[val] += 1;
        pos+=1;
        maxHeap.push({hash[val], {pos-1, val}});
    }
    
    int pop() {
        
        auto top = maxHeap.top();
        maxHeap.pop();
        hash[top.second.second] -= 1;
        return top.second.second;
    }
};
