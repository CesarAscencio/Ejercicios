#include "iostream"
using namespace std;
int main(){
	int selector1, selector2;
	cout<<"Ingrese un numero para convertirlo a letras "<<endl;
	cin>>selector1;
	
	switch(selector1){
	 case 1:
	 cout<<"UNO";
	 break;
	 case 2:
	 cout<<"DOS";
	 break;
	 case 3:
	 cout<<"TRES";
	 break;
	 case 4:
	 cout<<"CUATRO";
	 break;
	 case 5:
	 cout<<"CINCO";
	 break;
	 default: cout<<"fuera de rango numerico";	
	}
	cout<<"Ingrese el numero de posicion de una vocal "<<endl;
	cin>>selector2;
	
	switch(selector2){
		case 1:
		cout<<"A";	
	 break;
	 case 2:
	 cout<<"E";
	 break;
	 case 3:
	 cout<<"I";
	 break;
	 case 4:
	 cout<<"O";
	 break;
	 case 5:
	 cout<<"U";
	 break;
	 default: cout<<" no hay vocal";
	}
	system("pause");
}
