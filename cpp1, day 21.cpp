#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
			complex (void);//constructor declaratio
        void printnumber(){
        	cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
        	
		}

};
complex :: complex(void){
	a=6;
	b=9;
}
int main(){
	complex d;
	d.printnumber();
	return 0;
	
}
