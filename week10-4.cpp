// week10-4 ���Ѫ��D���D
// 1399. Count Largest Group �̤j�����@�s,���X��? �̤j����,���X��?
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;
        int a[100] = {}; // �}�C�ŧi,�� �[�`����total ���X�{�X��
        for(int i=1; i<=n; i++){ // �H���� for �j��,�q1...n
            int total = 0, now = i; // �[�_�Ӫ��ƥs total,�{�b���ƥs now
            while( now > 0){ // ��֪k�� while �j��,�p�Gnow �٦���,�~���
                total += now %10; //�� �� �[�_��(�C�@��Ƴ��[�_�ӹ�)
                now = now / 10; // �駹��,�Ʀr�N�ܤp�F
            }
            a[total]++; // �έp���G�h�@��total���[�_�Ӫ��� total ���ӥ�!!
            if(a[total] > max_count) max_count = a[total]; // max_count ��̦h����
        }
        int ans  = 0; // �̫��X����(�X�{�̦h���ƪ����Ʀ��X�Ӽ�)
        for(int i=0; i<100; i++) { // �j�騵�}�C a[i] ��n�O�̤j�� max_count ����
            if(a[i]==max_count) ans++; // �N�h�@�� �̤j����
       }
        return ans;
    }
};
