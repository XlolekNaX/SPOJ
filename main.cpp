#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	
	int ile,dl,kod;
	string linia;
	char zn;
	int tab[255];
	
	
	//cout<<"Podaj ile"<<endl;
	cin>>ile;
	
	
	for (int c=65;c<=122;c++)
	{tab[c]=0;
	}
	
	for (int a=0;a<=ile;a++)
	{
		getline(cin,linia);
		//cin>>linia;
		dl=linia.length();
		for (int b=0;b<=dl-1;b++){
		zn=linia[b];
		kod=int(zn);
		tab[kod]++;	
		}
		linia="";
	}
	
	
	
	
	
	for (int c=97;c<=122;c++)//male litery
	{ 
		if(tab[c]!=0) {cout<<char(c)<<" "<<tab[c]<<endl;	 }
	}
	
	
	
	for (int c=65;c<=96;c++)//duze litery
	{ 
		if(tab[c]!=0) {cout<<char(c)<<" "<<tab[c]<<endl;	 }
	}
	
	
	
	
	
	
	
	return 0;
	
}
