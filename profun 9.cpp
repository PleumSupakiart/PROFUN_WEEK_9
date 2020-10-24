#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct calculate{
	int discount;
	int price;
};

	int purchase;
	
void Discount (int*,int*);

int main ()
{
  cout << "Customer Purchase amount : ";
  cin >> purchase  ;
  cout << endl;
  
  struct calculate open;
  
  open.discount = purchase;
  open.price = purchase;
  Discount(&open.discount,&open.price);
 

	return 0;
}

void Discount(int *D,int *P)
{
	
if (*D >=0)
{
	
	if(*D>0 && *D<=1000)
	{
		(*D *= 0.03);
	}
	
	else if(*D>1000 && *D<=2000)
	{
		(*D *= 0.05);
	}
	
	else if(*D>2000 && *D<=5000)
	{
		(*D *= 0.07);
	}
	
	else if(*D>5000 && *D<=10000)
	{
		(*D *= 0.09);
	}
		
	else if(*D>10000)
	{
		(*D *= 0.1);
	}
}
	
	cout << "Customer get a discount = "<< *D << " Bath."<< endl;
	
	*P-=*D;
	
	cout << "Net Price = " << *P << endl;
	
}


