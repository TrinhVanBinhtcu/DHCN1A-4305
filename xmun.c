float x_mu_n(float x, int n)
{
	float kq=1;
	if(n==0)
		return 1;
	if(n>0)
		{
			for(int i=1;i<=n;i++)
				kq=kq*x;
			return kq;
		}
}
