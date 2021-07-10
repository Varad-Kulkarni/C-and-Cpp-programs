#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define numLength 100 //Enter the maximum length

typedef struct node{	//Circular linked list
	int num;
	int length;
	struct node *pre;
	struct node *next;
}Node;

void addNode(Node *pNode, int num);
void printNode(Node pNode, int direction);
void numPlus(Node pNode1, Node pNode2);

int main(){
	char tmp[numLength], tmp2[numLength];
	int tmp3;
	Node pHead, pHead2;
	while(1){
		pHead.next = pHead.pre = &pHead;
		pHead2.next = pHead2.pre = &pHead2;
		printf("Enter the first number:");	gets(tmp);
		printf("Enter the second number:");	gets(tmp2);
		while(strlen(tmp)){
			tmp3=tmp[strlen(tmp)-1]-'0';
			tmp[strlen(tmp)-1]='\0';
			addNode(&pHead, tmp3);
		}
		while(strlen(tmp2)){
			tmp3=tmp2[strlen(tmp2)-1]-'0';
			tmp2[strlen(tmp2)-1]='\0';
			addNode(&pHead2, tmp3);
		}
		numPlus(pHead, pHead2);
		pHead.length=0;
		pHead2.length=0;
	}
	return 0;
}

void addNode(Node *pNode, int num){//Head insertion
	Node *pNew;
	if((pNew = (Node*)malloc(sizeof(Node))) == NULL){
		printf("Error creating new node");
		exit(0);
	}
	pNew->next = pNode->next;//Change the successor of the new node to the successor of the previous one
	pNew->pre = pNode;//Change the predecessor of the new node to the previous one
	pNode->next->pre = pNew;//Change the predecessor of the previous one into a new node
	pNode->next = pNew;//Change the successor of the previous one into a new node
	pNew->num = num;
	pNode->length+=1;
}

void printNode(Node pNode, int direction){//direction non-zero reverse output
	Node *pNew;
	pNew = &pNode;
	int i=0;
	printf("Addition result of linked list:");
	if(direction){
		while(i++<pNode.length){
			pNew= pNew->pre;
			printf("%d", pNew->num);
		}
	}
	else{
		while(i++<pNode.length){
			pNew= pNew->next;
			printf("%d", pNew->num);
		}
	}

	printf("\n");
}

void numPlus(Node pNode1, Node pNode2){
	Node pNode3;
	Node *tmp1=&pNode1, *tmp2=&pNode2;
	int i=0, carry=0, sum=0, pd =0;
	pNode3.next = pNode3.pre = &pNode3;
	while(i<pNode1.length || i<pNode2.length){
		i++;	tmp1=tmp1->pre;	tmp2=tmp2->pre;
		if (i>pNode1.length) tmp1->num = 0;
		if (i>pNode2.length) tmp2->num = 0;
		sum = tmp1->num + tmp2->num + carry;
		if(sum>9){
			sum%=10;
			carry=1;
			if((i>=pNode1.length && i>=pNode2.length && carry ==1))pd=1;
		}
		else carry = 0;
		addNode(&pNode3, sum);
	}
	if(pd) addNode(&pNode3,1);
	printNode(pNode3, 0);
}
