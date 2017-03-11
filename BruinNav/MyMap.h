//
//  MyMap.h
//  BruinNav
//
//  Created by Clark Minor on 3/11/17.
//  Copyright © 2017 Clark Minor. All rights reserved.
//

#ifndef MyMap_h
#define MyMap_h


template <typename KeyType, typename ValueType> class MyMap
{
public:
    MyMap();         // constructor
    ~MyMap();        // destructor; deletes all of the tree's nodes
    void clear();    // deletes all of the trees nodes producing an empty tree
    int size() const;  // return the number of associations in the map
    
    // The associate method associates one item (key) with another (value).
    // If no association currently exists with that key, this method inserts
    // a new association into the tree with that key/value pair.  If there is
    // already an association with that key in the tree, then the item
    // associated with that key is replaced by the second parameter (value).
    // Thus, the tree contains no duplicate keys.
    void associate(const KeyType& key, const ValueType& value);
    
    // If no association exists with the given key, return nullptr; otherwise,
    // return a pointer to the value associated with that key.  This pointer can be
    // used to examine that value, and if the map is allowed to be modified, to
    // modify that value directly within the map (the second overload enables
    // this).  Using a little C++ magic, we have implemented it in terms of the
    // first overload, which you must implement.
    const ValueType* find(const KeyType& key) const;
    
    ValueType* find(const KeyType& key);
    
private:
    //Representation:
    //  a binary search tree that is organized according to the value of arbitrary keys of type KeyType
    //  m_root points to the root node of the tree.
    //  if there are no elements in the tree, m_root == nullptr.
    //  the tree is organized according to the the value of m_key stored in every node, where
    //  KeyType MUST have well-defined behavior for the >, <, and = operators
    //  for every node to the left of the root, node.m_key < root.m_key and
    //  for every node to the right of the root, node.m_key > root.m_key
    
    int m_size;
    int m_height; //unsure if this is really necessary
    struct TreeNode
    {
        KeyType m_key;
        ValueType m_value;
        
        TreeNode* left;
        TreeNode* right;
    };
    
     TreeNode* m_root;
    
    void insertNode();
    void deleteNode();
    
    //void setNode(KeyType key, ValueType value);   //turned out not to be useful
    
    
   
    
};









#endif /* MyMap_h */
