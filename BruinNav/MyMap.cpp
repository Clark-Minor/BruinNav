//
//  MyMap.cpp
//  BruinNav
//
//  Created by Clark Minor on 3/11/17.
//  Copyright © 2017 Clark Minor. All rights reserved.
//

#include <stdio.h>
#include "MyMap.h"

//===========================================
//TreeNode member function implementation
                                                                     //
/*template <typename KeyType, typename ValueType>                    //
void MyMap<KeyType, ValueType>::setNode(KeyType key, ValueType value)//until proven otherwise,
{                                                                    //this function is useless
    m_key = key;                                                     //
    m_value = value;                                                 //
}*/                                                                  //


//===========================================
//MyMap member function implementations

template <typename KeyType, typename ValueType>
MyMap<KeyType, ValueType>::MyMap()
{
    m_size= 0;
    //m_height= 0;
    m_root= nullptr;
}

template <typename KeyType, typename ValueType>  //finished
MyMap<KeyType, ValueType>::~MyMap()
{
    clear();
}

template <typename KeyType, typename ValueType>
void MyMap<KeyType, ValueType>::clear()
{
    deleteSubTree(this->m_root);
}

template <typename KeyType, typename ValueType>
void MyMap<KeyType, ValueType>::deleteSubtree(Node* n)
{
    if(n == nullptr){
        return;
    }
    deleteSubtree(n->left);
    deleteSubtree(n->right);
    
    delete n;
}

template <typename KeyType, typename ValueType>  //finished
int MyMap<KeyType, ValueType>::size() const
{
    return m_size;
}

template <typename KeyType, typename ValueType>
void MyMap<KeyType, ValueType>::associate(const KeyType& key, const ValueType& value)
{
    if(find(key)!= nullptr)
    {
        (*find(key))= key;
    }
    else
    {
        Node n = new Node();
        n.m_key= key;
        n.m_value= value;
        ///more implementation necessary
        m_size++;
    }
}

template <typename KeyType, typename ValueType>
const ValueType* MyMap<KeyType,ValueType>::find(const KeyType& key) const
{
    
}

template <typename KeyType, typename ValueType>
ValueType* MyMap<KeyType, ValueType>::find(const KeyType& key)
{
    find(key);
}


























