#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
	int rozmiar=2;
	int liczenie;
	int mc;
    ifstream liczby;
    liczby.open("1.txt");
	int git=0;
	bool  a=false;
    
    while(liczby.good()){
        if (!liczby.eof()){
         	liczby>>liczenie;
         	a=true;
        	while(liczenie>1){
		        while(liczenie%rozmiar==0){
		        cout<<rozmiar<<" ";
		        liczenie /= rozmiar;
		         		
		        if(rozmiar%2==0 ){
		         	a = false;
				}
				if(!(rozmiar%2==0) && mc!=rozmiar){
					git++;
				}
					mc=rozmiar;
				}
					++rozmiar;
				}
				if(git==3 && a==true){
				cout <<"tak";	
				}
				else cout<<"nie";
				git=0;
				cout<<endl;
				rozmiar=2;
			}
         }
     
     
return 0;
}
