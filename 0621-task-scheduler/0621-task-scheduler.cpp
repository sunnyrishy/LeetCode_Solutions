class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> mpp;
        for(int i = 0; i < tasks.size(); i++){
            mpp[tasks[i]]++;
        }
        //count freq
        priority_queue<int> max_heap;
        for(auto it : mpp){
            max_heap.push(it.second);
        }
        //push the freq to max heap
        int time = 0;
        while(!max_heap.empty()){
            vector<int> temp;
            for(int i = 0; i < n+1; i++){
                if(!max_heap.empty()){
                    temp.push_back(max_heap.top());
                    max_heap.pop();
                }
                //this will be the cycle
            }
            for(int num : temp){
                if(--num > 0){
                    max_heap.push(num);
                }
            }
            time += max_heap.empty() ? temp.size() : n+1;
            //if the characters are repeating, it will take n+1 time, else single time (taken from temp arrya)
        }
        return time;
        
    }
};