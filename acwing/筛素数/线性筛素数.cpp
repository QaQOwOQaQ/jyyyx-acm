#include <cstdio>
#include <cstring>

bool isPrime[100000010];
//isPrime[i] == 1��ʾ��i������
int Prime[6000010], cnt = 0;
//Prime������

void GetPrime(int n)//ɸ��n
{
	memset(isPrime, 1, sizeof(isPrime));
	//�ԡ�ÿ��������������Ϊ��ʼ״̬�����ɾȥ
	isPrime[1] = 0;//1��������
	
	for(int i = 2; i <= n; i++)
	{
		if(isPrime[i])//ûɸ�� 
			Prime[++cnt] = i; //i��Ϊ��һ������
			
		for(int j = 1; j <= cnt && i*Prime[j] <= n/*��������*/; j++) 
		{
        //��Prime[1]������С����2��ʼ�����ö����֪��������������Prime[j]��(i*Prime[j])����С������
        //��Ȼ��i�϶���Prime[j]����ΪPrime[j]����i֮ǰ�ó���
			isPrime[i*Prime[j]] = 0;
            
			if(i % Prime[j] == 0)//i��Ҳ����Prime[j]�������
				break; //��Ҫ���衣��ԭ��
		}
	}
}

int main()
{
	int n, q;
	scanf("%d %d", &n, &q);
	GetPrime(n);
	while (q--)
	{
		int k;
		scanf("%d", &k);
		printf("%d\n", Prime[k]);
	}
	return 0;
}



