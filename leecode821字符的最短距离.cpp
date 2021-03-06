#include<vector>
#include<string>
//给你一个字符串 s 和一个字符 c ，且 c 是 s 中出现过的字符。
//返回一个整数数组 answer ，其中 answer.length == s.length 
//且 answer[i] 是 s 中从下标 i 到离它 最近 的字符 c 的 距离 。
//两个下标 i 和 j 之间的 距离 为 abs(i - j) ，其中 abs 是绝对值函数。
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/shortest-distance-to-a-character
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
using namespace std;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> ans(n);

        for (int i = 0, idx = -n; i < n; ++i) {
            if (s[i] == c) {
                idx = i;
            }
            ans[i] = i - idx;
        }

        for (int i = n - 1, idx = 2 * n; i >= 0; --i) {
            if (s[i] == c) {
                idx = i;
            }
            ans[i] = min(ans[i], idx - i);
        }
        return ans;

    }
    
};