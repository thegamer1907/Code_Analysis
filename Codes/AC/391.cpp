#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	while(scanf("%d",&k)!=EOF)
	{
		int a,b,c,d,e,f,g,h,l,i,a1,b1,c1,d1,e1,f1,g1,h1,l1,i1,sum=0,ans,a2,b2,c2,d2,e2,f2,g2,h2,l2,i2;
		for(a=0;a<=9;a++)
		{
			for(b=0;b<=9;b++)
			{if(sum==k) break;
				b1=a+b;
				b2=0;
				if(b1==10)
				{
					sum++;c=0;d=0;e=0;f=0;g=0;h=0;l=0;i=0;
					break;
				}
				for(c=0;c<=9;c++)
				{if(sum==k) break;
					c1=b1+c;
					if(c1==10)
					{
						sum++;d=0;e=0;f=0;g=0;h=0;l=0;i=0;
						break;
					}
					for(d=0;d<=9;d++)
					{if(sum==k) break;
						d1=c1+d;
						if(d1==10)
						{
							sum++;e=0;f=0;g=0;h=0;l=0;i=0;
							break;
						}
						for(e=0;e<=9;e++)
						{if(sum==k) break;
							e1=d1+e;
							if(e1==10)
							{
								sum++;f=0;g=0;h=0;l=0;i=0;
								break;
							}
							for(f=0;f<=9;f++)
							{if(sum==k) break;
								f1=e1+f;
								if(f1==10){
									sum++;g=0;h=0;l=0;i=0;
									break;
								}
								for(g=0;g<=9;g++)
								{if(sum==k) break;
									g1=f1+g;
									if(g1==10)
									{
										sum++;l=0;i=0;h=0;
										break;
									}
									for(h=0;h<=9;h++)
									{if(sum==k) break;
										h1=h+g1;
										if(h1==10)
										{
											sum++;l=0;i=0;
											break;
										}
										for(l=0;l<=9;l++)
										{if(sum==k) break;
											l1=h1+l;
											if(l1==10)
											{
												sum++;i=0;
												break;
											}
											for(i=0;i<=9;i++)
											{if(sum==k) break;
												i1=l1+i;
												if(i1==10)
												{
													sum++;
													break;
												}
											}//printf("%d %d\n",sum,i);
											if(sum==k) break;
										}if(sum==k) break;
									}if(sum==k) break;
								}if(sum==k) break;
							}if(sum==k) break;
						}if(sum==k) break;
					}if(sum==k) break;
				}if(sum==k) break;
			}if(sum==k) break;
		}
		ans=i+l*10+h*100+g*1000+f*10000+e*100000+d*1000000+c*10000000+b*100000000+a*1000000000;
		printf("%d\n",ans);
	}
}
	   	  		   		 		 	  	  	 				