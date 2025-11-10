#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;//data value
    Node *next;//ptr to next node
    public:
    Node(int data1,Node* next1){//ye ek constructor banaya jata hai taki dat aaur value daala ja sake
        data = data1;
        next = next1;
    }
    public:
    Node(int data2){//ye ek extra constructor hai kyuki agr har baar next ka value ko null karne kaa jhanjhat nahi rahe
        data = data2;
        next = nullptr;
    }
};

Node* arraytoll(vector<int> &arr){//yaha and is liye use hota hai kyuki agar bina and ka cahlayenge tab bhi code chalega lekin wo ek naya array banayega aur and likhne ke karan wo us array ko hi point karta hhai to naya banane ka ya extra memeory locationn wate nahi hoga
    Node *head = new Node(arr[0]);
    Node *mover = head;//mover ek temporary variable hai jo head ko store karta hai agar wo nahi hoga to next jane par head variable change ho jayega aur usko change nahi hona hai kyuki wahi mai baapp hai linked list ka aagar wo nahi to ll nahi usi liye pure function mein head ko koi nahi chedta
    for (int i = 1; i < arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lltraverse(Node* head){
    Node *temp = head;
    while (temp!=nullptr){
            cout << temp->data<<" ";
            temp = temp->next;
    }
}
int lengthofll(Node* head){
    Node *temp = head;
    int c = 0;
    while(temp!=nullptr){
        temp = temp->next;
        c++;
    }
    return c;
}
int searchinll(Node* head,int e){
    Node *temp = head;
    while(temp!=nullptr){
        if(temp->data==e){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int> test = { 12, 2, 3, 4 };
    Node*a=arraytoll(test);
    lltraverse(a);
    cout<<"\n"<<lengthofll(a);
    cout << "\n" << searchinll(a, 2);
}