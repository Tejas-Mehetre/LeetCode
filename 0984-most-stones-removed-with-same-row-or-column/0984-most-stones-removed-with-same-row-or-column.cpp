class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        unordered_map<int, int> parent; // Parent map to store disjoint sets

        // Find the root of the set containing x
        function<int(int)> find = [&](int x) {
            if (parent.find(x) == parent.end()) parent[x] = x;
            if (parent[x] != x) parent[x] = find(parent[x]); // Path compression
            return parent[x];
        };

        // Union the sets containing x and y
        auto unite = [&](int x, int y) {
            parent[find(x)] = find(y);
        };

        // Perform union operations for stones in the same row or column
        for (const auto& stone : stones) {
            unite(stone[0], stone[1] + 10001); // Offset columns by 10001
        }

        // Count unique components
        unordered_set<int> uniqueComponents;
        for (const auto& stone : stones) {
            uniqueComponents.insert(find(stone[0]));
        }

        return stones.size() - uniqueComponents.size();
    }
};
