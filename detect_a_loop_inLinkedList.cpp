// C program to detect a loop in linked list and removing a loop from the list

#include
#include

struct node
{
int data;
struct node *next;
};

void print_list(struct node *head)
{

while(head)
{
printf(“%d “, head->data);
head = head->next;
}

printf(“\n\n”);
}

void insert_front(struct node **head, int dataue)
{
struct node * new_node = NULL;

new_node = (struct node *)malloc(sizeof(struct node));

if (new_node == NULL)
{
printf(“\nUnable to allocate memory\n”);
}

new_node->data = dataue;
new_node->next = *head;

*head = new_node;
}

void create_loop(struct node *head)
{
struct node *temp = head;

while(temp->next)
temp = temp->next;

temp->next = head->next;
}

void print_loop(struct node *head)
{
int n = 25;

while(n–)
{
printf(“%d “, head->data);
head = head->next;
}

printf(“\n\n”);
}

void detect_loop(struct node *head)
{
struct node *slow = head;
struct node *fast = head;

while(slow && fast->next && fast->next->next)
{
if ((slow == fast->next) || (slow == fast->next->next ))
{
printf(“\nLinked list has a loop.\n”);
return;
}

slow = slow->next;
fast = fast->next->next;
}

printf(“\nLinked list does not have any loop.\n”);
}

void remove_loop(struct node *head, struct node *loop_node)
{
struct node *near = head;
struct node *far = head;
struct node *ptr = loop_node;
struct node *prev = NULL;

while(ptr->next != loop_node)
{
ptr = ptr->next;
far = far->next;
}

prev = far;
far = far->next;

while(near != far)
{
prev = far;
far = far->next;
near = near->next;
}

prev->next = NULL;
}

void detect_and_remove_loop(struct node *head)
{
struct node *slow = head;
struct node *fast = head;

while(slow && fast->next && fast->next->next)
{
if ((slow == fast->next) || (slow == fast->next->next ))
{
printf(“\nLinked list has a loop\n”);
remove_loop(head, slow);
return;
}

slow = slow->next;
fast = fast->next->next;
}

printf(“\nLinked list does not have any loop\n”);
}

int main()
{
int n, i, data;
struct node * head = NULL;

printf(“\nEnter number of elements : “);
scanf(“%d”, &n);
printf(“\nEnter the elements : ” );
for (i = 0; i < n; i++)
{
scanf(“%d”, &data);
insert_front(&head, data);
}

printf(“\nThe Linked List is : “);
print_list(head);
detect_loop(head);

printf(“\nCreating loop…\n”);
create_loop(head);
printf(“\nPrinting list with loop\n”);
print_loop(head);

printf(“\nRemoving loop…\n”);
detect_and_remove_loop(head);

printf(“\nList after removing loop:\n”);
print_list(head);
}

