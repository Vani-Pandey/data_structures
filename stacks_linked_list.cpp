#include<iostream>
using namespace std;
struct node{
	int data ;
	struct node * next ;
};
struct node * top =NULL;
void push (int num){
	struct node* newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=top;
	top=newnode;


}
void pop(){
	if (top==NULL){
		cout<<"Underflow"<<endl;
	}
	else{
		cout<<"The poped element is : "<<top->data<<endl;
		top=top->next;
	}
}
void display(){
	if (top==NULL){
		cout<<"Underflow"<<endl;
	}
	else{
		struct node* ptr=(struct node*)malloc(sizeof(struct node));
		ptr=top;
		cout<<ptr->data<<"<--top"<<endl;
		ptr=ptr->next;
		while (ptr!=NULL){
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
	}
}
int main(){
	int ch,val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do{
   	cout<<"Enter number : ";
   	cin>>ch;
   	cout<<endl;
   	switch(ch)
   	{
   	case 1:
   		{
   		cout<<"Enter value to be pushed :"<<" ";
   		cin>>val;
   		cout<<endl;
   		push(val);
   		break;
   	    }
    case 2 :
    	{
    	pop();
    	break;
        }
    case 3:{
    	display();
    	break;
    	}
	case 4:
		{
		cout<<"Exit"<<endl;
		break;
		}
	default:
		{
		cout<<"Invalid choice"<<endl;
		break;
	    }	
    }// switch
   } //do 
   	while(ch!=4);

   		return 0;
   	
}//main 