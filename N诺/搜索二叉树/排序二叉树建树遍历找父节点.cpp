#include<bits/stdc++.h>
using namespace std;
typedef struct BiTNode{
	int data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
int InsertBST(BiTree *T,int key){
	if((*T)==NULL){
		(*T)=(BiTree)malloc(sizeof(BiTNode));
		(*T)->data=key;
		(*T)->lchild=NULL;
		(*T)->rchild=NULL;
		return 0;
	}
	else if((*T)->data==key){
		return 1;
	}
	else if((*T)->data>key){
		return InsertBST(&(*T)->lchild,key);
	}
	else{
		return InsertBST(&(*T)->rchild,key);
	}
}
void CreateBST(BiTree *T,int *nums,int numsSize){
	*T=NULL;
	for(int i=0;i<numsSize;i++){
		InsertBST(T,nums[i]);
	}
}
void Inorder(BiTree T){
	if(T!=NULL){
		Inorder(T->lchild);
		printf("%d ",T->data);
		Inorder(T->rchild);
	}
}
void FreeBST(BiTree T){
	if(T!=NULL){
		FreeBST(T->lchild);
		FreeBST(T->rchild);
		free(T);
	}
}
void search(BiTree T,int key){
	if(T==NULL) return;
	if((T->lchild!=NULL&&T->lchild->data==key)||(T->rchild!=NULL&&T->rchild->data==key)){
		printf("%d\n",T->data);
	}
	else if(key<T->data){
		search(T->lchild,key);
	}
	else{
		search(T->rchild,key);
	}
}
int main(){
	int n;
	BiTree T;
	while(scanf("%d",&n)!=EOF){
		int *ans=(int*)malloc(sizeof(int)*n);
		for(int i=0;i<n;i++){
			scanf("%d",&ans[i]);
		}
		CreateBST(&T,ans,n);
		Inorder(T);
		printf("\n");
		printf("-1\n");
		for(int i=1;i<n;i++){
			search(T,ans[i]);
		}
		FreeBST(T);
		free(ans);
	}
	return 0;
}
