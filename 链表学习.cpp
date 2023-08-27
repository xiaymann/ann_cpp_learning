#include<iostream>
using namespace std;

struct Link
{
    double data;
    Link *next;
};
//Link是要存储在链表中的结点的类型，结构成员data是结点的数据部分，而另一个结构成员next则被声明为Link的指针，它是指向下一个结点的后续指针。

//创建头结点
Link *head = nullptr;


//单链表的遍历操作
void displayNode(Link *head)
{
    Link *p = head->next;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

//求单链表的元素个数
int length(Link *head)    //输入头结点，输出类型为int
{
    Link *p = head->next;
    int count = 0;
    while (p)
    {
        p = p->next;
        count ++;
    }
    return count;
}

//单链表的查找操作
bool queryNode(Link *head, DataType x)    //需要输入头结点和要查找的数据
{
    Link *p = head->next;
    while (p)
    {
        if(p->data == x)
        {
            cout << p->data << endl;
            return true;
        }
        p = p->next;
    }
    return false;
}

// 单链表的插入操作
bool insertNode(Link *head, int i, DataType x)
{
    Link *p = head;
    int count = 0;
    while(p && (count != (i-1)))
    {
        p = p->next;
        count ++;
    }
    if(p == NULL)    //没有找到插入位置，要插入的位置超出链表长度
    {
        return false;
    }
    else
    {
        node = (Link)malloc(sizeof(Node));    //申请一个结点node
        node->data = x;
        node->next = p->next;
        p->next = node;
        return true;
    }
}

//头插法创建单链表(头插法：将待插入的结点放在头结点的后面)，插入顺序和数据顺序相反
Link newList(DataType a[], int n)
{
    head = (Link)malloc(sizeof(Node));    //创建头结点
    head->next = NULL;
    for(int i = 0; i < n; i++)
    {
        node = (Link)malloc(sizeof(Node));
        node->data = a[i];
        node->next = head->next;
        head->next = node;
    }
    return *head;
}

//尾插法创建单链表(尾插法：将待插入的结点放在终端结点的后面)，插入顺序和数据顺序相同
Link newList(DataType a[], int n)
{
    head = (Link)malloc(sizeof(Node));
    head->next = NULL;
    Link *rear = head;
    for (int i = 0; i < n; i++)
    {
        node = (Link)malloc(sizeof(Node));
        node->data = a[i];
        node->next = NULL;
        rear->next = node;
        rear = node;
    }
    //rear->next = NULL;
    return *head;
}

//删除单链表结点
bool deleteNode(Link *head, DataType x)
{
    if(head == NULL || head->next == NULL)
    {
        return false;
    }

    Link *p = head->next;
    Link *q = head;
    
    while(p)
    {
        if (p->data == x)
        {
            q->next = p->next;
            free(p);
            return true;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return false;
}

//单链表的释放
void clearLink(Link *head)
{
    while(head->next != NULL)
    {
        Link *q = head;
        head = head->next;
        free(q);
    }
}

//循环链表：将单链表首尾相接，将终端结点的指针域由空指针改为指向头结点，构成单循环链表，简称循环链表。
//循环链表没有明显的尾端，所以需要避免死循环出现
//循环条件变化：
// p != head
// p->next != head

//双向链表：在单链表的每个结点中再设置一个指向其前驱结点的指针域prior。