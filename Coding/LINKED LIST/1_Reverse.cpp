#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int n;
struct node *head=NULL;
void create(int A[],int n){
    struct node *t,*last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=NULL;
    last=head;

    for(int i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
// node * reverse(node *head){
//     if(head == NULL || head->next ==NULL){
//         return head;
//     };
//     node *forward = NULL;
//     node *prev = NULL;
//     node *curr = head;
//     while(curr!=NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
node * reverse(node *head){
    if(head == NULL || head->next ==NULL){
        return head;
    };
    node *forward = NULL;
    node *prev = NULL;
    node *curr = head;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int getlen(struct node *head){
    int len =0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
struct node *findmiddle(struct node *head){
    int len = getlen(head);
    int ans = (len/2);
    struct node *temp = head;
    int cnt =0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main(){
    int A[5]={4,7,2,8,9};
    int n=5;
    //struct node *REV = reverse(head);
    create(A,n);
    display(head);
    reverse(&head);
    display(head);
    // findmiddle(head);
    // display(head);
    return 0;
}