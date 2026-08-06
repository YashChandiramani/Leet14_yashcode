class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> dist(num_people, 0);

        int give = 1;
        int index = 0;

        while (candies > 0) {

            dist[index] += min(candies, give);
            candies -= min(candies, give);
            give++;
            index = (index + 1) % num_people;
        }
        return dist;
    }
};