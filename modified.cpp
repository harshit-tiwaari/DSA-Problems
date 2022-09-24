# include <iostream>
 #include <string>
 #define SPACE 10
 using namespace std;

 class node{
     public:
     int age;
     char name;
	 
     node*prev;
     node*next;

 };
 class doublylinkedlist{

public:
    node*head;
    doublylinkedlist(){
    head=NULL;
    }
    doublylinkedlist(node*n){
head=n;
    }
   node*checkifnodeexist(int age){
   node*temp=NULL;
   node*ptr=head;
   while(ptr!=NULL){
        if(ptr->age==age){
    temp=ptr;
   }
   ptr=ptr->next;

   }

return temp;
   }
   void appendnode(node*n){
         if(checkifnodeexist(n->age)!=NULL){
            cout<<"data already exist"<<endl;
         }
         else{
            if(head==NULL){
                head=n;
                cout<<"first data entered"<<endl;
            }
            else{
                node*ptr=head;
                n->prev=ptr;
                cout<<"Data added"<<endl;
            }
         }

}

void insertnodeafter(int k,node*n){
node*ptr=checkifnodeexist(k);
if(ptr==NULL){
    cout<<"No data exists with this age value"<<k<<endl;
}
else{
    if(checkifnodeexist((n->age)!=NULL))
       {
           cout<<"Node already exists with key value"<<endl;

       }
       else{
        node*nextnode=ptr->next;
        if(nextnode==NULL){
            ptr->next=n;
            n->prev=ptr;
            cout<<"node inserted at the end"<<endl;
        }
        else{
            n->next=nextnode;
            nextnode->prev=ptr;
            ptr->next=n;
            cout<<"data inserted in between"<<endl;
        }
       }
}


}
void print(){
if(head==NULL){

    cout<<"List is empty"<<endl;
}
else{

    cout<<"ALL family member names are:"<<endl;
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->age<<" "<<temp->name<<endl;
        temp=temp->next;
    }
	}
	
}
 };

 int main(){
	char Harshit ;
    doublylinkedlist d;
   node*n1=new node();
   n1->age=20;
   n1->name=Harshit;
   d.appendnode(n1);
   d.print();

	return 0;
 }
