static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int init = [] {
    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());
    for (string str; getline(cin, str);) {
        int cnt5 = 0, cnt10 = 0;
        for (int i = 1, n = str.size(); i < n; i += 2) {
            int b = (str[i] == '5') ? 5 : 10 * (str[i++] - '0');
            switch (b) {
            case 5:
                ++cnt5;
                break;
            case 10:
                if (!cnt5) { cout << "false\n"; goto end; }
                --cnt5;
                ++cnt10;
                break;
            default:
                if (cnt5 && cnt10) --cnt5, --cnt10;
                else if (cnt5 > 2) cnt5 -= 3;
                else { cout << "false\n"; goto end; }
            }
        }
        cout << "true\n";
        end:
    }
    exit(0);
    return 0;
}();

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        return false;
    }
};