class TimeMap {
public:
    unordered_map<string, vector<pair<int,string>>> store;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(!store.count(key)) return "";
        auto &sto=store[key];
        string ans="";
        int start=0,end=sto.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(sto[mid].first <= timestamp){
                ans= sto[mid].second;
                start=mid+1;
            }else end=mid-1;
        }
        return ans;
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */