#include <iostream>
#include <locale.h>
#include<iostream>


 
using namespace std;
struct node
{
    struct node *next;
    string num;
    struct node *prev;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *display1(struct node *);


int  main()
{
  setlocale(LC_ALL, "Portuguese_Brasil.1252");
    int option;

    do
    {
        cout<<"\n\n *****MAIN MENU *****";
        cout<<"\n 1: Create a list";
        cout<<"\n 2: Display the list";
        cout<<"\n 3: Display [a,b,c]";
        cout<<"\n 4: Exit";
        cout<<"\n\n Enter your option : ";
        cin>>option;
        switch(option)
        {
            case 1:
            { start = create_ll(start);
              cout<<"\n DOUBLY LINKED LIST CREATED";

            }
                break;
            case 2:
            {
                start = display(start);
            }
                break;
            case 3:
                start = display1(start);
        }
    }while(option!=4);
}

struct node *create_ll(struct node *start)
{
    char caracter;

    //ifstream file;

    FILE* input_file = fopen("inteligenciaEmocional.txt","r+");
    
    struct node *new_node, *ptr;
    while ((caracter = fgetc(input_file)) != EOF) 
    {
        if(start == NULL)
        {
            new_node = new node;
            new_node -> prev = NULL;
            new_node -> num = caracter;
            new_node -> next = NULL;
            start = new_node;
          
        }
        else {

            ptr=start;
            new_node = new node;
            new_node->num=caracter;
            while(ptr->next!=NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev=ptr;
            new_node->next=NULL;
        }
    }
    return start;
}

struct node *display(struct node *start)//MUDAR SAIDA PARA [A,B,C]
{
    
    struct node *ptr;
    struct node * spt;
    
    ptr=start;
    while(ptr!=NULL)
    {
        
        cout<<ptr -> num << ""; //funcionou
        //cout<<ptr -> num<<endl;
        ptr = ptr -> next;
    }
    //cout << imprimir a tale para verificar 
    return start;

}

struct node *display1(struct node *start)//MUDAR SAIDA PARA [A,B,C]
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        //cout<<ptr -> num<<""; //funcionou
        cout<<ptr -> num<<endl;
        ptr = ptr -> next;
    }
    //cout << imprimir a tale para verificar 
    return start;

}


