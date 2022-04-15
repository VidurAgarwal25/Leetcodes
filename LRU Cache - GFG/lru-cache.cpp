// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:

    public:
    //Constructor for initializing the cache capacity with the given value.
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
    
    void set(int key, int value) {
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

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends