struct node {
       int data;
       struct node *link;
};

int main() {

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node)); --type cast and allocating a space in memory to the heap

    head->data = 45; --setting data equal to 45
    head->link = NULL; -- setting link equal to null

    printf("%d", head->data);
    return 0;
}