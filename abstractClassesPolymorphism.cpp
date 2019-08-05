#include <iostream>

#include <vector>

#include <map>

#include <string>

#include <algorithm>

#include <set>

#include <cassert>

using namespace std;

struct Node {
   Node * next;
   Node * prev;
   int value;
   int key;
   Node(Node * p, Node * n, int k, int val): prev(p), next(n), key(k), value(val) {};
   Node(int k, int val): prev(NULL), next(NULL), key(k), value(val) {};
};

class Cache {

   protected:
      map < int, Node * > mp; //map the key to the node in the linked list
   int cp; //capacity
   Node * tail; // double linked list tail pointer
   Node * head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};




/* Paste this portion only!!!! */

class LRUCache: public Cache {
   int currentItems;
   public:
      LRUCache(int capacity) {
         currentItems = 0;
         cp = capacity;
         head = NULL;
         tail = NULL;
      }
   void set(int key, int value) {
      Node *newNode = new Node(key, value);
      //cout<<newNode->key<<" "<<newNode->value<<endl;
      if (currentItems < cp) {
         if (head == NULL && tail == NULL) {
            head = tail = newNode;
            //cout<<"Head and tail assigned addresses"<<endl;
            mp.insert(make_pair(key, head));
         }

         else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev = newNode;
            head = newNode;
            mp.insert(make_pair(key, head));
         }
         currentItems++;
      }

      else {
         Node* temp = tail;
         tail = tail->prev;
         tail->next = NULL;
         newNode->next = head;
         newNode->prev = head->prev;
         head->prev = newNode;
         head = newNode;
         // map <int, Node*>:: iterator it = mp.find(temp->key);
         // if(it!=mp.end()) {
         // it = mp.erase(it);
         // }
         mp.erase(temp->key);
         delete temp;
         mp.insert(make_pair(key, head));
      }
   }

   int get(int key) {
      map <int, Node*> :: iterator itr = mp.find(key);
      if(itr != mp.end()) {
         Node* temp = itr->second;
         //cout<<itr->first<<endl;
         //cout<<itr->second<<endl;
         //cout<<(*temp).value<<endl;
         return temp->value;
      }
      else {
         //cout<<"-1"<<endl;
         return -1;
      }
   }
};


/* Copiable portion ends here!!! */



int main() {
   int n, capacity, i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for (i = 0; i < n; i++) {
      string command;
      cin >> command;
      if (command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } else if (command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key, value);
      }
   }
   return 0;
}
