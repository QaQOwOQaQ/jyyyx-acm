#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define ll long long

using namespace std;

const int maxn = 50010; 
int a[maxn],b[maxn],c[maxn];
string s1,s2;
bool pd = false; //s1<s2Ϊfalse 
int len1,len2,len;
//�߾��ȼ��� s1 - s2 
int main()
{
	cin >> s1 >> s2;
	len1 = s1.length();
	len2 = s2.length();
	//s1-s2,�ж�s1��s2�Ĵ�С,���s1<s2,����s1,s2,�����pd=true,���������� 
	if(len1 < len2 || (len1 == len2 && s1 < s2))//�ַ����Ƚϴ�С������0��ʼ��λ�Ƚ� 
	{
		swap(s1,s2);
		pd = true;
		len1 = s1.length();
		len2 = s2.length(); 
	}


	//���ַ�����Ϣ¼������ 
	for(int i=len1-1,j=0;i>=0;i--,j++)
		a[j] = s1[i] - '0'; 
	for(int i=len2-1,j=0;i>=0;i--,j++)
		b[j] = s2[i] - '0'; 
	
	//
//	cout << "/����/" << endl;
//	for(int i=0;i<len1;i++)
//		cout << a[i];
//	cout << endl;
//	for(int i=0;i<len2;i++)
//		cout << b[i];
//	cout << endl;
//	cout << "/����/" << endl;
	//
	
	//ģ����ʽ����	
	len = max(len1,len2);
	for(int i=0;i<len;i++)
	{
		if(a[i] < b[i])	// ��߳���λ
		{
			a[i+1] --;	//����д��a[i++]--���������޸��Ա���i��ֵ�������� 
			a[i] += 10;	
		} 
		c[i] = a[i] - b[i];
	}	
	
	//ɾ��ǰ���� 
	for(int i=len-1;i>=0;i--)
	{
		if(c[i] == 0 && len > 1)
			len--;
		else
			break;	
	}	
	
	//������и������������
	if(pd)	
		cout << "-";
	for(int i=len-1;i>=0;i--)
		cout << c[i];
	cout << endl;	
	 
	return 0;
	
 } 
