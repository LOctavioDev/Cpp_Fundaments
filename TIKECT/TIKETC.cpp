#include<windows.h> 
using namespace std; 

void gotoxy(int x, int y) 
{
	
	HANDLE hcon;
	hcon= GetStdHandle(STD_OUTPUT_HANDLE); 
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}


#include <iostream> 
int main() 

{
	system("color 74"); 
	string nomc,nomcli,fech,prod1,prod2,prod3; 
	int cp1,cp2,cp3,pp1,pp2,pp3,sbtp1,sbtp2,sbtp3,tdc,pdc,camb; 

	cout<<"***ESTE PROGRAMA REALIZA LA IMPRESION DE SU TICKET DE COMPRA***\n\n"; 
	cout<<"INTRODUZCA EL NOMBRE DE SU CAJERO:\n"; 
	getline(cin,nomc); 
	cout<<"\nINTRODUZCA SU NOMBRE:\n"; 
	getline(cin,nomcli); 
	cout<<"\nINTRODUZCA LA FECHA DE SU COMPRA:\n"; 
	getline(cin,fech); 
	system("cls");
	
	cout<<"INTRODUCE EL NOMBRE DEL PRODUCTO 1 QUE DESEAS COMPRAR:\n";
	cin>>prod1;
	cout<<"INTRODUCE LA CANTIDAD DE PRODUCTO UNO QUE COMPRARA:\n"; 
	cin>>cp1; 
	cout<<"PRECIO UNITARIO DEL PRODUCTO 1:\n"; 
	cin>>pp1; 
	sbtp1=cp1*pp1; 
    cout<<"EL SUBTOTAL DEL PRODUCTO 1 ES:\n"<<sbtp1; 
	cout<<"\n\n\nINTRODUCE EL NOMBRE DEL PRODUCTO 2 QUE DESEAS COMPRAR:\n"; 
	cin>>prod2; 
	cout<<"INTRODUCE LA CANTIDAD DE PRODUCTO DOS QUE COMPRARA:\n"; 
	cin>>cp2;
	cout<<"PRECIO UNITARIO DEL PRODUCTO 2:\n";
	cin>>pp2; 
	sbtp2=cp2*pp2; 
	cout<<"EL SUBTOTAL DEL PRODUCTO 2 ES:\n"<<sbtp2; 
	
	cout<<"\n\nINTRODUCE EL NOMBRE DEL PRODUCTO 3 QUE DESEAS COMPRAR:\n";
	cin>>prod3; 
	cout<<"INTRODUCE LA CANTIDAD DE PRODUCTO TRES QUE COMPRARA:\n"; 
	cin>>cp3; 
	cout<<"PRECIO UNITARIO DEL PRODUCTO 3:\n";
	cin>>pp3; 
	sbtp3=cp3*pp3; 
	cout<<"\nEL SUBTOTAL DEL PRODUCTO 3 ES:\n"<<sbtp3; 
	
    tdc=sbtp1+sbtp2+sbtp3; 
    cout<<"\n\nEL TOTAL DE SU COMPRA ES:\n"<<tdc; 
	cout<<"\n\nEL CLIENTE PAGO CON:\n"; 
	cin>>pdc; 
    camb=pdc-tdc;
	cout<<"\nSU CAMBIO ES:"<<camb; 
	system("cls");  
	
	gotoxy(12,11);cout<<"***TICKET DE COMPRA***"; 
	gotoxy(13,12);cout<<"\nATENDIO EL CAJERO:"<<nomc; 
	gotoxy(14,13);cout<<"\nNOMBRE DEL CLIENTE:" <<nomcli;
	gotoxy(15,14);cout<<"\nFECHA:" <<fech;
	gotoxy(16,15);cout<<"\n *Producto uno comprado:"<<prod1    <<" *Cantidad:"<<cp1  <<" *Precio por unidad:"<<pp1   <<" *Subtotal:"<<sbtp1;
	gotoxy(17,16);cout<<"\n *Producto dos comprado:"<<prod2    <<" *Cantidad:"<<cp2  <<" *Precio por unidad:"<<pp2   <<" *Subtotal:"<<sbtp2;
    gotoxy(18,17);cout<<"\n *Producto tres comprado:"<<prod3   <<" *Cantidad:"<<cp3   <<"*Precio por unidad:"<<pp3   <<" *Subtotal:"<<sbtp3;
    gotoxy(19,18);cout<<"\n*TOTAL DE SU COMPRA:"<<tdc;  
	gotoxy(20,19);cout<<"\n*PAGO CON:"<<pdc; 
    gotoxy(21,20);cout<<"\n*SU CAMBIO:"<<camb;
    gotoxy(22,21);cout<<"\n\n***MUCHAS GRACIAS POR SU COMPRA, QUE TENGA UN BUEN DIA, VUELVA PRONTO***";
    
	system("PAUSE");
	
	return 0;
}