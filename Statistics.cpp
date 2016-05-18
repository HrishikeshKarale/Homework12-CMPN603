#include "Time.h"
#include <deque>
#include <set>


template< class T >
class Statistics
{

  private:
  /**
     * Selection of deque as container as it
     * 1. access of individual elements by position index
     * 2. supports random access via operator []
     * 3. elements can be efficiently added and removed
     */
  deque<T> time_deque;
  typedef T value_type;

  public:T
  
   /**
    * Calculate the mean (average) of the data entered.
    *
    * @return the mean of the data pushed into our data set
    */
   T mean()
   {
      int counter = 0;
      int seconds = 0;
      for(deque<T>::iterator it=time_deque.begin(); it<=time_deque.end(); it++)
      {
        seconds+=*it;
        counter++;
      }
      seconds=seconds/counter;
      return (new valuetype(seconds));
    }

   /**
   * Calculate the mean (average) of the data entered.
   *
   * @return the mean of the data pushed into our data set
   */
  T mean()
  {
    int counter = 0;
    int seconds = 0;
    for(deque<T>::iterator it=time_deque.begin(); it<=time_deque.end(); it++)
    {
      seconds+=*it;
      counter++;
    }
    seconds=seconds/counter;
    return (new valuetype(seconds));
  }

  /**
   * Calculate the median (middle element when the data is sorted)
   *
   * @return the mode of the data pushed into our data set
   */
  T median()
  {
    int counter=0; 
    deque<T>::iterator it;
    for(it=time_deque.begin(); it<=time_deque.end(); it++)
    {
      counter++;
    }
    time_deque.sort();
    deque<T> ::Iterator iter;
    if(counter%2==0)
    {
      return t.str(new valuetype(*iter));
    }
    else
    {
      return t.str(new valuetype(*(--iter));
    }
  }

  /**
   * Calculate the mode (most common element). 
   *
   * @return a set of the most common elements.  This can be the empty set if
   * there is a uniform distribution
   */
  set<T> mode()
  {
    set<T> mode_value;
    int prev_count= 0;
    int new_count= 0;
    deque<T>::iterator it;
    int prev_value= *(it=time_deque.begin());
    time_deque.sort();
    int k=0;
    
    for(deque<T>::iterator it=time_deque.begin(); it<=time_deque.end(); it++)
    {

      if(*it==prev_value)
      {
        new_count++;
      }
      else
      {
        if(new_count>prev_count)
        {
          Time t(*it);
          mode_value.erase(k);
          prev_value= *it;
          prev_count= new_count;
          new_count= 0;
        }
        else if(new_count==prev_count)
        {
          Time t(*it);
          mode_value.add(t)
          prev_value= *it;
          prev_count= new_count;
          new_count= 0;
          k++;
        }
      }
    }
    
  }

  /**
   * Get the value of the smallest element
   *
   * @return the minimum value of the data pushed in 
   */
  T min()
  {
    deque<T>::iterator it;
    it=time_deque.begin();
    int min=*it;
    for(deque<T>::iterator it=++(time_deque.begin()); it<=time_deque.end(); it++)
    {
      if(*it<min)
        min=*it;
    }
    Time t(min);
    return t.str();
  }

  /**
   * Get the value of the largest element
   *
   * @return the maximum value of the data pushed in 
   */
  T max()
  {
    int max=0;
    for(deque<T>::iterator it=time_deque.begin(); it<=time_deque.end(); it++)
    {
      if(*it>max)
        max=*it;
    }
    Time t(max);
    return (Time)t.str();
  }

   /**
    * Add an element to our data set
    *
    * @param t Element to add to our data
    */
  void push( T t )
  {
    time_deque.insert((t).getSeconds());
  }

   /**
    * Removes all elements from the data
    */
  void clear()
  {
/*  for(deque<T>::iterator it=time_deque.begin(); it<=time_deque.end(); it++)
    {
      it*=0;
    }
*/}
    
};
