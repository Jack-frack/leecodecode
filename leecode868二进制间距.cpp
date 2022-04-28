//����һ�������� n���ҵ������� n �Ķ����Ʊ�ʾ������ ���� 1 ֮��� ����� ������������������ڵ� 1������ 0 ��
//
//���ֻ�� 0 ������ 1 �ָ��������ܲ����� 0 ��������Ϊ������ 1 �˴� ���� ������ 1 ֮��ľ��������ǵĶ����Ʊ�ʾ��λ�õľ��Բ���磬"1001" �е����� 1 �ľ���Ϊ 3 ��
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/binary-gap
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

#include <xlocnum>

class Solution {
public:
    int binaryGap(int n) {
        int last = -1, ans = 0;
        for (int i = 0; n; ++i) {
            if (n & 1) {
                if (last != -1) {
                    ans = std::max(ans, i - last);
                }
                last = i;
            }
            n >>= 1;
        }
        return ans;
    }
};