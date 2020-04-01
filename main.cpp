#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <chrono> 
#include <typeinfo>

using namespace std;
using namespace std::chrono; 


BST insertToBst(string filepath, BST bst ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        bst.put(a,a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to insert to BST: "
         << duration.count() << " microseconds" << endl; 
    cout << "BST height is :  ";
    cout << bst.height();
    cout << '\n';
    return bst;
}

SplayTree insertToSplayTree(string filepath, SplayTree splaytree ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        splaytree.put(a,a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to insert to SplayTree: "
         << duration.count() << " microseconds" << endl; 
    cout << "SplayTree height is :  ";
    cout << splaytree.height();
    cout << '\n';
    return splaytree;
}

RBTree insertToRBTree(string filepath, RBTree rbTree ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        rbTree.put(a,a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to insert to RBTree: "
         << duration.count() << " microseconds" << endl; 
    cout << "RBTree height is :  ";
    cout << rbTree.height();
    cout << '\n';
    return rbTree;
}

BST SearchBst(string filepath, BST bst ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        bst.contains(a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to search in BST: "
         << duration.count() << " microseconds" << endl; 
    cout << "BST height is :  ";
    cout << bst.height();
    cout << '\n';
    return bst;
}

SplayTree SearchSplayTree(string filepath, SplayTree splaytree ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        splaytree.contains(a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to search in SplayTree: "
         << duration.count() << " microseconds" << endl; 
    cout << "SplayTree height is :  ";
    cout << splaytree.height();
    cout << '\n';
    return splaytree;
}

RBTree SearchRBTree(string filepath, RBTree rbTree ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        rbTree.contains(a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to search in RBTree: "
         << duration.count() << " microseconds" << endl; 
    cout << "RBTree height is :  ";
    cout << rbTree.height();
    cout << '\n';
    return rbTree;
}

BST DeleteFromBst(string filepath, BST bst ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        bst.del(a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to delete from BST: "
         << duration.count() << " microseconds" << endl; 
    cout << "BST height is :  ";
    cout << bst.height();
    cout << '\n';
    return bst;
}

SplayTree DeleteFromSplayTree(string filepath, SplayTree splaytree ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        splaytree.del(a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to delete from SplayTree: "
         << duration.count() << " microseconds" << endl; 
    cout << "SplayTree height is :  ";
    cout << splaytree.height();
    cout << '\n';
    return splaytree;
}

RBTree DeleteFromRBTree(string filepath, RBTree rbTree ){
    std::fstream myfile(filepath, std::ios_base::in);
    int a; 
    auto start = high_resolution_clock::now(); 
    while (myfile >> a)
    {
        rbTree.del(a);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken to delete from RBTress: "
         << duration.count() << " microseconds" << endl; 
    cout << "RBTree height is :  ";
    cout << rbTree.height();
    cout << '\n';
    return rbTree;
}



int main() {
    BST bst;
    SplayTree splaytree;
    RBTree rbtree;
    
    // Insert
    cout << "Insert Operation \n";
    bst = insertToBst("data\\data_2.txt",bst);
    splaytree = insertToSplayTree("data\\data_2.txt",splaytree);
    rbtree = insertToRBTree("data\\data_2.txt",rbtree);

    //Search
    // cout << "Search Operation \n";
    // bst = SearchBst("data\\search_data.txt",bst);
    // splaytree = SearchSplayTree("data\\search_data.txt",splaytree);
    // rbtree = SearchRBTree("data\\search_data.txt",rbtree);

    //Delete
    cout << "Delete Operation \n";
    bst = DeleteFromBst("data\\delete_data.txt",bst);
    splaytree = DeleteFromSplayTree("data\\delete_data.txt",splaytree);
    rbtree = DeleteFromRBTree("data\\delete_data.txt",rbtree);

    return 0;
}
