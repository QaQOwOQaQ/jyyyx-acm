
#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 200+4; //������Ŀ�����ֵ��+4Ϊ�˷�ֹA+B���ֽ�λ
char s1[MAXN] = {};//�洢�ַ���
char s2[MAXN] = {};//�洢�ַ���
int a[MAXN] = {};//�洢����A
int b[MAXN] = {};//�洢����B
int c[MAXN] = {};//�洢��B
 
int main() {
    scanf("%s %s", s1, s2);//�����ַ���A
    //���ַ���д�뵽����A��
    int len1 = strlen(s1);
    for (int i=0; i<len1; i++) {
        //����д��
        a[i] = s1[len1-i-1] - '0';
    }
 
 
    //���ַ���д�뵽����A��
    int len2 = strlen(s2);
    for (int i=0; i<len2; i++) {
        //����д��
        b[i] = s2[len2-i-1] - '0';
    }
 
    //ģ����ʽ�ӷ�
    int jw=0;//��λ
    int len = max(len1, len2)+1;//ע����Ϊ���λ���ܳ��ֽ�λ
    for (int i=0; i<len; i++) {
        c[i] = a[i] + b[i] + jw;//��ǰ����Aλ����+����Bλλ����+��һλ�Ľ�λ
        jw = c[i] / 10;//���μӷ��Ƿ���ڽ�λ
        c[i] %= 10;//ֻ�ܱ��� 0 ~ 9 ������
    }
 
    //ɾ��ǰ����
    for (int i=len-1; i>=0; i--) {
        //��Ϊ�����Ǵ����� 0 ��ʼ���������λ�Ǳ����� len-1
        if (0==c[i] && len>1) {
            //ע��Ҫ�� len>1 �����������������������ӷ����Ϊ 00������ʵ��Ҫ��� 0��
            len--;
        } else {
            //��һ������������λ������ɾ��
            break;
        }
    }
 
    //�����ӡ���
    for (int i=len-1; i>=0; i--) {
        printf("%d", c[i]);
    }
    printf("\n");    
 
    return 0;

}
