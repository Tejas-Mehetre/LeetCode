class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size();
        int n = num2.size();
        vector<int> result(m + n, 0);

        // Reverse both strings to facilitate multiplication
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        // Multiply each digit and accumulate the results in the result vector
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j];
                result[i + j] = sum % 10;
                result[i + j + 1] += sum / 10;
            }
        }

        // Remove leading zeros and build the result string
        string resultStr;
        for (int i = m + n - 1; i >= 0; --i) {
            if (!(resultStr.empty() && result[i] == 0)) {
                resultStr += to_string(result[i]);
            }
        }
        
        return resultStr.empty() ? "0" : resultStr;
    }
};
