class MyCalendar {
public:
    map<int,int>mp;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        int sum=0;
          mp[start]++;
        mp[end]--;
      for(auto a:mp)
      {
          sum+=a.second;
          if(sum>=2)
             {
                mp[start]--;
                mp[end]++;
              return false;
             }
      }
      
        return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */