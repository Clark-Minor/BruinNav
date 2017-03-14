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
    clearSubtree(this->m_root);
    m_root= nullptr;
}

template <typename KeyType, typename ValueType>
void MyMap<KeyType, ValueType>::clearSubtree(TreeNode* n)
{
    if(n == nullptr)
    {
        return;
    }
    clearSubtree(n->left);
    clearSubtree(n->right);
    
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
        TreeNode n = new TreeNode();
        n.m_key= key;
        n.m_value= value;
        ///more implementation necessary
        m_size++;
    }
}

template <typename KeyType, typename ValueType>
const ValueType* MyMap<KeyType,ValueType>::find(const KeyType& key) const
{
    //recursive implementation
}

template <typename KeyType, typename ValueType>
typename MyMap<KeyType, ValueType>::TreeNode* MyMap<KeyType,ValueType>::findInSubtree(KeyType key, TreeNode* n) //recursive helper function
{
    
}

template <typename KeyType, typename ValueType>
ValueType* MyMap<KeyType, ValueType>::find(const KeyType& key)
{
    find(key);
}


























