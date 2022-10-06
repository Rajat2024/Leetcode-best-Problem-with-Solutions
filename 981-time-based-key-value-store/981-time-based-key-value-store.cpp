class TimeMap {
public:
     unordered_map<string,unordered_map<int,string>>mp;
    TimeMap() {
       
    }
    
    void set(string key, string value, int tt) {
        mp[key][tt]=value;
    }
    
    string get(string key, int tt) {
        tt++;
        while(tt--)
        {
              string v=mp[key][tt];
              if(v.size()==0)
                  continue;
              else
              {
                  // int n=v.size();
                  return v;
              }
        }
        return "";
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */