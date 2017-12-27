merge
333333
222222
111111111//
//  Food.h
//  Zoo
//
//  Created by 许梦怡 on 2017/10/24.
//  Copyright © 2017年 许梦怡. All rights reserved.
//
1111111111111111
#ifndef Food_h
#define Food_h
#include <iostream>
using namespace std;
enum FoodType//feed types
{
    forCattle, forSheep, forChicken, forDuck, forFish, forPig, forDog
};
class Food
{
public:
    static Food* find_add_one(FoodType type);//add one feed with a specific type
    static void find_reduce_one(FoodType type);//reduce one feed with a specific type
    static int getCount(FoodType type);//get the count of a feed with a specific  type
    virtual int returnCount()=0;
    virtual ~Food(){cout <<"Feed dtor"<<endl;}
protected:
    virtual FoodType returnType()=0;
    virtual Food* clone()=0;
    virtual void Delete()=0;//change the value of 'count'
    static void addPrototype(Food* feed){prototypes[nextSlot++]=feed;}
private:
    static Food* prototypes[10];//store all the created prototype here
    static int nextSlot;//the next slot's subscript in 'prototype[]'
};
Food* Food:: prototypes[];
int Food:: nextSlot=0;
Food* Food::find_add_one(FoodType type)
{
    for (int i=0; i<nextSlot; i++)
    {
        if (prototypes[i]->returnType()==type)
        {
            return prototypes[i]->clone();
        }
    }
    
    return NULL;
}
void Food:: find_reduce_one(FoodType type)
{
    for (int i=0; i<nextSlot; i++)
    {
        if (prototypes[i]->returnType()==type)
        {
            prototypes[i]->Delete();
        }
    }
}
int Food:: getCount(FoodType type)
{
    for (int i=0; i<nextSlot; i++)
    {
        if (prototypes[i]->returnType()==type)
        {
            return prototypes[i]->returnCount();
        }
    }
    return 0;
}

#endif /* Food_h */
