class LRUCache {
public:
    list<int>dq;
    unordered_map<int,pair<int,list<int>::iterator>>m;
    int c;
    LRUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end())
            return -1;
        dq.erase(m[key].second);
        dq.push_front(key);
        m[key]={m[key].first,dq.begin()};
        return m[key].first;
    }
    
    void put(int key, int value) {
        if(dq.size()==c){
            if(m.find(key)==m.end()){
                int x=dq.back();
                m.erase(x);
                dq.pop_back();
                dq.push_front(key);
                m[key]={value,dq.begin()};
            }
            else{
                dq.erase(m[key].second);
                dq.push_front(key);
                m[key]={value,dq.begin()};
            }
        }
        else{
            if(m.find(key)==m.end()){
                dq.push_front(key);
                m[key]={value,dq.begin()};
            }
            else{
                dq.erase(m[key].second);
                dq.push_front(key);
                m[key]={value,dq.begin()};
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */