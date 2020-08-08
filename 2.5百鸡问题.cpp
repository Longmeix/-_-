#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	int n;
	cin>>n; 
	for(x=0; x<=n/5; x++){
		for(y=0; y<=(n-5*x)/3; y++){
			for(z=0; z<=(n-5*x-3*y)*3; z++){
				if(x+y+z == 100){
					cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
				}
			}
		}
	}
	return 0;
}
