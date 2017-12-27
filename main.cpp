//
//  main.cpp
//  Zoo
//
//  Created by 许梦怡 on 2017/10/24.
//  Copyright © 2017年 许梦怡. All rights reserved.
//

#include <iostream>
#include "Food.h"
#include "SubFood.h"
using namespace std;
const int num=7;
FoodType input[num]={forCattle, forSheep, forChicken, forDuck, forFish, forPig, forDog};
int main()
{
    Food* foods[num][5];
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<5; j++)
        {
            foods[i][j]=Food::find_add_one(input[i]);
        }
    }
    cout<< Food::getCount(forCattle)<<Food::getCount(forSheep)<<Food::getCount(forChicken)<<Food::getCount(forDuck)<<Food::getCount(forFish)<<Food::getCount(forPig)<<Food::getCount(forDog)<<endl;
    delete  foods[0][4];
    Food::find_reduce_one(forCattle);
    cout<< Food::getCount(forCattle)<<Food::getCount(forSheep)<<Food::getCount(forChicken)<<Food::getCount(forDuck)<<Food::getCount(forFish)<<Food::getCount(forPig)<<Food::getCount(forDog)<<endl;
    Food::find_add_one(forPig);
    cout<< Food::getCount(forCattle)<<Food::getCount(forSheep)<<Food::getCount(forChicken)<<Food::getCount(forDuck)<<Food::getCount(forFish)<<Food::getCount(forPig)<<Food::getCount(forDog)<<endl;
    
    return 0;
    
}
