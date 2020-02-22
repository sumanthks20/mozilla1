#include<stdio.h>
#include<stdlib.h>
struct sll
{
	int data;
	struct sll *next;
};

typedef struct sll node;

node *head;
node *L;

int isEmpty()
{
    if(head == NULL)
        return 1;
    else
        return 0;

}

node *getnode(int i)
{
	node *nn = (node*)malloc(sizeof(node));
	nn->data = i;
	nn->next = NULL;
	return nn;
}

int length()
{
    int t = 0;
    node *p = head;
    while(p!=NULL)
    {
        p=p->next;
        t++;
    }
    return t;
}


node *find(int i)
{
    node *p = head;
    while(p!=NULL)
    {
        if(p->data == i)
            return p;
        p = p->next;
    }
    return NULL;
}


void removeFirst(int i)
{
    node *p = head;

    if(head == NULL)
        return;
    else
        if(head->next == NULL)
        {
            if(head->data == i)
            {
                head = NULL;
                free(p);
            }
        }
    else if(head->data == i)
    {
        head = head->next;
        free(p);
    }
    else
    {
        while(p!=NULL)
        {
            if(p->data == i)
            {
                node *q = head;
                while(q->next!=p)
                    q = q->next;
                q->next = p->next;
                free(p);
                break;
            }
            p = p->next;
        }
    }
}

void removeAll(int i)
{
    node *p = head, *q;
    if(head == NULL)
        return;
    else
        if(head->next == NULL)
        {
            if(head->data == i)
            {
                head = NULL;
                free(p);
            }
        }
    else if(head->data == i)
    {
        head = head->next;
        free(p);
    }
    else
    {
        while(p!=NULL)
        {

            if(p->data == i)
            {
                q = head;
                while(q->next!=p)
                    q = q->next;
                q->next = p->next;
            }
            p  =p->next;
        }
    }
}

void addAsHead(int i)
{
	node *temp = getnode(i);
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}

void insL(int i)
{
    node *temp = getnode(i);
	if(L == NULL)
	{
		L = temp;
	}
	else
	{
		temp->next = L;
		L = temp;
	}
}


void addAsTail(int i)
{
    node *temp,*p;
    p=head;
    temp=getnode(i);
    if(head==NULL) head=temp;
    else
    {
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}

void reverse()
{
	if(head == NULL || head->next == NULL)
	{
		printf("Empty");
		return;
	}

	node *p = head, *q=p->next;
	head = head->next;
	p->next = NULL;
	while(head!=NULL)
	{
		head = head->next;
		q->next = p;
		p = q;
		q = head;
	}
	head = p;
}

void print()
{
	node *p = head;
	if(head == NULL)
		printf("\nNo List!!");
	else
	{
		while(p!=NULL)
		{
			printf("%d -> ", p->data);
			p = p->next;
		}
	}
}

int popHead()
{
    node *p = head;
    if(head==NULL)
        return 0;
    head= head->next;
    p->next = NULL;
    return p->data;
}

void addAll()
{
    node *p = head;
    if(head == NULL)
    {
        head = L;
    }
    else
    {
        while(p->next!=NULL)
            p = p->next;
        p->next = L;
    }
}

void insertionSort() {
    if((head)== NULL || (head)->next == NULL) {
       return;
    }
    node *t1 = (head)->next;
    while(t1 != NULL) {
        int sec_data = t1->data;
        int found = 0;
        node *t2 = head;
        while(t2 != t1) {
            if(t2->data > t1->data && found == 0) {
                sec_data = t2->data;
                t2->data = t1->data;
                found = 1;
                t2 = t2->next;
            } else {
                if(found == 1) {
                    int temp = sec_data;
                    sec_data = t2->data;
                    t2->data = temp;
                }
                t2 = t2->next;
            }
       }
       t2->data = sec_data;
       t1 = t1->next;
    }
}
int main()
{
	head = NULL;
	L = NULL;
	int i, ch;
	int k, len, size;
	while(1)
	{
		printf("\nMenu:\n1. isEmpty()\n2.length()\n3.print( )\n4.addAsHead()\n5.addAsTail()\n6.find()\n7.popHead()\n8.removeFirst()\n9.removeAll()\n10.addAll()\n11.insertionSort()\n12.reverse()\nEnter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: if(isEmpty())
                    {
                        printf("It is empty!\n");
                    }
                    else
                        printf("It is not empty\n");
                     break;

			case 2: len = length();
                    printf("\nLength is: %d\n", len);
                    break;

			case 3: print(); break;

			case 4:
                    printf("Enter the Element to be inserted: ");
                    scanf("%d", &k);
                    addAsHead(k);
                    break;

            case 5:
                    printf("Enter the Element to be inserted: ");
                    scanf("%d", &k);
                    addAsTail(k);
                    break;
            case 6:
                    printf("Enter the Element to be searched: ");
                    scanf("%d", &k);
                    node *p = (node*)malloc(sizeof(node));
                    p = find(k);
                    printf("%d", p->data);
                    break;

            case 7:
                    popHead(head);
                    break;
            case 8:
                    printf("Enter the Value to be deleted: ");
                    scanf("%d", &k);
                    removeFirst(k);
                    break;
            case 9:
                    printf("Enter the Value to be deleted(ALL VALUES WILL BE DELETED): ");
                    scanf("%d", &k);
                    removeAll(k);
                    break;
            case 10:
                    printf("Enter size of new LIST: ");
                    scanf("%d", &size);
                    printf("Enter the Elements: ");
                    for(i=0;i<size;i++)
                    {
                        scanf("%d", &k);
                        insL(k);
                    }
                    addAll(L, head);
                    break;
            case 11:
                    insertionSort();
                    break;


            case 12: reverse();
                    break;



			default: printf("Invalid Choice!!");
		}
	}
}


// Insertion sort from:  https://stackoverflow.com/a/30827304/10736551




