//
//  SubFood.h
//  Zoo
//
//  Created by 许梦怡 on 2017/10/24.
//  Copyright © 2017年 许梦怡. All rights reserved.
//

#ifndef SubFood_h
#define SubFood_h
#include <iostream>
using namespace std;
#include "Food.h"
//forCattle
class FoodforCattle: public Food
{
public:
    FoodType returnType(){return forCattle;}
    Food* clone(){return new  FoodforCattle(1);}
    ~FoodforCattle(){cout<<"FoodforCattle dctor ";}
    int returnCount(){return count;}
    void Delete(){count--;}
protected:
    FoodforCattle(int temp){count++;}
private:
    static FoodforCattle foodforCattle;
    FoodforCattle(){addPrototype(this);}
    static int  count;
};
FoodforCattle FoodforCattle:: foodforCattle;
int FoodforCattle:: count=0;
//forChicken
class FoodforChicken: public Food
{
public:
    FoodType returnType(){return forChicken;}
    Food* clone(){return new  FoodforChicken(1);}
    ~FoodforChicken(){cout<<"FoodforChicken dctor ";}
    int returnCount(){return count;}
    void Delete(){count--;}
protected:
    FoodforChicken(int temp){count++;}
private:
    static FoodforChicken foodforChicken;
    FoodforChicken(){addPrototype(this);}
    static int  count;
};
FoodforChicken FoodforChicken:: foodforChicken;
int FoodforChicken:: count=0;
//forDog
class FoodforDog: public Food
{
public:
    FoodType returnType(){return forDog;}
    Food* clone(){return new  FoodforDog(1);}
    ~FoodforDog(){cout<<"FoodforDog dtor "<<endl;}
    int returnCount(){return count;}
    void Delete(){count--;}
protected:
    FoodforDog(int temp){count++;}
private:
    static FoodforDog foodforDog;
    FoodforDog(){addPrototype(this);}
    static int  count;
};
FoodforDog FoodforDog:: foodforDog;
int FoodforDog:: count=0;
//forDuck
class FoodforDuck: public Food
{
public:
    FoodType returnType(){return forDuck;}
    Food* clone(){return new  FoodforDuck(1);}
    ~FoodforDuck(){cout<<"FoodforDuck dtor "<<endl;}
    int returnCount(){return count;}
    void Delete(){count--;}
protected:
    FoodforDuck(int temp){count++;}
private:
    static FoodforDuck foodforDuck;
    FoodforDuck(){addPrototype(this);}
    static int  count;
};
FoodforDuck FoodforDuck:: foodforDuck;
int FoodforDuck:: count=0;
//forFish
class FoodforFish: public Food
{
public:
    FoodType returnType(){return forFish;}
    Food* clone(){return new  FoodforFish(1);}
    ~FoodforFish(){cout<<"FoodforFish dtor "<<endl;}
    int returnCount(){return count;}
    void Delete(){count--;}
protected:
    FoodforFish(int temp){count++;}
private:
    static FoodforFish foodforFish;
    FoodforFish(){addPrototype(this);}
    static int  count;
};
FoodforFish FoodforFish:: foodforFish;
int FoodforFish:: count=0;
//forPig
class FoodforPig: public Food
{
public:
    FoodType returnType(){return forPig;}
    Food* clone(){return new  FoodforPig(1);}
    ~FoodforPig(){cout<<"FoodforPig dtor "<<endl;}
    int returnCount(){return count;}
    void Delete(){count--;}
protected:
    FoodforPig(int temp){count++;}
private:
    static FoodforPig foodforPig;
    FoodforPig(){addPrototype(this);}
    static int  count;
};
FoodforPig FoodforPig:: foodforPig;
int FoodforPig:: count=0;
//forSheep
class FoodforSheep: public Food
{
public:
    FoodType returnType(){return forSheep;}
    Food* clone(){return new  FoodforSheep(1);}
    ~FoodforSheep(){cout<<"FoodforSheep dctor "<<endl;}
    int returnCount(){return count;}
    void Delete(){count--;}
protected:
    FoodforSheep(int temp){count++;}
private:
    static FoodforSheep foodforSheep;
    FoodforSheep(){addPrototype(this);}
    static int  count;
};
FoodforSheep FoodforSheep:: foodforSheep;
int FoodforSheep:: count=0;


#endif /* SubFood_h */
