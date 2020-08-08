#include <iostream>
using namespace std;

int main(){
	int n,x,y,z;
	int total,price;
	int first,last;
	bool flag = false;
	while(cin>>n){
		flag = false;
		cin>>x>>y>>z;
		for(first=9; first>0; first--){
			for(last=9; last>=0; last--){
				total = first*10000 + x*1000 + y*100 + z*10 + last;
				if(total%n == 0){
					price = total/n;
					flag = true;
					cout<<first<<" "<<last<<" "<<price<<endl;
					break;
				}
			}
			if(flag)
				break;
		}
		if(!flag){
			cout<<0<<endl;
		}
	}
}
