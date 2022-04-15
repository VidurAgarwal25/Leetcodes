class LRUCache {
public:
    list<int>dq;
    unordered_map<int,pair<int,list<int>::iterator>>m;
    int c;
    LRUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        auto i=m.find(key);
        if(i==m.end())
            return -1;
        use(i);
        return i->second.first;
    }
    
    void put(int key, int value) {
        auto i=m.find(key);
        if(i!=m.end()){
            use(i);
            m[key]={value,dq.begin()};
            return;
        }
        if(m.size()==c){
            m.erase(dq.back());
            dq.pop_back();
        }
        dq.push_front(key);
        m.insert({key, {value,dq.begin()}});
    }
        
    void use(unordered_map<int,pair<int,list<int>::iterator>>::iterator& it){
        dq.erase(it->second.second);
        dq.push_front(it->first);
        it->second.second=dq.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */