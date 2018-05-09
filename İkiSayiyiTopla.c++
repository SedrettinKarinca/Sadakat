#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Topla
{
  public:
  	
	int topla=0;
	int sayi1;
	int sayi2;
	char opr;
	int islem()
	{
		cout<<"1. sayiyi gir ve Enterleyiniz:";
    	cin>>sayi1;
		cout<<"\n2. sayiyi gir ve Enterleyiniz:";
		cin>>sayi2;
		cout<<"\n< + > Operatorunu giriniz:";
		cin>>opr;
	
		if(opr=='+')
		{
			topla=sayi1+sayi2;	
		}
    else if(opr!='+')
    {
      cout<<"Yanlis bir operator girdiniz..!";
			exit(0);
    }
    }
};

int main()
{
	int toplam=0;
  int i=0;
	Topla t1;
	while(i!=-1)
	{
		t1.islem();
		cout<<"\ntoplam:"<<t1.topla<<endl;
		
		cout<<"cikmak icin < -1 >'e \n"
		    <<"Devam etmek icin herhangi bir sayiyi basin ve Enterleyin..!"<<endl;
		cin>>i;
	}
	return 0;
}



