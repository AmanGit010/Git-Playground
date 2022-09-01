#include <stdio.h>
#include <conio.h>
struct node {
    int data;
    struct node *link;
};
struct node *root = NULL;

void append(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        struct node *p;
        p = root;
        while(p->link != NULL){
            p=p->link;
        }
        p->link = temp;
    }
    
}

int length(){
    int count = 0;
    struct node *temp;
    temp =root;
    while(temp != NULL){
        count++;
        temp = temp->link;
    }
    return count;
}

void display(){
    struct node *temp;
    temp = root;
    if(temp == NULL){
        printf("List Empty");
    }
    else{
        while(temp != NULL){
            printf("%d\t",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
}


void addafter(){
    struct node *temp, *p;
    int loc,len,i=1;
    printf("Enter location where you want the element to be inserted\n");
    scanf("%d",&loc);
    len = length();
    if(loc>len){
        printf("Invalid Location\n");
        
    }
    else{
        p = root;
        while(i<loc){
            p=p->link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter node data\n");
        scanf(" %d",&temp->data);
        temp->link = p->link;
        p->link = temp;
    }
}


void delete(){
struct node *temp;
int loc;
printf("Enter loc to be deleted\n");
scanf("%d",&loc);
if(loc > length()){
    printf("Invalid Location!!!");
}
else if(loc == 1){
    temp = root;//
    root = temp->link;
    temp->link = NULL;
    free(temp);
}
else{
    struct node *p = root , *q;
    int i = 1;
    while(i<loc -1){
        p=p->link;
        i++;
    }
    q=q->link;
    p->link = q->link;
    q->link = NULL;
    free(q);
}
}


void insertatbeg(){
    int data;
    struct node* newnode, *head;

    newnode = (struct node*) malloc(struct node);
    printf("Enter data to be inserted: ");
    scanf("%d", &newnode -> data);
    newnode -> next = head;
    head = newnode;
}


void reverse_list(){
    struct node *prevnode, *nextnode, *currentnode;
    prevnode = NULL;
    currentnode = nextnode = root;
    while(nextnode != NULL){
        nextnode = nextnode->link;
        currentnode->link = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
        root = prevnode;
}

void selectionsort(){
    struct node *i, *j;
    int temp;
    for(i=root;i->link != NULL;i=i->link){
        for(j=i->link;j!= NULL;j=j->link){
            if(i->data > j->data){
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void bubblesort(){
    struct node *p, *q, *end;
    int temp;
    for(end = NULL;end != root ;end = p){
        for(p = root; p->link != end; p=p->link){
            q=p->link;
            if(p->data > q->data){
                temp= p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
}

int main()
{
    char ch = 'y';
    int choice;
    while((ch =='y') || (ch == 'Y')){
    char c;
        printf("Press\n 1. To insert in the beginning or end\n 2. To display the elements\n 3. To Insert the elements at a paricular location\n 4. To delete elements stored at a particular location\n 5. To Reverse the list \n 6. To sort using selection sort \n 7. To sort using Bubble sort \n");
        scanf("%d",&choice);
        switch(choice){
            case 1: append();
                    break;
            case 2: display();
                    break;
            case 3: addafter();
                    display();
                    break;
            case 4: delete();
                    display();
                    break;
            case 5: reverse_list();
                    display();
                    break;
            case 6: selectionsort();
                    display();
                    break;
            case 7: bubblesort();
                    display();
                    break;
            default:printf("Invalid Choice");
                    break;
        }
        printf("Do you want to try another options(y/n)\n");
        scanf(" %c",&ch);
    }
    getch();
    return 0;
}














