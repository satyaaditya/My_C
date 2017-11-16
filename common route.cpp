#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void common_route(char *, char*);
int compare(char*, int, char *, int);
void printnode(struct node *,char*);
int cal_cost(char *,int,int);
struct node* addnode(struct node *,char*, int , int);
struct node{
	int index;
	int length=0;
	int cost = 0;
	struct node *next;
};


int main(){
	x:char *string1 = (char*)calloc(20, sizeof(char));
	char *string2 = (char*)calloc(20, sizeof(char));
	printf("enter string 1");
	scanf("%s", string1);
	printf("enter strring2");
	scanf("%s", string2);
	common_route(string1, string2);
	goto x;
}
void common_route(char *hacklist, char*codelist){
	struct node *head,*temp=NULL;
	head = (struct node*)calloc(1, sizeof(struct node));
	int n = strlen(hacklist);
	int m = strlen(codelist);
	int i = 0,j=0;
	while(i <= n-head->length){
		j = 0;
		while(j < m){
			if (hacklist[i] == codelist[j]){

				int x = compare(hacklist, i, codelist, j);
				if (x > 1){
					head = addnode(head,hacklist, i, x);
					j = j + x;
				}
				else
					j++;
			}
			else
				j++;
			
		}
		i++;
	}
	printnode(head,hacklist);
}
int compare(char*hacklist, int pres_ind, char *codelist, int j){
	int len = 0;
	for (int k = j; k < strlen(codelist); k++){
		if (hacklist[pres_ind] == codelist[k]){
			len++;
			pres_ind++;
		}
		else
			break;
	}
	return len;
}
struct node* addnode(struct node *head,char *a,int index1,int len){
	if (head->length == 0){
		struct node *nn = (struct node*)calloc(1, sizeof(struct node));
		nn->index = index1;
		nn->length = len;
		head = nn;
		head->next = NULL;
		head->cost = cal_cost(a, head->index, head->length);
	}
	else{
		struct node *temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		if (len>temp->length){
			head->length = len;
			head->index = index1;
			head->next = NULL;
			head->cost = cal_cost(a, head->index, head->length);
		}
		else{
			if (len == temp->length)
			{
				struct node *nn = (struct node*)calloc(1, sizeof(struct node));
				nn->index = index1;
				nn->length = len;
				nn->next = NULL;
				temp->next = nn;
				temp = temp->next;
				temp->cost = cal_cost(a, temp->index, temp->length);
			}
		
		}
	}
	return head;
}
void printnode(struct node *head,char *str){
	struct node *temp = head;
	while (temp != NULL){
		printf("\nstart index %d  len %d\n", temp->index, temp->length);
		int len = temp->length;
		for (int i = temp->index; len > 0; len--)
		{
			printf("%c", str[i++]);
		}
		printf("\n cost is %d", temp->cost);
		temp = temp->next;
	}
}
int cal_cost(char *b,int start,int len){
	int cost = 0;
	for (int i = start; len>0; len--){
		cost = cost + (b[i++] + 0 + 1 - 65);
	}
	return cost;
}
