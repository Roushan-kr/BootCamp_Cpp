# include<iostream>
#include<algorithm> // for using sort fn
#include<vector>
#include<list>
#include<queue>
using namespace std;

// using STL for generic programming 
// insteed of charing about data it care how to implement this 
// privide a build in data structure and algoritms


// generic porgramiing
// the dataType is not specified at implemantation of code logic
// run time polymorephism

template <typename T>
T getbigger (T a, T b){
    return (a>b)?a:b;
}

// copmonents of STL
// 1. Iterators  - loop , .start/.begin(), .end(), .size()
// 2. functors - managin state , parametrized - function operators 
// 3. algoritms - search , sort ,etc
// 4. constainers - implementation of data struct (well defined)


// implemtation of well defind ds 
// 1. Sequence type :-  vectors, list ,queue, dequeue 
// 2. Assocative type: - set, multiset, map, multimap(bt), 
// 3. unOrderd Assocative type - set, multiset, map, multimap(hash map)

class Myfloat {
    float F1;
public:
    void getValue(){
        cout<<F1<<endl;
    }
    Myfloat(){
        F1 = 0.8;
    }
    // funcotrs
    void operator()(float f1=0){
        F1+=f1;
        
    }
};
int main(){
cout<<getbigger(1,8);
cout<<getbigger('a','b');
cout<<getbigger(1.9,1.1);

Myfloat f2;
f2.getValue();
// implememt with help of functors
f2(45);
f2.getValue();


// iterators
int num[6]={8,1,5,4,5,6};
// before sort 
for(auto i: num){
    cout<<i<<" ";
} 
// sort(num,num+6); // this might be optmised or not  //STl
// sorting frocefully using heap sort
sort_heap(num, num+6);
// after sort 
for(auto i: num){
    cout<<i<<" ";
} 


// // iterators -2
// float num1[6]={8.5,1.5,5.7,4.7,5.9,6};
// // before sort 
// for(auto i: num1){
//     cout<<i<<" ";
// } 
// // sort(num1,num1+6); // this might be optmised or not 
// // sorting forcefully using heap sort
// sort_heap(num1, num1+6); // STL
// // after sort 
// for(auto i: num1){
//     cout<<i<<" ";
// } 

// searching using bs
if(binary_search(num,num+6,7)){
    cout<<"present";
}

// partening 
vector <int> muInt ={ 1,2,3,4,5,6};
for(int i: muInt){
    cout<<i<<" ";
}
// _Predicate __pred = lambda 

// partition(muInt.begin(),muInt.end(),[](auto a){return a>2;}); //O(n)
stable_partition(begin(muInt),muInt.end(),[](auto a){return a>2;}); //it try to maintain the actual postion
cout<<"\n";
for(int i: muInt){
    cout<<i<<" ";
}

// implementation
vector<int> n;
vector <string> str {"sr1","sr2","sr3"};

for (int i = 0; i < 5; i++)
{
    n.push_back(i);
}

cout<<n.size()<<" "<<n.capacity()<<" "<<n.max_size()<<" "<<n.empty();
for (auto i = n.begin(); i < n.end(); i++)
{
    cout<<*i<<" ";
}

// list triversing is not much optimised // dublylink list 
list<int> myList;
for (int i = 0; i < 5; i++)
{
    myList.push_back(i);
}

cout<<myList.front()<<" "<<myList.back();

myList.pop_back();
myList.pop_front();

// not apoar of algo
myList.reverse();

for(auto i : myList){
    cout<<" "<<i;
}

myList.sort();
for(auto i:myList){
    cout<<"\n"<<i;
}

// queue
queue<int> myQue;

for (int i = 0; i < 5; i++)
{
    myQue.push(i);
}

cout<<myQue.front()<< " "<<myQue.back()<<" "<<myQue.size();
myQue.pop();

// for iteration
while (!myQue.empty())
{
    cout<<myQue.front();
    myQue.pop();
}

// using prority queue
priority_queue<int> myPq;

for (int i = 0; i < 5; i++)
{
    myPq.push(i);
}

while (!myPq.empty())
{
    cout<<"  " <<myPq.top(); // higest prority get first 
    myPq.pop();
}
return 0;
}

