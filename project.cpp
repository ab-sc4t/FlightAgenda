#include<iostream>
#include<stdio.h>
#include <string>
using namespace std;
#define INFINITY 99999
#define max 10

class Node{
public:
    int data;
    Node * next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class Node3{
    public:
        int ano;
        int price;
        Node3 * rp;
        Node3(int d, int x){
            ano = d;
            price = x;
            rp = NULL;
        }
};

class Node2{
    public:
        int listno;
        Node3 * rp;
        Node2 * dp;
};

void insert(Node * &head, int num){
    Node * temp  = new Node(num);
    if (head == NULL){
        head = temp;
    }
    else{
        Node * trav = head;
        while(trav->next != NULL){
            trav = trav->next;
        }
        trav->next = temp;
    }
}

int del(Node * &head){
    Node * temp = head;
    head = head->next;
    return temp->data;
}

void dijkstra(int G[max][max],int n,Node * &head);

int main() {
    Node * head = NULL; 
    int G[max][max]={{0, 4, 8, 0, 0, 0, 0, 0, 0, 0},
                    {4, 0, 0, 5, 2, 0, 0, 0, 0, 0},
                    {8, 0, 0, 6, 9, 0, 0, 0, 0, 0},
                    {0, 5, 6, 0, 0, 0, 4, 0, 0, 0},
                    {0, 2, 9, 0, 0, 1, 5, 0, 0, 0},
                    {0, 0, 0, 0, 1, 0, 3, 0, 0, 0},
                    {0, 0, 0, 4, 5, 3, 0, 6, 0, 5},
                    {0, 0, 0, 0, 0, 0, 6, 0, 7, 0},
                    {0, 0, 0, 0, 0, 0, 0, 7, 0, 3},
                    {0, 0, 0, 0, 0, 0, 5, 0, 3, 0}};
    int n=10;
    while(1){
            cout << "Login\n";
            cout << "1. for Airlines\n";
            cout << "2. for Customers\n";
            cout << "3. Exit\n";
            int choice;
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1){
            cout << "Enter price between airports: \n";
            Node2 * start = NULL, *temp, *head;
            Node3 * t, *h;
            int i=1;
            for (int x=1; x<=10; x++){
                temp = new Node2;
                temp -> rp = NULL;
                temp -> dp = NULL;
                temp->listno = i++;
                if (start == NULL){
                    start = head = temp;
                }
                else{
                    head->dp = temp;
                    head = temp;
                }
                //for airport1
                if (x==1){
                    for (int y=1; y<11; y++){
                        if (y==2 || y==3){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 2
                else if (x==2){
                    for (int y=1; y<11; y++){
                        if (y==1 || y==4 || y==5){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 3
                else if (x==3){
                    for (int y=1; y<11; y++){
                        if (y==1 || y==4 || y==5){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 4
                else if (x==4){
                    for (int y=1; y<11; y++){
                        if (y==2 || y==3 || y==7){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 5
                else if (x==5){
                    for (int y=1; y<11; y++){
                        if (y==2 || y==3 || y==6 || y==7){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 6
                else if (x==6){
                    for (int y=1; y<11; y++){
                        if (y==5 || y==7){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 7
                else if (x==7){
                    for (int y=1; y<11; y++){
                        if (y==4 || y==5 || y==6 || y==8 || y==10){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 8
                else if (x==8){
                    for (int y=1; y<11; y++){
                        if (y==7 || y==9){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 9
                else if (x==9){
                    for (int y=1; y<11; y++){
                        if (y==8 || y==10){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
                //for airport 10
                else if (x==10){
                    for (int y=1; y<11; y++){
                        if (y==7 || y==9){
                            int price;
                            cout << "Price from " << x << " to " << y <<": ";
                            cin >> price;
                            t = new Node3(y, price);
                            if (temp->rp == NULL){
                                temp->rp = h = t;
                            }
                            else{
                                h->rp = t;
                                h = t;
                            }
                        }
                    }
                }
            }

            //MULTI LIST TO ARRAY
            temp = start;
            while(temp!=NULL){
                t = temp->rp;
                while(t!=NULL){
                    G[(temp->listno - 1)][t->ano - 1] = t->price;
                    t = t->rp;
                }
                temp = temp->dp;
            }
        }
        else if (choice == 2){
            cout << "Airports: " << endl;
            cout << "1. Los Angeles" << endl;
            cout << "2. Atlanta" << endl;
            cout << "3. Brazil" << endl;
            cout << "4. LHK" << endl;
            cout << "5. NBO" << endl;
            cout << "6. DXB" << endl;
            cout << "7. Delhi" << endl;
            cout << "8. PEK" << endl;
            cout << "9. HND" << endl;
            cout << "10. Sydney" << endl;
            cout << "Enter the airport number for take off: ";
            int u;
            cin >> u;
            insert(head, u-1);
            cout << "Enter destination airport number: ";
            int d;
            cin >> d;
            insert(head,d-1);
            dijkstra(G, n, head);
        }
        else{
            cout << "Exiting...";
            break;
        }
    }
}

void dijkstra(int G[max][max],int n, Node* &head) {
    int startnode = del(head);
    int destination = del(head);
    int visited[max],count,mindistance,nextnode,i,j;
    int cost[max][max],distance[max],pred[max];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(G[i][j]==0){
                cost[i][j]=INFINITY;
            }
            else{
                cost[i][j]=G[i][j];
            }
        }
    }
    for(i=0;i<n;i++) {
        distance[i]=cost[startnode][i];
        pred[i]=startnode;
        visited[i]=0;
    }
    distance[startnode]=0;
    visited[startnode]=1;
    count=1;
    while(count<n-1) {
        mindistance=INFINITY;
        for(i=0;i<n;i++){
            if(distance[i]<mindistance && !visited[i]) {
            mindistance=distance[i];
            nextnode=i;
            }   
        }
        visited[nextnode]=1;
        for(i=0;i<n;i++){
            if(!visited[i]){
                if(mindistance+cost[nextnode][i]<distance[i]) {
                    distance[i]=mindistance+cost[nextnode][i];
                    pred[i]=nextnode;
                }
            }
            
        }
        count++;
    }
    for(i=0;i<n;i++){
        if(i!=startnode) {
            if (i==destination){
                cout<<"\nPrice of airport "<< i+1 <<" = "<< distance[i];
                cout<<"\nPath = "<<i+1;
                j=i;
                do {
                    j=pred[j];
                    cout<<" <- "<<j+1;
                }while(j!=startnode);
                cout << endl;
            }
        }
    }
}
