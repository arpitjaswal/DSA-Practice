class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size(), steps=0, k=capacity;
        for(int i=0;i<n;i++){
            if(plants[i]<=capacity){
                steps++;
            }
            else if(plants[i]>capacity){
                capacity=k;
                steps+=2*i+1;
            }
            capacity-=plants[i];
        }
        return steps;
    }
};