#include<iostream>
using namespace std;

int main (){
	int uk;
	cout<<"======================="<<endl;
	cout<<"PROGRAM BIKIN 9 PERSEGI"<<endl;
	cout<<"======================="<<endl;
	cout<<"===MUSTOFA ABDURRAHIM=="<<endl;
	cout<<"=======2300018044======"<<endl;
	cout<<"======================="<<endl;
	cout<<endl;
	cout<<"======================="<<endl;
	cout<<"Masukkan Ukuran Persegi"<<endl;
	cout<<"= ";cin>>uk;
	cout<<"======================="<<endl;
	cout<<endl;
	//baris 1
	for (int m = 1; m <=1; m++){
		for(int a = 1; a <=uk*2;a++){
		
		cout<<"=";}
		for(int a = 1; a <=uk*2;a++){
		cout<<"=";}
		for(int a = 1; a <=uk*2 + 1;a++){
		cout<<"=";}
		cout<<endl;
	}
	for (int i = 0; i <= uk-1; i++){
		
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		for(int k = 2; k<=uk;k++){
			cout<<" ";}
		for(int k = 2; k<=uk+1;k++){
			cout<<" ";
		}
		for (int n = 1; n <2; n++){
			cout<<"=";}
		for(int k = 2; k<=2*uk;k++){
			cout<<" ";	
		}
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		for(int k = 2; k<=2*uk;k++){
			cout<<" ";	
		}
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		cout<<endl;
	}
	for (int m = 1; m <=1; m++){
		for(int a = 1; a <=uk*2+1;a++){
		cout<<"=";}
		for(int a = 1; a <=uk*2;a++){
		cout<<"=";}
		for(int a = 1; a <=uk*2;a++){
		cout<<"=";}
		cout<<endl;
	}
	//baris 2
	
	for (int i = 0; i <= uk-1; i++){
		
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		for(int k = 2; k<=uk;k++){
			cout<<" ";}
		for(int k = 2; k<=uk+1;k++){
			cout<<" ";
		}
		for (int n = 1; n <2; n++){
			cout<<"=";}
		for(int k = 2; k<=uk*2;k++){
			cout<<" ";	
		}
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		for(int k = 2; k<=uk*2;k++){
			cout<<" ";	
		}
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		cout<<endl;
	}
	for (int m = 1; m <=1; m++){
		for(int a = 1; a <=uk*2+1;a++){
		cout<<"=";}
		for(int a = 1; a <=2*uk;a++){
		cout<<"=";}
		for(int a = 1; a <=2*uk;a++){
		cout<<"=";}
		cout<<endl;
	}
	//nbaris 3
	
	for (int i = 0; i <= uk-1; i++){
		
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		for(int k = 2; k<=uk;k++){
			cout<<" ";}
		for(int k = 2; k<=uk+1;k++){
			cout<<" ";
		}
		for (int n = 1; n <2; n++){
			cout<<"=";}
		for(int k = 2; k<=2*uk;k++){
			cout<<" ";	
		}
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		for(int k = 2; k<=2*uk;k++){
			cout<<" ";	
		}
		for (int n = 1; n <2; n++){
			cout<<"=";
		}
		cout<<endl;
	}
	for (int m = 1; m <=1; m++){
		for(int a = 1; a <=uk*2+1;a++){
		cout<<"=";}
		for(int a = 1; a <=uk*2;a++){
		cout<<"=";}
		for(int a = 1; a <=uk*2;a++){
		cout<<"=";}
	}
}
