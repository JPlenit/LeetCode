class MyHashMap {
    private:
        map<int, int> hash;
public:
    MyHashMap() {

    }
    
    void put(int key, int value) {
        if (hash.find(key) != hash.end()) hash.erase(key);
        hash.insert(make_pair(key, value));
    }
    
    int get(int key) {
        if (hash.find(key) != hash.end()) return hash[key];
        else return -1;
    }
    
    void remove(int key) {
        hash.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */