///week13-4.cpp
///leetcode 3335. total characters in string after transformations
///a�ܦ�b
class Solution {
public:
    int a[200000] = {}; ///�ܤj���}�C�̭����O0
    int helper(int t){ ///�ϥΧt�O�I�s�禡
        if( a[t] > 0 ) return a[t];
        if( t<26 ) return 1; ///�٬O1�Ӧr��
        a[t] = (helper(t-26) + helper(t-26+1)) % 1000000007; ///�̭���8��0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s){ ///c++���y�k�i�H��C�Ӧr�����X��
            ans = (ans+helper(t+c-'a'))% 1000000007;
        }
        return ans;
    }
};
