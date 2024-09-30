#include<iostream>
using namespace std; 

struct Node{
	int x ; 
    Node* next ; 
}; 

void insert_end(Node *&first,Node *&last,int val)
{
	Node* temp = new Node ; 
	temp->x = val ; 
	temp->next = NULL ; 
	if(first == NULL)
	{
		first = temp ; 
		last = temp ; 
		return ; 
	}	
	last->next = temp ; 
	last = temp ; 
}

void delete_end(Node *&first,Node *&last)
{
    if(first == NULL) return;
    if(first->next == NULL) 
    {
        delete first;
        first = last = NULL;
        return;
    }

    Node* curr = first;
    while(curr->next != last)
        curr = curr->next;
    
    delete last;
    last = curr;
    last->next = NULL;
}

void delete_head(Node *&first, Node *&last)
{
    if(first == NULL) return; 
    if(first == last) 
    {
        delete first;
        first = last = NULL;
        return;
    }
    
    Node* temp = first;
    first = first->next;
    delete temp;
}

int main()
{
	Node* first = NULL, *last = NULL;

	insert_end(first,last,1);
	insert_end(first,last,2);
	insert_end(first,last,3);  

	delete_end(first,last); 
	delete_head(first,last);

	for(Node *curr = first; curr != NULL; curr = curr->next)
		cout << curr->x << " "; 
}
