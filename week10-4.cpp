class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0; //數一下統計最多的是出現幾次
        int a[100] = {}; //陣列宣告放加總的total有出現幾次
        for(int i=1; i<=n; i++) {//人類的for迴圈
            int total = 0, now = i; //加起來的結果較total現在的數叫now
            while( now > 0){
                total += now %10; //把皮加起來
                now = now / 10; //剝頑皮數字就變喽

            }
            a[total]++; //統計結果多1個totla加起來的職total拿來用
            if(a[total] > max_count) max_count = a[total];
        }
        int ans = 0;
        for(int i=0;i<100; i++){
            if (a[i]==max_count) ans++;
        }
        return ans;
    }
};
