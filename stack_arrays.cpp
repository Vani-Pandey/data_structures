#include<iostream>
using namespace std;
int n=100;
int a[100];
int top=-1;
void push(int num){
	if (top>=n-1){
		cout<<"Overflow"<<endl;
	}
	else{
		if (top==-1){
			top=0;
			a[top]=num;
		}
		else{
			top=top+1;
			a[top]=num;
		}

	}
}
void pop(){
	if (top==-1)
		cout<<"Underflow"<<endl;
	else{
		top-=1;
		cout<<"The element poped is "<< a[top+1]<<endl;
	}
	cout<<endl;
	//cout<<"top=="<<top<<endl;
}
void display(){
	cout<<a[top]<<"<--top"<<endl;
	for(int i=top-1;i>=0;i-=1){
		cout<<a[i]<<endl;
	}
	cout<<endl;

}
void peek(){
	cout<<"The top is "<< a[top]<<endl;
}
int main(){
	int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do{
   	cout<<"Enter number : ";
   	cin>>ch;
   	switch(ch){
   	case 1:{
   		cout<<"Enter value to be pushed :"<<" ";
   		cin>>val;
   		push(val);
   		break;
   	}
    case 2 :{
    	pop();
    	break;
    }
    case 3:{
    	display();
    	break;
    }
	case 4:{
		cout<<"Exit"<<endl;
		break;

	}
	default:{
		cout<<"Invalid choice"<<endl;
		break;
	}
		
   	}
   	}
   	while(ch!=4);
   		return 0;
   	
   	
}