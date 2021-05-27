//Initial Template for C
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

}*start;

void insert();
void display(struct Node *head);

 // } Driver Code Ends
//User function Template for C

struct Node* reverseList(struct Node *head)
    {
        if(head->next == NULL){
          return head;
        }
        else{
            struct Node *temp = NULL;
            struct Node *temp1;
            while(head!=NULL){
                temp1 = head->next;
                head->next = temp;
                temp = head;
                head = temp1;
            }
            return temp;
        }
    }

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      start = reverseList(start);
      display(start);
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }

 void display(struct Node *head)
{
   while(head!=NULL)
  {
   printf("%d ",head->data);
    head=head->next;
  }
}




  // } Driver Code Ends
