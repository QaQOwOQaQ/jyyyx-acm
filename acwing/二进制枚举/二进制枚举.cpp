#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < (1<<n); i++) //��0��2^n-1��״̬
    {
        for(int j = 0; j < n; j++) //���������Ƶ�ÿһλ
        {
            if(i & (1 << j))
//1<<j���һ��nλ��ֻ��һλ����jλ��Ϊ1�Ķ��������֣���i���������㣬ͬ1Ϊ1���жϸ�λ�Ƿ�Ϊ1 
//�ж϶����Ƶ�jλ�Ƿ����
            {
                printf("%d ",j);//������������j��Ԫ��
            }
            else
            	cout << "*";
        }
        printf("\n");
    }
    return 0;
}

