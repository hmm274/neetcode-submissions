class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pairedArray = {};
        for (int i = 0; i < position.size(); i++){
            pairedArray.push_back({position[i], speed[i]});
        }
        double max_time = 0;
        int fleets = 0;
        sort(pairedArray.begin(), pairedArray.end(), greater<>());
        for (auto [pos, speed] : pairedArray){
            int distance = target-pos;
            double time = (double)distance / speed;
            if (time > max_time){
                fleets++;
                max_time = time;
            }
        }
        return fleets;
    }
};
