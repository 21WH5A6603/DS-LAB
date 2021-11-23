#include<stdio.h>
  2 #include<stdlib.h>
  3 struct node
  4 {
  5 int data;
  6 struct node*link;
  7 };
  8 struct node*head = NULL,*cur,*temp,*temp1;
  9 struct node*create()
 10 {
 11     int n;
 12 printf("eter total no.of elements");
 13 scanf("%d",&n);
 14 while(n--)
 15 {
 16     cur = (struct node*)malloc(sizeof(struct node));
 17     scanf("%d",&(cur-> data));
 18     cur -> link = NULL;
 19     if(head == NULL)
 20         head =cur;
 21     else
 22         {
 23             temp=head;
 24             while(temp->link!=NULL)
 25             temp=temp->link;
 26             temp->link=cur;
 27         }
 28 }
 29 return head;
 30 }
struct node*insert_begin(int ele)
 32 {
 33 cur=(struct node*)malloc(sizeof(struct node));
 34 cur->data=ele;
 35 cur->link=head;
 36 head=cur;
 37 return head;
 38 }
 39 struct node*insert_end(int ele)
 40 {
 41 cur=(struct node*)malloc(sizeof(struct node));
 42 cur->data=ele;
 43 cur->link=NULL;
 44 temp = head;
 45 while(temp->link!=NULL)
 46     temp=temp->link;
 47 temp->link=cur;
 48 return head;
 49 }
 50 struct node*insert_pos(int pos,int ele)
 51 {
 52 int c=1;
 53 cur=(struct node*)malloc(sizeof(struct node));
 54 cur->data=ele;
 55 temp =head;
 56 while(c < pos-1)
 57 {
 58     temp=temp->link;
 59     c++;
 60 }
 61 cur->link=temp->link;
 62 temp->link=cur;
 63 return head;
 64 }
struct node*delete_begin(struct node*head)
 66 {
 67 temp = head;
 68 head = temp->link;
 69 printf("deleted element is %d",temp->data);
 70 free(temp);
 71 return head;
 72 }
 73 struct node*delete_end(struct node*head)
 74 {
 75 temp = head;
 76 while(temp->link!=NULL)
 77 {   
 78     temp1 = temp;
 79     temp = temp->link;
 80 }
 81 temp->link = NULL;
 82 printf("deleted element is %d",temp->data);
 83 free(temp);
 84 return head;
 85 }
 86 struct node*delete_pos(struct node*head,int pos)
 87 {
 88 temp = head;
 89 int c = 1;
 90 while(c<pos)
 91 {
 92     temp1 = temp;
 93     temp=temp->link;
 94     c++;
 95 }
 96 temp1->link = temp->link;
 97 printf("deleted element is %d",temp->data);
 98 free(temp);
 99 return head;
100 }
void display(struct node*head)
102 {
103 temp=head;
104 while(temp!=NULL)
105 {   
106     printf("%d-.",temp->data);
107     temp = temp->link;
108 }
109 }
110 void reverse_display(struct node*head)
111 {
112 if(head!=NULL)
113 {   
114     reverse_display(head->link);
115     printf("%d",head->data);
116 }
117 }
118 int search(struct node*head,int key)
119 {
120 int c=1;
121 temp = head;
122 while(temp!=NULL)
123 {
124     if(key=temp->data)
125     {
126         return c;
127     }
128     temp = temp->link;
129     c++;
130 }
131 return-1;
132 }
struct node*sorting(struct node*head)
134 {
135 int x,s;
136 temp = head;
137 temp1 = NULL;
138 while(s)
139 {   
140     s = 0; 
141     temp = head;
142     while(temp->link!=temp1)
143     {   
144         if(temp->data > temp->link->data)
145         {
146             x=temp->data;
147             temp->data=temp->link->data;
148             temp->link->data = x;
149             s=1;
150         }
151         temp = temp->link;
152     }   
153 temp1 = temp;
154 }
155 return head;
156 }
157 int main()
158 {
159 int ch,ele,pos,key;
160 while(1)
161 {
162     printf("1-create \n 2-insert at begin \n 3-insert at end \n 4-insert at position \n 5- delete at begin \n 6-delete at end\n7-delete at     position\n8-display\n9-reverse display\n10-searching\n11-sorting\n12-exit");
163     printf("\nenter your choice");
scanf("%d",&ch);
165     switch(ch)
166     {
167         case 1:head=create();
168                break;
169         case 2:scanf("%d",&ele);
170                head=insert_begin(ele);
171                break;
172         case 3:scanf("%d",&ele);
173                head=insert_end(ele);
174                break;
175         case 4:printf("enter the position");
176                scanf("%d",&pos);
177                printf("enter the element");
178                scanf("%d",&ele);
179                head= insert_pos(pos,ele);
180                break;
181         case 5:head=delete_begin(head);
182                break;
183         case 6:head=delete_end(head);
184                break;
185         case 7:printf("enter pos");
186                scanf("%d",&pos);
187                head=delete_pos(head,pos);
188                break;
189         case 8:display(head);
190                break;
191         case 9:reverse_display(head);
192                break;
193         case 10:printf("enter key value");
194                 scanf("%d",&key);
195                 if(pos == -1)
196                     printf("element not found");
197                 else
198                     printf("element fount at%d",pos);
199                 break;
200         case 11:head=sorting(head);
ase 12:exit(0);
203 }
204 }
205 }
206    
207 
