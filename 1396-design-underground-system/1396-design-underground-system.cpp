class UndergroundSystem {
public:
    unordered_map<int, pair<string, int>> checkins;
    
    unordered_map<string, pair<int, int>> routes;
    
    void checkIn(int id, string stationName, int t) {
        checkins[id] = {stationName, t};
    }
    void checkOut(int id, string stationName, int t) {
        auto [stn, start] = checkins[id];
        checkins.erase(id);
        string route = stn + "," + stationName;
        routes[route].first++, routes[route].second += t - start;
    }
    double getAverageTime(string startStation, string endStation) {
        auto& [count, sum] = routes[startStation + "," + endStation];
        return (double)sum / count;
    }
};