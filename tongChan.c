int tongChan(int n)
{
	int kq=0;
	for( int i=1;i<=n;i++)
		if(i%2==0)
			kq=kq+i;
	return kq;

}
