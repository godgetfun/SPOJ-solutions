
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
# define MAX 312112
vector<bool> prime(MAX,true);
int power[MAX];
int non[MAX];
int power1[MAX];
int non1[MAX];
void sieve()
{
     int i,j;
     prime[0]=true;
     prime[1]=true;
     for(i=2;(i*i)<MAX;i++)
     {
          if(!prime[i]) continue;
          for(j=i*i;j<MAX;j*=i)
          prime[j]=false;
     }
     int k=1,l=0;
     for(i=0;i<MAX;i++)
     if(prime[i])
	 	non[k++]=i;
     else
     {
	 	power[l++]=i;
	 	power1[i]=l;
     }
  // for(i=0;i<k;i++)
  // printf("%d ",non[i]);
}
int main()
{
     sieve();
	   	int n,i,q,j,t=0;
	   	scanf("%d",&n);
	   	for(i=0;i<n;i++)
	   	{
	   		t=0;
	   		scanf("%d",&q);
	   		if(prime[q]==false)
	   		printf("%d ",power1[q]);
	   		else if(q==0)
	   		printf("2 ");
	   		else
	   		{
		   		for(j=2;;j*=2)
		   		if(non[j]<q)
		   		t++;
		   		else if(non[j]==q)
		   		{t++; break;}
		   		else if(non[j]>q)
		   		{
		   			t++;
		   			int first,last,middle;
		   			   first = j/2;
   						last = j;
  					 middle = (first+last)/2;
   					while( first <= last )
   						{
      						if ( non[middle] < q )
      						{
         						first = middle;    
         						t++;
      						}
      						else if ( non[middle] == q ) 
         						break;
      						else
         					{
							 	last = middle;
							 	t++;
         					}
 							middle = (first + last)/2;
						 }
						 break;
   				}
   				printf("%d ",t+1);
	   		}
		   		
	   	}
     return 0;
}
