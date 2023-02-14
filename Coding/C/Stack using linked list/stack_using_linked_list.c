#include <stdio.h>
#include <stdlib.h>
struct poly
{
	int exp;
	float coeff;
	struct poly *link;
}*Ahead,*Bhead,*Chead;
void Ainsertcoeff(int i)
{
	struct poly *ptr,*temp;
	float item;
	ptr=(struct poly *)malloc(sizeof(struct poly));
	if(ptr==NULL)
		printf("Memory Full\n");	
	else
	{
		scanf("%f",&item);
		ptr->coeff=item;
		ptr->exp=i;
		if(Ahead!=NULL)
		{		
			temp=Ahead;
			while(temp->link!= NULL)
				temp=temp->link;
			temp->link=ptr;
			ptr->link=NULL;
		}
		else
		{
			Ahead=ptr;
			ptr->link=NULL;
		}
	}
}
void Binsertcoeff(int i)
{
	struct poly *ptr,*temp;
	float item;
	ptr=(struct poly *)malloc(sizeof(struct poly));
	if(ptr==NULL)
		printf("Memory Full\n");	
	else
	{
		scanf("%f",&item);
		ptr->coeff=item;
		ptr->exp=i;
		if(Bhead!=NULL)
		{		
			temp=Bhead;
			while(temp->link!= NULL)
				temp=temp->link;
			temp->link=ptr;
			ptr->link=NULL;
		}
		else
		{
			Bhead=ptr;
			ptr->link=NULL;
		}
	}
}	
void add()
{
	int i, deg1, deg2, j;
	printf("\nEnter the degree of first polynomial : ");
	scanf("%d",&deg1);
	for(i=0;i<=deg1;i++)
	{
		printf("Enter the coefficient of x^%d : ",i);
		Ainsertcoeff(i);
	}
	printf("\nEnter the degree of second polynomial : ");
	scanf("%d",&deg2);
	for(i=0;i<=deg2;i++)
	{
		printf("Enter the coefficient of x^%d : ",i);
		Binsertcoeff(i);
	}	
	if(deg1<=deg2)
	{
		for(i=0;i<=deg1;i++)
			Cinsertcoeff(getcoeffA(i), getcoeffB(i), i);
		if(deg1!=deg2)
			for(i=deg1+1;i<=deg2;i++)
				Cinsertcoeff(0, getcoeffB(i), i);
	}
	else
	{
		for(i=0;i<=deg2;i++)
			Cinsertcoeff(getcoeffA(i), getcoeffB(i), i);
		if(deg1!=deg2)
			for(i=deg1+1;i<=deg2;i++)
				Cinsertcoeff(getcoeffA(i), 0, i);		
	}			
	display();
}
void Cinsertcoeff(float a, float b, int i)
{
	struct poly *ptr,*temp;
	float item;
	ptr=(struct poly *)malloc(sizeof(struct poly));
	if(ptr==NULL)
		printf("Memory Full\n");	
	else
	{		
		ptr->coeff=a+b;
		ptr->exp=i;
		if(Chead!=NULL)
		{
			temp=Chead;
			while(temp->link!=NULL)
				temp=temp->link;
			temp->link=ptr;
			ptr->link=NULL;
		}
		else
		{
			Chead=ptr;
			ptr->link=NULL;
		}
	}
}
float getcoeffA(int i)
{
	if(Ahead!=NULL)
	{
		struct poly *ptr;
		ptr=Ahead;
		while(ptr->exp!=i && ptr->link!=NULL)
			ptr=ptr->link;
		if(ptr->exp ==i)
			return ptr->coeff;
		else
			return 0;
	}
	else
		printf("\nList is empty");	
}
float getcoeffB(int i)
{
	if(Bhead!=NULL)
	{
		struct poly *ptr;
		ptr=Bhead;
		while(ptr->exp!=i && ptr->link!=NULL)
			ptr=ptr->link;
		if(ptr->exp ==i)
			return ptr->coeff;
		else
			return 0;
	}
	else
		printf("\nList is empty");	
}
void display()
{
	if(Chead!=NULL)
	{
		struct poly *ptr;
		ptr=Chead;
		while(ptr!=NULL)
		{
			printf("%f x^%d",ptr->coeff,ptr->exp);
			if(ptr->link!=NULL)
				printf("+");
			ptr=ptr->link;
		}
	}
	else
		printf("\nList is empty");
}
void delete()
{
	struct poly *ptra,*ptrb,*ptrc;
	ptra=Ahead;
	Ahead=ptra->link;
	free(ptra);
	ptrb=Bhead;
	Bhead=ptrb->link;
	free(ptrb);
	ptrc=Chead;
	Chead=ptrc->link;
	free(ptrc);
}
void main()
{
	char c;
	printf("\n**Polynomial Addition**\n");
	do
	{
		add();
		while(Ahead!=NULL && Bhead!=NULL && Chead!=NULL)
			delete();
		printf("\nDo you want to continue (y/n) : ");
		scanf("%s",&c);
	}while(c!='n' && c!='N');
	printf("Thank you....\n");
}