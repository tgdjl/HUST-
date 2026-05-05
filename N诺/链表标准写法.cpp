#include<bits/stdc++.h>
using namespace std;
typedef struct ListNode{
	int data;
	struct ListNode *next;
};
ListNode* Createnode(int value){
	ListNode *head=(ListNode*)malloc(sizeof(ListNode));
	head->data=value;
	head->next=NULL; 
	return head;
}
ListNode* insert(ListNode* head,int value){
	ListNode *cur=head;
	while(cur->next!=NULL){
		cur=cur->next;
	}
	ListNode *tmp=Createnode(value);
	cur->next=tmp;
	return head; 
}
void printflist(ListNode* head){
	ListNode *cur=head->next;
	while(cur!=NULL){
		printf("%d ",cur->data);
		cur=cur->next;
	}
	printf("\n");
}
void freelist(ListNode *head){
	ListNode* cur=head;
	while(cur!=NULL){
		ListNode* tmp=cur->next;
		free(cur);
		cur=tmp;
	}
} 
int main(){
	ListNode *dummy=Createnode(0);
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans[n];
		for(int i=0;i<n;i++){
			scanf("%d",&ans[i]);
			insert(dummy,ans[i]);
		}
		printflist(dummy);
		free(dummy);
	}
	return 0;
} 
