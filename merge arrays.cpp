#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int * put(int *, int , int , int);
void mergearrays(int*, int , int *, int);
struct node * create(struct node *);
struct node* reverse(struct node*);
void reversee(struct node *, struct node *);
int* subarrayreversed(int *, int );
int *reverse_subarray(int *, int , int );
int * funn(int *, int);
struct node{
	int data;
	struct node *next;
};
int main(){
	int n;
	printf("enter array size");
	scanf("%d", &n);
	int *array = (int*)calloc(n, sizeof(int));
	fflush(stdin);
	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);
	int *a=funn(array, n);
	
	getch();

}
void mergearrays(int* a,int len1, int *b,int len2){
	int i = 0, j = 0;
	while (j < len2 && i<len1){
		while (a[i] < b[j]&& i<len1)
			i++;
		if (a[i] >= b[j]){
			a = put(a, i, b[j], len1);
			len1 += 1;
			j++;
		}
	}
	if (i == len1 && j < len2-1){
		while (j < len2){
			a[i++] = b[j++];
		}
	}
	for (int i = 0; i < len1 + len2; i++)
		printf("%d ", a[i]);
}
int * put(int *a, int pos1, int element, int len1){
	int j = len1 - 1;
	while (j >= pos1 ){
		a[j + 1] = a[j];
		j--;
	}
	a[j+1] = element;
	return a;
}
void fun(struct node *head1, struct node *head2){
	int len1= 0;
	int len2 = 0;
	struct node *cur1 = head1;
	while (cur1->next != NULL){
		len1++;
	}
	cur1 = head2;
	while (cur1->next != NULL)
		len2++;
	int x = (len1 > len2) ? (len1 - len2) : (len2 - len1);
	(len1 > len2) ? (cur1 = head1) : (cur1 = head2);
	
	while (x > 0){
		cur1 = cur1->next;
		x--;
	}
		struct node *temp; 
	(len2 < len1) ? (temp = head2) : (temp = head1);
	while (temp != cur1)
	{
		temp = temp->next;
		cur1 = cur1->next;
	}
}
struct node* reverse(struct node *head){
	if (head->next == NULL){
		struct node *a = head;
		return head;
	}
	struct node *temp;
	temp=reverse(head->next);
	temp->next = head;
	head->next = NULL;
	temp = temp -> next;
	return  temp;
}
struct node* create(struct node *start)
{
	struct node *temp, *nn;
	char ch;
	do
	{
		nn = (struct node*)malloc(sizeof(struct node));
		printf("\nenter data");
		fflush(stdin);
		scanf("%d", &nn->data);
		if (start == NULL)
		{
			nn->next = NULL;
			start = nn;
		}
		else
		{
			temp = start;
			nn->next = NULL;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = nn;
		}
		printf("\ndo uwant to create another node");
		ch = getch();
	} while (ch != 'n');
	return start;
}
void reversee(struct node *head, struct node *prev){
	if (head->next == NULL)
	{	
		head->next = prev;
		prev->next = NULL;
		return;
	}
	reversee(head->next, head);
	head->next = prev;
	prev->next = NULL;
	return;
}
int* subarrayreversed(int *a, int len){
	int start = -1, end = -1;
	for (int i = 0; i < len-1; i++){
		if (a[i] < a[i - 1]){
			start = i - 1;
			a=reverse_subarray(a, start, len);
			break;
		}
	}
	for (int i = 0; i<len; i++)
		printf("%d", a[i]);
	return a;
}
int *reverse_subarray(int *a, int i, int len){
	int j = i;
	while (a[j] > a[j - 1]){
		j++;
	}
	while (j >= i){
		int temp = a[i];
		a[i] = a[j];
		a[j] = a[i];
		i++; j--;
	}
	return a;

}


//given a unsorted array,return 2 min values
int * funn(int *a, int len){
	int *min = (int *)calloc(2, sizeof(int));
	min[0] = a[0], min[1] = a[0];
	int index = 0;
	bool flag = false;
	for (int i = 0; i < len; i++){
		if (min[0]>a[i]){
			min[0] = a[i];
			flag = true;
		}
	}
	for (int i = 0; i < len; i++){
		if (index == i)
			continue;
		if (a[i] < min[1])
			min[1] = a[i];
		
	}
	
	printf("%d  %d", min[0], min[1]);
	return min;
}