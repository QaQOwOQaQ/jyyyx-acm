#include<cstdio>
int n,m,f[40005],x,y;
char c;
int find(int x)//���Ҹ��ڵ�
{
	if(x!=f[x]) f[x]=find(f[x]);
	return f[x];
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n*n;i++)//��ʼ��
		f[i]=i;
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d %c",&x,&y,&c);
		int r=(x-1)*n+y,l;//������Ҫ���Ľڵ���
		if(c=='D')
			l=x*n+y;
		else
			l=(x-1)*n+y+1;
		int X=find(r),Y=find(l);
		if(X==Y)//�ж��Ƿ�Դ��ͬһ����
		{
			printf("%d",i);
			return 0;
		}
		else f[X]=Y;
	}
	printf("draw");
	return 0;
}

