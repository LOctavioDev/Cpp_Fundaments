#include <iostream> 
using namespace std; 

int main() {
	
	int edada; 
	system("color b2"); 

	cout<<"PROGRAMA QUE DETERMINA SI UN ALUMNO PUEDE VOTAR SI O NO\n"; 

	cout<<"INTRODUCE LA EDAD DEL ALUMNO:"; 

	cin>>edada; 

	if (edada>=18){
		cout<<"\n***EL ALUMNO SI PUEDE VOTAR*****"; 
	}
	else{
		cout<<"\n\nEL ALUMNO NO PUEDE VOTAR";
	}
	
	
return 0;	
}
