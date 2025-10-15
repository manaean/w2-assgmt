#include <iostream>

using namespace std;

struct Node{
    int value;
    Node* next;
};

class LinkedList{
    // properties = variables
    private:
    string name;

    // costructor = special method
    public: 
    LinkedList(){

    }

    //method = functions 
    string getName(){

    }

    void setName(string name){
        this->name = name;
    }

    void sayHello(LinkedList &other){
        cout<<"Hi!"<<other.getName()<<endl;
    }
};