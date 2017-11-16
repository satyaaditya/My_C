// Program for linked implementation of complete binary tree
//verify functions from main
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
// For Queue Size
#define SIZE 50

void inorder(struct node* , int*, int *);
void printt(struct node *);
int swap(int *, int , int);
bool check_inorder(int *, struct node *, int *);
void compare(struct node *, struct node *);
struct node *binaryTreeToBST(struct node *);
// A tree node
void quick(int *, int, int);
void fill_inorder(struct node*, int *, int);
struct node
{
	int data;
	struct node *right, *left;
};

struct Queue
{
	int front, rear;
	int size;
	struct node* *array;
};

// A utility function to create a new tree node
struct node* newNode(int data)
{
	struct node* temp = (struct node*) malloc(sizeof(struct node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// A utility function to create a new Queue
struct Queue* createQueue(int size)
{
	struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));

	queue->front = queue->rear = -1;
	queue->size = size;

	queue->array = (struct node**) malloc(queue->size * sizeof(struct node*));

	int i;
	for (i = 0; i < size; ++i)
		queue->array[i] = NULL;

	return queue;
}

// Standard Queue Functions
int isEmpty(struct Queue* queue)
{
	return queue->front == -1;
}

int isFull(struct Queue* queue)
{
	return queue->rear == queue->size - 1;
}

int hasOnlyOneItem(struct Queue* queue)
{
	return queue->front == queue->rear;
}

void Enqueue(struct node *root, struct Queue* queue)
{
	if (isFull(queue))
		return;

	queue->array[++queue->rear] = root;

	if (isEmpty(queue))
		++queue->front;
}

struct node* Dequeue(struct Queue* queue)
{
	if (isEmpty(queue))
		return NULL;

	struct node* temp = queue->array[queue->front];

	if (hasOnlyOneItem(queue))
		queue->front = queue->rear = -1;
	else
		++queue->front;

	return temp;
}

struct node* getFront(struct Queue* queue)
{
	return queue->array[queue->front];
}

// A utility function to check if a tree node has both left and right children
int hasBothChild(struct node* temp)
{
	return temp && temp-> left && temp->right;
}

// Function to insert a new node in complete binary tree
void insert(struct node **root, int data, struct Queue* queue)
{
	// Create a new node for given data
	struct node *temp = newNode(data);

	// If the tree is empty, initialize the root with new node.
	if (!*root)
		*root = temp;

	else
	{
		// get the front node of the queue.
		struct node* front = getFront(queue);

		// If the left child of this front node doesn’t exist, set the
		// left child as the new node
		if (!front->left)
			front->left = temp;

		// If the right child of this front node doesn’t exist, set the
		// right child as the new node
		else if (!front->right)
			front->right = temp;

		// If the front node has both the left child and right child,
		// Dequeue() it.
		if (hasBothChild(front))
			Dequeue(queue);
	}

	// Enqueue() the new node for later insertions
	Enqueue(temp, queue);
}

// Standard level order traversal to test above function
void levelOrder(struct node* root)
{
	struct Queue* queue = createQueue(SIZE);

	Enqueue(root, queue);

	while (!isEmpty(queue))
	{
		struct node* temp = Dequeue(queue);

		printf("%d ", temp->data);

		if (temp->left)
			Enqueue(temp->left, queue);

		if (temp->right)
			Enqueue(temp->right, queue);
	}
}

// Driver program to test above functions
int main()
{
	struct node* root = NULL;
	struct Queue* queue = createQueue(SIZE);
	char ch='g';
	while (ch!='n'){
		int n; 
		printf("\ninsert value into node");
		scanf("%d", &n);
		insert(&root, n, queue);
		printf("\n do u want to insert another node");
		ch = getch();
	}
	levelOrder(root);
//	levelOrder(root1);
	root = binaryTreeToBST(root);
	printt(root);
	getch();
	return 0;
}

void fill_inorder(struct node*root, int *arr, int *index){
	if (root){
		fill_inorder(root->left, arr, index);
		root->data = arr[*index];
		*index += 1;
		fill_inorder(root->right, arr, index);
	}
}
void printt(struct node *root){
	if (root){
		printt(root->left);
		printf(" %d ", root->data);
		printt(root->right);
	}
}
//10 20 L 10 30 R 20 40 L 20 60 R
struct node *binaryTreeToBST(struct node *root){
	if (root == NULL)
		return root;
	int *arr = (int*)calloc(20, sizeof(int));
	int index = 0;
	inorder(root, arr, &index);
	quick(arr, 0, index-1);
	index = 0;
	fill_inorder(root, arr, &index);
	printf("\n\n bst is \n");
	return root;
}
void inorder(struct node* root, int*arr, int *index){
	if (root){
		inorder(root->left, arr, index);
		arr[*index] = root->data;
		*index += 1;
		inorder(root->right, arr, index);
	}
}
void quick(int *a, int left, int right)
{
	int loc;
	if (left<right)
	{
		loc = swap(a, left, right);
		quick(a, loc + 1, right);
		quick(a, left, loc - 1);
	}
}
int swap(int *a, int left, int right)
{
	int loc, temp, beg, flag = 0;
	loc = left;
	beg = left;
	while (flag != 1)
	{
		while ((a[loc] <= a[right]) && loc != right)
			right--;
		if (loc == right)
			flag = 1;
		else if (a[loc]>a[right])
		{
			temp = a[loc];
			a[loc] = a[right];
			a[right] = temp;
			loc = right;
		}
		if (flag != 1)
		{
			while ((a[loc]>a[left]) && loc != left)
				left++;
			if (loc == left)
				flag = 1;
			else if ((a[loc]<a[left]))
			{
				temp = a[loc];
				a[loc] = a[left];
				a[left] = temp;
				loc = left;
			}
		}
	}
	return loc;
}
