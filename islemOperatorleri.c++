#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Topla
{
  public:
  	
	int topla=0;
	int cikart=0;
	int carp=0;
	float bol=0.0;
	int modAl=0;
	int sayi1;
	int sayi2;
	char opr;
	int islem()
	{
		cout<<"1. sayiyi gir ve Enterleyiniz:";
    	cin>>sayi1;
		cout<<"\n2. sayiyi gir ve Enterleyiniz:";
		cin>>sayi2;
		cout<<"\nOperatorunu giriniz:";
		cin>>opr;
	
		if(opr=='+')
		{
			topla=sayi1+sayi2;	
		}
		else if(opr=='-')
		{
			cikart=sayi1-sayi2;	
		}
		else if(opr=='*')
		{
			carp=sayi1*sayi2;	
		}
		else if(opr=='/')
		{
			bol=sayi1/sayi2;	
		}
		else if(opr=='%')
		{
			modAl=(sayi1%sayi2);	
		}
		 
		else if(opr!='+' || opr!='-' || opr!='*' || opr!='/' || opr!='%')
		{
			cout<<"Yanlis bir operator girdiniz..!";
			exit(0);
		}
	}
		
};


int main()
{
	int toplam=0, i=0;
	char a;
	Topla t1;
	while(i!=-1)
	{
		t1.islem();
		
		if(t1.opr=='+')
		{
			cout<<"\nsonuc:"<<t1.topla<<endl;
		}
		
		else if(t1.opr=='-')
		{
			cout<<"\nsonuc:"<<t1.cikart<<endl;
		}
		
		else if(t1.opr=='*')
		{
			cout<<"\nsonuc:"<<t1.carp<<endl;
		}
		
		else if(t1.opr=='/')
		{
			cout<<"\nsonuc:"<<t1.bol<<endl;
		}
		
		else if(t1.opr=='%')
		{
			cout<<"\nsonuc:"<<t1.modAl<<endl;
		}
		
		cout<<"cikmak icin < -1 >'e \n"
		    <<"Devam etmek icin herhangi bir sayiyi basin ve enterleyin..!"<<endl;
		cin>>i;
	}
	return 0;
}

