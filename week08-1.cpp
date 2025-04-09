//LeetCode 3375. Minimum Operations to Make Array values equal to k
//�n���X�M�A�~���Ʀr�����ܦ�k(�]�N�OK�H�W�A���X�ӼƦr)
//�Ʀr�u��1....100

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101] = {}; ///�}�C�ŧi�A�̭�����0
        int N = nums.size();
        for(int i=0; i<N; i++) {
            int now = nums[i];
            if(now<k) return -1; //���p���� �N���ѤF
            a[now]++; //�{�b���Ʀr + 1 (�έp �p��)
        }
        int ans = 0;
        for(int now=k+1; now<=100; now++){ //�n�d�� [now]���X�Ӥ��P����
            if(a[now]>0) ans++;
        }
        return ans;
    }
};
