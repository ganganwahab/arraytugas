#include<iostream>
using namespace std;

int main(){
	int sum=0,i;
	char karakter[20];
	for (int i=0;i<=19;i++){
			cout<<"Masukkan Karakter : ";
			cin>> karakter[i];

	if(karakter[i]=='a'||karakter[i]=='A'){
		sum++;
	}
	}
	cout<<endl;
	cout<<"Jumrah huruf 'A' : "<<sum;
	return 0 ;


}
