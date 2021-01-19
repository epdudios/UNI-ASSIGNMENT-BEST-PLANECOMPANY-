#include <stdio.h>
int main (void)
{
	int a,b,AM[30][6]={},NB[22][4]={},i,j,r,s,t=0,c=0,p,T=0,C=0,P=0,k=0,l=0;
    while (b!=7)
	{
	printf("Epilekste Aeroplano\n");
	scanf("%d",&a);
	if (a==1)
	{
	printf("Dialekste Energeia\nPathste\n1.Gia na deite poies 8eseis einai eleu8eres");
	printf("\n2.Gia na krathsete mia tuxaia 8esh\n3.Gia na krathsete sugkekrimenh 8esh");
	printf("\n4.Gia na krathsete diadoxikes 8eseis\n5.Gia na akurwsete 8esh");
	printf("\n6.Gia na deite posa xrhmata ofeilete\n7.Gia na termatisete thn uphresia\n");
	scanf("%d",&b);
	

       
	if (b==1)
	{
	for (i=0;i<30;i++)
	  for (j=0;j<6;j++)
	   {
	    if (j<5)
	    {
		    if (AM[i][j]==0)
		    printf("+[%d][%d]",i,j);
	        else if (AM[i][j]==1)
	        printf("-[%d][%d]",i,j);
	    }
		else if (j==5)
	    {
		    if (AM[i][j]==0)
		    printf("+[%d][%d]\n",i,j);
	        else if (AM[i][j]==1)
	        printf("-[%d][%d]\n",i,j);
	    }
		
       }
	
	}
    else if (b==2)
       {
        while (b==2)
       	{
       		if (l==6)
       		{
       			k=k+1;
       			l=0;
			   }
	    AM[k][l]=1;
		l=l+1;
		t=t+1;
       	break;
        }
       }
	else if (b==3)
       {
	    printf("Peite mas thn seira sthn opoia 8a 8elate 8esh \n");
        scanf("%d",&i);
        j=0;
		while (AM[i-1][j]==1)
		{
				j=j+1;
			    if (j==6)
                 {
				  printf("Den exei eleu8erh 8esh sthn seira pou 8elete\n");
                  break ;
                 }
        }
		if (AM[i-1][j]==0)
		{
		
           AM[i-1][j]=1;
           t=t+1;
        }
		else if (AM[i-1][j]==1)
           {
		    t=t+1;
		   }
       }
    else if (b==4)  
	   {
	   	printf("Poses 8eseis 8a 8elate?(mexri 3): ");
	   	scanf("%d",&s);
	    if (s==2)
		{
		    while (b==4)
			{	
			
			if (AM[k][l]==0 && AM[k][l+1]==0 && l<6)
			{
			  AM[k][l]=1;
	          AM[k][l+1]=1;
	          t=t+2;
	          break ;
	        }
	       	if (l>=6)
       		   {
       			k=k+1;
       			l=0;
       			
			   }
		    l=l+1;
		    if (AM[30][6]==1)
       	        {
				   printf("Den exoume alles diadoxikes 8eseis\n");  
				   break;
			    }
			}
		}
		if (s==3)
		{
		    while (b==4)
			{	
			
			if (AM[k][l]==0 && AM[k][l+1]==0 && AM[k][l+2]==0 && l<4)
			{
			  AM[k][l]=1;
	          AM[k][l+1]=1;
	          AM[k][l+2]=1;
	          t=t+3;
	          break ;
	        }
	        if (l>=6)
       		   {
       			k=k+1;
       			l=0;
			   }
		    l=l+1;
		    if (AM[30][6]==1)
       	        {
				   printf("Den exoume toses diadoxikes 8eseis\n");  
				   break;
			    }
			}
		}
		else if(s>3||s<2)
		printf("Dwse allo ari8mo\n");
	    }
	else if (b==5)
	{
	    printf("Poia 8esh 8elete na akurwsete?\nDwste ari8mo seiras: ");
	    scanf("%d",&i);
	    printf("\nDwste ton ari8mo 8eshs: ");
	    scanf("%d",&j);
	    if (AM[i][j]==1)
	    {
		    AM[i][j]=0;
		    c=c+1;
		}
	    else if (AM[i][j]==0)
	        printf("Den mporeite na akurwsete mia adeia 8esh\n");
	    else
	        printf("Dwste allo ari8mo\n");
	}
	else if (b==6)	
	{
		p=t*30+c*22;
		printf("To sunoliko kostos sas einai %d Eurw\n",p+P);
	}
	else if (b==7)
	return 0;			
	}
	if (a==2)
		{
	printf("Dialekste Energeia\nPathste\n1.Gia na deite poies 8eseis einai eleu8eres");
	printf("\n2.Gia na krathsete mia tuxaia 8esh\n3.Gia na krathsete sugkekrimenh 8esh");
	printf("\n4.Gia na krathsete  diadoxikes 8eseis\n5.Gia na akurwsete 8esh");
	printf("\n6.Gia na deite posa xrhmata ofeilete\n7.Gia na termatisete thn uphresia\n");
	scanf("%d",&b);
	
	if (b==1)
	{
	for (i=0;i<22;i++)
	  for (j=0;j<4;j++)
	   {
	    if (j<3)
	    {
		    if (NB[i][j]==0)
		    printf("+[%d][%d]",i,j);
	        else if (NB[i][j]==1)
	        printf("-[%d][%d]",i,j);
	    }
		else if (j==3)
	    {
		    if (NB[i][j]==0)
		    printf("+[%d][%d]\n",i,j);
	        else if (NB[i][j]==1)
	        printf("-[%d][%d]\n",i,j);
	    }
		
       }
	
	}
    else if (b==2)
       {
        while (b==2)
       	{
       		if (l==4)
       		{
       			k=k+1;
       			l=0;
			   }
	    NB[k][l]=1;
		l=l+1;
		T=T+1;
       	break;
        }
       }
	else if (b==3)
       {
	    printf("Peite mas thn seira sthn opoia 8a 8elate 8esh \n");
        scanf("%d",&i);
        j=0;
		while (AM[i-1][j]==1)
		{
				j=j+1;
			    if (j==4)
                 {
				  printf("Den exei eleu8erh 8esh sthn seira pou 8elete\n");
                  break ;
                 }
        }
		if (NB[i-1][j]==0)
		{
		
           NB[i-1][j]=1;
           T=T+1;
        }
		else if (NB[i-1][j]==1)
           {
			T=T+1;
           }
       }
    else if (b==4)  
	   {
	   	printf("Poses 8eseis 8a 8elate?(mexri 3): ");
	   	scanf("%d",&s);
	    if (s==2)
		{
		    while (b==4)
			{	
			
			if (NB[k][l]==0 && NB[k][l+1]==0 && l<3)
			{
			  NB[k][l]=1;
	          NB[k][l+1]=1;
	          T=T+2;
	          break ;
	        }
	        if (l>=4)
       		   {
       			k=k+1;
       			l=0;
			   }
		    l=l+1;
		    if (NB[22][4]==1 && NB[22][3])
       	        {
				   printf("Den exoume toses diadoxikes 8eseis\n");  
				   break;
			    }
			}
		}
		if (s==3)
		{
		    while (b==4)
			{	
			
			if (NB[k][l]==0 && NB[k][l+1]==0 && NB[k][l+2]==0 && l<2)
			{
			  NB[k][l]=1;
	          NB[k][l+1]=1;
	          NB[k][l+2]=1;
	          T=T+3;
	          break ;
	        }
	        if (l>=4)
       		   {
       			k=k+1;
       			l=0;
			   }
		    l=l+1;
		    if (NB[22][4]==1)
       	        {
				   printf("Den exoume toses diadoxikes 8eseis\n");  
				   break;
			    }
			}
		}
	    else if(s>3||s<2)
		printf("Dwse allo ari8mo\n");
	    }
	else if (b==5)
	{
	    printf("Poia 8esh 8elete na akurwsete?\nDwste ari8mo seiras: ");
	    scanf("%d",&i);
	    printf("\nDwste ton ari8mo 8eshs: ");
	    scanf("%d",&j);
	    if (NB[i][j]==1)
	    {
		    NB[i][j]=0;
		    C=C+1;
		}
	    else if (NB[i][j]==0)
	        printf("Den mporeite na akurwsete mia adeia 8esh\n");
	    else
	        printf("Dwste allo ari8mo\n");
	}
	else if (b==6)	
	{
		P=T*20+C*13;
		printf("To sunoliko kostos sas einai %d Eurw\n",p+P);
	}			
	else if (b==7)
	return 0;
	}
		   		 
    }
    
	return 0;   
	
}
