///week13-4.cpp
///leetcode 3335. total characters in string after transformations
///a變成b
class Solution {
public:
    int a[200000] = {}; ///很大的陣列裡面都是0
    int helper(int t){ ///使用含是呼叫函式
        if( a[t] > 0 ) return a[t];
        if( t<26 ) return 1; ///還是1個字母
        a[t] = (helper(t-26) + helper(t-26+1)) % 1000000007; ///裡面有8個0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s){ ///c++的語法可以把每個字母取出來
            ans = (ans+helper(t+c-'a'))% 1000000007;
        }
        return ans;
    }
};
