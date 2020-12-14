#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
    std::vector< char > ret_v(people.size());

    std::transform(
       people.begin(), people.end(), ret_v.rbegin(), [](Human& t) 
       { 
         if(t.isMonster())
         {
           return 'n';
         }
         else
         {
           return 'y';
         }
      });

    std::for_each(people.begin(), people.end(), [](Human& t){ t.birthday(); });
    return ret_v;
}
